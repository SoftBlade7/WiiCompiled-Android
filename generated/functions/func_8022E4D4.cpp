#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022E4D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8022E58C_loc_0 = 0;
    uint32_t addr_stfsx_8022E5CC_loc_0 = 0;
    uint32_t addr_stfsx_8022E600_loc_0 = 0;
    uint32_t addr_stfsx_8022E620_loc_0 = 0;
    uint32_t addr_stfsx_8022E644_loc_0 = 0;
    uint32_t addr_stfsx_8022E654_loc_0 = 0;
    uint32_t addr_stfsx_8022E664_loc_0 = 0;
    uint32_t addr_stfsx_8022E674_loc_0 = 0;
    uint32_t addr_stfsx_8022E6AC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r11_addr_5 = 0;
    uint32_t r11_addr_6 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8022E4D4;

loc_8022E4D4:
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
    r0 = MemoryInline::FlatRead8((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022E4F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022E6C4;
    }
}

loc_8022E4F4:
{
    r8 = MemoryInline::FlatRead16((r4 + 16));
    r6 = MemoryInline::FlatRead32((r4 + 56));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 46), 0, 34u, true, false);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 46));
    r5 = MemoryInline::FlatRead8((r4 + 52));
    r0 = (r6 & -65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r7));
}

loc_8022E50C:
{
    MemoryInline::FlatWrite32((r3 + 68), r5);
    MemoryInline::FlatWrite16((r3 + 62), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 60), static_cast<uint16_t>(r6));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022E520;
    }
}

loc_8022E51C:
{
    r8 = r7;
}

loc_8022E520:
{
    r8 = (r8 & 65535);
    r9 = (r4 + 60);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8022E52C:
{
    r10 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8022E6C4;
    }
}

loc_8022E534:
{
}

loc_8022E538:
{
    r5 = (r8 + -8);
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(8))) {
        goto loc_8022E684;
    }
}

loc_8022E540:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8022E55C;
    }
}

loc_8022E548:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8022E554:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r0))) {
        goto loc_8022E55C;
    }
}

loc_8022E558:
{
    r6 = 1;
}

loc_8022E55C:
{
}

loc_8022E560:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8022E684;
    }
}

loc_8022E564:
{
    r0 = (r5 + 7);
    r4 = r9;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8022E578:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8022E684;
    }
}

loc_8022E57C:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    r11 = (r10 + 3);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r31 = (r31_rot_2 & 262140);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 61u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    addr_stfsx_8022E58C_loc_0 = (r5 + r31);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E58C_loc_0, f0.d);
    r12 = (r10 + 2);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r28 = (r28_rot_2 & 262140);
    r0 = (r10 + 4);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r5 = (r10 + 5);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r4 + 4));
    r6 = (r10 + 6);
    r7_addr_2 = (r7 + r31);
    MemoryInline::FlatWrite32(r7_addr_2, r30);
    r29 = (r10 + 1);
    r7 = (r10 + 7);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    r30 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r31 = (r31_rot_3 & 262140);
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r27 = (r27_rot_2 & 262140);
    r29 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r4 + 12));
    addr_stfsx_8022E5CC_loc_0 = (r30 + r31);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E5CC_loc_0, f0.d);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 262140);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 262140);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 262140);
    r12 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r4 + 20));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & 262140);
    r11_addr_2 = (r11 + r31);
    MemoryInline::FlatWrite32(r11_addr_2, r29);
    r10 = (r10 + 8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 24));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    r31 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r4 + 28));
    addr_stfsx_8022E600_loc_0 = (r11 + r28);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E600_loc_0, f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r4 + 32));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 36u, (r4 + 36));
    r11_addr_3 = (r11 + r28);
    MemoryInline::FlatWrite32(r11_addr_3, r12);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r4 + 40));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 44u, (r4 + 44));
    addr_stfsx_8022E620_loc_0 = (r11 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E620_loc_0, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r4 + 48));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 52u, (r4 + 52));
    r11_addr_4 = (r11 + r27);
    MemoryInline::FlatWrite32(r11_addr_4, r31);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r4 + 56));
    r31 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 60u, (r4 + 60));
    r4 = (r4 + 64);
    addr_stfsx_8022E644_loc_0 = (r31 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E644_loc_0, f3.d);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r31_addr_2 = (r31 + r0);
    MemoryInline::FlatWrite32(r31_addr_2, r29);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    addr_stfsx_8022E654_loc_0 = (r31 + r5);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E654_loc_0, f2.d);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r31_addr_3 = (r31 + r5);
    MemoryInline::FlatWrite32(r31_addr_3, r30);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    addr_stfsx_8022E664_loc_0 = (r5 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E664_loc_0, f1.d);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r5_addr_2 = (r5 + r6);
    MemoryInline::FlatWrite32(r5_addr_2, r12);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    addr_stfsx_8022E674_loc_0 = (r5 + r7);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E674_loc_0, f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r5_addr_3 = (r5 + r7);
    MemoryInline::FlatWrite32(r5_addr_3, r11);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022E57C;
    }
}

loc_8022E684:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r0 = (r8 - r10);
    r5 = (r9 + r4);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r8));
}

loc_8022E698:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022E6C4;
    }
}

loc_8022E69C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r3 + 72));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r6 = (r6_rot_5 & 262140);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    r10 = (r10 + 1);
    addr_stfsx_8022E6AC_loc_0 = (r4 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022E6AC_loc_0, f0.d);
    r0 = MemoryInline::FlatRead8((r5 + 4));
    r5 = (r5 + 8);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r3 + 76));
    r4_addr_2 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_2, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022E69C;
    }
}

loc_8022E6C4:
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
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8001FFB gpr_write=0xF8001FF3 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022E4D4 func_8022E4D4 preserves=true fpr_mask=0x00000000
