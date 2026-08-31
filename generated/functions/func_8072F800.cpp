#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072F800(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r31 = ctx->gpr[31];

    goto loc_8072F800;

loc_8072F800:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    ctx->lr = 0x8072F818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80730198u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    r4 = 0x808D0000u;
    r3 = 0x808D0000u;
    r4 = (r4 + -23508);
    r8 = 0;
    r3 = (r3 + -23392);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 52), 0, 148u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 52), r4);
    r7 = 0x80240000u;
    r4 = 0x808D0000u;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r31 + 152), r3);
    r6 = 0x808D0000u;
    r3 = r31;
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r31 + 156), r8);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r31 + 164), r0);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r31 + 160), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r31 + 168), r0);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r31 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r31 + 172), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r31 + 180), r0);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r31 + 188), r0);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r31 + 184), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r7 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r31 + 192), r0);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r31 + 196), r8);
    }
    r4 = (r4 + -23532);
    r9 = MemoryInline::FlatRead32(r4);
    r6 = (r6 + -23520);
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
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 12), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 16), r10);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 20), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 40), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r31 + 156), r31);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r31 + 160), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r31 + 164), r4);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r31 + 168), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r31 + 172), r9);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r31 + 176), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r31 + 180), r7);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r31 + 184), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r31 + 188), r11);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r31 + 192), r10);
    }
    // inline leaf 0x8074AFB4 (6 guest instruction(s))
    r4 = (r3 + 8);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1;
    // end of inlined leaf 0x8074AFB4
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072F800 func_8072F800 preserves=true fpr_mask=0x00000000
