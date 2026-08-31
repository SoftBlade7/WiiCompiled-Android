#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80044B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80044B40;

loc_80044B40:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -352), 0, 360u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 356u, (r1 + 356), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 336u, (r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 320u, (r1 + 320), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 304u, (r1 + 304), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 288u, (r1 + 288), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 272u, (r1 + 272), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 272);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 252u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_3, 256u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 260u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_3, 264u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 268u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r5;
    r31 = r7;
    r0 = 1127219200;
    r30 = r4;
    r12 = r8;
    f28.d = f1.d;
    f29.d = f2.d;
    r28 = r6;
    f30.d = f3.d;
    r4 = r27;
    r5 = r31;
    MemoryInline::WriteResolved32(guest_range_3, 224u, (r1 + 224), r0);
    r3 = (r1 + 64);
    MemoryInline::WriteResolved32(guest_range_3, 232u, (r1 + 232), r0);
    ctr = r12;
    ctx->lr = 0x80044BBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r28 & 2);
}

loc_80044BC0:
{
    r29 = (r1 + 64);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80044BDC;
    }
}

loc_80044BC8:
{
    r3 = r29;
    r4 = (r31 + 204);
    r5 = (r1 + 16);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
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
    r5_psq_tmp_0 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_0, f10.d);
    // end of inlined leaf 0x8019ACCC
    goto loc_80044BEC;
}

loc_80044BDC:
{
    r3 = r29;
    r4 = (r27 + 200);
    r5 = (r1 + 16);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
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
}

loc_80044BEC:
{
    r28 = (r1 + 16);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -30024), 0, 1060u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -30008));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_0 = (r28 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r28_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f1.d, f1.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80044C0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80044C18;
    }
}

loc_80044C10:
{
    r0 = 0;
    goto loc_80044C38;
}

loc_80044C18:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1052u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1052u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1056u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    r0 = 1;
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_2 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_2, f2.d);
}

loc_80044C38:
{
}

loc_80044C3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80044C58;
    }
}

loc_80044C40:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 188));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 192));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 196));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
}

loc_80044C58:
{
    r4 = r29;
    r3 = (r1 + 16);
    r5 = (r1 + 28);
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
    r5_psq_tmp_3 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_3, f10.d);
    // end of inlined leaf 0x8019ACCC
    r29 = (r1 + 28);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -30008));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_0 = (r29 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f1.d, f1.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80044C88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80044CA8;
    }
}

loc_80044C8C:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1052u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1052u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1056u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_2, f2.d);
}

loc_80044CA8:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 60u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 12u, (r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 204), f0.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 48), 0, 181u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 132u, (r31 + 180));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 16u, (r1 + 32));
    MemoryInline::FlatWriteFloat32((r31 + 208), f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r31 + 176));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 20u, (r1 + 36));
    MemoryInline::FlatWriteFloat32((r31 + 212), f0.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 124u, (r31 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 20u, (r1 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 56u, (r1 + 72));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r1 + 24));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 16u, (r1 + 32));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 52u, (r1 + 68));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r1 + 20));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 12u, (r1 + 28));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 48u, (r1 + 64));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r1 + 16));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 176), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 176), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 180), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 184), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 188), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r1 + 192), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r1 + 196), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r1 + 200), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r1 + 204), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r1 + 208), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r1 + 212), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r1 + 216), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r1 + 220), f1.d);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_1, 106u, (r31 + 154));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r31 + 64));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r31 + 68));
        }
    }
}

loc_80044D30:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r31 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80044D64;
    }
}

loc_80044D44:
{
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -29992));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -30004));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
}

loc_80044D64:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 107u, (r31 + 155));
}

loc_80044D6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80044D94;
    }
}

loc_80044D70:
{
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -29992));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 232));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -30004));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
}

loc_80044D94:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 108u, (r31 + 156));
}

loc_80044D9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80044DC4;
    }
}

loc_80044DA0:
{
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -29992));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -30004));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
}

loc_80044DC4:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 152u, (r31 + 200));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 180u, (r31 + 228));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 52));
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 36), 0, 103u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r6 + 96));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80044DD8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r6 + 100));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r6 + 104));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r31 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f5.d);
    f3.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80044E54;
    }
}

loc_80044E10:
{
    r5 = MemoryInline::ReadResolved8(guest_range_2, 101u, (r6 + 137));
}

loc_80044E18:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_80044E54;
    }
}

loc_80044E1C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 102u, (r6 + 138));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -30016));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -30024));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_80044E54:
{
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r6 + 88));
    r0 = MemoryInline::FlatRead16((r3 + 156));
    f31.d = PpcFmulsInline(f3.d, f0.d);
    r0 = (r0 & 24576);
}

loc_80044E6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16384))) {
        goto loc_80044E84;
    }
}

loc_80044E70:
{
}

loc_80044E74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8192))) {
        goto loc_80044E94;
    }
}

loc_80044E78:
{
}

loc_80044E7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24576))) {
        goto loc_80044EA4;
    }
}

loc_80044E80:
{
    goto loc_80044EB4;
}

loc_80044E84:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 52));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r31 + 56));
        }
    }
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80044EC0;
}

loc_80044E94:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r31 + 60));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80044EC0;
}

loc_80044EA4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r31 + 56));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80044EC0;
}

loc_80044EB4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 52));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r31 + 60));
    f3.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80044EC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80044EC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80044F0C;
    }
}

loc_80044EC8:
{
    r5 = MemoryInline::ReadResolved8(guest_range_2, 101u, (r6 + 137));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_80044ED0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80044F0C;
    }
}

loc_80044ED4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 102u, (r6 + 138));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -30016));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -30024));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_80044F0C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r6 + 92));
    r3 = (r1 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r4 = (r1 + 8);
    f27.d = PpcFmulsInline(f3.d, f0.d);
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r1 + 176);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r4 = (r1 + 128);
    f2.d = PpcFmulsInline(f3.d, f31.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30000));
    f8.d = PpcFmulsInline(f7.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30020));
    f6.d = PpcFmulsInline(f3.d, f27.d);
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 128), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, (r1 + 128), f2.d);
    f4.d = PpcFmulsInline(f28.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r1 + 148), f0.d);
    f3.d = PpcFmulsInline(f7.d, f27.d);
    r5 = (r1 + 80);
    f2.d = (-(f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r1 + 132), f1.d);
    f5.d = PpcFmulsInline(f28.d, f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 16u, (r1 + 144), f1.d);
    f9.d = PpcFmulsInline(f2.d, f27.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r1 + 152), f1.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f5.d));
    f0.d = PpcFmulsInline(f29.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r1 + 156), f1.d);
    f5.d = PpcFmulsInline(f29.d, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r1 + 136), f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r1 + 160), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r1 + 140), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 36u, (r1 + 164), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 40u, (r1 + 168), f6.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_6, 44u, (r1 + 172), f3.d);
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
    ctx->fpr[31] = f31;
    ctx->xer = xer;
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
    f31 = ctx->fpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 124));
    r5 = 0x802B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    r3 = (r30 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r4 = (r1 + 80);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r5 = (r5 + 31584);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f2.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
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
    r5 = 0x802B0000u;
    r3 = (r30 + 24);
    r4 = (r1 + 80);
    r5 = (r5 + 31608);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
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
    MemoryInline::FlatWriteFloat32((r30 + 36), f30.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 252), 0, 108u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 84u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 68u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 52u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 36u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 20u, (r1 + 272));
    r11 = (r1 + 272);
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_7, 104u, (r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80044B40 func_80044B40 preserves=false fpr_mask=0xF8000000
