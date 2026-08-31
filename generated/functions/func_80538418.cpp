#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80538418(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_80538508_loc_0 = 0;
    uint32_t addr_stfsx_80538538_loc_0 = 0;
    uint32_t addr_stfsx_80538594_loc_0 = 0;
    uint32_t addr_stfsx_805385AC_loc_0 = 0;
    uint32_t addr_stfsx_805385D4_loc_0 = 0;
    uint32_t addr_stfsx_805385E8_loc_0 = 0;
    uint32_t addr_stfsx_805385F0_loc_0 = 0;
    uint32_t addr_stfsx_805385F8_loc_0 = 0;
    uint32_t addr_stfsx_80538658_loc_0 = 0;
    uint32_t addr_stfsx_805386F0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
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
    uint32_t r21_rot_5 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
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
    uint32_t r5_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80538418;

loc_80538418:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
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
    r0 = 1127219200;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r30 = MemoryInline::FlatRead8((r4 + 36));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_8053844C:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80538668;
    }
}

loc_80538450:
{
}

loc_80538454:
{
    r0 = (r30 + -8);
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(8))) {
        goto loc_8053860C;
    }
}

loc_8053845C:
{
    r4 = 0x80890000u;
    r5 = (r1 + 24);
    f3.d = MemoryInline::FlatReadFloat64((r4 + 616));
    r4 = (r1 + 8);
    goto loc_80538600;
}

loc_80538470:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & 1020);
    r23 = (r29 + 1);
    r22 = (r29 + 2);
    r6 = MemoryInline::FlatRead32((r6 + 12));
    r24 = (r29 + 3);
    r25 = (r29 + 4);
    r26 = (r29 + 5);
    r6_addr_2 = (r6 + r7);
    r8 = MemoryInline::FlatRead32(r6_addr_2);
    r11 = (r6 + r7);
    r20 = MemoryInline::FlatRead32((r11 + 4));
    r27 = (r29 + 6);
    r6 = MemoryInline::FlatRead16((r8 + 34));
    r28 = (r29 + 7);
    MemoryInline::FlatWriteRam32((r1 + 76), r6);
    r9 = MemoryInline::FlatRead16((r20 + 34));
    r6 = MemoryInline::FlatRead32((r11 + 8));
    r8 = MemoryInline::FlatRead8((r8 + 32));
    MemoryInline::FlatWriteRam32((r1 + 84), r9);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r12 = (r8 + -1);
    r19 = MemoryInline::FlatRead16((r6 + 34));
    r20 = MemoryInline::FlatRead8((r20 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r6 = MemoryInline::FlatRead8((r6 + 32));
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r21 = (r21_rot_2 & -4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r20 = (static_cast<int32_t>(static_cast<int8_t>(r20)));
    r31 = (r20 + -1);
    r4_addr_2 = (r4 + r12);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r29));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r7 = MemoryInline::FlatRead32((r11 + 12));
    r12 = (r6 + -1);
    MemoryInline::FlatWriteRam32((r1 + 76), r19);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r19 = MemoryInline::FlatRead16((r7 + 34));
    r20_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r20 = (r20_rot_2 & -4);
    addr_stfsx_80538508_loc_0 = (r5 + r21);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80538508_loc_0, f1.d);
    r21_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r21 = (r21_rot_3 & -4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r6 = MemoryInline::FlatRead8((r7 + 32));
    r29 = (r29 + 8);
    r4_addr_3 = (r4 + r31);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r23));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r8 = MemoryInline::FlatRead32((r11 + 16));
    MemoryInline::FlatWriteRam32((r1 + 84), r19);
    r7 = (r6 + -1);
    r19 = MemoryInline::FlatRead16((r8 + 34));
    addr_stfsx_80538538_loc_0 = (r5 + r20);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80538538_loc_0, f2.d);
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r23 = (r23_rot_2 & -4);
    r9 = MemoryInline::FlatRead32((r11 + 20));
    r6 = MemoryInline::FlatRead8((r8 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r10 = MemoryInline::FlatRead32((r11 + 24));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r20 = MemoryInline::FlatRead16((r9 + 34));
    r6 = (r6 + -1);
    r4_addr_4 = (r4 + r12);
    MemoryInline::FlatWrite8(r4_addr_4, static_cast<uint8_t>(r22));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r8 = MemoryInline::FlatRead8((r9 + 32));
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r31 = (r31_rot_2 & -4);
    MemoryInline::FlatWriteRam32((r1 + 76), r19);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r11 = MemoryInline::FlatRead32((r11 + 28));
    r4_addr_5 = (r4 + r7);
    MemoryInline::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r24));
    r12 = (r8 + -1);
    r8 = MemoryInline::FlatRead8((r10 + 32));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & -4);
    r4_addr_6 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_6, static_cast<uint8_t>(r25));
    r6 = MemoryInline::FlatRead8((r11 + 32));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    addr_stfsx_80538594_loc_0 = (r5 + r21);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80538594_loc_0, f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    MemoryInline::FlatWriteRam32((r1 + 84), r20);
    r20 = MemoryInline::FlatRead16((r10 + 34));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    addr_stfsx_805385AC_loc_0 = (r5 + r23);
    MemoryInline::FlatWriteFloat32(addr_stfsx_805385AC_loc_0, f2.d);
    r10 = (r8 + -1);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & -4);
    r7 = MemoryInline::FlatRead16((r11 + 34));
    MemoryInline::FlatWriteRam32((r1 + 84), r7);
    r7 = (r6 + -1);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    MemoryInline::FlatWriteRam32((r1 + 76), r20);
    addr_stfsx_805385D4_loc_0 = (r5 + r31);
    MemoryInline::FlatWriteFloat32(addr_stfsx_805385D4_loc_0, f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r4_addr_7 = (r4 + r12);
    MemoryInline::FlatWrite8(r4_addr_7, static_cast<uint8_t>(r26));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    addr_stfsx_805385E8_loc_0 = (r5 + r9);
    MemoryInline::FlatWriteFloat32(addr_stfsx_805385E8_loc_0, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    addr_stfsx_805385F0_loc_0 = (r5 + r8);
    MemoryInline::FlatWriteFloat32(addr_stfsx_805385F0_loc_0, f1.d);
    r4_addr_8 = (r4 + r10);
    MemoryInline::FlatWrite8(r4_addr_8, static_cast<uint8_t>(r27));
    addr_stfsx_805385F8_loc_0 = (r5 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_805385F8_loc_0, f0.d);
    r4_addr_9 = (r4 + r7);
    MemoryInline::FlatWrite8(r4_addr_9, static_cast<uint8_t>(r28));
}

loc_80538600:
{
    r6 = (r29 & 255);
}

loc_80538608:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_80538470;
    }
}

