#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805302C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_stbu_ea_0 = 0;
    uint32_t r9_stbu_ea_1 = 0;
    uint32_t r9_stbu_ea_2 = 0;
    uint32_t r9_stbu_ea_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

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

    goto loc_805302C4;

loc_805302C4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r22);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 44), r31);
    }
    r31 = r3;
    r3 = (r3 + 3088);
    r4 = (r31 + 32);
    ctx->lr = 0x805302E4u;
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
    InvokeDirectCpu<0x8052FB90u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 3092), 0, 3052u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 3092));
    r4 = (r31 + 40);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 3093));
    r3 = (r31 + 3096);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 3094));
    r5 = (r31 + 2920);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 3095));
    r0 = 38;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 3052u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 36), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 37), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 38), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 39), static_cast<uint8_t>(r6));
}

loc_80530314:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r3 + 4));
    r9 = (r4 + 35);
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r4 + 4), static_cast<uint8_t>(r6));
    r8 = (r3 + 35);
    r6 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r4 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r4 + 6), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_4, 4u, (r4 + 8), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r4 + 12), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r4 + 16), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r4 + 24), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_3, 24u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_4, 24u, (r4 + 28), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 25u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_4, 25u, (r4 + 29), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_4, 28u, (r4 + 32), r6);
    ctr = r0;
}

loc_80530370:
{
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r6 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r7));
    r9_stbu_ea_3 = (r9 + 2);
    MemoryInline::FlatWrite8(r9_stbu_ea_3, static_cast<uint8_t>(r6));
    r9 = r9_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80530370;
    }
}

loc_80530384:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 112), 0, 125u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r3 + 112));
    guest_range_6 = MemoryInline::ResolveRangeHost((r4 + 112), 0, 125u, false, true);
    MemoryInline::WriteResolved32(guest_range_6, 0u, (r4 + 112), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_5, 4u, (r3 + 116));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r4 + 116), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 5u, (r3 + 117));
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r4 + 117), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 6u, (r3 + 118));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r4 + 118), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 7u, (r3 + 119));
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r4 + 119), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r3 + 120));
    MemoryInline::WriteResolved32(guest_range_6, 8u, (r4 + 120), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 12u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r3 + 128));
            r7 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r3 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r4 + 124), r7);
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r4 + 128), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r3 + 136));
            r7 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r3 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 20u, (r4 + 132), r7);
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r4 + 136), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 28u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r3 + 144));
            r7 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r3 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 28u, (r4 + 140), r7);
        MemoryInline::WriteResolved32(guest_range_6, 32u, (r4 + 144), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r3 + 152));
            r7 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r3 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 36u, (r4 + 148), r7);
        MemoryInline::WriteResolved32(guest_range_6, 40u, (r4 + 152), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 44u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r3 + 160));
            r7 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r3 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 44u, (r4 + 156), r7);
        MemoryInline::WriteResolved32(guest_range_6, 48u, (r4 + 160), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 52u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r3 + 168));
            r7 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r3 + 164));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 52u, (r4 + 164), r7);
        MemoryInline::WriteResolved32(guest_range_6, 56u, (r4 + 168), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 60u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 64u, (r3 + 176));
            r7 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r3 + 172));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 60u, (r4 + 172), r7);
        MemoryInline::WriteResolved32(guest_range_6, 64u, (r4 + 176), r6);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_5, 68u, (r3 + 180));
    MemoryInline::WriteResolved32(guest_range_6, 68u, (r4 + 180), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_5, 72u, (r3 + 184));
    MemoryInline::WriteResolved8(guest_range_6, 72u, (r4 + 184), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 73u, (r3 + 185));
    MemoryInline::WriteResolved8(guest_range_6, 73u, (r4 + 185), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 74u, (r3 + 186));
    MemoryInline::WriteResolved8(guest_range_6, 74u, (r4 + 186), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_5, 76u, (r3 + 188));
    MemoryInline::WriteResolved32(guest_range_6, 76u, (r4 + 188), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_5, 80u, (r3 + 192));
    MemoryInline::WriteResolved8(guest_range_6, 80u, (r4 + 192), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 81u, (r3 + 193));
    MemoryInline::WriteResolved8(guest_range_6, 81u, (r4 + 193), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 82u, (r3 + 194));
    MemoryInline::WriteResolved8(guest_range_6, 82u, (r4 + 194), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_5, 84u, (r3 + 196));
    MemoryInline::WriteResolved32(guest_range_6, 84u, (r4 + 196), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 88u, (r3 + 200));
    MemoryInline::WriteResolved32(guest_range_6, 88u, (r4 + 200), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 92u, (r3 + 204));
    MemoryInline::WriteResolved32(guest_range_6, 92u, (r4 + 204), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 96u, (r3 + 208));
    MemoryInline::WriteResolved32(guest_range_6, 96u, (r4 + 208), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 100u, (r3 + 212));
    MemoryInline::WriteResolved32(guest_range_6, 100u, (r4 + 212), r6);
    r6 = MemoryInline::ReadResolved16(guest_range_5, 104u, (r3 + 216));
    MemoryInline::WriteResolved16(guest_range_6, 104u, (r4 + 216), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_5, 106u, (r3 + 218));
    MemoryInline::WriteResolved16(guest_range_6, 106u, (r4 + 218), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_5, 108u, (r3 + 220));
    MemoryInline::WriteResolved16(guest_range_6, 108u, (r4 + 220), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_5, 110u, (r3 + 222));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::WriteResolved16(guest_range_6, 110u, (r4 + 222), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 112u, (r3 + 224));
    MemoryInline::WriteResolved8(guest_range_6, 112u, (r4 + 224), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 113u, (r3 + 225));
    MemoryInline::WriteResolved8(guest_range_6, 113u, (r4 + 225), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 114u, (r3 + 226));
    MemoryInline::WriteResolved8(guest_range_6, 114u, (r4 + 226), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_5, 120u, (r3 + 232));
    MemoryInline::WriteResolved16(guest_range_6, 120u, (r4 + 232), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 124u, (r3 + 236));
    r3 = (r3 + 240);
    MemoryInline::WriteResolved8(guest_range_6, 124u, (r4 + 236), static_cast<uint8_t>(r6));
    r4 = (r4 + 240);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_805304E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80530314;
    }
}

