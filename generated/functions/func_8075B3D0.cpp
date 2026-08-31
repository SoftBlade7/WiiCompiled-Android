#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8075B3D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_subfic_ra_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8075B3D0;

loc_8075B3D0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = r3;
    ctx->lr = 0x8075B3E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->xer = xer;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 232u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r31 + 88));
    r6 = 0x808A0000u;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r31 + 92));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    r4 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 13932));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    r4 = (r1 + 32);
    f3.d = MemoryInline::FlatReadFloat64((r3 + 13912));
    r3 = (r1 + 8);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r31 + 96));
    r5 = (r1 + 20);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r31 + 100));
    MemoryInline::FlatWriteRam32((r1 + 60), r7);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 13752));
    MemoryInline::FlatWriteRam32((r1 + 56), r8);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 60));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 104u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r31 + 104));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r31 + 108));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 68), r6);
    MemoryInline::FlatWriteRam32((r1 + 64), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 112u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r31 + 112));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r31 + 116));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 76), r6);
    MemoryInline::FlatWriteRam32((r1 + 72), r7);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 76));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r31 + 120));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r31 + 124));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 84), r6);
    MemoryInline::FlatWriteRam32((r1 + 80), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 128u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r31 + 128));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r31 + 132));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 92), r6);
    MemoryInline::FlatWriteRam32((r1 + 88), r7);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 228u, (r31 + 228));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    r6_subfic_ra_0 = r6;
    r6 = (4 - r6_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r6_subfic_ra_0) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    r0 = (r6 ^ -2147483648);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f5.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r12 = MemoryInline::FlatRead32((r12 + 212));
    ctr = r12;
    ctx->lr = 0x8075B4F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r6 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 172));
    r4 = (r1 + 48);
    r5 = (r31 + 60);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8075B510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEE3E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFF9F fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8075B3D0 func_8075B3D0 preserves=true fpr_mask=0x00000000
