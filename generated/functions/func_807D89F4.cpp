#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D89F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807D89F4;

loc_807D89F4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 76), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 29696);
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 574));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D8A3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D8DFC;
    }
}

loc_807D8A40:
{
    r3 = r30;
    r4 = (r1 + 8);
    ctx->lr = 0x807D8A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80055600u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 16));
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 376u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_807D8A5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D8A64;
    }
}

loc_807D8A60:
{
    goto loc_807D8A70;
}

loc_807D8A64:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f31.d = f1.d;
}

loc_807D8A70:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 176u, (r31 + 176));
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 840));
    r4 = r3;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f1.d = f30.d;
    // inline leaf 0x80085760 (19 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 16);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 32);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 40);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_5, f2.d);
    // end of inlined leaf 0x80085760
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 176u, (r31 + 176));
    r3 = (r1 + 8);
    r5 = r3;
    r4 = (r29 + 860);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    // inline leaf 0x80085880 (31 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f0.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f0.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 16);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_6, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f0.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_8 = (r4 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_7, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f0.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_9 = (r4 + 32);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_8, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f0.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_10 = (r4 + 40);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 40);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_9, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f0.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_10 = (r3 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_10, f3.d);
    // end of inlined leaf 0x80085880
    r3 = MemoryInline::FlatRead32((r29 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 356u, (r31 + 356));
    r5 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1216));
    r4 = MemoryInline::FlatRead32((r5 + 4));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 4);
}

loc_807D8AD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807D8B64;
    }
}

loc_807D8AD4:
{
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_807D8AE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_807D8AEC;
    }
}

loc_807D8AE4:
{
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 360u, (r31 + 360));
    goto loc_807D8AF0;
}

loc_807D8AEC:
{
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 364u, (r31 + 364));
}

loc_807D8AF0:
{
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 368u, (r31 + 368));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 192u, (r31 + 192));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_807D8B0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D8B14;
    }
}

loc_807D8B10:
{
    goto loc_807D8B28;
}

loc_807D8B14:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - PPC_PsToScalarInline(f0.d)));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_807D8B28:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_807D8B30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D8B38;
    }
}

loc_807D8B34:
{
    f4.d = f0.d;
}

loc_807D8B38:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 212u, (r31 + 212));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_807D8B44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D8B58;
    }
}

loc_807D8B48:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 324u, (r31 + 324));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_807D8B58:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 840));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
}

loc_807D8B64:
{
    r0 = MemoryInline::FlatRead8((r29 + 960));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D8B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D8B90;
    }
}

loc_807D8B70:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r3 = (r1 + 8);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 372u, (r31 + 372));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 860));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f1.d = f30.d;
    ctx->lr = 0x807D8B90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807DF004u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
}

loc_807D8B90:
{
    r0 = MemoryInline::FlatRead8((r29 + 573));
}

loc_807D8B98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D8D84;
    }
}

loc_807D8B9C:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 400u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 292u, (r31 + 292));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1204));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1208));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1212));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    f4.d = std::fabs(f4.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 356u, (r31 + 356));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_807D8BD0:
{
    f6.d = PpcFmulsInline(f1.d, f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D8BDC;
    }
}

loc_807D8BD8:
{
    goto loc_807D8BE0;
}

loc_807D8BDC:
{
    f5.d = f0.d;
}

loc_807D8BE0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D8BEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D8BF4;
    }
}

loc_807D8BF0:
{
    goto loc_807D8BF8;
}

loc_807D8BF4:
{
    f1.d = f0.d;
}

loc_807D8BF8:
{
    f0.d = PpcFmulsInline(f6.d, f1.d);
    r0 = MemoryInline::FlatRead8((r29 + 961));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 956));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D8C0C:
{
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 956), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D8D7C;
    }
}

loc_807D8C24:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 376u, (r31 + 376));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807D8C30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D8C38;
    }
}

loc_807D8C34:
{
    goto loc_807D8C3C;
}

loc_807D8C38:
{
    f2.d = f0.d;
}

loc_807D8C3C:
{
    f1.d = PpcFmulsInline(f6.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 844));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 380u, (r31 + 380));
    f8.d = MemoryInline::FlatReadFloat32((r29 + 848));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 384u, (r31 + 384));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    f9.d = MemoryInline::FlatReadFloat32((r29 + 852));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f7.d, f5.d);
}

