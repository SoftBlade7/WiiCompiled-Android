#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80531070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_stbu_ea_0 = 0;
    uint32_t r10_stbu_ea_1 = 0;
    uint32_t r10_stbu_ea_2 = 0;
    uint32_t r10_stbu_ea_3 = 0;
    uint32_t r12_stbu_ea_0 = 0;
    uint32_t r12_stbu_ea_1 = 0;
    uint32_t r12_stbu_ea_2 = 0;
    uint32_t r12_stbu_ea_3 = 0;
    uint32_t r12_stbu_ea_4 = 0;
    uint32_t r23_stbu_ea_0 = 0;
    uint32_t r23_stbu_ea_1 = 0;
    uint32_t r23_stbu_ea_2 = 0;
    uint32_t r23_stbu_ea_3 = 0;
    uint32_t r23_stbu_ea_4 = 0;
    uint32_t r23_stbu_ea_5 = 0;
    uint32_t r9_stbu_ea_0 = 0;
    uint32_t r9_stbu_ea_1 = 0;
    uint32_t r9_stbu_ea_2 = 0;
    uint32_t r9_stbu_ea_3 = 0;
    uint32_t r9_stbu_ea_4 = 0;
    uint32_t r9_stbu_ea_5 = 0;
    uint32_t r9_stbu_ea_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_22 = nullptr;
    uint8_t* guest_range_23 = nullptr;
    uint8_t* guest_range_24 = nullptr;
    uint8_t* guest_range_25 = nullptr;
    uint8_t* guest_range_26 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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

    goto loc_80531070;

loc_80531070:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r5 = (r3 + 3096);
    r4 = (r3 + 6152);
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r0);
    r6 = (r3 + 5976);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 20), r21);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 60), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 6148), 0, 3052u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 6148));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 6149));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 6150));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 6151));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 3092), 0, 3052u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 3092), static_cast<uint8_t>(r0));
    r0 = 38;
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 3093), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 3094), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3095), static_cast<uint8_t>(r7));
}

loc_805310B4:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 32u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_4, 0u, (r4 + 4));
    r10 = (r5 + 35);
    guest_range_5 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r5 + 4), static_cast<uint8_t>(r7));
    r9 = (r4 + 35);
    r7 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r5 + 5), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r5 + 6), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r5 + 8), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r5 + 12), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r5 + 16), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r5 + 24), r7);
    r7 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r4 + 28));
    MemoryInline::WriteResolved8(guest_range_5, 24u, (r5 + 28), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r4 + 29));
    MemoryInline::WriteResolved8(guest_range_5, 25u, (r5 + 29), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r5 + 32), r7);
    ctr = r0;
}

loc_80531110:
{
    r8 = MemoryInline::FlatRead8((r9 + 1));
    r9 = (r9 + 2);
    r7 = MemoryInline::FlatRead8(r9);
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r8));
    r10_stbu_ea_3 = (r10 + 2);
    MemoryInline::FlatWrite8(r10_stbu_ea_3, static_cast<uint8_t>(r7));
    r10 = r10_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80531110;
    }
}

loc_80531124:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r4 + 112), 0, 125u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r4 + 112));
    guest_range_7 = MemoryInline::ResolveRangeHost((r5 + 112), 0, 125u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, (r5 + 112), r7);
    r7 = MemoryInline::ReadResolved8(guest_range_6, 4u, (r4 + 116));
    MemoryInline::WriteResolved8(guest_range_7, 4u, (r5 + 116), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 5u, (r4 + 117));
    MemoryInline::WriteResolved8(guest_range_7, 5u, (r5 + 117), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 6u, (r4 + 118));
    MemoryInline::WriteResolved8(guest_range_7, 6u, (r5 + 118), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 7u, (r4 + 119));
    MemoryInline::WriteResolved8(guest_range_7, 7u, (r5 + 119), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r4 + 120));
    MemoryInline::WriteResolved32(guest_range_7, 8u, (r5 + 120), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 12u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r4 + 128));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r4 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r5 + 124), r8);
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r5 + 128), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 20u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r4 + 136));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r4 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r5 + 132), r8);
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r5 + 136), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 28u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r4 + 144));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r4 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r5 + 140), r8);
        MemoryInline::WriteResolved32(guest_range_7, 32u, (r5 + 144), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 36u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r4 + 152));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r4 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 36u, (r5 + 148), r8);
        MemoryInline::WriteResolved32(guest_range_7, 40u, (r5 + 152), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 44u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r4 + 160));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r4 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 44u, (r5 + 156), r8);
        MemoryInline::WriteResolved32(guest_range_7, 48u, (r5 + 160), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 52u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r4 + 168));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r4 + 164));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 52u, (r5 + 164), r8);
        MemoryInline::WriteResolved32(guest_range_7, 56u, (r5 + 168), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 60u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 64u, (r4 + 176));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r4 + 172));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 60u, (r5 + 172), r8);
        MemoryInline::WriteResolved32(guest_range_7, 64u, (r5 + 176), r7);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_6, 68u, (r4 + 180));
    MemoryInline::WriteResolved32(guest_range_7, 68u, (r5 + 180), r7);
    r7 = MemoryInline::ReadResolved8(guest_range_6, 72u, (r4 + 184));
    MemoryInline::WriteResolved8(guest_range_7, 72u, (r5 + 184), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 73u, (r4 + 185));
    MemoryInline::WriteResolved8(guest_range_7, 73u, (r5 + 185), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 74u, (r4 + 186));
    MemoryInline::WriteResolved8(guest_range_7, 74u, (r5 + 186), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_6, 76u, (r4 + 188));
    MemoryInline::WriteResolved32(guest_range_7, 76u, (r5 + 188), r7);
    r7 = MemoryInline::ReadResolved8(guest_range_6, 80u, (r4 + 192));
    MemoryInline::WriteResolved8(guest_range_7, 80u, (r5 + 192), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 81u, (r4 + 193));
    MemoryInline::WriteResolved8(guest_range_7, 81u, (r5 + 193), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 82u, (r4 + 194));
    MemoryInline::WriteResolved8(guest_range_7, 82u, (r5 + 194), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_6, 84u, (r4 + 196));
    MemoryInline::WriteResolved32(guest_range_7, 84u, (r5 + 196), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_6, 88u, (r4 + 200));
    MemoryInline::WriteResolved32(guest_range_7, 88u, (r5 + 200), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_6, 92u, (r4 + 204));
    MemoryInline::WriteResolved32(guest_range_7, 92u, (r5 + 204), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_6, 96u, (r4 + 208));
    MemoryInline::WriteResolved32(guest_range_7, 96u, (r5 + 208), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_6, 100u, (r4 + 212));
    MemoryInline::WriteResolved32(guest_range_7, 100u, (r5 + 212), r7);
    r7 = MemoryInline::ReadResolved16(guest_range_6, 104u, (r4 + 216));
    MemoryInline::WriteResolved16(guest_range_7, 104u, (r5 + 216), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_6, 106u, (r4 + 218));
    MemoryInline::WriteResolved16(guest_range_7, 106u, (r5 + 218), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_6, 108u, (r4 + 220));
    MemoryInline::WriteResolved16(guest_range_7, 108u, (r5 + 220), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_6, 110u, (r4 + 222));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 110u, (r5 + 222), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 112u, (r4 + 224));
    MemoryInline::WriteResolved8(guest_range_7, 112u, (r5 + 224), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 113u, (r4 + 225));
    MemoryInline::WriteResolved8(guest_range_7, 113u, (r5 + 225), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 114u, (r4 + 226));
    MemoryInline::WriteResolved8(guest_range_7, 114u, (r5 + 226), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_6, 120u, (r4 + 232));
    MemoryInline::WriteResolved16(guest_range_7, 120u, (r5 + 232), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 124u, (r4 + 236));
    r4 = (r4 + 240);
    MemoryInline::WriteResolved8(guest_range_7, 124u, (r5 + 236), static_cast<uint8_t>(r7));
    r5 = (r5 + 240);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_80531280:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805310B4;
    }
}

