#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019AA60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8019AA60;

loc_8019AA60:
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
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    f29.d = f2.d;
    f5.d = MemoryInline::FlatReadFloat32((r2 + -26368));
    f30.d = f3.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    f31.d = f4.d;
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26364));
    r31 = r3;
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8019AAACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8001BB64u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26376));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -26384));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26372));
    f1.d = PpcFmulsInline(f31.d, f30.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 56), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 4), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 8), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 12), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 16), f3.d);
    }
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f2.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 24), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 28), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 32), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 36), f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f29.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 48), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 52), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 60), f3.d);
    f0.d = (-(f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r31, f4.d);
    f2.d = (-(f30.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f5.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 40), f1.d);
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFE gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF803FDE fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8019AA60 func_8019AA60 preserves=false fpr_mask=0xE0000000
