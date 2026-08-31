#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008B660(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];

    goto loc_8008B660;

loc_8008B660:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r11 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 2u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
            r9 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 6u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
            r7 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 10u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    r4 = (r1 + 8);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r12)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 8), r12);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 10), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 12), r10);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 14), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 16), r9);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r1 + 18), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r1 + 20), r8);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r1 + 22), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r1 + 24), r7);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r1 + 26), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r1 + 28), r6);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r1 + 30), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r1 + 32), r5);
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r1 + 34), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_1, 36u, (r1 + 36), r0);
        MemoryInline::WriteResolved16(guest_range_1, 38u, (r1 + 38), r11);
    }
    ctx->lr = 0x8008B6D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8008C340u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008B660 func_8008B660 preserves=true fpr_mask=0x00000000
