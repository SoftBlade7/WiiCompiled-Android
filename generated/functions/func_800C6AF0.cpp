#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C6AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C6AF0;

loc_800C6AF0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(100));
}

loc_800C6AFC:
{
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    r29 = r3;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C6B1C;
    }
}

loc_800C6B14:
{
    r3 = 0;
    goto loc_800C6C40;
}

loc_800C6B1C:
{
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BC370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6B24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C6B30;
    }
}

loc_800C6B28:
{
    r3 = 0;
    goto loc_800C6C40;
}

loc_800C6B30:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl1_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC3F4;
    }
}

loc_inl1_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl1_cont_800BC3E0;
}

loc_inl1_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl1_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6B38:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C6B90;
    }
}

loc_800C6B40:
{
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800BC370
}

loc_800C6B48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C6B54;
    }
}

loc_800C6B4C:
{
    r30 = 0;
    goto loc_800C6B88;
}

loc_800C6B54:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl3_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl3_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800BC3F4;
    }
}

loc_inl3_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl3_cont_800BC3E0;
}

loc_inl3_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl3_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
}

loc_800C6B5C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C6B68;
    }
}

loc_800C6B60:
{
    r30 = 0;
    goto loc_800C6B88;
}

loc_800C6B68:
{
    r30 = 0;
    // inline leaf 0x800BC6C0 (8 guest instruction(s))
}

loc_inl4_0x800BC6C0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r4 = (r13 + -26976);
}

loc_inl4_0x800BC6CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x800BC6D4;
    }
}

loc_inl4_0x800BC6D0:
{
    r4 = (r3 + 6972);
}

loc_inl4_0x800BC6D4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_3 & 1);
}

loc_inl4_cont_800BC6C0:
{
    // end of inlined leaf 0x800BC6C0
}

loc_800C6B74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C6B88;
    }
}

loc_800C6B78:
{
    // inline leaf 0x800BC6A0 (8 guest instruction(s))
}

loc_inl5_0x800BC6A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r4 = (r13 + -26976);
}

loc_inl5_0x800BC6AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x800BC6B4;
    }
}

loc_inl5_0x800BC6B0:
{
    r4 = (r3 + 6972);
}

loc_inl5_0x800BC6B4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r3 = (r0 & 1);
}

loc_inl5_cont_800BC6A0:
{
    // end of inlined leaf 0x800BC6A0
}

loc_800C6B80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C6B88;
    }
}

loc_800C6B84:
{
    r30 = 1;
}

loc_800C6B88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800C6B8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C6B98;
    }
}

loc_800C6B90:
{
    r3 = 0;
    goto loc_800C6C40;
}

loc_800C6B98:
{
    r0 = (r29 * 74);
    r3 = MemoryInline::FlatRead32(r31);
    r3 = (r3 + r0);
    r30 = (r3 + 4);
    r4 = (r30 + 24);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(24)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_800C6BAC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C6BB8;
    }
}

loc_800C6BB0:
{
    r3 = 0;
    goto loc_800C6BD8;
}

loc_800C6BB8:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = 0;
}

loc_800C6BC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C6BD4;
    }
}

loc_800C6BC8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800C6BD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6BD8;
    }
}

loc_800C6BD4:
{
    r3 = 1;
}

loc_800C6BD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6BDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C6BE8;
    }
}

loc_800C6BE0:
{
    r3 = 0;
    goto loc_800C6C40;
}

loc_800C6BE8:
{
    r3 = r30;
    r4 = (r1 + 8);
    ctx->lr = 0x800C6BF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C6C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 54);
    r4 = (r30 + 54);
    r5 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    ctx->lr = 0x800C6C14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA8C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6C18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C6C24;
    }
}

loc_800C6C1C:
{
    r3 = 0;
    goto loc_800C6C40;
}

loc_800C6C24:
{
    r3 = (r1 + 8);
    ctx->lr = 0x800C6C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CAD30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6C30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C6C3C;
    }
}

loc_800C6C34:
{
    r3 = r30;
    goto loc_800C6C40;
}

loc_800C6C3C:
{
    r3 = 0;
}

loc_800C6C40:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800203B gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C6AF0 func_800C6AF0 preserves=true fpr_mask=0x00000000
