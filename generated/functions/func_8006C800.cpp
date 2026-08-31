#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006C800(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8006C800;

loc_8006C800:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29328));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f8.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = PpcFmulsInline(f0.d, f5.d);
    f3.d = PpcFmulsInline(f0.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = PpcFmulsInline(f8.d, f5.d);
    f5.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f1.d = PpcFmulsInline(f8.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f29.d = MemoryInline::FlatReadFloat32(r30);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f31.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f6.d = PpcFmulsInline(f3.d, f7.d);
    f8.d = PpcFmulsInline(f0.d, f7.d);
    f12.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f5.d = PpcFmulsInline(f2.d, f4.d);
    f7.d = PpcFmulsInline(f1.d, f4.d);
    f11.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f30.d = PpcFmulsInline(f0.d, f29.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29332));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f7.d));
    f13.d = PpcFmulsInline(f1.d, f31.d);
    f10.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    f9.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f13.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f8.d);
    f6.d = PpcFmulsInline(f2.d, f31.d);
    MemoryInline::FlatWriteFloat32(r30, f7.d);
    f7.d = PpcFmulsInline(f3.d, f29.d);
    f5.d = PpcFmulsInline(f0.d, f12.d);
    f4.d = PpcFmulsInline(f1.d, f11.d);
    MemoryInline::FlatWriteFloat32((r30 + 28), f13.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f7.d = PpcFmulsInline(f3.d, f12.d);
    f6.d = PpcFmulsInline(f2.d, f11.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f8.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f5.d = PpcFmulsInline(f0.d, f10.d);
    f4.d = PpcFmulsInline(f1.d, f9.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f8.d);
    f0.d = PpcFmulsInline(f2.d, f9.d);
    f1.d = PpcFmulsInline(f3.d, f10.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 20), f6.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r1 + 32));
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
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003E gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0xE000000C fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006C800 func_8006C800 preserves=false fpr_mask=0xE0000000
