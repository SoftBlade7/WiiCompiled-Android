#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074AE2C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8074AE2C;

loc_8074AE2C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r4 = 0x808D0000u;
    r5 = 0x808D0000u;
    r7 = 0x80240000u;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r4 = (r4 + -17384);
    r5 = (r5 + -17360);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r6 = 0x808D0000u;
    r30 = (r3 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r4);
    r4 = 0x808D0000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r31);
    }
    r7 = (r7 + 28832);
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r7);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r7 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r7);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r7 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r7);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r7 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
    r4 = (r4 + -17408);
    r9 = MemoryInline::FlatRead32(r4);
    r6 = (r6 + -17396);
    r5 = MemoryInline::FlatRead32(r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 0u, r7);
            r11 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r7 + 4));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r7 + 8));
    r8 = MemoryInline::FlatRead32((r4 + 4));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r9);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r7);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r11);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r30);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r31);
    }
    r31 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 8), r12);
    r30 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 12), r11);
    MemoryInline::FlatWriteRam32((r1 + 16), r10);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8074AE2C func_8074AE2C preserves=true fpr_mask=0x00000000
