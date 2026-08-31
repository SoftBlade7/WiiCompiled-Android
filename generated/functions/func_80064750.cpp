#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80064750;

loc_80064750:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 148u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 4));
}

loc_80064758:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800647C8;
    }
}

loc_8006475C:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 12));
        }
    }
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r0 = (r0 | 1);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 16));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 20));
        }
    }
    MemoryInline::FlatWrite32((r4 + 16), r5);
    MemoryInline::FlatWrite32((r4 + 12), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 24));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 28));
        }
    }
    MemoryInline::FlatWrite32((r4 + 24), r5);
    MemoryInline::FlatWrite32((r4 + 20), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 32));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 36));
        }
    }
    MemoryInline::FlatWrite32((r4 + 32), r5);
    MemoryInline::FlatWrite32((r4 + 28), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 40));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 44));
        }
    }
    MemoryInline::FlatWrite32((r4 + 40), r5);
    MemoryInline::FlatWrite32((r4 + 36), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 48));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 52));
        }
    }
    MemoryInline::FlatWrite32((r4 + 48), r5);
    MemoryInline::FlatWrite32((r4 + 44), r6);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_800647C8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 5));
}

loc_800647D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80064840;
    }
}

loc_800647D4:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 52u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 60));
        }
    }
    MemoryInline::FlatWrite32((r4 + 56), r0);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r4 + 52), r5);
    r0 = (r0 | 2);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 60u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 64));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 68));
        }
    }
    MemoryInline::FlatWrite32((r4 + 64), r5);
    MemoryInline::FlatWrite32((r4 + 60), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 68u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 72));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 76));
        }
    }
    MemoryInline::FlatWrite32((r4 + 72), r5);
    MemoryInline::FlatWrite32((r4 + 68), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 76u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r3 + 80));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r3 + 84));
        }
    }
    MemoryInline::FlatWrite32((r4 + 80), r5);
    MemoryInline::FlatWrite32((r4 + 76), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 84u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 88));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 92));
        }
    }
    MemoryInline::FlatWrite32((r4 + 88), r5);
    MemoryInline::FlatWrite32((r4 + 84), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 92u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 96));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 100));
        }
    }
    MemoryInline::FlatWrite32((r4 + 96), r5);
    MemoryInline::FlatWrite32((r4 + 92), r6);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80064840:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 6));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80064848:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006484C:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r3 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r3 + 108));
        }
    }
    MemoryInline::FlatWrite32((r4 + 104), r0);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r4 + 100), r5);
    r0 = (r0 | 4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 108u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r3 + 112));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r3 + 116));
        }
    }
    MemoryInline::FlatWrite32((r4 + 112), r5);
    MemoryInline::FlatWrite32((r4 + 108), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 116u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r3 + 120));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r3 + 124));
        }
    }
    MemoryInline::FlatWrite32((r4 + 120), r5);
    MemoryInline::FlatWrite32((r4 + 116), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 124u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r3 + 128));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r3 + 132));
        }
    }
    MemoryInline::FlatWrite32((r4 + 128), r5);
    MemoryInline::FlatWrite32((r4 + 124), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 132u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r3 + 136));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r3 + 140));
        }
    }
    MemoryInline::FlatWrite32((r4 + 136), r5);
    MemoryInline::FlatWrite32((r4 + 132), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 140u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r3 + 144));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 148));
        }
    }
    MemoryInline::FlatWrite32((r4 + 144), r3);
    MemoryInline::FlatWrite32((r4 + 140), r5);
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80064750 func_80064750 preserves=true fpr_mask=0x00000000
