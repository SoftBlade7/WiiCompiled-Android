#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A56A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_10 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r29_addr_8 = 0;
    uint32_t r29_addr_9 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_10 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r30_addr_8 = 0;
    uint32_t r30_addr_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_11 = 0;
    uint32_t r6_addr_12 = 0;
    uint32_t r6_addr_13 = 0;
    uint32_t r6_addr_14 = 0;
    uint32_t r6_addr_15 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800A56A0;

loc_800A56A0:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-96 - r11_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-96) >= static_cast<uint32_t>(r11_subfic_ra_0) ? 1u : 0u) << 29);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    MemoryInline::FlatWriteRam32((r12 + -4), r31);
    r31 = r7;
    MemoryInline::FlatWriteRam32((r12 + -8), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r12 + -12), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r12 + -16), r28);
    r28 = r3;
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (0 - r8);
    r0 = (r0 | r8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A56E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A56F4;
    }
}

loc_800A56EC:
{
    r3 = 0;
    goto loc_800A5830;
}

loc_800A56F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A5700;
    }
}

loc_800A56F8:
{
    r4 = MemoryInline::FlatRead32((r8 + 24));
    goto loc_800A5704;
}

loc_800A5700:
{
    r4 = 0;
}

loc_800A5704:
{
    r0 = (r6 * r7);
    r3 = MemoryInline::FlatRead32(r3);
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 68));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    ctr = r12;
    ctx->lr = 0x800A572Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32(r28);
    r4 = (r1 + 32);
    r5 = 32;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800A5748u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(32));
}

loc_800A574C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A5758;
    }
}

loc_800A5750:
{
    r3 = 0;
    goto loc_800A5830;
}

loc_800A5758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800A575C:
{
    r6 = (r1 + 32);
    r3 = 0;
    r4 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800A582C;
    }
}

loc_800A576C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1073741823);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A5770:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A5804;
    }
}

loc_800A5778:
{
    r6_addr_2 = (r6 + r3);
    r5 = MemoryInline::FlatRead16(r6_addr_2);
    r0 = (r4 + 1);
    r29_addr_2 = (r29 + r4);
    MemoryInline::FlatWrite16(r29_addr_2, static_cast<uint16_t>(r5));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r3 + 4);
    r6_addr_3 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_3);
    r30_addr_2 = (r30 + r4);
    MemoryInline::FlatWrite16(r30_addr_2, static_cast<uint16_t>(r0));
    r0 = (r4 + 3);
    r4 = (r4 + 2);
    r6_addr_4 = (r6 + r3);
    r5 = MemoryInline::FlatRead16(r6_addr_4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r29_addr_3 = (r29 + r4);
    MemoryInline::FlatWrite16(r29_addr_3, static_cast<uint16_t>(r5));
    r3 = (r3 + 4);
    r6_addr_5 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_5);
    r30_addr_3 = (r30 + r4);
    MemoryInline::FlatWrite16(r30_addr_3, static_cast<uint16_t>(r0));
    r0 = (r4 + 3);
    r4 = (r4 + 2);
    r6_addr_6 = (r6 + r3);
    r5 = MemoryInline::FlatRead16(r6_addr_6);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r29_addr_4 = (r29 + r4);
    MemoryInline::FlatWrite16(r29_addr_4, static_cast<uint16_t>(r5));
    r3 = (r3 + 4);
    r6_addr_7 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_7);
    r30_addr_4 = (r30 + r4);
    MemoryInline::FlatWrite16(r30_addr_4, static_cast<uint16_t>(r0));
    r0 = (r4 + 3);
    r4 = (r4 + 2);
    r6_addr_8 = (r6 + r3);
    r5 = MemoryInline::FlatRead16(r6_addr_8);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r29_addr_5 = (r29 + r4);
    MemoryInline::FlatWrite16(r29_addr_5, static_cast<uint16_t>(r5));
    r3 = (r3 + 4);
    r6_addr_9 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_9);
    r30_addr_5 = (r30 + r4);
    MemoryInline::FlatWrite16(r30_addr_5, static_cast<uint16_t>(r0));
    r4 = (r4 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A5778;
    }
}

loc_800A57FC:
{
    r31 = (r31 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800A5800:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A582C;
    }
}

loc_800A5804:
{
    ctr = r31;
}

loc_800A5808:
{
    r6_addr_12 = (r6 + r3);
    r5 = MemoryInline::FlatRead16(r6_addr_12);
    r0 = (r4 + 1);
    r29_addr_8 = (r29 + r4);
    MemoryInline::FlatWrite16(r29_addr_8, static_cast<uint16_t>(r5));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r3 + 4);
    r6_addr_13 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_13);
    r30_addr_8 = (r30 + r4);
    MemoryInline::FlatWrite16(r30_addr_8, static_cast<uint16_t>(r0));
    r4 = (r4 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A5808;
    }
}

loc_800A582C:
{
    r3 = 1;
}

loc_800A5830:
{
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r31 = MemoryInline::FlatRead32((r10 + -4));
    r30 = MemoryInline::FlatRead32((r10 + -8));
    r29 = MemoryInline::FlatRead32((r10 + -12));
    r28 = MemoryInline::FlatRead32((r10 + -16));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A56A0 func_800A56A0 preserves=true fpr_mask=0x00000000
