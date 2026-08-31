#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B40B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfdx_801B42EC_loc_0 = 0;
    uint32_t addr_lfsx_801B42F4_loc_0 = 0;
    uint32_t addr_lfsx_801B42FC_loc_0 = 0;
    uint32_t addr_lfsx_801B430C_loc_0 = 0;
    uint32_t addr_lfsx_801B4330_loc_0 = 0;
    uint32_t addr_lfsx_801B4340_loc_0 = 0;
    uint32_t addr_lfsx_801B4360_loc_0 = 0;
    uint32_t addr_lfsx_801B4374_loc_0 = 0;
    uint32_t addr_lfsx_801B439C_loc_0 = 0;
    uint32_t addr_stfsx_801B4238_loc_0 = 0;
    uint32_t addr_stfsx_801B4284_loc_0 = 0;
    uint32_t addr_stfsx_801B4290_loc_0 = 0;
    uint32_t addr_stfsx_801B42A8_loc_0 = 0;
    uint32_t addr_stfsx_801B42B0_loc_0 = 0;
    uint32_t addr_stfsx_801B42C0_loc_0 = 0;
    uint32_t addr_stfsx_801B42C8_loc_0 = 0;
    uint32_t addr_stfsx_801B42CC_loc_0 = 0;
    uint32_t addr_stfsx_801B434C_loc_0 = 0;
    uint32_t addr_stfsx_801B437C_loc_0 = 0;
    uint32_t addr_stfsx_801B43A8_loc_0 = 0;
    uint32_t addr_stfsx_801B43D0_loc_0 = 0;
    uint32_t addr_stfsx_801B43E8_loc_0 = 0;
    uint32_t addr_stfsx_801B43FC_loc_0 = 0;
    uint32_t addr_stfsx_801B4404_loc_0 = 0;
    uint32_t addr_stfsx_801B440C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B40B4;

loc_801B40B4:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 320);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    guest_range_1 = MemoryInline::ResolveRangeHost((r13 + -25084), 0, 4u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r4 = 0x80250000u;
    r3 = (r4 + 11920);
    r10 = 1127219200;
    r6 = MemoryInline::FlatRead32((r8 + 1692));
    r9 = 0x80250000u;
    MemoryInline::FlatWriteRam32((r1 + 264), r10);
    r9 = (r9 + 11840);
    r0 = MemoryInline::FlatRead8(r6);
    r5 = (r6 + 2);
    r6 = MemoryInline::FlatRead8((r6 + 1));
    r7 = (r1 + 8);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6_mrot_0 = (r6_rot_0 & 65280);
    r6_mdest_0 = (r6 & -65281);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWriteRam32((r1 + 272), r10);
    r0 = (r6 + -2);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26216));
    MemoryInline::FlatWrite32((r8 + 1692), r5);
    r11 = (r0 & 65535);
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 11920), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r4 + 11920));
    r29 = 8;
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 8u, (r3 + 8));
    r30 = 8;
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r3 + 16));
    f13.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 24u, (r3 + 24));
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r3 + 32));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 40u, (r3 + 40));
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r3 + 48));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 56u, (r3 + 56));
}

loc_801B4148:
{
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r31 = 0;
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 1692), r0);
    r12 = MemoryInline::FlatRead8(r4);
    ctr = r30;
}

