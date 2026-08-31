#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007F310(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
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
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8007F310;

loc_8007F310:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29096));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29092));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29092));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f3.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f5.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f9.d = PpcFmulsInline(f1.d, f3.d);
    f8.d = MemoryInline::FlatReadFloat32((r2 + -29088));
    f11.d = PpcFmulsInline(f31.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = (-(f2.d));
    f12.d = PpcFmulsInline(f5.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32(r31);
    f10.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29084));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r30, f11.d);
    f7.d = (-(f6.d));
    f1.d = PpcFmulsInline(f9.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 4), f12.d);
    f3.d = PpcFmulsInline(f11.d, f4.d);
    f6.d = PpcFmulsInline(f12.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r30 + 8), f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 16), f9.d);
    f3.d = PpcFmulsInline(f10.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 20), f10.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 24), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r30 + 12), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r30 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r30 + 32), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r30 + 36), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r30 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r30 + 44), f8.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001E gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x80000018 fpr_write=0x80001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007F310 func_8007F310 preserves=false fpr_mask=0x80000000
