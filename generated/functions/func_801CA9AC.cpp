#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CA9AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r14_rot_0 = 0;
    uint32_t r15_addr_0 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_12 = 0;
    uint32_t r31_addr_13 = 0;
    uint32_t r31_addr_14 = 0;
    uint32_t r31_addr_15 = 0;
    uint32_t r31_addr_16 = 0;
    uint32_t r31_addr_17 = 0;
    uint32_t r31_addr_18 = 0;
    uint32_t r31_addr_19 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_subfic_ra_0 = 0;
    uint32_t r3_subfic_ra_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801CA9AC;

loc_801CA9AC:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r4 = 0x80350000u;
    r30 = 0x802A0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + 2352);
    r30 = (r30 + -5336);
    r4_addr_0 = (r4 + r0);
    r16 = MemoryInline::FlatRead32(r4_addr_0);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r13 + -24485), static_cast<uint8_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 63);
    MemoryInline::FlatWrite8((r13 + -24486), static_cast<uint8_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r6 = MemoryInline::FlatRead8((r13 + -24486));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & 255);
    r0 = MemoryInline::FlatRead8((r13 + -24485));
    r4 = (r3 & 76);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801CAA04:
{
    r8 = 255;
    r5 = 0x80810000u;
    r7 = (r0 * r6);
    r3 = 0x92490000u;
    r0 = (r5 + -32639);
    MemoryInline::FlatWrite8((r13 + -24488), static_cast<uint8_t>(r8));
    r8 = (r3 + 9363);
    r5 = 2;
    r10 = (r4 + r7);
    MemoryInline::FlatWrite8((r13 + -24487), static_cast<uint8_t>(r4));
    r9 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r10)) >> 32));
    r3 = (r30 + 2400);
    r7 = 0;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(25));
    r9 = (r9_rot_0 & 33554431);
    r9 = (r9 * 255);
    r9 = (r10 - r9);
    r10 = (r9 & 255);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    r8 = (r8 + r10);
    r8 = (static_cast<int32_t>(r8) >> 2);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r8 = (r8 + r9);
    r8 = (r8 * 7);
    r8 = (r10 - r8);
    r15 = (r8 & 255);
    r8 = (r15 * 6);
    r14 = (r8 & 255);
    ctr = r5;
}

loc_801CAA74:
{
    r5 = (r10 & 255);
    r8 = (r7 & 255);
    r9 = (r5 * r6);
    r7 = (r7 + 5);
    r5 = (r1 + 40);
    r5 = (r5 + r8);
    r9 = (r4 + r9);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r9)) >> 32));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(25));
    r8 = (r8_rot_2 & 33554431);
    r8 = (r8 * 255);
    r8 = (r9 - r8);
    r9 = (r8 & 255);
    r8 = (r9 * r6);
    r3_addr_2 = (r3 + r9);
    r9 = MemoryInline::FlatRead8(r3_addr_2);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r9));
    r9 = (r4 + r8);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r9)) >> 32));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(25));
    r8 = (r8_rot_3 & 33554431);
    r8 = (r8 * 255);
    r8 = (r9 - r8);
    r9 = (r8 & 255);
    r8 = (r9 * r6);
    r3_addr_3 = (r3 + r9);
    r9 = MemoryInline::FlatRead8(r3_addr_3);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r9));
    r9 = (r4 + r8);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r9)) >> 32));
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(25));
    r8 = (r8_rot_4 & 33554431);
    r8 = (r8 * 255);
    r8 = (r9 - r8);
    r9 = (r8 & 255);
    r8 = (r9 * r6);
    r3_addr_4 = (r3 + r9);
    r9 = MemoryInline::FlatRead8(r3_addr_4);
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r9));
    r9 = (r4 + r8);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r9)) >> 32));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(25));
    r8 = (r8_rot_5 & 33554431);
    r8 = (r8 * 255);
    r8 = (r9 - r8);
    r9 = (r8 & 255);
    r8 = (r9 * r6);
    r3_addr_5 = (r3 + r9);
    r9 = MemoryInline::FlatRead8(r3_addr_5);
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r9));
    r9 = (r4 + r8);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r9)) >> 32));
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(25));
    r8 = (r8_rot_6 & 33554431);
    r8 = (r8 * 255);
    r8 = (r9 - r8);
    r10 = (r8 & 255);
    r3_addr_6 = (r3 + r10);
    r8 = MemoryInline::FlatRead8(r3_addr_6);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r8));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CAA74;
    }
}

