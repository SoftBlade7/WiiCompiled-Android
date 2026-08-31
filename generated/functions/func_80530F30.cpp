#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80530F30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_80530F30;

loc_80530F30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 180u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 4));
    r0 = 38;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 180u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 24), r5);
    r7 = (r3 + 35);
    r6 = (r4 + 15);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 28), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 29), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 32), r5);
    ctr = r0;
}

loc_80530F60:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    r7_stbu_ea_2 = (r7 + 2);
    MemoryInline::FlatWrite8(r7_stbu_ea_2, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80530F60;
    }
}

loc_80530F74:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r4 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 112), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 92u, (r4 + 96));
    MemoryInline::WriteResolved8(guest_range_1, 92u, (r3 + 116), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 93u, (r4 + 97));
    MemoryInline::WriteResolved8(guest_range_1, 93u, (r3 + 117), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 94u, (r4 + 98));
    MemoryInline::WriteResolved8(guest_range_1, 94u, (r3 + 118), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 95u, (r4 + 99));
    MemoryInline::WriteResolved8(guest_range_1, 95u, (r3 + 119), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r4 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 120), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r4 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r4 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 128), r0);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 124), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 108u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r4 + 112));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r4 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 132), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 116u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r4 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r4 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 144), r0);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 140), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 124u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r4 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r4 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 152), r0);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 148), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 132u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r4 + 136));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r4 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r3 + 160), r0);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r3 + 156), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 140u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r4 + 144));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r4 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r3 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + 164), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 148u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r4 + 152));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r4 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 172), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r4 + 160));
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 180), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 160u, (r4 + 164));
    MemoryInline::WriteResolved8(guest_range_1, 160u, (r3 + 184), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 161u, (r4 + 165));
    MemoryInline::WriteResolved8(guest_range_1, 161u, (r3 + 185), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 162u, (r4 + 166));
    MemoryInline::WriteResolved8(guest_range_1, 162u, (r3 + 186), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r4 + 168));
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r3 + 188), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 168u, (r4 + 172));
    MemoryInline::WriteResolved8(guest_range_1, 168u, (r3 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 169u, (r4 + 173));
    MemoryInline::WriteResolved8(guest_range_1, 169u, (r3 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 170u, (r4 + 174));
    MemoryInline::WriteResolved8(guest_range_1, 170u, (r3 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r4 + 176));
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r3 + 196), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r4 + 180));
    MemoryInline::WriteResolved32(guest_range_1, 176u, (r3 + 200), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80530F30 func_80530F30 preserves=true fpr_mask=0x00000000
