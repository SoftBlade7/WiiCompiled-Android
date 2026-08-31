#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006ABA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_10 = 0;
    uint32_t r31_psq_tmp_11 = 0;
    uint32_t r31_psq_tmp_12 = 0;
    uint32_t r31_psq_tmp_13 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;
    uint32_t r31_psq_tmp_6 = 0;
    uint32_t r31_psq_tmp_7 = 0;
    uint32_t r31_psq_tmp_8 = 0;
    uint32_t r31_psq_tmp_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8006ABA0;

loc_8006ABA0:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    r31 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006ABC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006ABE0;
    }
}

loc_8006ABC8:
{
    r3 = r31;
    r4 = (r31 + 116);
    r5 = (r31 + 128);
    r6 = (r31 + 140);
    ctx->lr = 0x8006ABDCu;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    InvokeDirectCpu<0x8019A584u>(ctx);
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
    f10 = ctx->fpr[10];
    goto loc_8006AF94;
}

loc_8006ABE0:
{
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006ABE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006AE24;
    }
}

loc_8006ABE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 140));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 124));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 148));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -29424), 0, 3072u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29424));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 120));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    SetCRFloatResident(cr, 0, f2.d, f5.d);
}

loc_8006AC10:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006ACB0;
    }
}

loc_8006AC24:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_8006AC28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006ACB0;
    }
}

loc_8006AC2C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -29416));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r31, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = (-(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 16), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 20), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 32), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 40), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8006AC60:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006AC8C;
    }
}

loc_8006AC68:
{
    MemoryInline::FlatWriteFloat32((r31 + 24), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -29384));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 124));
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 120));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_8006AF94;
}

loc_8006AC8C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -29384));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 124));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 36), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 120));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_8006AF94;
}

loc_8006ACB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    r3 = (r1 + 124);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    r4 = r3;
    f2.d = (-(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29424));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f2.d);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3064u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3064u, (r2 + -26360));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3068u, (r2 + -26356));
        }
    }
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_1, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 112);
    r4 = r3;
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_2));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3064u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3064u, (r2 + -26360));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3068u, (r2 + -26356));
        }
    }
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_2, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 124);
    r4 = (r1 + 112);
    r5 = (r1 + 100);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_1, f10.d);
    // end of inlined leaf 0x8019ACCC
    f1.d = MemoryInline::FlatReadFloat32((r31 + 164));
    r3 = (r1 + 36);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -29380));
    r4 = (r1 + 32);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 104u, true, false);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 36));
    r3 = (r1 + 88);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r1 + 100));
    r4 = (r1 + 76);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 32));
    r5 = (r1 + 124);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 80u, (r1 + 112));
    f2.d = PpcFmulsInline(f11.d, f0.d);
    f1.d = PpcFmulsInline(f10.d, f0.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 76u, (r1 + 108));
    f0.d = PpcFmulsInline(f10.d, f4.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 72u, (r1 + 104));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 88u, (r1 + 120));
    f7.d = PpcFmulsInline(f11.d, f8.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f11.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f7.d);
    f2.d = PpcFmulsInline(f10.d, f5.d);
    guest_range_3 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r31, f9.d);
    f0.d = PpcFmulsInline(f11.d, f4.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r31 + 4), f7.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r31 + 8), f4.d);
    f1.d = PpcFmulsInline(f10.d, f6.d);
    f0.d = PpcFmulsInline(f11.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f4.d);
    f2.d = PpcFmulsInline(f10.d, f8.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_1 = (r31 + 120);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f9.d);
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_2 = (r31 + 116);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f3.d);
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f5.d, f0.d, f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f4.d, f6.d, f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_3));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r31 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r31 + 16), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r31 + 20), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r31 + 24), f1.d);
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_3 = (r31 + 120);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_4 = (r31 + 116);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_4));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f5.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f0.d, f7.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f5.d, f1.d, f1.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r31 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 92u, (r1 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r31 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 96u, (r1 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r31 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 100u, (r1 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r31 + 40), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_5 = (r31 + 120);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_6 = (r31 + 116);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_6));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r5));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f1.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r31 + 44), f0.d);
    goto loc_8006AF94;
}

loc_8006AE24:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 152));
    r3 = (r1 + 28);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29380));
    r4 = (r1 + 16);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 156));
    r3 = (r1 + 24);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29380));
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 160));
    r3 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29380));
    r4 = (r1 + 8);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r3 = (r1 + 64);
    f31.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r4 = (r1 + 52);
    f12.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = (-(f2.d));
    f13.d = PpcFmulsInline(f2.d, f31.d);
    f11.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f31.d, f12.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = PpcFmulsInline(f12.d, f13.d);
    f3.d = PpcFmulsInline(f11.d, f10.d);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 44), f0.d);
    f2.d = PpcFmulsInline(f2.d, f11.d);
    r5 = (r1 + 40);
    f7.d = PpcFmulsInline(f8.d, f12.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = PpcFmulsInline(f12.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 68), f7.d);
    f3.d = PpcFmulsInline(f31.d, f10.d);
    guest_range_5 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, r31, f9.d);
    f5.d = PpcFmulsInline(f8.d, f10.d);
    f2.d = PpcFmulsInline(f10.d, f2.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r31 + 4), f7.d);
    f3.d = PpcFmulsInline(f8.d, f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 72), f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = PpcFmulsInline(f8.d, f11.d);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r31 + 8), f6.d);
    f6.d = PpcFmulsInline(f10.d, f13.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 4);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_4));
    f1.d = PpcFmulsInline(f11.d, f12.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_7 = (r31 + 120);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_7));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 64), f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f10.d, f7.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_8 = (r31 + 116);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_8));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 48), f2.d);
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f7.d, f8.d, f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 40), f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 4);
    PpcSetPairedFprInline(f11, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f7.d, f10.d, f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 52), f6.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<1u, 0u>(ctx, r5));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 56), f5.d);
    f1.d = (-(PPC_PsToScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 60), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r31 + 12), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 4);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r31 + 16), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r31 + 20), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r31 + 24), f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_9 = (r31 + 120);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_9));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_10 = (r31 + 116);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_10));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f8.d));
    PpcSetPairedFprInline(f8, PPC_PsMaddInline(f1.d, f7.d, f4.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f8.d, f4.d, f4.d));
    f1.d = (-(PPC_PsToScalarInline(f1.d)));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r31 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r31 + 32), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r31 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r31 + 40), f2.d);
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_11 = (r31 + 120);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_11));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_12 = (r31 + 116);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_12));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f11.d));
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f0.d, f9.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f11.d, f1.d, f1.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r31 + 44), f0.d);
}

loc_8006AF94:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006ABA0 func_8006ABA0 preserves=false fpr_mask=0x80000000
