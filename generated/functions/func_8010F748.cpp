#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010F748(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r25_rot_6 = 0;
    uint32_t r25_rot_7 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r26_rot_5 = 0;
    uint32_t r26_rot_6 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
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
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
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
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_8010F748;

loc_8010F748:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    r11 = (r1 + 304);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = 16;
    r23 = (r1 + 8);
    r22 = 0;
    ctr = r0;
}

loc_8010F76C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r23, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r23, static_cast<uint8_t>(r22));
    r12 = (r22 + 1);
    r11 = (r22 + 2);
    r10 = (r22 + 3);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r23 + 1), static_cast<uint8_t>(r12));
    r9 = (r22 + 4);
    r8 = (r22 + 5);
    r7 = (r22 + 6);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r23 + 2), static_cast<uint8_t>(r11));
    r0 = (r22 + 7);
    r12 = (r22 + 9);
    r11 = (r22 + 10);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r23 + 3), static_cast<uint8_t>(r10));
    r10 = (r22 + 11);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r23 + 4), static_cast<uint8_t>(r9));
    r9 = (r22 + 12);
    r22 = (r22 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r23 + 5), static_cast<uint8_t>(r8));
    r8 = (r22 + 5);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r23 + 6), static_cast<uint8_t>(r7));
    r7 = (r22 + 6);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r23 + 7), static_cast<uint8_t>(r0));
    r0 = (r22 + 7);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r23 + 8), static_cast<uint8_t>(r22));
    r22 = (r22 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r23 + 9), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r23 + 10), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r23 + 11), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r23 + 12), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r23 + 13), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r23 + 14), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r23 + 15), static_cast<uint8_t>(r0));
    r23 = (r23 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8010F76C;
    }
}

loc_8010F7F4:
{
    r7 = (r1 + 8);
    r0 = 32;
    r8 = r7;
    r27 = 0;
    r9 = r7;
    r10 = r7;
    r11 = r7;
    r12 = r7;
    r31 = r7;
    r30 = r7;
    r29 = r7;
    r22 = 0;
    r28 = 0;
    ctr = r0;
}

