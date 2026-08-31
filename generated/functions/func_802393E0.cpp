#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802393E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802393E0;

loc_802393E0:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    f29.d = f1.d;
    f30.d = f2.d;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24600));
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    f31.d = f3.d;
    f2.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    f3.d = f29.d;
    f6.d = MemoryInline::FlatReadFloat32((r2 + -24576));
    f4.d = f30.d;
    r30 = r3;
    f5.d = f1.d;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x801733B4u>(ctx);
    f1.d = f30.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = f29.d;
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r5 = r3;
    r6 = r31;
    r3 = 0;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80173430u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24576));
    r3 = (r1 + 152);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24600));
    f4.d = f1.d;
    f3.d = f2.d;
    f5.d = f2.d;
    f6.d = f1.d;
    // inline leaf 0x8019AB4C (38 guest instruction(s))
    f11.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -26376));
    f10.d = MemoryInline::FlatReadFloat32((r2 + -26384));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f9.d = MemoryInline::FlatReadFloat32((r2 + -26380));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f11.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -26372));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f8.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f8.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f7.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 52), f8.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f10.d);
    f0.d = (-(f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f6.d = PpcFmulsInline(f9.d, f12.d);
    f0.d = PpcFmulsInline(f0.d, f7.d);
    f2.d = (-(f3.d));
    f3.d = PpcFmulsInline(f9.d, f11.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f6.d);
    f1.d = (-(f1.d));
    f4.d = PpcFmulsInline(f12.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    f2.d = PpcFmulsInline(f11.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f3.d);
    f1.d = PpcFmulsInline(f5.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f1.d);
    // end of inlined leaf 0x8019AB4C
    r3 = (r1 + 152);
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017301Cu>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    r3 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24552));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24600));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    // inline leaf 0x8019A3E0 (13 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f4.d);
    // end of inlined leaf 0x8019A3E0
    f1.d = MemoryInline::FlatReadFloat32((r30 + 88));
    r3 = (r1 + 56);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24552));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 92));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24600));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    // inline leaf 0x8019A460 (10 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x8019A460
    r3 = (r1 + 8);
    r4 = (r1 + 56);
    r5 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f31 = ctx->fpr[31];
    r0 = MemoryInline::FlatRead8((r30 + 338));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802394E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023950C;
    }
}

loc_802394E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 120));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_802394F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023950C;
    }
}

loc_802394F4:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24576));
    r3 = (r1 + 56);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f31.d));
    f3.d = f2.d;
    // inline leaf 0x8019A460 (10 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_6, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_7, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_8, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_9, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x8019A460
    goto loc_80239524;
}

loc_8023950C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24576));
    r3 = (r1 + 56);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 120));
    f3.d = f2.d;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8019A460u>(ctx);
    f0 = ctx->fpr[0];
}

loc_80239524:
{
    r3 = (r1 + 104);
    r4 = (r1 + 56);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f31 = ctx->fpr[31];
    r3 = (r1 + 104);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80173214u>(ctx);
    r3 = 4;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8017054Cu>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B38u>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016E5A4u>(ctx);
    r3 = 0;
    r4 = 255;
    r5 = 255;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 0;
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171C4Cu>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F3B8u>(ctx);
    r3 = 2;
    r4 = 1;
    r5 = 0;
    r6 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017277Cu>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801727CCu>(ctx);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016DC34u>(ctx);
    r3 = 0;
    r4 = 9;
    r5 = 0;
    r6 = 4;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016DC68u>(ctx);
    r3 = 0;
    r4 = 7;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80172824u>(ctx);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 224));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    r30 = MemoryInline::FlatRead32((r1 + 216));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000E gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0xE000C00F fpr_write=0xE000FFFF fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802393E0 func_802393E0 preserves=false fpr_mask=0xE0000000
