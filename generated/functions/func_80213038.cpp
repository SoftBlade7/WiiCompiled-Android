#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80213038(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
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

    goto loc_80213038;

loc_80213038:
{
    r12 = 0x80380000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25936), 0, 40u, true, false);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25936));
    r12 = (r12 + 13064);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -25900));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -25908));
    r11 = (r12 + 0);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -25916));
    r9 = (r12 + 44);
    r8 = (r12 + 88);
    r7 = (r12 + 128);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -25932));
    r10 = 5;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -25912));
    r0 = 0;
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -25928));
    r6 = (r12 + 168);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -25924));
    r4 = (r12 + 208);
    r3 = (r12 + 228);
    r5 = (r12 + 188);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -25920));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -25904));
    guest_range_1 = MemoryInline::ResolveRangeHost(r12, 0, 232u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r12, f9.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + 4), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r11 + 4), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r11 + 8), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r11 + 12), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r11 + 16), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r11 + 20), f4.d);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r11 + 24), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r11 + 28), f9.d);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r11 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r11 + 36), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r11 + 40), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r12 + 44), f9.d);
    guest_range_3 = MemoryInline::ResolveRangeHost((r9 + 4), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r9 + 4), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r9 + 8), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r9 + 12), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r9 + 16), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r9 + 20), f4.d);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r9 + 24), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r9 + 28), f9.d);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r9 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r9 + 36), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r9 + 40), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r12 + 88), f9.d);
    guest_range_4 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r8 + 4), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r8 + 8), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r8 + 12), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r8 + 16), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r8 + 20), r10);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r8 + 24), f9.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r8 + 28), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r8 + 32), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r8 + 36), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r12 + 128), f9.d);
    guest_range_5 = MemoryInline::ResolveRangeHost((r7 + 4), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r7 + 4), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r7 + 8), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r7 + 12), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r7 + 16), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r7 + 20), r10);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r7 + 24), f9.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r7 + 28), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r7 + 32), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r7 + 36), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 168u, (r12 + 168), f2.d);
    guest_range_6 = MemoryInline::ResolveRangeHost((r6 + 4), 0, 76u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, (r6 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r6 + 8), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r6 + 12), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r6 + 16), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 188u, (r12 + 188), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r5 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r5 + 8), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r5 + 12), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r5 + 16), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 208u, (r12 + 208), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 40u, (r4 + 4), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 44u, (r4 + 8), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 48u, (r4 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 52u, (r4 + 16), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 228u, (r12 + 228), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 60u, (r3 + 4), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 64u, (r3 + 8), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 68u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 72u, (r3 + 16), f4.d);
    }
    ctx->gpr[0] = r0;
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

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80213038 func_80213038 preserves=true fpr_mask=0x00000000