loc_801B4164:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r0 = (r31 & 65535);
    r10 = (r9 + r0);
    r9_addr_3 = (r9 + r0);
    r0 = MemoryInline::FlatRead8(r9_addr_3);
    r23 = MemoryInline::FlatRead32((r6 + 1692));
    r31 = (r31 + 8);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & -4);
    r27 = MemoryInline::FlatRead8((r10 + 6));
    r5 = (r23 + 1);
    r4 = MemoryInline::FlatRead8((r10 + 1));
    MemoryInline::FlatWrite32((r6 + 1692), r5);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_3 & -4);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & -4);
    r0 = MemoryInline::FlatRead8((r10 + 2));
    r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r4 = MemoryInline::FlatRead8(r23);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r23 = MemoryInline::FlatRead32((r24 + 1692));
    MemoryInline::FlatWriteRam32((r1 + 268), r4);
    r4 = (r23 + 1);
    r0 = MemoryInline::FlatRead8((r10 + 3));
    MemoryInline::FlatWrite32((r24 + 1692), r4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 264));
    r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r0 = MemoryInline::FlatRead8(r23);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r24 = MemoryInline::FlatRead32((r25 + 1692));
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r23 = (r24 + 1);
    r0 = MemoryInline::FlatRead8((r10 + 4));
    MemoryInline::FlatWrite32((r25 + 1692), r23);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 272));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r26 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r23 = MemoryInline::FlatRead8(r24);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r24 = MemoryInline::FlatRead32((r26 + 1692));
    MemoryInline::FlatWriteRam32((r1 + 268), r23);
    r23 = (r24 + 1);
    r25 = MemoryInline::FlatRead8((r10 + 5));
    MemoryInline::FlatWrite32((r26 + 1692), r23);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 264));
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r25 = (r25_rot_3 & -4);
    r26 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r23 = MemoryInline::FlatRead8(r24);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r24 = MemoryInline::FlatRead32((r26 + 1692));
    MemoryInline::FlatWriteRam32((r1 + 276), r23);
    r23 = (r24 + 1);
    MemoryInline::FlatWrite32((r26 + 1692), r23);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 272));
    r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    addr_stfsx_801B4238_loc_0 = (r7 + r8);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B4238_loc_0, f8.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r26 = MemoryInline::FlatRead32((r28 + 1692));
    r23 = MemoryInline::FlatRead8(r24);
    r24 = (r26 + 1);
    r8 = MemoryInline::FlatRead8((r10 + 7));
    MemoryInline::FlatWrite32((r28 + 1692), r24);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_4 & -4);
    r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r24 = MemoryInline::FlatRead8(r26);
    r26 = MemoryInline::FlatRead32((r28 + 1692));
    MemoryInline::FlatWriteRam32((r1 + 268), r23);
    r10 = (r26 + 1);
    MemoryInline::FlatWrite32((r28 + 1692), r10);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 264));
    r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r26 = MemoryInline::FlatRead8(r26);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r10 = MemoryInline::FlatRead32((r28 + 1692));
    addr_stfsx_801B4284_loc_0 = (r7 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B4284_loc_0, f10.d);
    r6 = (r10 + 1);
    MemoryInline::FlatWriteRam32((r1 + 276), r24);
    addr_stfsx_801B4290_loc_0 = (r7 + r5);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B4290_loc_0, f7.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 272));
    MemoryInline::FlatWrite32((r28 + 1692), r6);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r5 = MemoryInline::FlatRead8(r10);
    MemoryInline::FlatWriteRam32((r1 + 268), r26);
    addr_stfsx_801B42A8_loc_0 = (r7 + r4);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B42A8_loc_0, f5.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 264));
    addr_stfsx_801B42B0_loc_0 = (r7 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B42B0_loc_0, f8.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 276), r5);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 272));
    addr_stfsx_801B42C0_loc_0 = (r7 + r25);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B42C0_loc_0, f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    addr_stfsx_801B42C8_loc_0 = (r7 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B42C8_loc_0, f5.d);
    addr_stfsx_801B42CC_loc_0 = (r7 + r8);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B42CC_loc_0, f2.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B4164;
    }
}

loc_801B42D4:
{
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r23 = (r23_rot_2 & 16776960);
    r4 = 0;
    r5 = 0;
    ctr = r29;
}