loc_80531284:
{
    r21 = MemoryInline::ReadResolved32(guest_range_0, 2884u, (r3 + 9032));
    r0 = 14;
    r30 = MemoryInline::ReadResolved32(guest_range_0, 2888u, (r3 + 9036));
    r6 = (r3 + 6024);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 2892u, (r3 + 9040));
    r5 = (r3 + 9080);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 2896u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 2896u, (r3 + 9044));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 2900u, (r3 + 9048));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 2904u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 2904u, (r3 + 9052));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 2908u, (r3 + 9056));
        }
    }
    r24 = MemoryInline::ReadResolved8(guest_range_0, 2912u, (r3 + 9060));
    r23 = MemoryInline::ReadResolved8(guest_range_0, 2913u, (r3 + 9061));
    r22 = MemoryInline::ReadResolved8(guest_range_0, 2914u, (r3 + 9062));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 2915u, (r3 + 9063));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 2916u, (r3 + 9064));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 2920u, (r3 + 9068));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 2921u, (r3 + 9069));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 2924u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 2924u, (r3 + 9072));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 2928u, (r3 + 9076));
        }
    }
    r4 = MemoryInline::ReadResolved32(guest_range_0, 2932u, (r3 + 9080));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2884u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2884u, (r3 + 5976), r21);
        MemoryInline::WriteResolved32(guest_range_1, 2888u, (r3 + 5980), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2892u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2892u, (r3 + 5984), r29);
        MemoryInline::WriteResolved32(guest_range_1, 2896u, (r3 + 5988), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2900u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2900u, (r3 + 5992), r27);
        MemoryInline::WriteResolved32(guest_range_1, 2904u, (r3 + 5996), r26);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2908u, (r3 + 6000), r25);
    MemoryInline::WriteResolved8(guest_range_1, 2912u, (r3 + 6004), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_1, 2913u, (r3 + 6005), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_1, 2914u, (r3 + 6006), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_1, 2915u, (r3 + 6007), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved32(guest_range_1, 2916u, (r3 + 6008), r11);
    MemoryInline::WriteResolved8(guest_range_1, 2920u, (r3 + 6012), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 2921u, (r3 + 6013), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2924u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2924u, (r3 + 6016), r8);
        MemoryInline::WriteResolved32(guest_range_1, 2928u, (r3 + 6020), r7);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2932u, (r3 + 6024), r4);
    ctr = r0;
}

loc_8053131C:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r5 + 8);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053131C;
    }
}

loc_80531330:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3048u, (r3 + 9196));
    r4 = (r31 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 3048u, (r3 + 6140), r0);
    r3 = (r3 + 3088);
    ctx->lr = 0x80531344u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r9 = MemoryInline::FlatRead8((r31 + 3092));
    r3 = (r31 + 40);
    r8 = MemoryInline::FlatRead8((r31 + 3093));
    r4 = (r31 + 3096);
    r7 = MemoryInline::FlatRead8((r31 + 3094));
    r5 = (r31 + 2920);
    r6 = MemoryInline::FlatRead8((r31 + 3095));
    r0 = 38;
    MemoryInline::FlatWrite8((r31 + 36), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r31 + 37), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r31 + 38), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r31 + 39), static_cast<uint8_t>(r6));
}

loc_80531374:
{
    guest_range_8 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_8, 0u, (r4 + 4));
    r9 = (r3 + 35);
    guest_range_9 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, (r3 + 4), static_cast<uint8_t>(r6));
    r8 = (r4 + 35);
    r6 = MemoryInline::ReadResolved8(guest_range_8, 1u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_9, 1u, (r3 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_8, 2u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_9, 2u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_9, 4u, (r3 + 8), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_9, 8u, (r3 + 12), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_9, 12u, (r3 + 16), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_9, 20u, (r3 + 24), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_8, 24u, (r4 + 28));
    MemoryInline::WriteResolved8(guest_range_9, 24u, (r3 + 28), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_8, 25u, (r4 + 29));
    MemoryInline::WriteResolved8(guest_range_9, 25u, (r3 + 29), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_9, 28u, (r3 + 32), r6);
    ctr = r0;
}

loc_805313D0:
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
        goto loc_805313D0;
    }
}

