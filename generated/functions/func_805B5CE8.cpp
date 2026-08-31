#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B5CE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_805B5CE8;

loc_805B5CE8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    r7 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r4 = r5;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 272));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r7);
    MemoryInline::FlatWriteFloat32((r3 + 272), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r6);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 280));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r0);
    MemoryInline::FlatWriteFloat32((r3 + 276), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r5 = (r1 + 44);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 280), f0.d);
    r3 = (r3 + 256);
    ctx->lr = 0x805B5D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r30 + 256);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 104));
    r4 = (r1 + 32);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r5 = (r1 + 20);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->lr = 0x805B5DA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 84u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r1 + 48));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 28));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r1 + 44));
    f8.d = PpcFmulsInline(f4.d, f0.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 24));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r1 + 52));
    f5.d = PpcFmulsInline(f2.d, f3.d);
    f6.d = PpcFmulsInline(f7.d, f3.d);
    f4.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 284));
    f3.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 288));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 292));
    f3.d = PpcFmulsInline(f6.d, f31.d);
    f4.d = PpcFmulsInline(f4.d, f31.d);
    f5.d = PpcFmulsInline(f5.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    MemoryInline::FlatWriteFloat32((r30 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 284), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 292), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 80));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 52u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 76));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 72));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003A gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0xC0000002 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B5CE8 func_805B5CE8 preserves=false fpr_mask=0x80000000