loc_801CAB40:
{
    r19 = (r30 + 2352);
    MemoryInline::FlatWrite8((r13 + -24485), static_cast<uint8_t>(r10));
    r17 = (r14 + r19);
    r19_addr_0 = (r19 + r14);
    r4 = MemoryInline::FlatRead8(r19_addr_0);
    r5 = MemoryInline::FlatRead8((r17 + 1));
    r3 = (r30 + 4704);
    r6 = MemoryInline::FlatRead8((r17 + 2));
    r7 = MemoryInline::FlatRead8((r17 + 3));
    r8 = MemoryInline::FlatRead8((r17 + 4));
    r9 = MemoryInline::FlatRead8((r17 + 5));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 10u, true, false);
    r27 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r1 + 47));
    r3 = (r30 + 4732);
    r26 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r1 + 46));
    MemoryInline::FlatWriteRam32((r1 + 8), r27);
    r28 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r1 + 48));
    r10 = r26;
    r29 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r1 + 49));
    MemoryInline::FlatWriteRam32((r1 + 12), r28);
    r25 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r1 + 45));
    r24 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r1 + 44));
    r23 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r1 + 43));
    r9 = r25;
    r22 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r1 + 42));
    r8 = r24;
    r21 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r1 + 41));
    r7 = r23;
    MemoryInline::FlatWriteRam32((r1 + 16), r29);
    r6 = r22;
    r4 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r1 + 40));
    r5 = r21;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r31 = (r30 + 2400);
    r18 = MemoryInline::FlatRead8((r1 + 40));
    r31_addr_0 = (r31 + r27);
    r0 = MemoryInline::FlatRead8(r31_addr_0);
    r3 = (r30 + 4772);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r31_addr_1 = (r31 + r28);
    r0 = MemoryInline::FlatRead8(r31_addr_1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r31_addr_2 = (r31 + r29);
    r0 = MemoryInline::FlatRead8(r31_addr_2);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r31_addr_3 = (r31 + r18);
    r4 = MemoryInline::FlatRead8(r31_addr_3);
    r31_addr_4 = (r31 + r21);
    r5 = MemoryInline::FlatRead8(r31_addr_4);
    r31_addr_5 = (r31 + r22);
    r6 = MemoryInline::FlatRead8(r31_addr_5);
    r31_addr_6 = (r31 + r23);
    r7 = MemoryInline::FlatRead8(r31_addr_6);
    r31_addr_7 = (r31 + r24);
    r8 = MemoryInline::FlatRead8(r31_addr_7);
    r31_addr_8 = (r31 + r25);
    r9 = MemoryInline::FlatRead8(r31_addr_8);
    r31_addr_9 = (r31 + r26);
    r10 = MemoryInline::FlatRead8(r31_addr_9);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31_addr_10 = (r31 + r21);
    r0 = MemoryInline::FlatRead8(r31_addr_10);
    r31_addr_11 = (r31 + r22);
    r11 = MemoryInline::FlatRead8(r31_addr_11);
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r3 = (r3_rot_1 & -536870912);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r31_addr_12 = (r31 + r28);
    r8 = MemoryInline::FlatRead8(r31_addr_12);
    r3 = (r3 - r7);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r5 = (r5_rot_0 & -536870912);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r6 = (r6_rot_0 & -1);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r7 = (r6 + r7);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r12 = (r12_rot_0 & 1);
    r6 = (r5 - r4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & -536870912);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r10 = (r10_rot_0 & -1);
    r9 = (r7 & 255);
    r10 = (r10 + r4);
    r4 = (r5 - r12);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & -1);
    r31_addr_13 = (r31 + r18);
    r18 = MemoryInline::FlatRead8(r31_addr_13);
    r20 = (r5 + r12);
    r19_addr_1 = (r19 + r14);
    r14 = MemoryInline::FlatRead8(r19_addr_1);
    r31_addr_14 = (r31 + r29);
    r3 = MemoryInline::FlatRead8(r31_addr_14);
    r6 = (8 - r9);
    r7 = (r14 ^ r18);
    r4 = MemoryInline::FlatRead8((r17 + 2));
    r6 = PPC_Sraw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
    r31_addr_15 = (r31 + r24);
    r12 = MemoryInline::FlatRead8(r31_addr_15);
    r7 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r9));
    r5 = MemoryInline::FlatRead8((r17 + 1));
    r6 = (r7 | r6);
    r10 = (r10 & 255);
    r9 = (r5 ^ r12);
    r14_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r14 = (r14_rot_0 & -536870912);
    r5 = (8 - r10);
    r19_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r19 = (r19_rot_0 & 1);
    r14 = (r14 - r19);
    r11 = (r4 ^ r11);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r7 = (r7_rot_1 & -1);
    r5 = PPC_Sraw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r5));
    r10 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r10));
    r14 = (r20 & 255);
    r4 = (8 - r14);
    r19 = (r7 + r19);
    r5 = (r10 | r5);
    r31_addr_16 = (r31 + r26);
    r7 = MemoryInline::FlatRead8(r31_addr_16);
    r9 = MemoryInline::FlatRead8((r17 + 3));
    r4 = PPC_Sraw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r4));
    r10 = (r19 & 255);
    r11 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r14));
    r9 = (r9 ^ r7);
    r6 = (r6 & 255);
    r4 = (r11 | r4);
    r19 = (8 - r10);
    r11 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r10));
    r10 = PPC_Sraw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r19));
    r31_addr_17 = (r31 + r27);
    r9 = MemoryInline::FlatRead8(r31_addr_17);
    r11 = (r11 | r10);
    r10 = (r4 & 255);
    r4 = (r11 & 255);
    r11 = (r7 + r6);
    r6 = (r9 + r4);
    r7 = (r5 & 255);
    r5 = (r9 ^ r11);
    r31_addr_18 = (r31 + r23);
    r4 = MemoryInline::FlatRead8(r31_addr_18);
    r5 = (r5 & 255);
    r10 = (r12 + r10);
    r9 = (r4 + r7);
    r7 = (r18 ^ r6);
    r11 = (r0 ^ r9);
    r31_addr_19 = (r31 + r25);
    r9 = MemoryInline::FlatRead8(r31_addr_19);
    r6 = MemoryInline::FlatRead8((r17 + 4));
    r14 = (r11 & 255);
    r10 = (r9 ^ r10);
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r5));
    r19 = (r7 & 255);
    r6 = (r6 ^ r9);
    r20 = (r10 & 255);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r7 = (r7_rot_2 & -536870912);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r7 = (r7 - r5);
    r11 = MemoryInline::FlatRead8((r17 + 5));
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r12 = (r12_rot_1 & -1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 1);
    r11 = (r11 ^ r3);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r7 = (r7_rot_3 & -536870912);
    r3 = (r12 + r5);
    r5 = (r6 & 255);
    r6 = (r3 & 255);
    r3 = (r7 - r10);
    r7 = (r11 & 255);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -1);
    r11 = (8 - r6);
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r6 = (r4 + r10);
    r12 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r11));
    r10 = (r6 & 255);
    r4 = MemoryInline::FlatRead8((r1 + 56));
    r3 = (r3 | r12);
    r5 = r14;
    r11 = (8 - r10);
    r12 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r10));
    r10 = PPC_Sraw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r11));
    r3 = (r3 & 255);
    r10 = (r12 | r10);
    r6 = r20;
    r11 = (r8 + r3);
    r7 = r19;
    r10 = (r10 & 255);
    r3 = (r30 + 4812);
    r8 = (r8 + r10);
    r10 = (r0 ^ r11);
    r0 = (r9 ^ r8);
    r18 = (r10 & 255);
    r17 = (r0 & 255);
    r8 = r18;
    r9 = r17;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r3 = (r15 + 1);
    r0 = (r15 + 2);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r10 = (r10_rot_2 & -256);
    r11 = MemoryInline::FlatRead8((r1 + 40));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r3 = (r30 + 4840);
    r4 = (r18 + r10);
    r6 = (r17 + r10);
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    r4 = (r23 + r0);
    r7 = (r27 + r0);
    r5 = (r24 + r0);
    MemoryInline::FlatWriteRam32((r1 + 64), r4);
    r15 = (r26 + r0);
    r4 = MemoryInline::FlatRead8((r1 + 56));
    r26 = (r21 + r10);
    r12 = (r11 + r10);
    r27 = (r28 + r0);
    r4 = (r4 + r10);
    r28 = (r11 + r0);
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    r4 = (r22 + r0);
    r9 = (r25 + r0);
    r8 = (r20 + r10);
    MemoryInline::FlatWriteRam32((r1 + 72), r4);
    r4 = (r14 + r10);
    r24 = (r19 + r10);
    r11 = (r23 + r10);
    r10 = (r22 + r10);
    r22 = MemoryInline::FlatRead32((r1 + 60));
    r25 = (r29 + r0);
    r21 = (r21 + r0);
    r22_addr_0 = (r22 + r31);
    r0 = MemoryInline::FlatRead8(r22_addr_0);
    r22 = MemoryInline::FlatRead32((r1 + 64));
    r7_addr_0 = (r7 + r31);
    r7 = MemoryInline::FlatRead8(r7_addr_0);
    r22_addr_1 = (r22 + r31);
    r22 = MemoryInline::FlatRead8(r22_addr_1);
    r23 = (r0 ^ r7);
    r6_addr_0 = (r6 + r31);
    r6 = MemoryInline::FlatRead8(r6_addr_0);
    r22 = (r0 ^ r22);
    r4_addr_1 = (r4 + r31);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r4 = (r6 ^ r7);
    r5_addr_0 = (r5 + r31);
    r5 = MemoryInline::FlatRead8(r5_addr_0);
    r27_addr_0 = (r27 + r31);
    r7 = MemoryInline::FlatRead8(r27_addr_0);
    r6 = (r6 ^ r5);
    r5 = (r0 ^ r5);
    r27 = (r0 ^ r7);
    r26_addr_0 = (r26 + r31);
    r26 = MemoryInline::FlatRead8(r26_addr_0);
    r9_addr_0 = (r9 + r31);
    r0 = MemoryInline::FlatRead8(r9_addr_0);
    r7 = (r26 ^ r7);
    r8_addr_0 = (r8 + r31);
    r9 = MemoryInline::FlatRead8(r8_addr_0);
    r25_addr_0 = (r25 + r31);
    r8 = MemoryInline::FlatRead8(r25_addr_0);
    r24_addr_0 = (r24 + r31);
    r26 = MemoryInline::FlatRead8(r24_addr_0);
    r25 = (r9 ^ r0);
    r28_addr_0 = (r28 + r31);
    r24 = MemoryInline::FlatRead8(r28_addr_0);
    r28 = (r9 ^ r8);
    r11_addr_0 = (r11 + r31);
    r9 = MemoryInline::FlatRead8(r11_addr_0);
    r8 = (r26 ^ r8);
    r26 = (r26 ^ r24);
    r11 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r9 ^ r0);
    r24 = MemoryInline::FlatRead32((r1 + 72));
    r11_addr_1 = (r11 + r31);
    r11 = MemoryInline::FlatRead8(r11_addr_1);
    r24_addr_1 = (r24 + r31);
    r24 = MemoryInline::FlatRead8(r24_addr_1);
    r21_addr_0 = (r21 + r31);
    r9 = MemoryInline::FlatRead8(r21_addr_0);
    r21 = (r11 ^ r24);
    r15_addr_0 = (r15 + r31);
    r15 = MemoryInline::FlatRead8(r15_addr_0);
    r11 = (r11 ^ r9);
    r10_addr_0 = (r10 + r31);
    r9 = MemoryInline::FlatRead8(r10_addr_0);
    r12_addr_0 = (r12 + r31);
    r12 = MemoryInline::FlatRead8(r12_addr_0);
    r9 = (r9 ^ r15);
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r22));
    r10 = (r12 ^ r15);
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r21));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r23));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r4 = MemoryInline::FlatRead8((r1 + 32));
    r5 = MemoryInline::FlatRead8((r1 + 33));
    r6 = MemoryInline::FlatRead8((r1 + 34));
    r7 = MemoryInline::FlatRead8((r1 + 35));
    r8 = MemoryInline::FlatRead8((r1 + 36));
    r9 = MemoryInline::FlatRead8((r1 + 37));
    r10 = MemoryInline::FlatRead8((r1 + 38));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r1 + 31));
    r3 = (r30 + 4872);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::ReadResolved8(guest_range_4, 0u, (r1 + 24));
    r5 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r1 + 25));
    r6 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r1 + 26));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r1 + 27));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r1 + 28));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r1 + 29));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r1 + 30));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r3 = 0;
    r6 = (r1 + 40);
    r4 = (9 - r3);
    r0 = 2;
    r3 = 1;
    r6_addr_1 = (r6 + r4);
    r5 = MemoryInline::FlatRead8(r6_addr_1);
    r3_subfic_ra_0 = r3;
    r3 = (9 - r3_subfic_ra_0);
    r6_addr_2 = (r6 + r3);
    r4 = MemoryInline::FlatRead8(r6_addr_2);
    r3 = (9 - r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r16 + 2324), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r16 + 2324), static_cast<uint8_t>(r5));
    r0 = 3;
    r6_addr_3 = (r6 + r3);
    r5 = MemoryInline::FlatRead8(r6_addr_3);
    r3 = (9 - r0);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r16 + 2325), static_cast<uint8_t>(r4));
    r0 = 4;
    r6_addr_4 = (r6 + r3);
    r4 = MemoryInline::FlatRead8(r6_addr_4);
    r0_subfic_ra_0 = r0;
    r0 = (9 - r0_subfic_ra_0);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r16 + 2326), static_cast<uint8_t>(r5));
    r3 = 5;
    r6_addr_5 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_5);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r16 + 2327), static_cast<uint8_t>(r4));
    r4 = (9 - r3);
    r3 = 6;
    r6_addr_6 = (r6 + r4);
    r5 = MemoryInline::FlatRead8(r6_addr_6);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r16 + 2328), static_cast<uint8_t>(r0));
    r3_subfic_ra_1 = r3;
    r3 = (9 - r3_subfic_ra_1);
    r0 = 7;
    r6_addr_7 = (r6 + r3);
    r4 = MemoryInline::FlatRead8(r6_addr_7);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r16 + 2329), static_cast<uint8_t>(r5));
    r3 = (9 - r0);
    r0 = 8;
    r6_addr_8 = (r6 + r3);
    r5 = MemoryInline::FlatRead8(r6_addr_8);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r16 + 2330), static_cast<uint8_t>(r4));
    r3 = (9 - r0);
    r0 = 9;
    r6_addr_9 = (r6 + r3);
    r4 = MemoryInline::FlatRead8(r6_addr_9);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r16 + 2331), static_cast<uint8_t>(r5));
    r0_subfic_ra_1 = r0;
    r0 = (9 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(9) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r6_addr_10 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_10);
    r3 = (r16 + 2340);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r16 + 2332), static_cast<uint8_t>(r4));
    r4 = (r1 + 32);
    r5 = 8;
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r16 + 2333), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 56));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r16 + 2334), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r16 + 2335), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r16 + 2336), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r16 + 2337), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r16 + 2338), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r16 + 2339), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r16 + 2348);
    r4 = (r1 + 24);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 52));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 160);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE05B gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CA9AC func_801CA9AC preserves=true fpr_mask=0x00000000
