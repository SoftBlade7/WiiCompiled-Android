#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015CE0C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8015CE0C;

loc_8015CE0C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
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
    r0 = 0;
    r20 = r4;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = (r1 + 8);
    r21 = r5;
    r19 = r3;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r22 = r6;
    r4 = (r1 + 12);
    r5 = (r1 + 16);
    ctx->lr = 0x8015CE4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015C868u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r23 = (r21 + 32);
    r31 = r20;
    r29 = 0;
    MemoryInline::FlatWrite32((r19 + 32), r0);
    r30 = 0;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 * 12);
    r27 = (r0 + r3);
    r0 = (r27 + 63);
    r25 = (r23 + r3);
    r28 = (r0 & -32);
    r24 = r25;
    r26 = r28;
    goto loc_8015CFB4;
}

loc_8015CE8C:
{
    MemoryInline::FlatWrite32((r19 + 28), r30);
    r6 = (r24 - r25);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r4 = (r4_rot_2 & 255);
    r3 = r24;
    r5 = MemoryInline::FlatRead32((r19 + 24));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r23 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r23 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r23 + 3), static_cast<uint8_t>(r6));
    r4 = MemoryInline::FlatRead32((r19 + 20));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r19 + 20));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r19 + 24));
    r3 = (r3 + r24);
    r24 = (r3 + 1);
}

loc_8015CED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015CF54;
    }
}

loc_8015CED8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r19 + 8), 0, 28u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r19 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 255);
    guest_range_3 = MemoryInline::ResolveRangeHost((r23 + 4), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r23 + 4), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r19 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r23 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r19 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r23 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r19 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r23 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r19 + 32));
    r0 = (r30 + r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r23 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r19 + 32));
    r0 = (r30 + r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r23 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r19 + 32));
    r0 = (r30 + r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_8 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r23 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r19 + 32));
    r0 = (r30 + r0);
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r23 + 11), static_cast<uint8_t>(r0));
    goto loc_8015CFA8;
}

loc_8015CF54:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & 255);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    guest_range_4 = MemoryInline::ResolveRangeHost((r23 + 4), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r23 + 4), static_cast<uint8_t>(r0));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(16));
    r5 = (r5_rot_2 & 255);
    r0 = (r4 + 31);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r23 + 5), static_cast<uint8_t>(r5));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r7 = (r7_rot_2 & 255);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r6 = (r6_rot_2 & 255);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r5 = (r5_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r23 + 6), static_cast<uint8_t>(r7));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r4 = (r4_rot_3 & 255);
    r0 = (r0 & -32);
    r31 = (r31 + 12);
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r23 + 7), static_cast<uint8_t>(r26));
    r26 = (r26 + r0);
    r29 = (r29 + 1);
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r23 + 8), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r23 + 9), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r23 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r23 + 11), static_cast<uint8_t>(r3));
}

loc_8015CFA8:
{
    r19 = MemoryInline::FlatRead32((r19 + 16));
    r30 = (r30 + 1);
    r23 = (r23 + 12);
}

loc_8015CFB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_8015CFBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015CE8C;
    }
}

loc_8015CFC0:
{
    r6 = (r22 - r28);
    r7 = (r21 + r22);
    r5 = 0;
    r3 = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8015D060;
    }
}

loc_8015CFD4:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 536870911);
}

loc_8015CFD8:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015D04C;
    }
}

loc_8015CFE0:
{
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015CFE0;
    }
}

loc_8015D044:
{
    r3 = (r3 & 7);
}

loc_8015D048:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8015D060;
    }
}

loc_8015D04C:
{
    ctr = r3;
}

loc_8015D050:
{
    r4 = (r7 - r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015D050;
    }
}

loc_8015D060:
{
    r19 = r28;
    r22 = 0;
    goto loc_8015D094;
}

loc_8015D06C:
{
    r4 = MemoryInline::FlatRead32((r20 + 4));
    r3 = (r21 + r19);
    r5 = MemoryInline::FlatRead32((r20 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 8));
    r20 = (r20 + 12);
    r22 = (r22 + 1);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r19 = (r19 + r0);
}

loc_8015D094:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r29));
}

loc_8015D098:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015D06C;
    }
}

loc_8015D09C:
{
    r3 = 1437204480;
    r19 = 0;
    r3 = (r3 + 14381);
    r0 = 32;
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 24), r3);
    r3 = r21;
    r4 = (r1 + 24);
    r5 = 32;
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 32), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 36), r28);
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 40), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 44), r19);
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 48), r19);
    }
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 52), r19);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r13 + -26120), r19);
    r11 = (r1 + 112);
    r3 = 1;
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
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF827FB gpr_write=0xFFF809FB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015CE0C func_8015CE0C preserves=true fpr_mask=0x00000000
