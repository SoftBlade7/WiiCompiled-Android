#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023354C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8023354C;

loc_8023354C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 1073741824;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r22);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    }
    r25 = r3;
    r26 = r4;
    r28 = (r4 + 46);
    r30 = (r5 + 16384);
    r29 = 0x80250000u;
    r31 = 0;
    r24 = 8;
    r23 = 8;
    r22 = 8;
}

loc_80233584:
{
    r0 = MemoryInline::FlatRead16((r26 + 12));
    r3 = r25;
    r5 = MemoryInline::FlatRead16((r26 + 6));
    r4 = (r26 + 304);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_2 & -64);
    r6 = MemoryInline::FlatRead16((r26 + 10));
    r8 = (r5 * r0);
    r0 = MemoryInline::FlatRead32((r26 + 44));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r9 = (r9_rot_2 & -8);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & -8);
    r7 = (r26 + 564);
    r27 = (r9 + r8);
    r5 = (r0 + r27);
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023407Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r26;
    r4 = (r29 + 30984);
    ctr = r24;
}

loc_802335C8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 304), 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r3 + 304));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    r5 = (r26 + r5);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_4 & -65536);
    MemoryInline::FlatWrite32((r5 + 48), r6);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & -4);
    r6 = (r26 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    r7 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r3 + 308));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_5 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_3 & -65536);
    MemoryInline::FlatWrite32((r6 + 48), r7);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r4 + 4));
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r3 + 312));
    r5 = (r26 + r5);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_4 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r4 + 5));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_5 & -65536);
    MemoryInline::FlatWrite32((r5 + 48), r6);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_6 & -4);
    r5 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r4 + 6));
    r9 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r3 + 316));
    r8 = (r26 + r8);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r4 + 7));
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_6 & -4);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r9 = (r9_rot_4 & -65536);
    MemoryInline::FlatWrite32((r8 + 48), r9);
    r8 = (r26 + r7);
    r7 = (r26 + r6);
    r9 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r3 + 320));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = (r26 + r5);
    r4 = (r4 + 8);
    r5 = (r26 + r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & -65536);
    MemoryInline::FlatWrite32((r8 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r3 + 324));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & -65536);
    MemoryInline::FlatWrite32((r7 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r3 + 328));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & -65536);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r3 + 332));
    r3 = (r3 + 32);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & -65536);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802335C8;
    }
}

loc_80233694:
{
    MemoryInline::FlatWrite32((r26 + 304), r30);
    r3 = r25;
    r4 = r28;
    r5 = (r26 + 1076);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023445Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_802336B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802336C0;
    }
}

loc_802336B4:
{
    r3 = 0x80000000u;
    r3 = (r3 + 4);
    goto loc_802339C0;
}

loc_802336C0:
{
    r7 = MemoryInline::FlatRead16((r26 + 6));
    r3 = r25;
    r6 = MemoryInline::FlatRead16((r26 + 8));
    r4 = (r26 + 304);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(6));
    r5 = (r5_rot_7 & -64);
    r0 = MemoryInline::FlatRead32((r26 + 44));
    r5 = (r6 * r5);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_7 & -8);
    r7 = (r26 + 820);
    r27 = (r27 + r5);
    r5 = (r0 + r27);
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023407Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r26;
    r4 = (r29 + 30984);
    ctr = r23;
}

loc_802336FC:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r4);
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 304), 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r3 + 304));
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_9 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r4 + 1));
    r5 = (r26 + r5);
    r6 = (r6 & 65535);
    MemoryInline::FlatWrite32((r5 + 48), r6);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_10 & -4);
    r6 = (r26 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r4 + 2));
    r7 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 308));
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_11 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r4 + 3));
    r7 = (r7 & 65535);
    MemoryInline::FlatWrite32((r6 + 48), r7);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r8 = (r8_rot_5 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r4 + 4));
    r6 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r3 + 312));
    r5 = (r26 + r5);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_6 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r4 + 5));
    r6 = (r6 & 65535);
    MemoryInline::FlatWrite32((r5 + 48), r6);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_9 & -4);
    r5 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r4 + 6));
    r9 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r3 + 316));
    r8 = (r26 + r8);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r4 + 7));
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_12 & -4);
    r9 = (r9 & 65535);
    MemoryInline::FlatWrite32((r8 + 48), r9);
    r8 = (r26 + r7);
    r7 = (r26 + r6);
    r9 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r3 + 320));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r6 = (r26 + r5);
    r4 = (r4 + 8);
    r5 = (r26 + r0);
    r0 = (r9 & 65535);
    MemoryInline::FlatWrite32((r8 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r3 + 324));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r7 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r3 + 328));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r3 + 332));
    r3 = (r3 + 32);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802336FC;
    }
}

loc_802337C8:
{
    r7 = MemoryInline::FlatRead16((r26 + 6));
    r3 = r25;
    r6 = MemoryInline::FlatRead16((r26 + 8));
    r4 = (r26 + 304);
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(6));
    r5 = (r5_rot_13 & -64);
    r0 = MemoryInline::FlatRead32((r26 + 44));
    r5 = (r6 * r5);
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_10 & -8);
    r7 = (r26 + 820);
    r27 = (r27 + r5);
    r5 = (r0 + r27);
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023407Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r26;
    r4 = (r29 + 30984);
    ctr = r22;
}