loc_805313E4:
{
    guest_range_10 = MemoryInline::ResolveRangeHost((r4 + 112), 0, 125u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r4 + 112));
    guest_range_11 = MemoryInline::ResolveRangeHost((r3 + 112), 0, 125u, false, true);
    MemoryInline::WriteResolved32(guest_range_11, 0u, (r3 + 112), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_10, 4u, (r4 + 116));
    MemoryInline::WriteResolved8(guest_range_11, 4u, (r3 + 116), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 5u, (r4 + 117));
    MemoryInline::WriteResolved8(guest_range_11, 5u, (r3 + 117), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 6u, (r4 + 118));
    MemoryInline::WriteResolved8(guest_range_11, 6u, (r3 + 118), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 7u, (r4 + 119));
    MemoryInline::WriteResolved8(guest_range_11, 7u, (r3 + 119), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_10, 8u, (r4 + 120));
    MemoryInline::WriteResolved32(guest_range_11, 8u, (r3 + 120), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 12u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_10, 16u, (r4 + 128));
            r7 = MemoryInline::ReadResolved32(guest_range_10, 12u, (r4 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 12u, (r3 + 124), r7);
        MemoryInline::WriteResolved32(guest_range_11, 16u, (r3 + 128), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_10, 24u, (r4 + 136));
            r7 = MemoryInline::ReadResolved32(guest_range_10, 20u, (r4 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 20u, (r3 + 132), r7);
        MemoryInline::WriteResolved32(guest_range_11, 24u, (r3 + 136), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 28u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_10, 32u, (r4 + 144));
            r7 = MemoryInline::ReadResolved32(guest_range_10, 28u, (r4 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 28u, (r3 + 140), r7);
        MemoryInline::WriteResolved32(guest_range_11, 32u, (r3 + 144), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_10, 40u, (r4 + 152));
            r7 = MemoryInline::ReadResolved32(guest_range_10, 36u, (r4 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 36u, (r3 + 148), r7);
        MemoryInline::WriteResolved32(guest_range_11, 40u, (r3 + 152), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 44u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_10, 48u, (r4 + 160));
            r7 = MemoryInline::ReadResolved32(guest_range_10, 44u, (r4 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 44u, (r3 + 156), r7);
        MemoryInline::WriteResolved32(guest_range_11, 48u, (r3 + 160), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 52u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_10, 56u, (r4 + 168));
            r7 = MemoryInline::ReadResolved32(guest_range_10, 52u, (r4 + 164));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 52u, (r3 + 164), r7);
        MemoryInline::WriteResolved32(guest_range_11, 56u, (r3 + 168), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 60u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_10, 64u, (r4 + 176));
            r7 = MemoryInline::ReadResolved32(guest_range_10, 60u, (r4 + 172));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 60u, (r3 + 172), r7);
        MemoryInline::WriteResolved32(guest_range_11, 64u, (r3 + 176), r6);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_10, 68u, (r4 + 180));
    MemoryInline::WriteResolved32(guest_range_11, 68u, (r3 + 180), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_10, 72u, (r4 + 184));
    MemoryInline::WriteResolved8(guest_range_11, 72u, (r3 + 184), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 73u, (r4 + 185));
    MemoryInline::WriteResolved8(guest_range_11, 73u, (r3 + 185), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 74u, (r4 + 186));
    MemoryInline::WriteResolved8(guest_range_11, 74u, (r3 + 186), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_10, 76u, (r4 + 188));
    MemoryInline::WriteResolved32(guest_range_11, 76u, (r3 + 188), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_10, 80u, (r4 + 192));
    MemoryInline::WriteResolved8(guest_range_11, 80u, (r3 + 192), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 81u, (r4 + 193));
    MemoryInline::WriteResolved8(guest_range_11, 81u, (r3 + 193), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 82u, (r4 + 194));
    MemoryInline::WriteResolved8(guest_range_11, 82u, (r3 + 194), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_10, 84u, (r4 + 196));
    MemoryInline::WriteResolved32(guest_range_11, 84u, (r3 + 196), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_10, 88u, (r4 + 200));
    MemoryInline::WriteResolved32(guest_range_11, 88u, (r3 + 200), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_10, 92u, (r4 + 204));
    MemoryInline::WriteResolved32(guest_range_11, 92u, (r3 + 204), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_10, 96u, (r4 + 208));
    MemoryInline::WriteResolved32(guest_range_11, 96u, (r3 + 208), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_10, 100u, (r4 + 212));
    MemoryInline::WriteResolved32(guest_range_11, 100u, (r3 + 212), r6);
    r6 = MemoryInline::ReadResolved16(guest_range_10, 104u, (r4 + 216));
    MemoryInline::WriteResolved16(guest_range_11, 104u, (r3 + 216), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_10, 106u, (r4 + 218));
    MemoryInline::WriteResolved16(guest_range_11, 106u, (r3 + 218), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_10, 108u, (r4 + 220));
    MemoryInline::WriteResolved16(guest_range_11, 108u, (r3 + 220), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_10, 110u, (r4 + 222));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::WriteResolved16(guest_range_11, 110u, (r3 + 222), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 112u, (r4 + 224));
    MemoryInline::WriteResolved8(guest_range_11, 112u, (r3 + 224), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 113u, (r4 + 225));
    MemoryInline::WriteResolved8(guest_range_11, 113u, (r3 + 225), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 114u, (r4 + 226));
    MemoryInline::WriteResolved8(guest_range_11, 114u, (r3 + 226), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_10, 120u, (r4 + 232));
    MemoryInline::WriteResolved16(guest_range_11, 120u, (r3 + 232), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 124u, (r4 + 236));
    r4 = (r4 + 240);
    MemoryInline::WriteResolved8(guest_range_11, 124u, (r3 + 236), static_cast<uint8_t>(r6));
    r3 = (r3 + 240);
}

loc_80531540:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r5))) {
        goto loc_80531374;
    }
}

