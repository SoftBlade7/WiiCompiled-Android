#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80635EC4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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

    goto loc_80635EC4;

loc_80635EC4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 116), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r1 + 88), r26);
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r1 + 92), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r1 + 96), r28);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 100), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r1 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r1 + 108), r31);
    }
    r29 = 0x808C0000u;
    r26 = r3;
    r29 = (r29 + -6080);
    ctx->lr = 0x80635EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8063CE6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = 0x808C0000u;
    r0 = 0;
    r3 = (r3 + -5808);
    r28 = (r26 + 168);
    MemoryInline::FlatWrite32(r26, r3);
    r3 = r28;
    MemoryInline::FlatWrite32((r26 + 152), r0);
    MemoryInline::FlatWrite32((r26 + 156), r0);
    MemoryInline::FlatWrite32((r26 + 160), r0);
    MemoryInline::FlatWrite32((r26 + 164), r0);
    ctx->lr = 0x80635F10u;
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
    r30 = 0x808C0000u;
    r3 = (r28 + 372);
    r30 = (r30 + -5736);
    MemoryInline::FlatWrite32(r28, r30);
    ctx->lr = 0x80635F24u;
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
    r3 = (r29 + 0);
    guest_range_3 = MemoryInline::ResolveRangeHost(r29, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_3, 0u, r29);
            r11 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r3 + 4));
        }
    }
    r31 = 0x808C0000u;
    r10 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r3 + 8));
    r31 = (r31 + -5676);
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 504), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r28 + 520), r10);
    r27 = (r26 + 752);
    r5 = (r29 + 12);
    r4 = (r29 + 24);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r28 + 504), r31);
    r3 = r27;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r28 + 508), r28);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r28 + 512), r12);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r28 + 516), r11);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 12u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r29 + 12));
            r8 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r5 + 4));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r28 + 540), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r28 + 524), r31);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r28 + 528), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r28 + 532), r9);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r28 + 536), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r29 + 24));
            r5 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r4 + 4));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r4 + 8));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 44), r12);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 48), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 52), r10);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 56), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 60), r8);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 64), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 72), r5);
    }
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 76), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r28 + 544), r31);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r28 + 548), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r28 + 552), r6);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r28 + 556), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r28 + 560), r0);
    ctx->lr = 0x80635FC8u;
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
    MemoryInline::FlatWrite32(r27, r30);
    r3 = (r27 + 372);
    ctx->lr = 0x80635FD4u;
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
    r3 = (r29 + 36);
    guest_range_5 = MemoryInline::ResolveRangeHost((r29 + 36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r29 + 36));
            r11 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 4));
        }
    }
    r5 = (r29 + 48);
    r10 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r3 + 8));
    r4 = (r29 + 60);
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 504), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r27 + 520), r10);
    r3 = r26;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r27 + 504), r31);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 508), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r27 + 512), r12);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r27 + 516), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 12u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r29 + 48));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r5 + 4));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r27 + 540), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r27 + 524), r31);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r27 + 528), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r27 + 532), r9);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r27 + 536), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r29 + 60));
            r5 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r4 + 4));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r27 + 560), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r27 + 544), r31);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r27 + 548), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r27 + 552), r6);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r27 + 556), r5);
    }
    r26 = MemoryInline::FlatRead32((r1 + 88));
    r27 = MemoryInline::FlatRead32((r1 + 92));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_6, 32u, (r1 + 40), r0);
    r0 = MemoryInline::FlatRead32((r1 + 116));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_6, 0u, (r1 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_6, 4u, (r1 + 12), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_6, 8u, (r1 + 16), r10);
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r1 + 20), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r1 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_6, 20u, (r1 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r1 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_6, 28u, (r1 + 36), r5);
    }
    ctx->lr = r0;
    r1 = (r1 + 112);
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
// RECOMP_REGISTRATION base 0x80635EC4 func_80635EC4 preserves=true fpr_mask=0x00000000
