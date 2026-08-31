#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054703C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];

    goto loc_8054703C;

loc_8054703C:
{
    r6 = 65536;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r6 + -29504);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    r0 = (r5 * r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    r12 = (r3 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    guest_range_1 = MemoryInline::ResolveRangeHost((r12 + 72), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r12 + 72), r10);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r12 + 76), r9);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r12 + 80), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r12 + 84), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r12 + 88), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r12 + 92), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r12 + 96), r11);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r4 + 56));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r12 + 100), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r4 + 60));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r12 + 104), r10);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r12 + 108), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r12 + 112), r8);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r12 + 116), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r12 + 120), r6);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r12 + 124), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r12 + 128), r3);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r12 + 132), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00001FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054703C func_8054703C preserves=true fpr_mask=0x00000000