loc_80531544:
{
    guest_range_12 = MemoryInline::ResolveRangeHost((r31 + 5976), 0, 52u, true, false);
    r30 = MemoryInline::ReadResolved32(guest_range_12, 0u, (r31 + 5976));
    r0 = 14;
    r29 = MemoryInline::ReadResolved32(guest_range_12, 4u, (r31 + 5980));
    r5 = (r31 + 2968);
    r28 = MemoryInline::ReadResolved32(guest_range_12, 8u, (r31 + 5984));
    r4 = (r31 + 6024);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_12, 12u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_12, 12u, (r31 + 5988));
            r26 = MemoryInline::ReadResolved32(guest_range_12, 16u, (r31 + 5992));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_12, 20u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_12, 20u, (r31 + 5996));
            r24 = MemoryInline::ReadResolved32(guest_range_12, 24u, (r31 + 6000));
        }
    }
    r23 = MemoryInline::ReadResolved8(guest_range_12, 28u, (r31 + 6004));
    r22 = MemoryInline::ReadResolved8(guest_range_12, 29u, (r31 + 6005));
    r12 = MemoryInline::ReadResolved8(guest_range_12, 30u, (r31 + 6006));
    r11 = MemoryInline::ReadResolved8(guest_range_12, 31u, (r31 + 6007));
    r10 = MemoryInline::ReadResolved32(guest_range_12, 32u, (r31 + 6008));
    r9 = MemoryInline::ReadResolved8(guest_range_12, 36u, (r31 + 6012));
    r8 = MemoryInline::ReadResolved8(guest_range_12, 37u, (r31 + 6013));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_12, 40u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_12, 40u, (r31 + 6016));
            r6 = MemoryInline::ReadResolved32(guest_range_12, 44u, (r31 + 6020));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_12, 48u, (r31 + 6024));
    guest_range_13 = MemoryInline::ResolveRangeHost((r31 + 2920), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_13, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_13, 0u, (r31 + 2920), r30);
        MemoryInline::WriteResolved32(guest_range_13, 4u, (r31 + 2924), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_13, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_13, 8u, (r31 + 2928), r28);
        MemoryInline::WriteResolved32(guest_range_13, 12u, (r31 + 2932), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_13, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_13, 16u, (r31 + 2936), r26);
        MemoryInline::WriteResolved32(guest_range_13, 20u, (r31 + 2940), r25);
    }
    MemoryInline::WriteResolved32(guest_range_13, 24u, (r31 + 2944), r24);
    MemoryInline::WriteResolved8(guest_range_13, 28u, (r31 + 2948), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_13, 29u, (r31 + 2949), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_13, 30u, (r31 + 2950), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_13, 31u, (r31 + 2951), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved32(guest_range_13, 32u, (r31 + 2952), r10);
    MemoryInline::WriteResolved8(guest_range_13, 36u, (r31 + 2956), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_13, 37u, (r31 + 2957), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_13, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_13, 40u, (r31 + 2960), r7);
        MemoryInline::WriteResolved32(guest_range_13, 44u, (r31 + 2964), r6);
    }
    MemoryInline::WriteResolved32(guest_range_13, 48u, (r31 + 2968), r3);
    ctr = r0;
}

loc_805315DC:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805315DC;
    }
}

loc_805315F0:
{
    r5 = MemoryInline::FlatRead32((r31 + 6140));
    r0 = 2;
    r4 = 12;
    r3 = 58;
    MemoryInline::FlatWrite32((r31 + 3084), r5);
    r11 = 0;
    r8 = 5;
    MemoryInline::FlatWrite32((r31 + 5984), r4);
    MemoryInline::FlatWrite32((r31 + 5976), r3);
    ctr = r0;
}

loc_80531618:
{
    r5 = (r11 & 255);
    r0 = (r11 + 2);
    r4 = (r5 * 240);
    r3 = (r11 + 1);
    r6 = (r0 & 255);
    r7 = (r3 & 255);
    r9 = (r31 + r4);
    r3 = (r11 + 4);
    guest_range_2 = MemoryInline::ResolveRangeHost((r9 + 3112), 0, 1410u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r9 + 3112), r8);
    r10 = (r5 + 1);
    r0 = (r11 + 3);
    r4 = (r3 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 209u, (r9 + 3321), static_cast<uint8_t>(r10));
    r5 = (r0 & 255);
    r0 = (r11 + 5);
    r6 = (r6 + 1);
    MemoryInline::WriteResolved8(guest_range_2, 208u, (r9 + 3320), static_cast<uint8_t>(r10));
    r3 = (r0 & 255);
    r0 = (r7 + 1);
    r5 = (r5 + 1);
    MemoryInline::WriteResolved32(guest_range_2, 240u, (r9 + 3352), r8);
    r4 = (r4 + 1);
    r3 = (r3 + 1);
    r11 = (r11 + 6);
    MemoryInline::WriteResolved8(guest_range_2, 449u, (r9 + 3561), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 448u, (r9 + 3560), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 480u, (r9 + 3592), r8);
    MemoryInline::WriteResolved8(guest_range_2, 689u, (r9 + 3801), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 688u, (r9 + 3800), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_2, 720u, (r9 + 3832), r8);
    MemoryInline::WriteResolved8(guest_range_2, 929u, (r9 + 4041), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 928u, (r9 + 4040), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_2, 960u, (r9 + 4072), r8);
    MemoryInline::WriteResolved8(guest_range_2, 1169u, (r9 + 4281), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 1168u, (r9 + 4280), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_2, 1200u, (r9 + 4312), r8);
    MemoryInline::WriteResolved8(guest_range_2, 1409u, (r9 + 4521), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 1408u, (r9 + 4520), static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80531618;
    }
}

loc_805316B4:
{
    r8 = 0;
    r7 = 0;
    r3 = 1;
    r0 = 38;
    r6 = 0x809C0000u;
}

loc_805316C8:
{
    r5 = (r7 & 255);
    r4 = MemoryInline::FlatRead32((r6 + -10456));
    r5 = (r5 * 240);
    r4 = (r4 + r5);
    r4 = MemoryInline::FlatRead32((r4 + 56));
}

loc_805316E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80531848;
    }
}

loc_805316E4:
{
    r10 = (r8 & 255);
    r5 = (r31 + r5);
    r4 = (r10 * 240);
    r9 = MemoryInline::FlatRead32((r5 + 52));
    r10 = (r10 + 1);
    r11 = (r5 + 75);
    r4 = (r31 + r4);
    guest_range_14 = MemoryInline::ResolveRangeHost((r4 + 3104), 0, 218u, false, true);
    MemoryInline::WriteResolved32(guest_range_14, 4u, (r4 + 3108), r9);
    r12 = (r4 + 3131);
    r9 = MemoryInline::FlatRead32((r5 + 48));
    MemoryInline::WriteResolved32(guest_range_14, 0u, (r4 + 3104), r9);
    MemoryInline::WriteResolved8(guest_range_14, 217u, (r4 + 3321), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_14, 216u, (r4 + 3320), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved32(guest_range_14, 8u, (r4 + 3112), r3);
    r9 = MemoryInline::FlatRead32((r5 + 64));
    MemoryInline::WriteResolved32(guest_range_14, 16u, (r4 + 3120), r9);
    r9 = MemoryInline::FlatRead8((r5 + 68));
    MemoryInline::WriteResolved8(guest_range_14, 20u, (r4 + 3124), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r5 + 69));
    MemoryInline::WriteResolved8(guest_range_14, 21u, (r4 + 3125), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead32((r5 + 72));
    MemoryInline::WriteResolved32(guest_range_14, 24u, (r4 + 3128), r9);
    ctr = r0;
}

loc_80531740:
{
    r10 = MemoryInline::FlatRead8((r11 + 1));
    r11 = (r11 + 2);
    r9 = MemoryInline::FlatRead8(r11);
    MemoryInline::FlatWrite8((r12 + 1), static_cast<uint8_t>(r10));
    r12_stbu_ea_3 = (r12 + 2);
    MemoryInline::FlatWrite8(r12_stbu_ea_3, static_cast<uint8_t>(r9));
    r12 = r12_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80531740;
    }
}

