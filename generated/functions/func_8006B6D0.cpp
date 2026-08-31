#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006B6D0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    goto loc_8006B6D0;

loc_8006B6D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29352));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, true, false);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f1.d = (-(f10.d));
    f4.d = MemoryInline::FlatReadFloat32(r31);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f2.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::FlatReadFloat32((r2 + -29348));
    f3.d = PpcFmulsInline(f5.d, f4.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f11.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f8.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f4.d = PpcFmulsInline(f12.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r31, f2.d);
    f9.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f4.d));
    f0.d = PpcFmulsInline(f12.d, f10.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f12.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
            f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
        }
    }
    f2.d = (-(f3.d));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f4.d = PpcFmulsInline(f3.d, f8.d);
    f7.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f10.d = PpcFmulsInline(f12.d, f11.d);
    f5.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f3.d = PpcFmulsInline(f2.d, f11.d);
    f2.d = PpcFmulsInline(f12.d, f8.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 20), f2.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f10.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
            f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
        }
    }
    f2.d = (-(f3.d));
    f4.d = PpcFmulsInline(f3.d, f6.d);
    f8.d = PpcFmulsInline(f10.d, f9.d);
    f3.d = PpcFmulsInline(f2.d, f9.d);
    f2.d = PpcFmulsInline(f10.d, f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 8), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f2.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f8.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
        }
    }
    f2.d = (-(f3.d));
    f4.d = PpcFmulsInline(f3.d, f5.d);
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f3.d = PpcFmulsInline(f2.d, f7.d);
    f2.d = PpcFmulsInline(f8.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 28));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003E gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x0000000C fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006B6D0 func_8006B6D0 preserves=true fpr_mask=0x00000000
