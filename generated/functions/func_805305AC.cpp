#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805305AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_stbu_ea_0 = 0;
    uint32_t r11_stbu_ea_1 = 0;
    uint32_t r11_stbu_ea_2 = 0;
    uint32_t r11_stbu_ea_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805305AC;

loc_805305AC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 3052u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 4));
    r5 = (r3 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 3052u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 4), static_cast<uint8_t>(r0));
    r6 = (r4 + 8);
    r7 = (r3 + 2888);
    r0 = 38;
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 5), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 6), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 7), static_cast<uint8_t>(r8));
}

loc_805305DC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 4), 0, 32u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r6 + 4));
    r11 = (r5 + 35);
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r5 + 4), static_cast<uint8_t>(r8));
    r10 = (r6 + 35);
    r8 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r6 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r5 + 5), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r6 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r5 + 6), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r5 + 8), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r6 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r5 + 12), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r6 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r5 + 16), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r6 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r5 + 24), r8);
    r8 = MemoryInline::ReadResolved8(guest_range_2, 24u, (r6 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 24u, (r5 + 28), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r6 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 25u, (r5 + 29), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r6 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r5 + 32), r8);
    ctr = r0;
}

loc_80530638:
{
    r9 = MemoryInline::FlatRead8((r10 + 1));
    r10 = (r10 + 2);
    r8 = MemoryInline::FlatRead8(r10);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r9));
    r11_stbu_ea_3 = (r11 + 2);
    MemoryInline::FlatWrite8(r11_stbu_ea_3, static_cast<uint8_t>(r8));
    r11 = r11_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80530638;
    }
}

loc_8053064C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r6 + 112), 0, 125u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r6 + 112));
    guest_range_5 = MemoryInline::ResolveRangeHost((r5 + 112), 0, 125u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r5 + 112), r8);
    r8 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r6 + 116));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r5 + 116), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r6 + 117));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r5 + 117), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r6 + 118));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r5 + 118), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r6 + 119));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r5 + 119), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r6 + 120));
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r5 + 120), r8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 12u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r6 + 128));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r6 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r5 + 124), r9);
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r5 + 128), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 20u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r6 + 136));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r6 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r5 + 132), r9);
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r5 + 136), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 28u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r6 + 144));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r6 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r5 + 140), r9);
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r5 + 144), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r6 + 152));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r6 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r5 + 148), r9);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r5 + 152), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 44u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r6 + 160));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r6 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r5 + 156), r9);
        MemoryInline::WriteResolved32(guest_range_5, 48u, (r5 + 160), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 52u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r6 + 168));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r6 + 164));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 52u, (r5 + 164), r9);
        MemoryInline::WriteResolved32(guest_range_5, 56u, (r5 + 168), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 60u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r6 + 176));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r6 + 172));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 60u, (r5 + 172), r9);
        MemoryInline::WriteResolved32(guest_range_5, 64u, (r5 + 176), r8);
    }
    r8 = MemoryInline::ReadResolved32(guest_range_4, 68u, (r6 + 180));
    MemoryInline::WriteResolved32(guest_range_5, 68u, (r5 + 180), r8);
    r8 = MemoryInline::ReadResolved8(guest_range_4, 72u, (r6 + 184));
    MemoryInline::WriteResolved8(guest_range_5, 72u, (r5 + 184), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 73u, (r6 + 185));
    MemoryInline::WriteResolved8(guest_range_5, 73u, (r5 + 185), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 74u, (r6 + 186));
    MemoryInline::WriteResolved8(guest_range_5, 74u, (r5 + 186), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_4, 76u, (r6 + 188));
    MemoryInline::WriteResolved32(guest_range_5, 76u, (r5 + 188), r8);
    r8 = MemoryInline::ReadResolved8(guest_range_4, 80u, (r6 + 192));
    MemoryInline::WriteResolved8(guest_range_5, 80u, (r5 + 192), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 81u, (r6 + 193));
    MemoryInline::WriteResolved8(guest_range_5, 81u, (r5 + 193), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 82u, (r6 + 194));
    MemoryInline::WriteResolved8(guest_range_5, 82u, (r5 + 194), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_4, 84u, (r6 + 196));
    MemoryInline::WriteResolved32(guest_range_5, 84u, (r5 + 196), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r6 + 200));
    MemoryInline::WriteResolved32(guest_range_5, 88u, (r5 + 200), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r6 + 204));
    MemoryInline::WriteResolved32(guest_range_5, 92u, (r5 + 204), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r6 + 208));
    MemoryInline::WriteResolved32(guest_range_5, 96u, (r5 + 208), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_4, 100u, (r6 + 212));
    MemoryInline::WriteResolved32(guest_range_5, 100u, (r5 + 212), r8);
    r8 = MemoryInline::ReadResolved16(guest_range_4, 104u, (r6 + 216));
    MemoryInline::WriteResolved16(guest_range_5, 104u, (r5 + 216), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved16(guest_range_4, 106u, (r6 + 218));
    MemoryInline::WriteResolved16(guest_range_5, 106u, (r5 + 218), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved16(guest_range_4, 108u, (r6 + 220));
    MemoryInline::WriteResolved16(guest_range_5, 108u, (r5 + 220), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved16(guest_range_4, 110u, (r6 + 222));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 110u, (r5 + 222), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 112u, (r6 + 224));
    MemoryInline::WriteResolved8(guest_range_5, 112u, (r5 + 224), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 113u, (r6 + 225));
    MemoryInline::WriteResolved8(guest_range_5, 113u, (r5 + 225), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 114u, (r6 + 226));
    MemoryInline::WriteResolved8(guest_range_5, 114u, (r5 + 226), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved16(guest_range_4, 120u, (r6 + 232));
    MemoryInline::WriteResolved16(guest_range_5, 120u, (r5 + 232), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 124u, (r6 + 236));
    r6 = (r6 + 240);
    MemoryInline::WriteResolved8(guest_range_5, 124u, (r5 + 236), static_cast<uint8_t>(r8));
    r5 = (r5 + 240);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
}

loc_805307A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805305DC;
    }
}