loc_801B42E4:
{
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_6 & 262140);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 524280);
    addr_lfdx_801B42EC_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat64(addr_lfdx_801B42EC_loc_0);
    r4 = (r4 + 1);
    addr_lfsx_801B42F4_loc_0 = (r7 + r8);
    f7.d = MemoryInline::FlatReadFloat32(addr_lfsx_801B42F4_loc_0);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r10 = (r10_rot_3 & 262140);
    addr_lfsx_801B42FC_loc_0 = (r7 + r10);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_801B42FC_loc_0);
    r4 = (r4 + 1);
    f10.d = (f7.d * f2.d);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r12 = (r12_rot_3 & 262140);
    addr_lfsx_801B430C_loc_0 = (r7 + r12);
    f7.d = MemoryInline::FlatReadFloat32(addr_lfsx_801B430C_loc_0);
    r4 = (r4 + 1);
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r24 = (r24_rot_3 & 262140);
    f8.d = (f5.d * f2.d);
    f12.d = (f1.d * f10.d);
    r4 = (r4 + 1);
    r25_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r25 = (r25_rot_5 & 262140);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    f10.d = (f0.d * f8.d);
    addr_lfsx_801B4330_loc_0 = (r7 + r24);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_801B4330_loc_0);
    f7.d = (f7.d * f2.d);
    r0 = (r8 + r23);
    r4 = (r4 + 1);
    addr_lfsx_801B4340_loc_0 = (r7 + r25);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_801B4340_loc_0);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f12.d));
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_7 & 262140);
    addr_stfsx_801B434C_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B434C_loc_0, f12.d);
    f31.d = (f30.d * f7.d);
    r0 = (r10 + r23);
    r4 = (r4 + 1);
    f7.d = (f5.d * f2.d);
    addr_lfsx_801B4360_loc_0 = (r7 + r8);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_801B4360_loc_0);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d));
    r26_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r26 = (r26_rot_3 & 262140);
    f12.d = (f13.d * f7.d);
    addr_lfsx_801B4374_loc_0 = (r7 + r26);
    f7.d = MemoryInline::FlatReadFloat32(addr_lfsx_801B4374_loc_0);
    r4 = (r4 + 1);
    addr_stfsx_801B437C_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B437C_loc_0, f10.d);
    f10.d = (f8.d * f2.d);
    r0 = (r12 + r23);
    f8.d = (f5.d * f2.d);
    r27_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r27 = (r27_rot_5 & 262140);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r12 = (r24 + r23);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d));
    addr_lfsx_801B439C_loc_0 = (r7 + r27);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_801B439C_loc_0);
    f10.d = (f11.d * f10.d);
    r10 = (r25 + r23);
    addr_stfsx_801B43A8_loc_0 = (r31 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B43A8_loc_0, f31.d);
    r8 = (r8 + r23);
    f7.d = (f7.d * f2.d);
    r6 = (r26 + r23);
    f2.d = (f5.d * f2.d);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    r0 = (r27 + r23);
    r5 = (r5 + 1);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f12.d));
    r4 = (r4 + 1);
    addr_stfsx_801B43D0_loc_0 = (r31 + r12);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B43D0_loc_0, f12.d);
    f5.d = (f6.d * f7.d);
    f8.d = (f9.d * f8.d);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d));
    f2.d = (f4.d * f2.d);
    addr_stfsx_801B43E8_loc_0 = (r12 + r10);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B43E8_loc_0, f10.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    r10 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    addr_stfsx_801B43FC_loc_0 = (r10 + r8);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B43FC_loc_0, f7.d);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    addr_stfsx_801B4404_loc_0 = (r8 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B4404_loc_0, f5.d);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -25084));
    addr_stfsx_801B440C_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801B440C_loc_0, f2.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B42E4;
    }
}

loc_801B4414:
{
    r0 = (r11 + -65);
    r11 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_801B441C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B4148;
    }
}

loc_801B4420:
{
    r3 = 0;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r11 = (r1 + 320);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF803FFF gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B40B4 func_801B40B4 preserves=true fpr_mask=0x00000000
