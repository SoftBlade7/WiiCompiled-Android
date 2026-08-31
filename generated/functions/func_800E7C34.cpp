#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7C34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800E7C34;

loc_800E7C34:
{
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = MemoryInline::FlatRead32((r6 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800E7C40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E7C4C;
    }
}

loc_800E7C44:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E7C4C:
{
    r4 = r6;
    r7 = 0;
    ctr = r5;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E7C74;
    }
}

loc_800E7C5C:
{
    r0 = MemoryInline::FlatRead8((r4 + 78));
}

loc_800E7C64:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E7C74;
    }
}

loc_800E7C68:
{
    r4 = (r4 + 48);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E7C5C;
    }
}

loc_800E7C74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r5));
}

loc_800E7C78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E7C84;
    }
}

loc_800E7C7C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E7C84:
{
    r0 = (r7 * 48);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = (r3 + r0);
    goto loc_800E7CFC;
}

loc_800E7C94:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 104), 0, 48u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 104));
    r7 = (r7 + 1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 108));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r4 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 112));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 136));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 144));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r4 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r4 + 100), r0);
    }
    r4 = (r4 + 48);
}

loc_800E7CFC:
{
    r3 = MemoryInline::FlatRead32((r6 + 48));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_800E7D08:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800E7C94;
    }
}

loc_800E7D0C:
{
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E7C34 func_800E7C34 preserves=true fpr_mask=0x00000000
