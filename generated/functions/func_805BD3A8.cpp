#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BD3A8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805BD3A8;

loc_805BD3A8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r27);
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r27 = 0x808B0000u;
    r31 = r3;
    r27 = (r27 + 30352);
    ctx->lr = 0x805BD3C8u;
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
    ctx->lr = 0x805BD3DCu;
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
    r3 = (r27 + 72);
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 72), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r27 + 72));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
        }
    }
    r12 = 0x808B0000u;
    r30 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
    r12 = (r12 + 30648);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 504), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 520), r30);
    r7 = (r27 + 84);
    r6 = (r27 + 96);
    r5 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 504), r12);
    r4 = 1;
    r0 = 8;
    r3 = r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 508), r31);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 512), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 516), r29);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r27 + 84));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r7 + 4));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 540), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 524), r12);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 528), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 532), r11);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 536), r10);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r6 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r27 + 96));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r31 + 560), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 544), r12);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 548), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + 552), r8);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r31 + 556), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 564), r5);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r31 + 568), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r31 + 572), r5);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r31 + 576), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 580), r4);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r31 + 592), r0);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r29);
    }
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 40), r30);
    r27 = MemoryInline::FlatRead32((r1 + 60));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 20), r11);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 24), r10);
    }
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 28), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r8);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 12), r7);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 16), r6);
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800000E gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805BD3A8 func_805BD3A8 preserves=true fpr_mask=0x00000000
