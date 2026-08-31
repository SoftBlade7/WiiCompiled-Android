#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019A894(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    goto loc_8019A894;

loc_8019A894:
{
    f11.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f9.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f10.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26400));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f11.d));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f9.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f9.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f9.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f10.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = (-(f3.d));
    f3.d = PpcFmulsInline(f4.d, f12.d);
    f0.d = (-(f0.d));
    f2.d = PpcFmulsInline(f12.d, f1.d);
    f1.d = PpcFmulsInline(f4.d, f11.d);
    f0.d = PpcFmulsInline(f11.d, f0.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f1.d = PpcFmulsInline(f1.d, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x000001FE fpr_write=0x00001E1F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019A894 func_8019A894 preserves=true fpr_mask=0x00000000