loc_80531754:
{
    guest_range_15 = MemoryInline::ResolveRangeHost((r5 + 152), 0, 92u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_15, 0u, (r5 + 152));
    r8 = (r8 + 1);
    guest_range_16 = MemoryInline::ResolveRangeHost((r4 + 3208), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_16, 0u, (r4 + 3208), r9);
    r9 = MemoryInline::ReadResolved8(guest_range_15, 4u, (r5 + 156));
    MemoryInline::WriteResolved8(guest_range_16, 4u, (r4 + 3212), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_15, 5u, (r5 + 157));
    MemoryInline::WriteResolved8(guest_range_16, 5u, (r4 + 3213), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_15, 6u, (r5 + 158));
    MemoryInline::WriteResolved8(guest_range_16, 6u, (r4 + 3214), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_15, 7u, (r5 + 159));
    MemoryInline::WriteResolved8(guest_range_16, 7u, (r4 + 3215), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved32(guest_range_15, 8u, (r5 + 160));
    MemoryInline::WriteResolved32(guest_range_16, 8u, (r4 + 3216), r9);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 12u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.second;
            r10 = resolved_pair.first;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_15, 16u, (r5 + 168));
            r10 = MemoryInline::ReadResolved32(guest_range_15, 12u, (r5 + 164));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_16, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_16, 12u, (r4 + 3220), r10);
        MemoryInline::WriteResolved32(guest_range_16, 16u, (r4 + 3224), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 20u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.second;
            r10 = resolved_pair.first;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_15, 24u, (r5 + 176));
            r10 = MemoryInline::ReadResolved32(guest_range_15, 20u, (r5 + 172));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_16, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_16, 20u, (r4 + 3228), r10);
        MemoryInline::WriteResolved32(guest_range_16, 24u, (r4 + 3232), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 28u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.second;
            r10 = resolved_pair.first;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_15, 32u, (r5 + 184));
            r10 = MemoryInline::ReadResolved32(guest_range_15, 28u, (r5 + 180));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_16, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_16, 28u, (r4 + 3236), r10);
        MemoryInline::WriteResolved32(guest_range_16, 32u, (r4 + 3240), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 36u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.second;
            r10 = resolved_pair.first;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_15, 40u, (r5 + 192));
            r10 = MemoryInline::ReadResolved32(guest_range_15, 36u, (r5 + 188));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_16, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_16, 36u, (r4 + 3244), r10);
        MemoryInline::WriteResolved32(guest_range_16, 40u, (r4 + 3248), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 44u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.second;
            r10 = resolved_pair.first;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_15, 48u, (r5 + 200));
            r10 = MemoryInline::ReadResolved32(guest_range_15, 44u, (r5 + 196));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_16, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_16, 44u, (r4 + 3252), r10);
        MemoryInline::WriteResolved32(guest_range_16, 48u, (r4 + 3256), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 52u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.second;
            r10 = resolved_pair.first;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_15, 56u, (r5 + 208));
            r10 = MemoryInline::ReadResolved32(guest_range_15, 52u, (r5 + 204));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_16, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_16, 52u, (r4 + 3260), r10);
        MemoryInline::WriteResolved32(guest_range_16, 56u, (r4 + 3264), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 60u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.second;
            r10 = resolved_pair.first;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_15, 64u, (r5 + 216));
            r10 = MemoryInline::ReadResolved32(guest_range_15, 60u, (r5 + 212));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_16, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_16, 60u, (r4 + 3268), r10);
        MemoryInline::WriteResolved32(guest_range_16, 64u, (r4 + 3272), r9);
    }
    r9 = MemoryInline::ReadResolved32(guest_range_15, 68u, (r5 + 220));
    MemoryInline::WriteResolved32(guest_range_16, 68u, (r4 + 3276), r9);
    r9 = MemoryInline::ReadResolved8(guest_range_15, 72u, (r5 + 224));
    MemoryInline::WriteResolved8(guest_range_16, 72u, (r4 + 3280), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_15, 73u, (r5 + 225));
    MemoryInline::WriteResolved8(guest_range_16, 73u, (r4 + 3281), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_15, 74u, (r5 + 226));
    MemoryInline::WriteResolved8(guest_range_16, 74u, (r4 + 3282), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved32(guest_range_15, 76u, (r5 + 228));
    MemoryInline::WriteResolved32(guest_range_16, 76u, (r4 + 3284), r9);
    r9 = MemoryInline::ReadResolved8(guest_range_15, 80u, (r5 + 232));
    MemoryInline::WriteResolved8(guest_range_16, 80u, (r4 + 3288), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_15, 81u, (r5 + 233));
    MemoryInline::WriteResolved8(guest_range_16, 81u, (r4 + 3289), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_15, 82u, (r5 + 234));
    MemoryInline::WriteResolved8(guest_range_16, 82u, (r4 + 3290), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved32(guest_range_15, 84u, (r5 + 236));
    MemoryInline::WriteResolved32(guest_range_16, 84u, (r4 + 3292), r9);
    r5 = MemoryInline::ReadResolved32(guest_range_15, 88u, (r5 + 240));
    MemoryInline::WriteResolved32(guest_range_16, 88u, (r4 + 3296), r5);
}

loc_80531848:
{
    r7 = (r7 + 1);
}

loc_80531850:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(12))) {
        goto loc_805316C8;
    }
}

loc_80531854:
{
    r9 = 1;
    r3 = 1;
    r0 = 38;
    r7 = 0x809C0000u;
}

loc_80531864:
{
    r6 = (r9 & 255);
    r10 = 0;
}

loc_8053186C:
{
    r5 = (r10 & 255);
    r4 = MemoryInline::FlatRead32((r7 + -10456));
    r11 = (r5 * 240);
    r5 = (r4 + r11);
    r4 = MemoryInline::FlatRead8((r5 + 264));
}

loc_80531884:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r4))) {
        goto loc_805319F8;
    }
}

loc_80531888:
{
    r4 = MemoryInline::FlatRead32((r5 + 56));
}

loc_80531890:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805319F8;
    }
}

