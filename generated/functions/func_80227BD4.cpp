#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227BD4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_80227BD4;

loc_80227BD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    r7 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x80227CB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
        }
    }
    f6.d = MemoryInline::FlatReadFloat32((r2 + -25240));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r1 + 20));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r1 + 16));
        }
    }
    f4.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -25212));
    MemoryInline::FlatWriteFloat32(r31, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25216));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f1.d = PpcFmulsInline(f3.d, f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f5.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
        }
    }
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = (-(f1.d));
    f1.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = PpcFmulsInline(f7.d, f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f2.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r1 + 20));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r1 + 16));
        }
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    f0.d = (-(f1.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 28));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 24));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xC000211E gpr_write=0xC00001F3 gpr_return=0x00000010 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227BD4 func_80227BD4 preserves=true fpr_mask=0x00000000
