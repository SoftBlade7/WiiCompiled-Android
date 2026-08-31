#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022C958(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_8022C958;

loc_8022C958:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -24), r26);
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x8002159C
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 116u, true, false);
    r26 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r3 + 104));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r3 + 108));
        }
    }
    r29 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 4));
    r30 = MemoryInline::ReadResolved16(guest_range_0, 114u, (r3 + 118));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 52));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 20));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 24));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 28));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 16));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r3 + 44));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 41u, (r3 + 45));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 42u, (r3 + 46));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 43u, (r3 + 47));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 56u, (r3 + 60));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 57u, (r3 + 61));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 58u, (r3 + 62));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 59u, (r3 + 63));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
            f8.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 68));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 72));
        }
    }
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r3 + 76));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 6));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 16), 0, 62u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r4 + 53), static_cast<uint8_t>(r11));
    r11 = (r1 + 32);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 19), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 16), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 17), static_cast<uint8_t>(r28));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r4 + 20), r29);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r4 + 22), r30);
    }
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 18), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r4 + 48), f6.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 24), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r4 + 28), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r4 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r4 + 36), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r4 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r4 + 44), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r4 + 52), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r4 + 54), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r4 + 55), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r4 + 56), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r4 + 57), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r4 + 58), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r4 + 59), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r4 + 60), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r4 + 64), f8.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r4 + 68), f9.d);
    MemoryInline::WriteResolved16(guest_range_1, 60u, (r4 + 76), static_cast<uint16_t>(r0));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00001A gpr_write=0xFC001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022C958 func_8022C958 preserves=true fpr_mask=0x00000000
