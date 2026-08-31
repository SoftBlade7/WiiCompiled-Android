#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227B18(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_80227B18;

loc_80227B18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 40u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 8));
    r5 = (r13 + -23976);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 12));
    r6 = (r13 + -23984);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25228));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -25224));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 8));
    f4.d = PpcFmulsInline(f5.d, f3.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 12));
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -25240));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 32));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 36));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 24));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 28));
        }
    }
    f1.d = (-(f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 20), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 28));
    r3 = r4;
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r13 + -23976));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r13 + -23984));
    f4.d = PpcFmulsInline(f0.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    // inline leaf 0x80228DD8 (16 guest instruction(s))
    f8.d = MemoryInline::FlatReadFloat32((r2 + -25192));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f2.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    // end of inlined leaf 0x80228DD8
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x0000201C gpr_write=0x00000068 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227B18 func_80227B18 preserves=true fpr_mask=0x00000000
