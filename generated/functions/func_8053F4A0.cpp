#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053F4A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_8053F7D0_loc_0 = 0;
    uint32_t addr_stfdx_8053F6A8_loc_0 = 0;
    uint32_t addr_stfdx_8053F6E8_loc_0 = 0;
    uint32_t addr_stfdx_8053F6F8_loc_0 = 0;
    uint32_t addr_stfdx_8053F798_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_addr_5 = 0;
    uint32_t r9_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8053F4A0;

loc_8053F4A0:
{
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    r11 = (r1 + 352);
    // inline leaf 0x80021580 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -4), r31);
    // end of inlined leaf 0x80021580
    r4 = 0x809C0000u;
    r31 = 0x80890000u;
    r5 = MemoryInline::FlatRead32((r4 + -10456));
    r29 = r3;
    r0 = 12;
    r31 = (r31 + 928);
    r4 = (r1 + 28);
    r30 = MemoryInline::FlatRead8((r5 + 36));
    r3 = 0;
    ctr = r0;
}

loc_8053F4DC:
{
    MemoryInline::FlatWrite32((r4 + 4), r3);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053F4DC;
    }
}

loc_8053F4E8:
{
    r23 = (r31 + 140);
    r25 = MemoryInline::FlatRead8((r31 + 140));
    guest_range_1 = MemoryInline::ResolveRangeHost((r23 + 1), 0, 11u, true, false);
    r24 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r23 + 1));
    r4 = 0x80520000u;
    r22 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r23 + 2));
    r5 = 0x80520000u;
    r21 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r23 + 3));
    r3 = (r1 + 128);
    r20 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r23 + 4));
    r4 = (r4 + -15500);
    r19 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r23 + 5));
    r5 = (r5 + -15564);
    r12 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r23 + 6));
    r6 = 12;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r23 + 7));
    r7 = 12;
    r10 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r23 + 8));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r23 + 9));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r23 + 10));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r23 + 11));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 20), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 21), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 22), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 23), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r1 + 24), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r1 + 25), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r1 + 26), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r1 + 27), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r1 + 28), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r1 + 29), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_4, 10u, (r1 + 30), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 11u, (r1 + 31), static_cast<uint8_t>(r0));
    ctx->lr = 0x8053F56Cu;
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
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r10 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    goto loc_8053F5E0;
}

loc_8053F58C:
{
    r0 = (r10 & 255);
    r9 = (r1 + 128);
    r4 = (r0 * 12);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r9 = (r9 + r4);
    MemoryInline::FlatWrite8((r9 + 10), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r0 & 2);
}

loc_8053F5B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053F5DC;
    }
}

loc_8053F5B8:
{
    r4 = MemoryInline::FlatRead32((r4 + 64));
    r7 = MemoryInline::FlatRead8((r4 + 6));
    r8 = MemoryInline::FlatRead16((r4 + 8));
    r6 = MemoryInline::FlatRead8((r4 + 10));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r9 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r9 + 6), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite16((r9 + 8), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite8((r9 + 10), static_cast<uint8_t>(r6));
}

loc_8053F5DC:
{
    r10 = (r10 + 1);
}

loc_8053F5E0:
{
    r0 = (r10 & 255);
}

loc_8053F5E8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r30))) {
        goto loc_8053F58C;
    }
}

loc_8053F5EC:
{
    f2.d = MemoryInline::FlatReadFloat64((r31 + 192));
    r6 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 176));
    r5 = (r1 + 20);
    f5.d = MemoryInline::FlatReadFloat64((r31 + 184));
    r4 = 0;
    f4.d = MemoryInline::FlatReadFloat64((r31 + 152));
    r8 = 1127219200;
    f6.d = MemoryInline::FlatReadFloat64((r31 + 160));
    f3.d = MemoryInline::FlatReadFloat64((r31 + 168));
    goto loc_8053F704;
}

