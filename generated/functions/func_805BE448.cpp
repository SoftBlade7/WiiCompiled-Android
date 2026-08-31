#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BE448(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805BE448;

loc_805BE448:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r26);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r28);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r31);
    }
    r26 = 0x808B0000u;
    r31 = r3;
    r26 = (r26 + 30352);
    ctx->lr = 0x805BE468u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r4 = 0x808B0000u;
    r3 = (r31 + 372);
    r4 = (r4 + 30572);
    MemoryInline::FlatWrite32(r31, r4);
    ctx->lr = 0x805BE47Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805EFAF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r3 = (r26 + 108);
    guest_range_2 = MemoryInline::ResolveRangeHost((r26 + 108), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r26 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    r30 = 0x808B0000u;
    r29 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    r30 = (r30 + 30648);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 596u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 520u, (r31 + 520), r29);
    r4 = 0x808B0000u;
    r8 = (r26 + 120);
    r7 = (r26 + 132);
    MemoryInline::WriteResolved32(guest_range_0, 504u, (r31 + 504), r30);
    r4 = (r4 + 30496);
    r6 = 0;
    r5 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 508u, (r31 + 508), r31);
    r0 = 8;
    r3 = r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 512u, (r31 + 512), r27);
        MemoryInline::WriteResolved32(guest_range_0, 516u, (r31 + 516), r28);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r26 + 120));
            r11 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r8 + 4));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 540u, (r31 + 540), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 524u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 524u, (r31 + 524), r30);
        MemoryInline::WriteResolved32(guest_range_0, 528u, (r31 + 528), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 532u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 532u, (r31 + 532), r12);
        MemoryInline::WriteResolved32(guest_range_0, 536u, (r31 + 536), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r9 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r7 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r26 + 132));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 560u, (r31 + 560), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 544u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 544u, (r31 + 544), r30);
        MemoryInline::WriteResolved32(guest_range_0, 548u, (r31 + 548), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 552u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 552u, (r31 + 552), r9);
        MemoryInline::WriteResolved32(guest_range_0, 556u, (r31 + 556), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 564u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 564u, (r31 + 564), r6);
        MemoryInline::WriteResolved32(guest_range_0, 568u, (r31 + 568), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 572u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 572u, (r31 + 572), r6);
        MemoryInline::WriteResolved32(guest_range_0, 576u, (r31 + 576), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 580u, (r31 + 580), r5);
    MemoryInline::WriteResolved32(guest_range_0, 592u, (r31 + 592), r0);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r27);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r28);
    }
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r29);
    r26 = MemoryInline::FlatRead32((r1 + 56));
    r27 = MemoryInline::FlatRead32((r1 + 60));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r12);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r10);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r8);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r7);
    }
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00000E gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805BE448 func_805BE448 preserves=true fpr_mask=0x00000000