loc_80233804:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_6, 0u, r4);
    guest_range_7 = MemoryInline::ResolveRangeHost((r3 + 304), 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r3 + 304));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r5 = MemoryInline::ReadResolved8(guest_range_6, 1u, (r4 + 1));
    r9 = (r26 + r0);
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r7 = (r7_rot_8 & -65536);
    r0 = MemoryInline::ReadResolved8(guest_range_6, 2u, (r4 + 2));
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_12 & -4);
    r8 = MemoryInline::FlatRead32((r9 + 48));
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_15 & -4);
    r0 = (r8 | r7);
    MemoryInline::FlatWrite32((r9 + 48), r0);
    r8 = (r26 + r6);
    r0 = MemoryInline::ReadResolved8(guest_range_6, 3u, (r4 + 3));
    r6 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r3 + 308));
    r10 = (r26 + r5);
    r7 = MemoryInline::FlatRead32((r8 + 48));
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_16 & -4);
    r6_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_13 & -65536);
    r0 = MemoryInline::ReadResolved8(guest_range_6, 4u, (r4 + 4));
    r6 = (r7 | r6);
    MemoryInline::FlatWrite32((r8 + 48), r6);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_9 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_6, 5u, (r4 + 5));
    r8 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r3 + 312));
    r11 = (r26 + r5);
    r6_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_14 & -4);
    r9 = MemoryInline::FlatRead32((r10 + 48));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & -65536);
    r5 = MemoryInline::ReadResolved8(guest_range_6, 6u, (r4 + 6));
    r0 = (r9 | r0);
    MemoryInline::FlatWrite32((r10 + 48), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_6, 7u, (r4 + 7));
    r9 = (r26 + r7);
    r8 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r3 + 316));
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_17 & -4);
    r10 = MemoryInline::FlatRead32((r11 + 48));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r7 = (r7_rot_10 & -65536);
    r8 = (r26 + r6);
    r6 = (r10 | r7);
    MemoryInline::FlatWrite32((r11 + 48), r6);
    r6 = (r26 + r0);
    r7 = (r26 + r5);
    r0 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r3 + 320));
    r4 = (r4 + 8);
    r5 = MemoryInline::FlatRead32((r9 + 48));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_15 & -65536);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r9 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r3 + 324));
    r5 = MemoryInline::FlatRead32((r8 + 48));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_16 & -65536);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r8 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r3 + 328));
    r5 = MemoryInline::FlatRead32((r7 + 48));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_17 & -65536);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r7 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r3 + 332));
    r3 = (r3 + 32);
    r5 = MemoryInline::FlatRead32((r6 + 48));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & -65536);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80233804;
    }
}

loc_80233910:
{
    MemoryInline::FlatWrite32((r26 + 304), r30);
    r3 = r25;
    r4 = (r26 + 48);
    r5 = (r26 + 1112);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023445Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8023392C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023393C;
    }
}

loc_80233930:
{
    r3 = 0x80000000u;
    r3 = (r3 + 4);
    goto loc_802339C0;
}

loc_8023393C:
{
    r3 = MemoryInline::FlatRead16((r26 + 10));
    r0 = MemoryInline::FlatRead16((r26 + 6));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r3));
    r3 = (r3 & 65535);
}

loc_80233954:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80233968;
    }
}

loc_80233958:
{
    r3 = MemoryInline::FlatRead16((r26 + 12));
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r31));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 12), static_cast<uint16_t>(r0));
}

loc_80233968:
{
    r3 = MemoryInline::FlatRead16((r26 + 12));
    r0 = MemoryInline::FlatRead16((r26 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80233974:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80233584;
    }
}

loc_80233978:
{
    r3 = r25;
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x802339D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = (r3 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8023398C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023399C;
    }
}

loc_80233990:
{
    r3 = 0x80000000u;
    r3 = (r3 + 4);
    goto loc_802339C0;
}

loc_8023399C:
{
    r5 = MemoryInline::FlatRead32((r26 + 28));
    r3 = r25;
    r0 = MemoryInline::FlatRead32((r26 + 24));
    r4 = r26;
    r5 = (r0 - r5);
    // inline leaf 0x80233C94 (27 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 564u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    r0 = 65;
    r8 = 74;
    r7 = 80;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r6 = 71;
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r8));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r7));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r6));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r6_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r6 = (r6_rot_15 & -2048);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r8 = (r8_rot_6 & -16777216);
    r6 = (r7 | r6);
    r6 = (r8 | r6);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x80233C94
    r3 = MemoryInline::FlatRead32((r26 + 28));
    r0 = MemoryInline::FlatRead32((r26 + 24));
    r3 = (r0 - r3);
}

loc_802339C0:
{
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC01FFB gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8023354C func_8023354C preserves=true fpr_mask=0x00000000