loc_8010F82C:
{
    r24 = (r27 + 1);
    r0 = MemoryInline::FlatRead8(r7);
    r23 = PPC_Divw(static_cast<int32_t>(r24), static_cast<int32_t>(r4));
    r3_addr_2 = (r3 + r27);
    r26 = MemoryInline::FlatRead8(r3_addr_2);
    r25 = (r22 + r0);
    r26 = (r26 + r25);
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r25 = (r25_rot_2 & -16777216);
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r26 = (r26_rot_2 & 1);
    r23 = (r23 * r4);
    r25 = (r25 - r26);
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r25 = (r25_rot_3 & -1);
    r25 = (r25 + r26);
    r23 = (r24 - r23);
    r22 = (r23 & 255);
    r27 = (r25 & 255);
    r24 = (r22 + 1);
    r8_addr_2 = (r8 + r27);
    r25 = MemoryInline::FlatRead8(r8_addr_2);
    r23 = PPC_Divw(static_cast<int32_t>(r24), static_cast<int32_t>(r4));
    r3_addr_3 = (r3 + r22);
    r26 = MemoryInline::FlatRead8(r3_addr_3);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r25));
    r8_addr_3 = (r8 + r27);
    MemoryInline::FlatWrite8(r8_addr_3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 1));
    r25 = (r27 + r0);
    r23 = (r23 * r4);
    r26 = (r26 + r25);
    r25_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r25 = (r25_rot_4 & -16777216);
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r27 = (r27_rot_2 & 1);
    r23 = (r24 - r23);
    r25 = (r25 - r27);
    r22 = (r23 & 255);
    r24 = (r22 + 1);
    r25_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r25 = (r25_rot_5 & -1);
    r23 = PPC_Divw(static_cast<int32_t>(r24), static_cast<int32_t>(r4));
    r3_addr_4 = (r3 + r22);
    r26 = MemoryInline::FlatRead8(r3_addr_4);
    r25 = (r25 + r27);
    r22 = (r25 & 255);
    r9_addr_2 = (r9 + r22);
    r25 = MemoryInline::FlatRead8(r9_addr_2);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r25));
    r9_addr_3 = (r9 + r22);
    MemoryInline::FlatWrite8(r9_addr_3, static_cast<uint8_t>(r0));
    r23 = (r23 * r4);
    r0 = MemoryInline::FlatRead8((r7 + 2));
    r25 = (r22 + r0);
    r25 = (r26 + r25);
    r23 = (r24 - r23);
    r22 = (r23 & 255);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r27 = (r27_rot_3 & 1);
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(24));
    r23 = (r23_rot_2 & -16777216);
    r3_addr_5 = (r3 + r22);
    r25 = MemoryInline::FlatRead8(r3_addr_5);
    r23 = (r23 - r27);
    r24 = (r22 + 1);
    r26_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(8));
    r26 = (r26_rot_3 & -1);
    r23 = PPC_Divw(static_cast<int32_t>(r24), static_cast<int32_t>(r4));
    r26 = (r26 + r27);
    r22 = (r26 & 255);
    r10_addr_2 = (r10 + r22);
    r26 = MemoryInline::FlatRead8(r10_addr_2);
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r26));
    r10_addr_3 = (r10 + r22);
    MemoryInline::FlatWrite8(r10_addr_3, static_cast<uint8_t>(r0));
    r0 = (r23 * r4);
    r26 = MemoryInline::FlatRead8((r7 + 3));
    r23 = (r22 + r26);
    r25 = (r25 + r23);
    r0 = (r24 - r0);
    r23_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(24));
    r23 = (r23_rot_3 & -16777216);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r24 = (r24_rot_2 & 1);
    r23 = (r23 - r24);
    r22 = (r0 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -1);
    r0 = (r0 + r24);
    r25 = (r0 & 255);
    r11_addr_2 = (r11 + r25);
    r0 = MemoryInline::FlatRead8(r11_addr_2);
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r0));
    r11_addr_3 = (r11 + r25);
    MemoryInline::FlatWrite8(r11_addr_3, static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r7 + 4));
    r24 = (r22 + 1);
    r3_addr_6 = (r3 + r22);
    r26 = MemoryInline::FlatRead8(r3_addr_6);
    r23 = PPC_Divw(static_cast<int32_t>(r24), static_cast<int32_t>(r4));
    r25 = (r25 + r0);
    r28 = (r28 + 8);
    r26 = (r26 + r25);
    r25_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r25 = (r25_rot_6 & -16777216);
    r26_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r26 = (r26_rot_4 & 1);
    r23 = (r23 * r4);
    r25 = (r25 - r26);
    r25_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r25 = (r25_rot_7 & -1);
    r25 = (r25 + r26);
    r23 = (r24 - r23);
    r22 = (r23 & 255);
    r24 = (r22 + 1);
    r3_addr_7 = (r3 + r22);
    r26 = MemoryInline::FlatRead8(r3_addr_7);
    r23 = PPC_Divw(static_cast<int32_t>(r24), static_cast<int32_t>(r4));
    r22 = (r25 & 255);
    r12_addr_2 = (r12 + r22);
    r25 = MemoryInline::FlatRead8(r12_addr_2);
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r25));
    r12_addr_3 = (r12 + r22);
    MemoryInline::FlatWrite8(r12_addr_3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 5));
    r23 = (r23 * r4);
    r25 = (r22 + r0);
    r25 = (r26 + r25);
    r26_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(24));
    r26 = (r26_rot_5 & -16777216);
    r23 = (r24 - r23);
    r27_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r27 = (r27_rot_4 & 1);
    r22 = (r23 & 255);
    r25 = (r22 + 1);
    r23 = (r26 - r27);
    r24 = PPC_Divw(static_cast<int32_t>(r25), static_cast<int32_t>(r4));
    r3_addr_8 = (r3 + r22);
    r26 = MemoryInline::FlatRead8(r3_addr_8);
    r23_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(8));
    r23 = (r23_rot_4 & -1);
    r23 = (r23 + r27);
    r22 = (r23 & 255);
    r31_addr_2 = (r31 + r22);
    r23 = MemoryInline::FlatRead8(r31_addr_2);
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r23));
    r24 = (r24 * r4);
    r31_addr_3 = (r31 + r22);
    MemoryInline::FlatWrite8(r31_addr_3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 6));
    r24 = (r25 - r24);
    r24 = (r24 & 255);
    r23 = (r22 + r0);
    r23 = (r26 + r23);
    r3_addr_9 = (r3 + r24);
    r25 = MemoryInline::FlatRead8(r3_addr_9);
    r26 = (r24 + 1);
    r27 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r4));
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r24 = (r24_rot_3 & -16777216);
    r23_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r23 = (r23_rot_5 & 1);
    r24 = (r24 - r23);
    r24_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(8));
    r24 = (r24_rot_4 & -1);
    r23 = (r24 + r23);
    r22 = (r23 & 255);
    r30_addr_2 = (r30 + r22);
    r24 = MemoryInline::FlatRead8(r30_addr_2);
    r27 = (r27 * r4);
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r24));
    r30_addr_3 = (r30 + r22);
    MemoryInline::FlatWrite8(r30_addr_3, static_cast<uint8_t>(r0));
    r0 = (r26 - r27);
    r23 = MemoryInline::FlatRead8((r7 + 7));
    r27 = (r0 & 255);
    r0 = (r22 + r23);
    r26 = (r25 + r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & -16777216);
    r26_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r26 = (r26_rot_6 & 1);
    r0 = (r0 - r26);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -1);
    r0 = (r0 + r26);
    r22 = (r0 & 255);
    r29_addr_2 = (r29 + r22);
    r0 = MemoryInline::FlatRead8(r29_addr_2);
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r0));
    r7 = (r7 + 8);
    r29_addr_3 = (r29 + r22);
    MemoryInline::FlatWrite8(r29_addr_3, static_cast<uint8_t>(r23));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8010F82C;
    }
}

