#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E9A80(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800E9A80;

loc_800E9A80:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r7 = (r7_rot_0 & 536870911);
}

loc_800E9A84:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800E9D0C;
    }
}

loc_800E9A88:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r7) >> 3);
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_800E9C40;
    }
}

loc_800E9A90:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
}

loc_800E9A94:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9BB0;
    }
}

loc_800E9A9C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 128u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r6 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r6 + 32), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r6 + 44), r3);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r6 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r6 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r6 + 48), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r4 + 56));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r4 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r6 + 60), r3);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r6 + 56), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r4 + 64));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r4 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r6 + 68), r3);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r6 + 64), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 72u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r4 + 72));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r4 + 76));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r6 + 76), r3);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r6 + 72), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r4 + 80));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r4 + 84));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r6 + 84), r3);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r6 + 80), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r4 + 88));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r4 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r6 + 92), r3);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r6 + 88), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 96u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r4 + 96));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r4 + 100));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r6 + 100), r3);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r6 + 96), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 104u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r4 + 104));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r4 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r6 + 108), r3);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r6 + 104), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 112u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r4 + 112));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r4 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r6 + 116), r3);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r6 + 112), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r4 + 120));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r4 + 124));
        }
    }
    r4 = (r4 + 128);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r6 + 124), r3);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r6 + 120), r0);
    }
    r6 = (r6 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E9A9C;
    }
}

loc_800E9BA8:
{
    r8 = (r8 & 1);
}

loc_800E9BAC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800E9C40;
    }
}

loc_800E9BB0:
{
    ctr = r8;
}

loc_800E9BB4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost(r6, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_3, 0u, r6, r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + 8), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r4 + 16));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + 16), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r4 + 24));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + 24), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r4 + 32));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r6 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r6 + 32), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r4 + 40));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r6 + 44), r3);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r6 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r4 + 48));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r6 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r6 + 48), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r4 + 56));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r4 + 60));
        }
    }
    r4 = (r4 + 64);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r6 + 60), r3);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r6 + 56), r0);
    }
    r6 = (r6 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E9BB4;
    }
}

loc_800E9C40:
{
    r0 = (r7 & 7);
}

loc_800E9C48:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_800E9D0C;
    }
}

loc_800E9C4C:
{
    r3 = 0x80280000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + -25840);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E9D0Cu:
        goto loc_800E9D0C;
        break;
    case 0x800E9CF4u:
        goto loc_800E9CF4;
        break;
    case 0x800E9CDCu:
        goto loc_800E9CDC;
        break;
    case 0x800E9CC4u:
        goto loc_800E9CC4;
        break;
    case 0x800E9CACu:
        goto loc_800E9CAC;
        break;
    case 0x800E9C94u:
        goto loc_800E9C94;
        break;
    case 0x800E9C7Cu:
        goto loc_800E9C7C;
        break;
    case 0x800E9C64u:
        goto loc_800E9C64;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800E9C64:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9C7C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9C94:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9CAC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9CC4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9CDC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9CF4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9D0C:
{
    r0 = (r5 & 7);
    r5 = r6;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800E9D18:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_800E9D1C:
{
    r3 = 0x80280000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + -25872);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E9D9Cu:
        goto loc_800E9D9C;
        break;
    case 0x800E9D94u:
        goto loc_800E9D94;
        break;
    case 0x800E9D84u:
        goto loc_800E9D84;
        break;
    case 0x800E9D74u:
        goto loc_800E9D74;
        break;
    case 0x800E9D64u:
        goto loc_800E9D64;
        break;
    case 0x800E9D54u:
        goto loc_800E9D54;
        break;
    case 0x800E9D44u:
        goto loc_800E9D44;
        break;
    case 0x800E9D34u:
        goto loc_800E9D34;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800E9D34:
{
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r6 + 1);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
}

loc_800E9D44:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D54:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D64:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D74:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D84:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D94:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_800E9D9C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E9A80 func_800E9A80 preserves=true fpr_mask=0x00000000
