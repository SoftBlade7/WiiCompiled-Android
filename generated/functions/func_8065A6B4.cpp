#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065A6B4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_8065A6B4;

loc_8065A6B4:
{
    r12 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r12 = (r12 + 2408);
    guest_range_0 = MemoryInline::ResolveRangeHost(r12, 0, 20u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 2u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r12 + 2));
            r10 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r12 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 6u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r12 + 6));
            r8 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r12 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 10u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r12 + 10));
            r6 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r12 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 14u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r12 + 14));
            r4 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r12 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r12 + 18));
    r12 = MemoryInline::ReadResolved16(guest_range_0, 0u, r12);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r12)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, r3, r12);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), r10);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), r8);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), r7);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), r4);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r12)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 20), r12);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 22), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 24), r10);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 26), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 28), r8);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r3 + 30), r7);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r3 + 32), r6);
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r3 + 34), r5);
    }
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r3 + 36), static_cast<uint16_t>(r4));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 20u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r12)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r1 + 8), r12);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r1 + 10), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 12), r10);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r1 + 14), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 16), r8);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r1 + 18), r7);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r1 + 20), r6);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r1 + 22), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 24), r4);
        MemoryInline::WriteResolved16(guest_range_2, 18u, (r1 + 26), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r3 + 38), static_cast<uint16_t>(r0));
    r1 = (r1 + 32);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065A6B4 func_8065A6B4 preserves=true fpr_mask=0x00000000
