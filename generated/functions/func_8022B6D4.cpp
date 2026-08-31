#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022B6D4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_8022B6D4;

loc_8022B6D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25696), 0, 632u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 600u, (r2 + -25096));
    r0 = 1633;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 608u, (r2 + -25088));
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x802A0000u;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 616u, (r2 + -25080));
    r30 = (r30 + 12584);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 624u, (r2 + -25072));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 604u, (r2 + -25092));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 612u, (r2 + -25084));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r2 + -25692));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r2 + -25691));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r2 + -25690));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r2 + -25689));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r2 + -25696));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r2 + -25695));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r2 + -25694));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r2 + -25693));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 620u, (r2 + -25076));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 628u, (r2 + -25068));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r30);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), r31);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f7.d);
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r3 + 44), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r3 + 45), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r3 + 46), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r3 + 47), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 48), f3.d);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r31);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 56), f3.d);
    MemoryInline::WriteResolved8(guest_range_1, 60u, (r3 + 60), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 61u, (r3 + 61), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 62u, (r3 + 62), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 63u, (r3 + 63), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 64), r4);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 68), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 76), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 104), r31);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 108), r31);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r3 + 112), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 118u, (r3 + 118), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000E gpr_write=0xC0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022B6D4 func_8022B6D4 preserves=true fpr_mask=0x00000000
