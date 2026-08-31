#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022FE14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
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
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8022FE14;

loc_8022FE14:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r31 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    r29 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8022F86Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8022F86Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8022F86Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 144u, true, false);
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            f31.d = PpcBitCastToFloatInline(resolved_pair.second);
            f30.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f31.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
            f30.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
        }
    }
    f27.d = PpcFmulsInline(f28.d, f29.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 28));
    f0.d = PpcFmulsInline(f30.d, f31.d);
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
    f10.d = (-(f31.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f26.d = PpcFmulsInline(f28.d, f8.d);
    f3.d = MemoryInline::FlatReadFloat32(r31);
    f5.d = PpcFmulsInline(f27.d, f31.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f7.d = PpcFmulsInline(f0.d, f29.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r29 + 32), f10.d);
    f6.d = PpcFmulsInline(f0.d, f8.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f26.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r29 + 12), f3.d);
    f11.d = PpcFmulsInline(f13.d, f8.d);
    f4.d = PpcFmulsInline(f30.d, f8.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f6.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 16), f11.d);
    f12.d = PpcFmulsInline(f13.d, f29.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r29 + 4), f9.d);
    f7.d = PpcFmulsInline(f30.d, f13.d);
    f1.d = PpcFmulsInline(f28.d, f13.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r29, f12.d);
    f5.d = PpcFmulsInline(f26.d, f31.d);
    f4.d = PpcFmulsInline(f30.d, f29.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 20), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 36), f7.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 8), f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 24), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 40), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r29 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r29 + 44), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 120u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 104u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 40));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 36));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 140u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[29] = r29;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003E gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0xFC000018 fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022FE14 func_8022FE14 preserves=false fpr_mask=0x2C000000
