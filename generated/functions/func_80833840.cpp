#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80833840(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_80833840;

loc_80833840:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    f29.d = f1.d;
    f30.d = f2.d;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = r4;
    f31.d = f3.d;
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    r30 = r3;
    r4 = 8;
    ctx->lr = 0x8083388Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808364E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    r3 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -13600));
    r4 = 0x808E0000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r4 = (r4 + -29464);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = r30;
    MemoryInline::FlatWrite32(r30, r4);
    MemoryInline::FlatWriteFloat32((r30 + 68), f29.d);
    MemoryInline::FlatWriteFloat32((r30 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 84), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 88), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    r12 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    ctr = r12;
    ctx->lr = 0x808338F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    r3 = 0x808B0000u;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + -13596));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f1.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 36), 0, 56u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 80));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 88));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
        }
    }
    r0 = 1;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 36));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32(r3, f4.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f7.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 80));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 88));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 32), 0, 1u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 32), static_cast<uint8_t>(r0));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 36));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f9.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f10.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 80));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 88));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 32), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 36));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 24), f11.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f12.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f13.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 80));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 88));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 32), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 96u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r1 + 92), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r1 + 96), f6.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r1 + 100), f7.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r1 + 80), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r1 + 84), f9.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r1 + 88), f10.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f12.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r1 + 68), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r1 + 72), f12.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r1 + 76), f13.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r1 + 56), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r1 + 60), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r1 + 64), f1.d);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 32), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 80));
    r3 = r30;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 88));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 36));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r1 + 44), f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 48), f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 52), f6.d);
    MemoryInline::FlatWriteFloat32((r4 + 56), f7.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 80));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 88));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 32), static_cast<uint8_t>(r0));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 36));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 60), f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 64), f8.d);
    MemoryInline::FlatWriteFloat32((r4 + 68), f9.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 80));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 88));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 32), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 36));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 72), f10.d);
    MemoryInline::FlatWriteFloat32((r4 + 76), f11.d);
    MemoryInline::FlatWriteFloat32((r4 + 80), f12.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 80));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 88));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 32), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 84), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 88), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 92), f1.d);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 32), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r1 + 48), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r1 + 52), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r1 + 32), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 36), f8.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r1 + 40), f9.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 20), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 24), f11.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 28), f12.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 8), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 12), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 16), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80833840 func_80833840 preserves=false fpr_mask=0xE0000000
