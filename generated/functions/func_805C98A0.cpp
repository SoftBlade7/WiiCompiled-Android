#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C98A0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805C98A0;

loc_805C98A0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r22);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r1 + 80), r24);
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r1 + 88), r26);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 92), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r28);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r31);
    }
    r31 = 0x808C0000u;
    r30 = r3;
    r31 = (r31 + -32224);
    ctx->lr = 0x805C98C0u;
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
    r3 = 0x808C0000u;
    r25 = 0x808C0000u;
    r3 = (r3 + -32072);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 484u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r3);
    r3 = (r31 + 40);
    r25 = (r25 + -31948);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 40), 0, 60u, true, false);
    r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 40));
    r8 = (r31 + 52);
    r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
    r7 = (r31 + 64);
    r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    r6 = (r31 + 76);
    MemoryInline::WriteResolved32(guest_range_0, 388u, (r30 + 388), r24);
    r5 = (r31 + 88);
    r4 = 1;
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 372u, (r30 + 372), r25);
    r3 = (r30 + 484);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r30 + 376), r30);
        MemoryInline::WriteResolved32(guest_range_0, 380u, (r30 + 380), r22);
    }
    MemoryInline::WriteResolved32(guest_range_0, 384u, (r30 + 384), r23);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 52));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r8 + 4));
        }
    }
    r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 408u, (r30 + 408), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 392u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 392u, (r30 + 392), r25);
        MemoryInline::WriteResolved32(guest_range_0, 396u, (r30 + 396), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 400u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 400u, (r30 + 400), r26);
        MemoryInline::WriteResolved32(guest_range_0, 404u, (r30 + 404), r27);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 64));
            r12 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r7 + 4));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 428u, (r30 + 428), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 412u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r30 + 412), r25);
        MemoryInline::WriteResolved32(guest_range_0, 416u, (r30 + 416), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 420u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 420u, (r30 + 420), r29);
        MemoryInline::WriteResolved32(guest_range_0, 424u, (r30 + 424), r12);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 76));
            r9 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r6 + 4));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 448u, (r30 + 448), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 432u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 432u, (r30 + 432), r25);
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r30 + 436), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 440u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r30 + 440), r10);
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r30 + 444), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r5 + 4));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r31 + 88));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r5 + 8));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 56), r22);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 60), r23);
    }
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 64), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 44), r26);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 48), r27);
    }
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 52), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r29);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r12);
    }
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r10);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r9);
    }
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r6);
    }
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 452u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 452u, (r30 + 452), r25);
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r30 + 456), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 460u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r30 + 460), r7);
        MemoryInline::WriteResolved32(guest_range_0, 464u, (r30 + 464), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 468u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r30 + 468), r5);
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r30 + 472), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 476u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r30 + 476), r4);
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r30 + 480), r0);
    }
    ctx->lr = 0x805C99E0u;
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
    r3 = r30;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 72));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 80));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 88));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r1 + 96));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 104));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r1 + 108));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 116));
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
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC0000E gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805C98A0 func_805C98A0 preserves=true fpr_mask=0x00000000
