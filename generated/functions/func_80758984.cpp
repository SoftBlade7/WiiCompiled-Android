#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80758984(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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

    goto loc_80758984;

loc_80758984:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r8 = 0x808A0000u;
    r6 = 8;
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r1 + 132), r0);
    r4 = (r1 + 48);
    r5 = (r1 + 16);
    r7 = (r1 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r1 + 80), r20);
        MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 84), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r1 + 88), r22);
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r1 + 92), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r1 + 96), r24);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 100), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r1 + 104), r26);
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r1 + 108), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r1 + 112), r28);
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 116), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r1 + 120), r30);
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r1 + 124), r31);
    }
    r28 = 0;
    r29 = 0x808A0000u;
    r8 = (r8 + 13416);
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 32u, true, false);
    r20 = MemoryInline::ReadResolved32(guest_range_0, 0u, r8);
    r29 = (r29 + 13448);
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 8u, true, false);
    r30 = MemoryInline::ReadResolved8(guest_range_1, 0u, r29);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r8 + 4));
            r22 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r8 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r8 + 12));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r8 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r8 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r8 + 24));
        }
    }
    r27 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r8 + 28));
    r31 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 1));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 2));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r29 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r29 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r29 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r29 + 7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 48), r20);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 56), r22);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 60), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r24);
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 20), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 24), r28);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 28), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r28);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 44), r28);
    }
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 8), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 9), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r1 + 10), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r1 + 11), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r1 + 12), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r1 + 13), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r1 + 14), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r1 + 15), static_cast<uint8_t>(r0));
    ctx->lr = 0x80758A54u;
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
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    InvokeDirectCpu<0x80820EB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 80));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 88));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 96));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 104));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 112));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 120));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 124));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFE00E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80758984 func_80758984 preserves=true fpr_mask=0x00000000
