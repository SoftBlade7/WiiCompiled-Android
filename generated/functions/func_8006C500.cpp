#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006C500(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8006C500;

loc_8006C500:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
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
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = PpcFmulsInline(f0.d, f4.d);
    f5.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f6.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = PpcFmulsInline(f5.d, f4.d);
    f7.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f30.d = MemoryInline::FlatReadFloat32(r30);
    f5.d = PpcFmulsInline(f3.d, f7.d);
    f13.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f4.d = PpcFmulsInline(f2.d, f6.d);
    f11.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f7.d = PpcFmulsInline(f0.d, f7.d);
    f10.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29332));
    f6.d = PpcFmulsInline(f1.d, f6.d);
    f9.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f8.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f31.d = PpcFmulsInline(f0.d, f30.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f12.d = PpcFmulsInline(f1.d, f13.d);
    MemoryInline::FlatWriteFloat32((r30 + 28), f4.d);
    f7.d = PpcFmulsInline(f3.d, f30.d);
    f4.d = PpcFmulsInline(f1.d, f10.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f12.d));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    MemoryInline::FlatWriteFloat32(r30, f5.d);
    f6.d = PpcFmulsInline(f2.d, f13.d);
    f5.d = PpcFmulsInline(f0.d, f11.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f12.d);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f6.d = PpcFmulsInline(f2.d, f10.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 16), f12.d);
    f7.d = PpcFmulsInline(f3.d, f11.d);
    f5.d = PpcFmulsInline(f0.d, f9.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f10.d);
    f4.d = PpcFmulsInline(f1.d, f8.d);
    f0.d = PpcFmulsInline(f2.d, f8.d);
    f1.d = PpcFmulsInline(f3.d, f9.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 20), f6.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003E gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0xC000000C fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006C500 func_8006C500 preserves=false fpr_mask=0xC0000000
