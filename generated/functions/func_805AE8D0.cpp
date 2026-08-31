#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AE8D0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_805AE8D0;

loc_805AE8D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    f7.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    f4.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r30 = r3;
    f4.d = PpcFmulsInline(f5.d, f4.d);
    r3 = (r1 + 20);
    f2.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    ctx->lr = 0x805AE93Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f7.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f4.d = MemoryInline::FlatReadFloat32(r31);
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    ctx->lr = 0x805AE98Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r30, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 16), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r30 + 32), f0.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r30 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r30 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r30 + 40), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0xC000003E gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x80000000 fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805AE8D0 func_805AE8D0 preserves=true fpr_mask=0x00000000