loc_8053F618:
{
    r9 = MemoryInline::FlatRead32((r29 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r7 = MemoryInline::FlatRead32((r3 + 12));
    r9 = MemoryInline::FlatRead32((r9 + 12));
    r7_addr_2 = (r7 + r0);
    r7 = MemoryInline::FlatRead32(r7_addr_2);
    r9_addr_2 = (r9 + r0);
    r10 = MemoryInline::FlatRead32(r9_addr_2);
    r9 = MemoryInline::FlatRead32((r7 + 56));
    r7 = MemoryInline::FlatRead8((r10 + 32));
    r0 = (r9 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053F63C:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r7 + -1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053F6B0;
    }
}

loc_8053F648:
{
    r10 = (r4 & 255);
    r11 = (r1 + 128);
    r9 = (r10 * 12);
    MemoryInline::FlatWriteRam32((r1 + 284), r10);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -8);
    MemoryInline::FlatWriteRam32((r1 + 280), r8);
    r11 = (r11 + r9);
    r9 = MemoryInline::FlatRead16((r11 + 4));
    r10 = MemoryInline::FlatRead8((r11 + 6));
    r9 = (r9 * 60);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    r11 = MemoryInline::FlatRead16((r11 + 8));
    f0.d = (f0.d - f5.d);
    MemoryInline::FlatWriteRam32((r1 + 272), r8);
    r9 = (r10 + r9);
    r9 = (r9 * 1000);
    f7.d = (f3.d * f0.d);
    r9 = (r11 + r9);
    MemoryInline::FlatWriteRam32((r1 + 276), r9);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f0.d = (f0.d - f5.d);
    f0.d = (f4.d - f0.d);
    f0.d = (f0.d + f6.d);
    f0.d = (f7.d + f0.d);
    addr_stfdx_8053F6A8_loc_0 = (r6 + r7);
    MemoryInline::FlatWriteFloat64(addr_stfdx_8053F6A8_loc_0, f0.d);
    goto loc_8053F6FC;
}

loc_8053F6B0:
{
    r7 = (r9 & 16);
}

loc_8053F6B4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8053F6C4;
    }
}

loc_8053F6B8:
{
    r7 = MemoryInline::FlatRead32((r10 + 56));
    r7 = (r7 & 32);
}

loc_8053F6C0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8053F6F0;
    }
}

loc_8053F6C4:
{
    r7 = (r4 & 255);
    MemoryInline::FlatWriteRam32((r1 + 280), r8);
    r9 = (r7 + 1);
    r9 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 284), r9);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r7 = (r7_rot_4 & -8);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    addr_stfdx_8053F6E8_loc_0 = (r6 + r7);
    MemoryInline::FlatWriteFloat64(addr_stfdx_8053F6E8_loc_0, f0.d);
    goto loc_8053F6FC;
}

loc_8053F6F0:
{
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r7 = (r7_rot_3 & -8);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 12));
    addr_stfdx_8053F6F8_loc_0 = (r6 + r7);
    MemoryInline::FlatWriteFloat64(addr_stfdx_8053F6F8_loc_0, f0.d);
}

loc_8053F6FC:
{
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r4));
    r4 = (r4 + 1);
}

loc_8053F704:
{
    r0 = (r4 & 255);
}

loc_8053F70C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r30))) {
        goto loc_8053F618;
    }
}

loc_8053F710:
{
    r0 = (r30 + -1);
    r6 = (r1 + 40);
    r7 = (r1 + 21);
    r5 = (r1 + 32);
    r4 = (r1 + 20);
    r10 = 1;
    r3 = 8;
    ctr = r0;
}

loc_8053F734:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(1))) {
        goto loc_8053F7A8;
    }
}

loc_8053F738:
{
    r8 = (r1 + 32);
    r9 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat64(r6);
    r11 = r10;
    r12 = MemoryInline::FlatRead8(r7);
    r8 = (r8 + r3);
    r9 = (r9 + r10);
    goto loc_8053F774;
}

loc_8053F758:
{
    f0.d = MemoryInline::FlatReadFloat64((r8 + -8));
    r11 = (r11 + -1);
    r0 = MemoryInline::FlatRead8((r9 + -1));
    MemoryInline::FlatWriteFloat64(r8, f0.d);
    r8 = (r8 + -8);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    r9 = (r9 + -1);
}

loc_8053F774:
{
}

loc_8053F778:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(0))) {
        goto loc_8053F788;
    }
}

loc_8053F77C:
{
    f0.d = MemoryInline::FlatReadFloat64((r8 + -8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8053F784:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053F758;
    }
}

loc_8053F788:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r4_addr_4 = (r4 + r11);
    MemoryInline::FlatWrite8(r4_addr_4, static_cast<uint8_t>(r12));
    r10 = (r10 + 1);
    r3 = (r3 + 8);
    addr_stfdx_8053F798_loc_0 = (r5 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_8053F798_loc_0, f1.d);
    r6 = (r6 + 8);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053F738;
    }
}

loc_8053F7A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8053F7AC:
{
    r12 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053F9E0;
    }
}

loc_8053F7B4:
{
}

loc_8053F7B8:
{
    r5 = (r30 + -8);
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(8))) {
        goto loc_8053F994;
    }
}

loc_8053F7C0:
{
    goto loc_8053F988;
}

