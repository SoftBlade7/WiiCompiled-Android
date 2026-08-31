#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590288(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    goto loc_80590288;

loc_80590288:
{
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 240), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 256), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 260), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 264), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 268), f4.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 240), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 244), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 248), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 252), f0.d);
    }
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590288 func_80590288 preserves=true fpr_mask=0x00000000