loc_80531894:
{
    r12 = (r8 & 255);
    r5 = (r31 + r11);
    r4 = (r12 * 240);
    r11 = MemoryInline::FlatRead32((r5 + 52));
    r12 = (r12 + 1);
    r22 = (r5 + 75);
    r4 = (r31 + r4);
    guest_range_17 = MemoryInline::ResolveRangeHost((r4 + 3104), 0, 218u, false, true);
    MemoryInline::WriteResolved32(guest_range_17, 4u, (r4 + 3108), r11);
    r23 = (r4 + 3131);
    r11 = MemoryInline::FlatRead32((r5 + 48));
    MemoryInline::WriteResolved32(guest_range_17, 0u, (r4 + 3104), r11);
    MemoryInline::WriteResolved8(guest_range_17, 217u, (r4 + 3321), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_17, 216u, (r4 + 3320), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved32(guest_range_17, 8u, (r4 + 3112), r3);
    r11 = MemoryInline::FlatRead32((r5 + 64));
    MemoryInline::WriteResolved32(guest_range_17, 16u, (r4 + 3120), r11);
    r11 = MemoryInline::FlatRead8((r5 + 68));
    MemoryInline::WriteResolved8(guest_range_17, 20u, (r4 + 3124), static_cast<uint8_t>(r11));
    r11 = MemoryInline::FlatRead8((r5 + 69));
    MemoryInline::WriteResolved8(guest_range_17, 21u, (r4 + 3125), static_cast<uint8_t>(r11));
    r11 = MemoryInline::FlatRead32((r5 + 72));
    MemoryInline::WriteResolved32(guest_range_17, 24u, (r4 + 3128), r11);
    ctr = r0;
}

loc_805318F0:
{
    r12 = MemoryInline::FlatRead8((r22 + 1));
    r22 = (r22 + 2);
    r11 = MemoryInline::FlatRead8(r22);
    MemoryInline::FlatWrite8((r23 + 1), static_cast<uint8_t>(r12));
    r23_stbu_ea_4 = (r23 + 2);
    MemoryInline::FlatWrite8(r23_stbu_ea_4, static_cast<uint8_t>(r11));
    r23 = r23_stbu_ea_4;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805318F0;
    }
}

loc_80531904:
{
    guest_range_18 = MemoryInline::ResolveRangeHost((r5 + 152), 0, 92u, true, false);
    r11 = MemoryInline::ReadResolved32(guest_range_18, 0u, (r5 + 152));
    r8 = (r8 + 1);
    guest_range_19 = MemoryInline::ResolveRangeHost((r4 + 3208), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_19, 0u, (r4 + 3208), r11);
    r11 = MemoryInline::ReadResolved8(guest_range_18, 4u, (r5 + 156));
    MemoryInline::WriteResolved8(guest_range_19, 4u, (r4 + 3212), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_18, 5u, (r5 + 157));
    MemoryInline::WriteResolved8(guest_range_19, 5u, (r4 + 3213), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_18, 6u, (r5 + 158));
    MemoryInline::WriteResolved8(guest_range_19, 6u, (r4 + 3214), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_18, 7u, (r5 + 159));
    MemoryInline::WriteResolved8(guest_range_19, 7u, (r4 + 3215), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved32(guest_range_18, 8u, (r5 + 160));
    MemoryInline::WriteResolved32(guest_range_19, 8u, (r4 + 3216), r11);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_18, 12u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.second;
            r12 = resolved_pair.first;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_18, 16u, (r5 + 168));
            r12 = MemoryInline::ReadResolved32(guest_range_18, 12u, (r5 + 164));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_19, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_19, 12u, (r4 + 3220), r12);
        MemoryInline::WriteResolved32(guest_range_19, 16u, (r4 + 3224), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_18, 20u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.second;
            r12 = resolved_pair.first;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_18, 24u, (r5 + 176));
            r12 = MemoryInline::ReadResolved32(guest_range_18, 20u, (r5 + 172));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_19, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_19, 20u, (r4 + 3228), r12);
        MemoryInline::WriteResolved32(guest_range_19, 24u, (r4 + 3232), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_18, 28u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.second;
            r12 = resolved_pair.first;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_18, 32u, (r5 + 184));
            r12 = MemoryInline::ReadResolved32(guest_range_18, 28u, (r5 + 180));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_19, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_19, 28u, (r4 + 3236), r12);
        MemoryInline::WriteResolved32(guest_range_19, 32u, (r4 + 3240), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_18, 36u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.second;
            r12 = resolved_pair.first;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_18, 40u, (r5 + 192));
            r12 = MemoryInline::ReadResolved32(guest_range_18, 36u, (r5 + 188));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_19, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_19, 36u, (r4 + 3244), r12);
        MemoryInline::WriteResolved32(guest_range_19, 40u, (r4 + 3248), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_18, 44u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.second;
            r12 = resolved_pair.first;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_18, 48u, (r5 + 200));
            r12 = MemoryInline::ReadResolved32(guest_range_18, 44u, (r5 + 196));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_19, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_19, 44u, (r4 + 3252), r12);
        MemoryInline::WriteResolved32(guest_range_19, 48u, (r4 + 3256), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_18, 52u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.second;
            r12 = resolved_pair.first;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_18, 56u, (r5 + 208));
            r12 = MemoryInline::ReadResolved32(guest_range_18, 52u, (r5 + 204));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_19, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_19, 52u, (r4 + 3260), r12);
        MemoryInline::WriteResolved32(guest_range_19, 56u, (r4 + 3264), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_18, 60u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.second;
            r12 = resolved_pair.first;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_18, 64u, (r5 + 216));
            r12 = MemoryInline::ReadResolved32(guest_range_18, 60u, (r5 + 212));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_19, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_19, 60u, (r4 + 3268), r12);
        MemoryInline::WriteResolved32(guest_range_19, 64u, (r4 + 3272), r11);
    }
    r11 = MemoryInline::ReadResolved32(guest_range_18, 68u, (r5 + 220));
    MemoryInline::WriteResolved32(guest_range_19, 68u, (r4 + 3276), r11);
    r11 = MemoryInline::ReadResolved8(guest_range_18, 72u, (r5 + 224));
    MemoryInline::WriteResolved8(guest_range_19, 72u, (r4 + 3280), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_18, 73u, (r5 + 225));
    MemoryInline::WriteResolved8(guest_range_19, 73u, (r4 + 3281), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_18, 74u, (r5 + 226));
    MemoryInline::WriteResolved8(guest_range_19, 74u, (r4 + 3282), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved32(guest_range_18, 76u, (r5 + 228));
    MemoryInline::WriteResolved32(guest_range_19, 76u, (r4 + 3284), r11);
    r11 = MemoryInline::ReadResolved8(guest_range_18, 80u, (r5 + 232));
    MemoryInline::WriteResolved8(guest_range_19, 80u, (r4 + 3288), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_18, 81u, (r5 + 233));
    MemoryInline::WriteResolved8(guest_range_19, 81u, (r4 + 3289), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_18, 82u, (r5 + 234));
    MemoryInline::WriteResolved8(guest_range_19, 82u, (r4 + 3290), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved32(guest_range_18, 84u, (r5 + 236));
    MemoryInline::WriteResolved32(guest_range_19, 84u, (r4 + 3292), r11);
    r5 = MemoryInline::ReadResolved32(guest_range_18, 88u, (r5 + 240));
    MemoryInline::WriteResolved32(guest_range_19, 88u, (r4 + 3296), r5);
}

loc_805319F8:
{
    r10 = (r10 + 1);
}

loc_80531A00:
{
    if ((static_cast<uint32_t>(r10) < static_cast<uint32_t>(12))) {
        goto loc_8053186C;
    }
}

loc_80531A04:
{
    r9 = (r9 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
}

loc_80531A0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80531864;
    }
}