loc_8010FA78:
{
    r4 = (r1 + 8);
    r11 = 0;
    r12 = 0;
    r7 = 0;
    goto loc_8010FB10;
}

loc_8010FA8C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7 = (r7 + 1);
    r5_addr_2 = (r5 + r3);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
    r8 = (r11 + r0);
    r9 = (r8 + 1);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r8 = (r8_rot_2 & -16777216);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r8 = (r8 - r9);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r8 = (r8_rot_3 & -1);
    r8 = (r8 + r9);
    r11 = (r8 & 255);
    r4_addr_2 = (r4 + r11);
    r10 = MemoryInline::FlatRead8(r4_addr_2);
    r9 = (r10 + r12);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r8 = (r8_rot_4 & -16777216);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 1);
    r8 = (r8 - r9);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r8 = (r8_rot_5 & -1);
    r8 = (r8 + r9);
    r12 = (r8 & 255);
    r4_addr_3 = (r4 + r12);
    r8 = MemoryInline::FlatRead8(r4_addr_3);
    r4_addr_4 = (r4 + r11);
    MemoryInline::FlatWrite8(r4_addr_4, static_cast<uint8_t>(r8));
    r4_addr_5 = (r4 + r12);
    MemoryInline::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r10));
    r4_addr_6 = (r4 + r11);
    r8 = MemoryInline::FlatRead8(r4_addr_6);
    r9 = (r8 + r10);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r8 = (r8_rot_6 & -16777216);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_4 & 1);
    r8 = (r8 - r9);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r8 = (r8_rot_7 & -1);
    r8 = (r8 + r9);
    r8 = (r8 & 255);
    r4_addr_7 = (r4 + r8);
    r8 = MemoryInline::FlatRead8(r4_addr_7);
    r0 = (r0 ^ r8);
    r5_addr_3 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r0));
}

loc_8010FB10:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r6));
}

loc_8010FB18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010FA8C;
    }
}

loc_8010FB1C:
{
    r11 = (r1 + 304);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFC01FFA gpr_write=0xFFC01F9B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8010F748 func_8010F748 preserves=true fpr_mask=0x00000000
