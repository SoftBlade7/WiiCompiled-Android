#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C8E90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C8E90;

loc_800C8E90:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = 1;
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 96), r28);
    goto loc_800C8F84;
}

loc_800C8EB8:
{
    r0 = MemoryInline::FlatRead16((r29 + 16));
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_2 & -64);
    r5_addr_2 = (r5 + r0);
    r30 = MemoryInline::FlatRead32(r5_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800C8ECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C8F80;
    }
}

loc_800C8ED0:
{
    r3 = MemoryInline::FlatRead16((r29 + 14));
    r0 = (r30 + -1);
    r4 = (r0 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_3 & -64);
    r3 = (r5 + r0);
    ctx->lr = 0x800C8EE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C5680u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r29 + 14));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_4 & -64);
    r28 = (r3 + r0);
    r3 = (r28 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7490u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C8F04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8F10;
    }
}

loc_800C8F08:
{
    r0 = 0;
    goto loc_800C8F30;
}

loc_800C8F10:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x800C8F1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C6E70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->lr = 0x800C8F24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CA8C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
}

loc_800C8F30:
{
}

loc_800C8F34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C8F44;
    }
}

loc_800C8F38:
{
    r3 = MemoryInline::FlatRead16((r29 + 14));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r0));
}

loc_800C8F44:
{
    r3 = MemoryInline::FlatRead16((r29 + 16));
}

loc_800C8F4C:
{
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 16), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800C8F78;
    }
}

loc_800C8F58:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r3 = (r3 & 65535);
}

loc_800C8F64:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_800C8F78;
    }
}

loc_800C8F68:
{
}

loc_800C8F6C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(10000))) {
        goto loc_800C8F84;
    }
}

loc_800C8F70:
{
    r31 = 0;
    goto loc_800C8F84;
}

loc_800C8F78:
{
    r31 = 0;
    goto loc_800C8F84;
}

loc_800C8F80:
{
    r31 = 0;
}

loc_800C8F84:
{
}

loc_800C8F88:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800C8EB8;
    }
}

loc_800C8F8C:
{
    r3 = MemoryInline::FlatRead16((r29 + 14));
    r30 = 0;
    r0 = MemoryInline::FlatRead16((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800C8F9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800C8FA4;
    }
}

loc_800C8FA0:
{
    r30 = 10;
}

loc_800C8FA4:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r30);
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800207B gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C8E90 func_800C8E90 preserves=true fpr_mask=0x00000000