loc_80531A10:
{
    r3 = (r31 + 3088);
    r4 = (r31 + 32);
    ctx->lr = 0x80531A1Cu;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r9 = MemoryInline::FlatRead8((r31 + 3092));
    r3 = (r31 + 40);
    r8 = MemoryInline::FlatRead8((r31 + 3093));
    r4 = (r31 + 3096);
    r7 = MemoryInline::FlatRead8((r31 + 3094));
    r5 = (r31 + 2920);
    r6 = MemoryInline::FlatRead8((r31 + 3095));
    r0 = 38;
    MemoryInline::FlatWrite8((r31 + 36), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r31 + 37), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r31 + 38), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r31 + 39), static_cast<uint8_t>(r6));
}

loc_80531A4C:
{
    guest_range_20 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_20, 0u, (r4 + 4));
    r9 = (r3 + 35);
    guest_range_21 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_21, 0u, (r3 + 4), static_cast<uint8_t>(r6));
    r8 = (r4 + 35);
    r6 = MemoryInline::ReadResolved8(guest_range_20, 1u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_21, 1u, (r3 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_20, 2u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_21, 2u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_20, 4u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_21, 4u, (r3 + 8), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_20, 8u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_21, 8u, (r3 + 12), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_20, 12u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_21, 12u, (r3 + 16), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_20, 20u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_21, 20u, (r3 + 24), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_20, 24u, (r4 + 28));
    MemoryInline::WriteResolved8(guest_range_21, 24u, (r3 + 28), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_20, 25u, (r4 + 29));
    MemoryInline::WriteResolved8(guest_range_21, 25u, (r3 + 29), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_20, 28u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_21, 28u, (r3 + 32), r6);
    ctr = r0;
}

loc_80531AA8:
{
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r6 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r7));
    r9_stbu_ea_6 = (r9 + 2);
    MemoryInline::FlatWrite8(r9_stbu_ea_6, static_cast<uint8_t>(r6));
    r9 = r9_stbu_ea_6;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80531AA8;
    }
}

loc_80531ABC:
{
    guest_range_22 = MemoryInline::ResolveRangeHost((r4 + 112), 0, 125u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_22, 0u, (r4 + 112));
    guest_range_23 = MemoryInline::ResolveRangeHost((r3 + 112), 0, 125u, false, true);
    MemoryInline::WriteResolved32(guest_range_23, 0u, (r3 + 112), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_22, 4u, (r4 + 116));
    MemoryInline::WriteResolved8(guest_range_23, 4u, (r3 + 116), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 5u, (r4 + 117));
    MemoryInline::WriteResolved8(guest_range_23, 5u, (r3 + 117), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 6u, (r4 + 118));
    MemoryInline::WriteResolved8(guest_range_23, 6u, (r3 + 118), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 7u, (r4 + 119));
    MemoryInline::WriteResolved8(guest_range_23, 7u, (r3 + 119), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_22, 8u, (r4 + 120));
    MemoryInline::WriteResolved32(guest_range_23, 8u, (r3 + 120), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_22, 12u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_22, 16u, (r4 + 128));
            r7 = MemoryInline::ReadResolved32(guest_range_22, 12u, (r4 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_23, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_23, 12u, (r3 + 124), r7);
        MemoryInline::WriteResolved32(guest_range_23, 16u, (r3 + 128), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_22, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_22, 24u, (r4 + 136));
            r7 = MemoryInline::ReadResolved32(guest_range_22, 20u, (r4 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_23, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_23, 20u, (r3 + 132), r7);
        MemoryInline::WriteResolved32(guest_range_23, 24u, (r3 + 136), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_22, 28u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_22, 32u, (r4 + 144));
            r7 = MemoryInline::ReadResolved32(guest_range_22, 28u, (r4 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_23, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_23, 28u, (r3 + 140), r7);
        MemoryInline::WriteResolved32(guest_range_23, 32u, (r3 + 144), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_22, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_22, 40u, (r4 + 152));
            r7 = MemoryInline::ReadResolved32(guest_range_22, 36u, (r4 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_23, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_23, 36u, (r3 + 148), r7);
        MemoryInline::WriteResolved32(guest_range_23, 40u, (r3 + 152), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_22, 44u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_22, 48u, (r4 + 160));
            r7 = MemoryInline::ReadResolved32(guest_range_22, 44u, (r4 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_23, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_23, 44u, (r3 + 156), r7);
        MemoryInline::WriteResolved32(guest_range_23, 48u, (r3 + 160), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_22, 52u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_22, 56u, (r4 + 168));
            r7 = MemoryInline::ReadResolved32(guest_range_22, 52u, (r4 + 164));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_23, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_23, 52u, (r3 + 164), r7);
        MemoryInline::WriteResolved32(guest_range_23, 56u, (r3 + 168), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_22, 60u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_22, 64u, (r4 + 176));
            r7 = MemoryInline::ReadResolved32(guest_range_22, 60u, (r4 + 172));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_23, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_23, 60u, (r3 + 172), r7);
        MemoryInline::WriteResolved32(guest_range_23, 64u, (r3 + 176), r6);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_22, 68u, (r4 + 180));
    MemoryInline::WriteResolved32(guest_range_23, 68u, (r3 + 180), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_22, 72u, (r4 + 184));
    MemoryInline::WriteResolved8(guest_range_23, 72u, (r3 + 184), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 73u, (r4 + 185));
    MemoryInline::WriteResolved8(guest_range_23, 73u, (r3 + 185), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 74u, (r4 + 186));
    MemoryInline::WriteResolved8(guest_range_23, 74u, (r3 + 186), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_22, 76u, (r4 + 188));
    MemoryInline::WriteResolved32(guest_range_23, 76u, (r3 + 188), r6);
    r6 = MemoryInline::ReadResolved8(guest_range_22, 80u, (r4 + 192));
    MemoryInline::WriteResolved8(guest_range_23, 80u, (r3 + 192), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 81u, (r4 + 193));
    MemoryInline::WriteResolved8(guest_range_23, 81u, (r3 + 193), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 82u, (r4 + 194));
    MemoryInline::WriteResolved8(guest_range_23, 82u, (r3 + 194), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_22, 84u, (r4 + 196));
    MemoryInline::WriteResolved32(guest_range_23, 84u, (r3 + 196), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_22, 88u, (r4 + 200));
    MemoryInline::WriteResolved32(guest_range_23, 88u, (r3 + 200), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_22, 92u, (r4 + 204));
    MemoryInline::WriteResolved32(guest_range_23, 92u, (r3 + 204), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_22, 96u, (r4 + 208));
    MemoryInline::WriteResolved32(guest_range_23, 96u, (r3 + 208), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_22, 100u, (r4 + 212));
    MemoryInline::WriteResolved32(guest_range_23, 100u, (r3 + 212), r6);
    r6 = MemoryInline::ReadResolved16(guest_range_22, 104u, (r4 + 216));
    MemoryInline::WriteResolved16(guest_range_23, 104u, (r3 + 216), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_22, 106u, (r4 + 218));
    MemoryInline::WriteResolved16(guest_range_23, 106u, (r3 + 218), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_22, 108u, (r4 + 220));
    MemoryInline::WriteResolved16(guest_range_23, 108u, (r3 + 220), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_22, 110u, (r4 + 222));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::WriteResolved16(guest_range_23, 110u, (r3 + 222), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 112u, (r4 + 224));
    MemoryInline::WriteResolved8(guest_range_23, 112u, (r3 + 224), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 113u, (r4 + 225));
    MemoryInline::WriteResolved8(guest_range_23, 113u, (r3 + 225), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 114u, (r4 + 226));
    MemoryInline::WriteResolved8(guest_range_23, 114u, (r3 + 226), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_22, 120u, (r4 + 232));
    MemoryInline::WriteResolved16(guest_range_23, 120u, (r3 + 232), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_22, 124u, (r4 + 236));
    r4 = (r4 + 240);
    MemoryInline::WriteResolved8(guest_range_23, 124u, (r3 + 236), static_cast<uint8_t>(r6));
    r3 = (r3 + 240);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
}

loc_80531C18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80531A4C;
    }
}

