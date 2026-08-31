#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80790E7C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];

    goto loc_80790E7C;

loc_80790E7C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 113u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
    r23 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r4 + 20));
    r24 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r4 + 21));
    r25 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r4 + 22));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 36));
        }
    }
    r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 40));
    r31 = MemoryInline::ReadResolved8(guest_range_1, 44u, (r4 + 44));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            f10.d = PpcBitCastToFloatInline(resolved_pair.first);
            f9.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f10.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r4 + 48));
            f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r4 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            f8.d = PpcBitCastToFloatInline(resolved_pair.first);
            f7.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r4 + 56));
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r4 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r4 + 64));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r4 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 72u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r4 + 72));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r4 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 80u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r4 + 80));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r4 + 84));
        }
    }
    r12 = MemoryInline::ReadResolved8(guest_range_1, 88u, (r4 + 88));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 89u, (r4 + 89));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 90u, (r4 + 90));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 91u, (r4 + 91));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 92u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r4 + 92));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r4 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 100u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r4 + 100));
            r5 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r4 + 104));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 108u, (r4 + 108));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 112u, (r4 + 112));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 113u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 89u, (r3 + 89), static_cast<uint8_t>(r11));
    r11 = (r1 + 64);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r18);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r20);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r21);
    }
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r22);
    MemoryInline::WriteResolved8(guest_range_2, 20u, (r3 + 20), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_2, 21u, (r3 + 21), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r3 + 22), static_cast<uint8_t>(r25));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r29);
    }
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r30);
    MemoryInline::WriteResolved8(guest_range_2, 44u, (r3 + 44), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r3 + 48), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r3 + 52), f9.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r3 + 56), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r3 + 60), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r3 + 64), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r3 + 68), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r3 + 72), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r3 + 76), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r3 + 80), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r3 + 84), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_2, 88u, (r3 + 88), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_2, 90u, (r3 + 90), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 91u, (r3 + 91), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r3 + 92), r8);
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r3 + 96), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r3 + 100), r6);
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r3 + 104), r5);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r3 + 108), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 112u, (r3 + 112), static_cast<uint8_t>(r0));
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC001A gpr_write=0xFFFC1FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80790E7C func_80790E7C preserves=true fpr_mask=0x00000000
