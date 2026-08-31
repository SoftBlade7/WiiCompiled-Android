#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C75F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C75F0;

loc_800C75F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C7608:
{
    r27 = r3;
    r28 = r4;
    r30 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7620;
    }
}

loc_800C7618:
{
    r3 = 0;
    goto loc_800C76B0;
}

loc_800C7620:
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

loc_800C7628:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7634;
    }
}

loc_800C762C:
{
    r3 = 0;
    goto loc_800C76B0;
}

loc_800C7634:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl2_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl2_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800BC3F4;
    }
}

loc_inl2_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl2_cont_800BC3E0;
}

loc_inl2_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl2_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C763C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7648;
    }
}

loc_800C7640:
{
    r3 = 0;
    goto loc_800C76B0;
}

loc_800C7648:
{
    r3 = MemoryInline::FlatRead32(r3);
    r31 = 0;
    r29 = (r3 + 4);
}

loc_800C7654:
{
    r3 = (r31 & 65535);
    ctx->lr = 0x800C765Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C6AF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C7660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C768C;
    }
}

loc_800C7664:
{
    r0 = (r31 & 65535);
    r4 = r27;
    r0 = (r0 * 74);
    r3 = (r29 + r0);
    r3 = (r3 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C72F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_800C7680:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C768C;
    }
}

loc_800C7684:
{
    r30 = 1;
    goto loc_800C7698;
}

loc_800C768C:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(99));
}

loc_800C7694:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800C7654;
    }
}

loc_800C7698:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_800C769C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C76AC;
    }
}

loc_800C76A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_800C76A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C76AC;
    }
}

loc_800C76A8:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r31));
}

loc_800C76AC:
{
    r3 = r30;
}

loc_800C76B0:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800203B gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C75F0 func_800C75F0 preserves=true fpr_mask=0x00000000