loc_80531C1C:
{
    guest_range_24 = MemoryInline::ResolveRangeHost((r31 + 5976), 0, 52u, true, false);
    r22 = MemoryInline::ReadResolved32(guest_range_24, 0u, (r31 + 5976));
    r0 = 14;
    r23 = MemoryInline::ReadResolved32(guest_range_24, 4u, (r31 + 5980));
    r5 = (r31 + 2968);
    r24 = MemoryInline::ReadResolved32(guest_range_24, 8u, (r31 + 5984));
    r4 = (r31 + 6024);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_24, 12u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_24, 12u, (r31 + 5988));
            r26 = MemoryInline::ReadResolved32(guest_range_24, 16u, (r31 + 5992));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_24, 20u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_24, 20u, (r31 + 5996));
            r28 = MemoryInline::ReadResolved32(guest_range_24, 24u, (r31 + 6000));
        }
    }
    r29 = MemoryInline::ReadResolved8(guest_range_24, 28u, (r31 + 6004));
    r30 = MemoryInline::ReadResolved8(guest_range_24, 29u, (r31 + 6005));
    r12 = MemoryInline::ReadResolved8(guest_range_24, 30u, (r31 + 6006));
    r11 = MemoryInline::ReadResolved8(guest_range_24, 31u, (r31 + 6007));
    r10 = MemoryInline::ReadResolved32(guest_range_24, 32u, (r31 + 6008));
    r9 = MemoryInline::ReadResolved8(guest_range_24, 36u, (r31 + 6012));
    r8 = MemoryInline::ReadResolved8(guest_range_24, 37u, (r31 + 6013));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_24, 40u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_24, 40u, (r31 + 6016));
            r6 = MemoryInline::ReadResolved32(guest_range_24, 44u, (r31 + 6020));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_24, 48u, (r31 + 6024));
    guest_range_25 = MemoryInline::ResolveRangeHost((r31 + 2920), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_25, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_25, 0u, (r31 + 2920), r22);
        MemoryInline::WriteResolved32(guest_range_25, 4u, (r31 + 2924), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_25, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_25, 8u, (r31 + 2928), r24);
        MemoryInline::WriteResolved32(guest_range_25, 12u, (r31 + 2932), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_25, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_25, 16u, (r31 + 2936), r26);
        MemoryInline::WriteResolved32(guest_range_25, 20u, (r31 + 2940), r27);
    }
    MemoryInline::WriteResolved32(guest_range_25, 24u, (r31 + 2944), r28);
    MemoryInline::WriteResolved8(guest_range_25, 28u, (r31 + 2948), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_25, 29u, (r31 + 2949), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_25, 30u, (r31 + 2950), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_25, 31u, (r31 + 2951), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved32(guest_range_25, 32u, (r31 + 2952), r10);
    MemoryInline::WriteResolved8(guest_range_25, 36u, (r31 + 2956), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_25, 37u, (r31 + 2957), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_25, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_25, 40u, (r31 + 2960), r7);
        MemoryInline::WriteResolved32(guest_range_25, 44u, (r31 + 2964), r6);
    }
    MemoryInline::WriteResolved32(guest_range_25, 48u, (r31 + 2968), r3);
    ctr = r0;
}

loc_80531CB4:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80531CB4;
    }
}

loc_80531CC8:
{
    r0 = MemoryInline::FlatRead32((r31 + 6140));
    MemoryInline::FlatWrite32((r31 + 3084), r0);
    guest_range_26 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_26, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_26, 0u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_26, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_26, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_26, 8u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_26, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_26, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_26, 16u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_26, 20u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_26, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_26, 24u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_26, 28u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_26, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_26, 32u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_26, 36u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_26, 40u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_26, 48u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80531070 func_80531070 preserves=true fpr_mask=0x00000000
