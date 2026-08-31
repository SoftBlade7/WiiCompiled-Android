#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DEB24(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_807DEB24;

loc_807DEB24:
{
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
        }
    }
    f9.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f6.d = PpcFmulsInline(f10.d, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f7.d = PpcFmulsInline(f9.d, f4.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f1.d = PpcFmulsInline(f9.d, f1.d);
    f0.d = PpcFmulsInline(f10.d, f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f4.d = PpcFmulsInline(f9.d, f3.d);
    f3.d = PpcFmulsInline(f10.d, f2.d);
    f8.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f5.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f8.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f9.d);
    f8.d = PpcFmulsInline(f11.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f10.d);
    f5.d = PpcFmulsInline(f11.d, f5.d);
    f2.d = PpcFmulsInline(f11.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f11.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
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
    ctx->fpr[11] = f11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807DEB24 func_807DEB24 preserves=true fpr_mask=0x00000000
