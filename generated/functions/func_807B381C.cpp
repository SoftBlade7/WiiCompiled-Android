#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B381C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_10 = 0;
    uint32_t r27_psq_tmp_11 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r27_psq_tmp_6 = 0;
    uint32_t r27_psq_tmp_7 = 0;
    uint32_t r27_psq_tmp_8 = 0;
    uint32_t r27_psq_tmp_9 = 0;
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
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B381C;

loc_807B381C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 64);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r31 = 0x808A0000u;
    r27 = r3;
    r28 = r4;
    r0 = (r0 & 32768);
}

loc_807B3854:
{
    r29 = r5;
    r31 = (r31 + 24648);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B3868;
    }
}

loc_807B3860:
{
    r5 = MemoryInline::FlatRead8((r3 + 108));
    goto loc_807B386C;
}

loc_807B3868:
{
    r5 = 12;
}

loc_807B386C:
{
    r3 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
}

loc_807B387C:
{
    r7 = MemoryInline::FlatRead32((r3 + 12));
    r7_addr_0 = (r7 + r0);
    r3 = MemoryInline::FlatRead32(r7_addr_0);
    r25 = MemoryInline::FlatRead8((r3 + 32));
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(12))) {
        goto loc_807B38E8;
    }
}

loc_807B388C:
{
}

loc_807B3890:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_807B38E8;
    }
}

loc_807B3894:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r7_addr_1 = (r7 + r0);
    r3 = MemoryInline::FlatRead32(r7_addr_1);
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_807B38A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r25))) {
        goto loc_807B38E8;
    }
}

loc_807B38A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807B38AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B38B8;
    }
}

loc_807B38B0:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_807B3B84;
}

loc_807B38B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
}

loc_807B38BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B38C8;
    }
}

loc_807B38C0:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_807B3B84;
}

loc_807B38C8:
{
}

loc_807B38CC:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_807B38E8;
    }
}

loc_807B38D0:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14520));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807B38DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B38E8;
    }
}

loc_807B38E0:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_807B3B84;
}

loc_807B38E8:
{
    r3 = 0x809C0000u;
    r26 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r30 = (r4 * 584);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r24 = (r0 + r30);
    r3 = r24;
    // inline leaf 0x80591314 (12 guest instruction(s))
}

loc_inl1_0x80591314:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2);
}

loc_inl1_0x80591328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8059132C:
{
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r4 & 524288);
    r0_mrot_1 = (r4 & 24576);
    r0_mdest_1 = (r0 & -24577);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_inl1_0x80591338:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8059133C:
{
    r3 = 0;
    goto loc_inl1_cont_80591314;
}

loc_inl1_return:
{
}

loc_inl1_cont_80591314:
{
    // end of inlined leaf 0x80591314
}

loc_807B390C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807B391C;
    }
}

loc_807B3910:
{
    r0 = MemoryInline::FlatRead32((r24 + 576));
}

loc_807B3918:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807B3920;
    }
}

loc_807B391C:
{
    r26 = 1;
}

loc_807B3920:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_807B3924:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B3940;
    }
}

loc_807B3928:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
}

loc_807B392C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B3948;
    }
}

loc_807B3930:
{
    r3 = r24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80591264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807B393C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B3948;
    }
}

loc_807B3940:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_807B3B84;
}

loc_807B3948:
{
    r3 = r27;
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A33E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807B3958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B3964;
    }
}

loc_807B395C:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_807B3B84;
}

loc_807B3964:
{
    r3 = r24;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_1 = (r27 + 68);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_1));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 84u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r31 + 68));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f3.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 76);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f3.d, f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_1, f2.d);
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807B39AC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B39BC;
    }
}

loc_807B39B0:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807B39B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B39C4;
    }
}

loc_807B39BC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    goto loc_807B3B84;
}

loc_807B39C4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_3 = (r27 + 84);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_4 = (r27 + 80);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_4));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r31 + 72));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f4.d, f3.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), f0.d);
}

loc_807B39EC:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1);
}

loc_807B39F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B3A44;
    }
}

loc_807B39F8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_5 = (r27 + 80);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_5));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f2.d), PPC_PsToScalarInline(f2.d));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 88));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    PpcSetPairedFprInline(f6, PPC_PsMaddInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d), f5.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 4));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(PPC_PsFromScalarInline(f4.d), PPC_PsFromScalarInline(f4.d), f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f6.d, f5.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f3.d, f3.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f6.d), PPC_PsToScalarInline(f4.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B3A3C:
{
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
}

loc_807B3A44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B3A48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B3A54;
    }
}

loc_807B3A4C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    goto loc_807B3B84;
}

loc_807B3A54:
{
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_7 = (r27 + 204);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_8 = (r27 + 200);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_8));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 76));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f2.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807B3A7C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B3A8C;
    }
}

loc_807B3A80:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 80));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807B3A88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B3A94;
    }
}

loc_807B3A8C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    goto loc_807B3B84;
}

loc_807B3A94:
{
    r0 = MemoryInline::FlatRead32((r27 + 124));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B3A9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B3AA8;
    }
}

loc_807B3AA0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    goto loc_807B3B84;
}

loc_807B3AA8:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r30);
    MemoryInline::FlatWrite32((r27 + 640), r3);
    MemoryInline::FlatWrite32((r27 + 684), r0);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = r3;
    r3 = (r27 + 68);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    f30.d = f1.d;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f30.d), f0.d);
}

loc_807B3AE0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B3B04;
    }
}

loc_807B3AE8:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807B3B04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    ctx->fpr[3].d = PPC_PsToScalarInline(ctx->fpr[3].d);
    ctx->fpr[4].d = PPC_PsToScalarInline(ctx->fpr[4].d);
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807B3B04:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f30.d), f0.d);
}

loc_807B3B0C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B3B18;
    }
}

loc_807B3B14:
{
    goto loc_807B3B24;
}

loc_807B3B18:
{
    f1.d = f30.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f1.d);
}

loc_807B3B24:
{
    MemoryInline::FlatWriteFloat32((r27 + 644), f0.d);
    r3 = MemoryInline::FlatRead32((r27 + 640));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r27 + 648), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r27 + 652), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r27 + 656), f0.d);
    r3 = MemoryInline::FlatRead32((r27 + 640));
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f3.d)));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_9 = (r27 + 660);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_9, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f3.d)));
    MemoryInline::FlatWriteFloat32((r27 + 672), f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_10 = (r27 + 668);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_10, f2.d);
    MemoryInline::FlatWriteFloat32((r27 + 676), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 680), f0.d);
    MemoryInline::FlatWriteFloat32(r29, f31.d);
}

loc_807B3B84:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B381C func_807B381C preserves=false fpr_mask=0xC0000000