loc_8053F7C4:
{
    r4 = (r12 & 255);
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 4), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r6 = (r1 + 20);
    addr_lbzux_8053F7D0_loc_0 = (r6 + r4);
    guest_range_5 = MemoryInline::ResolveRangeHost(addr_lbzux_8053F7D0_loc_0, 0, 8u, true, false);
    r20 = MemoryInline::ReadResolved8(guest_range_5, 0u, addr_lbzux_8053F7D0_loc_0);
    r6 = addr_lbzux_8053F7D0_loc_0;
    r7 = MemoryInline::FlatRead32((r3 + 12));
    r19 = (r4 + 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r9 = (r12 + 3);
    r7_addr_4 = (r7 + r3);
    r8 = MemoryInline::FlatRead32(r7_addr_4);
    r0 = (r12 + 1);
    r3 = (r0 & 255);
    r9 = (r9 & 255);
    MemoryInline::FlatWrite8((r8 + 32), static_cast<uint8_t>(r19));
    r7 = (r3 + 1);
    r3 = MemoryInline::ReadResolved8(guest_range_5, 2u, (r6 + 2));
    r0 = (r12 + 2);
    r10 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r8 = (r0 & 255);
    r0 = MemoryInline::ReadResolved8(guest_range_5, 3u, (r6 + 3));
    r9 = (r9 + 1);
    r11 = MemoryInline::FlatRead32((r10 + 24));
    r19 = (r19 & 255);
    r25 = MemoryInline::ReadResolved8(guest_range_5, 4u, (r6 + 4));
    r10 = (r12 + 4);
    r11 = (r11 + r19);
    r4 = MemoryInline::ReadResolved8(guest_range_5, 1u, (r6 + 1));
    MemoryInline::FlatWrite8((r11 + -1), static_cast<uint8_t>(r20));
    r10 = (r10 & 255);
    r10 = (r10 + 1);
    r11 = (r12 + 5);
    r19 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r11 = (r11 & 255);
    r11 = (r11 + 1);
    r20_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r20 = (r20_rot_2 & -4);
    r22 = MemoryInline::FlatRead32((r19 + 12));
    r19 = (r7 & 255);
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r21 = (r21_rot_2 & -4);
    r8 = (r8 + 1);
    r22_addr_2 = (r22 + r20);
    r20 = MemoryInline::FlatRead32(r22_addr_2);
    r22 = (r8 & 255);
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r23 = (r23_rot_2 & -4);
    r24 = (r9 & 255);
    MemoryInline::FlatWrite8((r20 + 32), static_cast<uint8_t>(r7));
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r26 = (r26_rot_2 & -4);
    r28 = MemoryInline::ReadResolved8(guest_range_5, 5u, (r6 + 5));
    r27 = (r10 & 255);
    r20 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r31 = (r11 & 255);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r7 = (r7_rot_7 & -4);
    r20 = MemoryInline::FlatRead32((r20 + 24));
    r20 = (r20 + r19);
    MemoryInline::FlatWrite8((r20 + -1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_7 = (r4 + r21);
    r4 = MemoryInline::FlatRead32(r4_addr_7);
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r8));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r4 + r22);
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r23);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r9));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r3 = (r3 + r24);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_3 = (r3 + r26);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r10));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r3 = (r0 + r27);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r25));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_4 = (r3 + r7);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r11));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r3 = (r12 + 6);
    r0 = (r12 + 7);
    r8 = MemoryInline::ReadResolved8(guest_range_5, 6u, (r6 + 6));
    r7 = MemoryInline::FlatRead32((r4 + 24));
    r3 = (r3 & 255);
    r4 = MemoryInline::ReadResolved8(guest_range_5, 7u, (r6 + 7));
    r10 = (r3 + 1);
    r6 = (r7 + r31);
    r3 = (r0 & 255);
    MemoryInline::FlatWrite8((r6 + -1), static_cast<uint8_t>(r28));
    r11 = (r3 + 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r7 = (r10 & 255);
    r9 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r6 = (r11 & 255);
    r12 = (r12 + 8);
    r9 = MemoryInline::FlatRead32((r9 + 12));
    r9_addr_4 = (r9 + r3);
    r3 = MemoryInline::FlatRead32(r9_addr_4);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r10));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r8));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r11));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_8053F988:
{
    r0 = (r12 & 255);
}

loc_8053F990:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r5))) {
        goto loc_8053F7C4;
    }
}

loc_8053F994:
{
    r6 = (r1 + 20);
    goto loc_8053F9D4;
}

loc_8053F99C:
{
    r5 = (r12 & 255);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r6_addr_2 = (r6 + r5);
    r4 = MemoryInline::FlatRead8(r6_addr_2);
    r7 = (r5 + 1);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r5 = (r7 & 255);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r12 = (r12 + 1);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r7));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_8053F9D4:
{
    r0 = (r12 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_8053F9DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053F99C;
    }
}

loc_8053F9E0:
{
    r4 = 0x80520000u;
    r3 = (r1 + 128);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 12;
    ctx->lr = 0x8053F9F8u;
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
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r11 = (r1 + 352);
    // inline leaf 0x800215CC (14 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r11 + -4));
    // end of inlined leaf 0x800215CC
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
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8053F4A0 func_8053F4A0 preserves=true fpr_mask=0x00000000
