#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A03C4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_805A03C4;

loc_805A03C4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 156), 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 156));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 172));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 188));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 160));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 176));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 192));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 164));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 180));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 196));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 204), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 204), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 208), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 212), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 216), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 220), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 224), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 228), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 232), f7.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 236), f8.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A03C4 func_805A03C4 preserves=true fpr_mask=0x00000000
