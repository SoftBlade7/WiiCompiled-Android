#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E39D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint32_t r7_stbu_ea_3 = 0;
    uint32_t r7_stbu_ea_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805E39D8;

loc_805E39D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 38;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
}

loc_805E3A04:
{
    r4 = r29;
    r3 = (r28 + 392);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_805E3A1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E3B6C;
    }
}

loc_805E3A20:
{
    r4 = r29;
    r3 = (r28 + 392);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x805FA930
    r0 = (r29 & 255);
    r5 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r0 * 240);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r3 + 15);
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r4 + 3120), r0);
    r7 = (r4 + 3131);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWrite8((r4 + 3124), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 9));
    MemoryInline::FlatWrite8((r4 + 3125), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r4 + 3128), r0);
    ctr = r31;
}

loc_805E3A68:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    r7_stbu_ea_3 = (r7 + 2);
    MemoryInline::FlatWrite8(r7_stbu_ea_3, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E3A68;
    }
}

loc_805E3A7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 92), 0, 92u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 92));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 3208), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r4 + 3208), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 96));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 3212), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 97));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 3213), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 98));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 3214), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 99));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 3215), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 3216), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 108));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 104));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 3220), r5);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 3224), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 116));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 112));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 3228), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 3232), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 124));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 120));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 3236), r5);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 3240), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 132));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 128));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 3244), r5);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r4 + 3248), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 140));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 136));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r4 + 3252), r5);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r4 + 3256), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 52u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 148));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 144));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r4 + 3260), r5);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r4 + 3264), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 60u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 156));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 152));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r4 + 3268), r5);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r4 + 3272), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 160));
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r4 + 3276), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 72u, (r3 + 164));
    MemoryInline::WriteResolved8(guest_range_1, 72u, (r4 + 3280), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 73u, (r3 + 165));
    MemoryInline::WriteResolved8(guest_range_1, 73u, (r4 + 3281), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 74u, (r3 + 166));
    MemoryInline::WriteResolved8(guest_range_1, 74u, (r4 + 3282), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r3 + 168));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r4 + 3284), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 80u, (r3 + 172));
    MemoryInline::WriteResolved8(guest_range_1, 80u, (r4 + 3288), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 81u, (r3 + 173));
    MemoryInline::WriteResolved8(guest_range_1, 81u, (r4 + 3289), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 82u, (r3 + 174));
    MemoryInline::WriteResolved8(guest_range_1, 82u, (r4 + 3290), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 176));
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r4 + 3292), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 180));
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r4 + 3296), r0);
}

loc_805E3B6C:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(12));
}

loc_805E3B74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805E3A04;
    }
}

loc_805E3B78:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E39D8 func_805E39D8 preserves=true fpr_mask=0x00000000