loc_807D8C70:
{
    MemoryInline::FlatWriteFloat32((r29 + 844), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    MemoryInline::FlatWriteFloat32((r29 + 848), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    MemoryInline::FlatWriteFloat32((r29 + 852), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D8C8C;
    }
}

loc_807D8C88:
{
    goto loc_807D8C9C;
}

loc_807D8C8C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
}

loc_807D8C9C:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f7.d, f8.d);
}

loc_807D8CA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D8CAC;
    }
}

loc_807D8CA8:
{
    goto loc_807D8CC0;
}

loc_807D8CAC:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    SetCRFloatResident(cr, 0, f7.d, f8.d);
}

loc_807D8CB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D8CBC;
    }
}

loc_807D8CB8:
{
    goto loc_807D8CC0;
}

loc_807D8CBC:
{
    f8.d = f7.d;
}

loc_807D8CC0:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 844));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 360u, (r31 + 360));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 300u, (r31 + 300));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f5.d = std::fabs(f3.d);
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_807D8CE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D8CF8;
    }
}

loc_807D8CE4:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 388u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 392u, (r31 + 392));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 388u, (r31 + 388));
        }
    }
    f2.d = PpcFmulsInline(f2.d, f8.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    goto loc_807D8D1C;
}

loc_807D8CF8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 392u, (r31 + 392));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 388u, (r31 + 388));
    f3.d = PpcFmulsInline(f3.d, f8.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
}

loc_807D8D1C:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 388u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 392u, (r31 + 392));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 388u, (r31 + 388));
        }
    }
    f1.d = PpcFmulsInline(f1.d, f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_807D8D30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D8D38;
    }
}

loc_807D8D34:
{
    goto loc_807D8D4C;
}

loc_807D8D38:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_807D8D3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D8D44;
    }
}

loc_807D8D40:
{
    goto loc_807D8D48;
}

loc_807D8D44:
{
    f3.d = f2.d;
}

loc_807D8D48:
{
    f1.d = f3.d;
}

loc_807D8D4C:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 396u, (r31 + 396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D8D58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D8D60;
    }
}

loc_807D8D5C:
{
    goto loc_807D8D74;
}

loc_807D8D60:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D8D68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D8D70;
    }
}

loc_807D8D6C:
{
    goto loc_807D8D74;
}

loc_807D8D70:
{
    f0.d = f1.d;
}

loc_807D8D74:
{
    MemoryInline::FlatWriteFloat32((r29 + 856), f0.d);
    goto loc_807D8D84;
}

loc_807D8D7C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    MemoryInline::FlatWriteFloat32((r29 + 856), f0.d);
}

loc_807D8D84:
{
    r0 = MemoryInline::FlatRead8((r29 + 960));
    f29.d = MemoryInline::FlatReadFloat32((r29 + 856));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D8D90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D8DC0;
    }
}

loc_807D8D94:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    // inline leaf 0x807C7358 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 1196));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    // end of inlined leaf 0x807C7358
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D8DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D8DAC;
    }
}

loc_807D8DA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 196));
    goto loc_807D8DB0;
}

loc_807D8DAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 372));
}

loc_807D8DB0:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 980));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
}

loc_807D8DC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 956));
    r3 = (r1 + 8);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f29.d));
    ctx->lr = 0x807D8DD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807DEE8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r29 + 680));
    r3 = r29;
    r5 = MemoryInline::FlatRead32((r29 + 688));
    r6 = (r29 + 740);
    r7 = (r1 + 8);
    ctx->lr = 0x807D8DE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D8790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 8);
    ctx->lr = 0x807D8DF0u;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    InvokeDirectCpu<0x807DCDA0u>(ctx);
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    r3 = r30;
    r4 = (r1 + 8);
    ctx->lr = 0x807D8DFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800556B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_807D8DFC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0000FF gpr_write=0xFE000FFB gpr_return=0x00000018 fpr_read=0xE000C3FF fpr_write=0xE000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D89F4 func_807D89F4 preserves=false fpr_mask=0xE0000000