loc_805304E4:
{
    r22 = MemoryInline::ReadResolved32(guest_range_0, 2884u, (r31 + 5976));
    r0 = 14;
    r23 = MemoryInline::ReadResolved32(guest_range_0, 2888u, (r31 + 5980));
    r5 = (r31 + 2968);
    r24 = MemoryInline::ReadResolved32(guest_range_0, 2892u, (r31 + 5984));
    r4 = (r31 + 6024);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 2896u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 2896u, (r31 + 5988));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 2900u, (r31 + 5992));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 2904u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 2904u, (r31 + 5996));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 2908u, (r31 + 6000));
        }
    }
    r29 = MemoryInline::ReadResolved8(guest_range_0, 2912u, (r31 + 6004));
    r30 = MemoryInline::ReadResolved8(guest_range_0, 2913u, (r31 + 6005));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 2914u, (r31 + 6006));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 2915u, (r31 + 6007));
    r10 = MemoryInline::ReadResolved32(guest_range_0, 2916u, (r31 + 6008));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 2920u, (r31 + 6012));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2921u, (r31 + 6013));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 2924u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 2924u, (r31 + 6016));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 2928u, (r31 + 6020));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 2932u, (r31 + 6024));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2884u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2884u, (r31 + 2920), r22);
        MemoryInline::WriteResolved32(guest_range_1, 2888u, (r31 + 2924), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2892u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2892u, (r31 + 2928), r24);
        MemoryInline::WriteResolved32(guest_range_1, 2896u, (r31 + 2932), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2900u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2900u, (r31 + 2936), r26);
        MemoryInline::WriteResolved32(guest_range_1, 2904u, (r31 + 2940), r27);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2908u, (r31 + 2944), r28);
    MemoryInline::WriteResolved8(guest_range_1, 2912u, (r31 + 2948), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 2913u, (r31 + 2949), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 2914u, (r31 + 2950), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 2915u, (r31 + 2951), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved32(guest_range_1, 2916u, (r31 + 2952), r10);
    MemoryInline::WriteResolved8(guest_range_1, 2920u, (r31 + 2956), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 2921u, (r31 + 2957), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2924u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2924u, (r31 + 2960), r7);
        MemoryInline::WriteResolved32(guest_range_1, 2928u, (r31 + 2964), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2932u, (r31 + 2968), r3);
    ctr = r0;
}

loc_8053057C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053057C;
    }
}

loc_80530590:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3048u, (r31 + 6140));
    MemoryInline::WriteResolved32(guest_range_1, 3048u, (r31 + 3084), r0);
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_7, 44u, (r1 + 52));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805302C4 func_805302C4 preserves=true fpr_mask=0x00000000
