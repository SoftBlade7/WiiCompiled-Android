#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80234A54_statefree(uint32_t, uint32_t, uint32_t, PPC_FPR);
extern "C" uint64_t func_80234A54_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_802351F0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_802351F0;

loc_802351F0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r31 = r3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80234A54u) && KnownTranslatedCpuCall<0x80234A54u>::kAvailable && !KnownTranslatedCpuCall<0x80234A54u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80234A54u>()) {
        const auto state_free_result_80234A54_BC5 = func_80234A54_statefree_v0(r1, r2, r3);
        r1 = static_cast<uint32_t>(state_free_result_80234A54_BC5);
    } else {
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
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80234A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -24856), 0, 12u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -24852));
    r3 = 0x802A0000u;
    r3 = (r3 + 15312);
    r4 = 1;
    r0 = 16;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 36), r3);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -24848));
    r3 = r31;
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 40), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 44), f1.d);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 48), static_cast<uint8_t>(r0));
    r25 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r2 + -24856));
    r26 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r2 + -24855));
    r27 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r2 + -24854));
    r28 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r2 + -24853));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r31 + 52), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r31 + 49), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r31 + 50), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 51), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 60), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r31 + 64), static_cast<uint8_t>(r0));
    r29 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r2 + -24856));
    r30 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r2 + -24855));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r2 + -24854));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r2 + -24853));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r31 + 68), static_cast<uint8_t>(r11));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 11), static_cast<uint8_t>(r11));
    r11 = (r1 + 64);
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r31 + 65), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r31 + 66), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r31 + 67), static_cast<uint8_t>(r12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 72), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 76), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r31 + 80), static_cast<uint8_t>(r0));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r2 + -24856));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r2 + -24855));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r2 + -24854));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r2 + -24853));
    MemoryInline::WriteResolved8(guest_range_1, 48u, (r31 + 84), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r31 + 81), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r31 + 82), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r31 + 83), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r31 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r31 + 92), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 60u, (r31 + 96), static_cast<uint8_t>(r0));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r2 + -24856));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r2 + -24855));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r2 + -24854));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r2 + -24853));
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r31 + 100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 61u, (r31 + 97), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 62u, (r31 + 98), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 63u, (r31 + 99), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r31 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r31 + 108), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r1 + 20), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r1 + 21), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r1 + 22), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r1 + 23), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 8), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 9), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 10), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r1 + 12), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r1 + 13), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r1 + 14), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r1 + 15), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 16), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r1 + 17), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r1 + 18), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r1 + 19), static_cast<uint8_t>(r0));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 68));
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE00000E gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802351F0 func_802351F0 preserves=true fpr_mask=0x00000000