loc_8053860C:
{
    r4 = 0x80890000u;
    r5 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 616));
    r4 = (r1 + 8);
    goto loc_8053865C;
}

loc_80538620:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r6 = MemoryInline::FlatRead32((r6 + 12));
    r6_addr_5 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_5);
    r0 = MemoryInline::FlatRead16((r6 + 34));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r0 = MemoryInline::FlatRead8((r6 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r6 = (r6 + -1);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_addr_12 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_12, static_cast<uint8_t>(r29));
    r29 = (r29 + 1);
    addr_stfsx_80538658_loc_0 = (r5 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80538658_loc_0, f0.d);
}

loc_8053865C:
{
    r0 = (r29 & 255);
}

loc_80538664:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r30))) {
        goto loc_80538620;
    }
}

loc_80538668:
{
    r0 = (r30 + -1);
    r7 = (r1 + 28);
    r8 = (r1 + 9);
    r6 = (r1 + 24);
    r5 = (r1 + 8);
    r11 = 1;
    r4 = 4;
    ctr = r0;
}

loc_8053868C:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(1))) {
        goto loc_80538700;
    }
}

loc_80538690:
{
    r9 = (r1 + 24);
    r10 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32(r7);
    r12 = r11;
    r19 = MemoryInline::FlatRead8(r8);
    r9 = (r9 + r4);
    r10 = (r10 + r11);
    goto loc_805386CC;
}

loc_805386B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + -4));
    r12 = (r12 + -1);
    r0 = MemoryInline::FlatRead8((r10 + -1));
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    r9 = (r9 + -4);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    r10 = (r10 + -1);
}

loc_805386CC:
{
}

loc_805386D0:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(0))) {
        goto loc_805386E0;
    }
}

loc_805386D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + -4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805386DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805386B0;
    }
}

loc_805386E0:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5_addr_2 = (r5 + r12);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r19));
    r11 = (r11 + 1);
    r4 = (r4 + 4);
    addr_stfsx_805386F0_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_805386F0_loc_0, f1.d);
    r7 = (r7 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80538690;
    }
}

loc_80538700:
{
    r8 = (r1 + 8);
    r9 = 0;
    goto loc_8053874C;
}

loc_8053870C:
{
    r5 = (r9 & 255);
    r8_addr_2 = (r8 + r5);
    r6 = MemoryInline::FlatRead8(r8_addr_2);
}

loc_80538718:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r30))) {
        goto loc_80538748;
    }
}

loc_8053871C:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r7 = (r5 + 1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r5 = (r7 & 255);
    r4_addr_15 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_15);
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r7));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r0 + r5);
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r6));
}

loc_80538748:
{
    r9 = (r9 + 1);
}

loc_8053874C:
{
    r0 = (r9 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_80538754:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053870C;
    }
}

loc_80538758:
{
    r11 = (r1 + 144);
    // inline leaf 0x800215CC (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -4));
    // end of inlined leaf 0x800215CC
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF81FFB gpr_write=0xFFF81FF3 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80538418 func_80538418 preserves=true fpr_mask=0x00000000