loc_805307AC:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2884u, (r4 + 2888));
    r0 = 14;
    MemoryInline::WriteResolved32(guest_range_1, 2884u, (r3 + 2888), r5);
    r7 = (r3 + 2936);
    r6 = (r4 + 2936);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2888u, (r4 + 2892));
    MemoryInline::WriteResolved32(guest_range_1, 2888u, (r3 + 2892), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2892u, (r4 + 2896));
    MemoryInline::WriteResolved32(guest_range_1, 2892u, (r3 + 2896), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2896u, (r4 + 2900));
    MemoryInline::WriteResolved32(guest_range_1, 2896u, (r3 + 2900), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2900u, (r4 + 2904));
    MemoryInline::WriteResolved32(guest_range_1, 2900u, (r3 + 2904), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2904u, (r4 + 2908));
    MemoryInline::WriteResolved32(guest_range_1, 2904u, (r3 + 2908), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2908u, (r4 + 2912));
    MemoryInline::WriteResolved32(guest_range_1, 2908u, (r3 + 2912), r5);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2912u, (r4 + 2916));
    MemoryInline::WriteResolved8(guest_range_1, 2912u, (r3 + 2916), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2913u, (r4 + 2917));
    MemoryInline::WriteResolved8(guest_range_1, 2913u, (r3 + 2917), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2914u, (r4 + 2918));
    MemoryInline::WriteResolved8(guest_range_1, 2914u, (r3 + 2918), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2915u, (r4 + 2919));
    MemoryInline::WriteResolved8(guest_range_1, 2915u, (r3 + 2919), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2916u, (r4 + 2920));
    MemoryInline::WriteResolved32(guest_range_1, 2916u, (r3 + 2920), r5);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2920u, (r4 + 2924));
    MemoryInline::WriteResolved8(guest_range_1, 2920u, (r3 + 2924), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2921u, (r4 + 2925));
    MemoryInline::WriteResolved8(guest_range_1, 2921u, (r3 + 2925), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2924u, (r4 + 2928));
    MemoryInline::WriteResolved32(guest_range_1, 2924u, (r3 + 2928), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2928u, (r4 + 2932));
    MemoryInline::WriteResolved32(guest_range_1, 2928u, (r3 + 2932), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 2932u, (r4 + 2936));
    MemoryInline::WriteResolved32(guest_range_1, 2932u, (r3 + 2936), r5);
    ctr = r0;
}

loc_80530844:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80530844;
    }
}

loc_80530858:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3048u, (r4 + 3052));
    MemoryInline::WriteResolved32(guest_range_1, 3048u, (r3 + 3052), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FE1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805305AC func_805305AC preserves=true fpr_mask=0x00000000
