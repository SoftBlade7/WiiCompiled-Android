#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C1FAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r10_psq_tmp_2 = 0;
    uint32_t r10_psq_tmp_3 = 0;
    uint32_t r10_psq_tmp_4 = 0;
    uint32_t r10_psq_tmp_5 = 0;
    uint32_t r11_psq_tmp_0 = 0;
    uint32_t r11_psq_tmp_1 = 0;
    uint32_t r11_psq_tmp_2 = 0;
    uint32_t r11_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint32_t r7_psq_tmp_4 = 0;
    uint32_t r7_psq_tmp_5 = 0;
    uint32_t r7_psq_tmp_6 = 0;
    uint32_t r7_psq_tmp_7 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r8_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_4 = 0;
    uint32_t r8_psq_tmp_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807C1FAC;

loc_807C1FAC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r9 = 0x808A0000u;
    r9 = (r9 + 26328);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r7 = MemoryInline::FlatRead32((r3 + 104));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_807C1FC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C1FD4;
    }
}

loc_807C1FCC:
{
    r3 = 0;
    goto loc_807C21E8;
}

loc_807C1FD4:
{
    f0.d = MemoryInline::FlatReadFloat32(r9);
    r8 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r9 + 24));
    r7 = (r1 + 20);
    f3.d = MemoryInline::FlatReadFloat32((r9 + 16));
    r12 = 1;
    goto loc_807C21C4;
}

loc_807C1FF0:
{
    r9 = MemoryInline::FlatRead32((r3 + 104));
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r9 = MemoryInline::FlatRead16(r9);
    r31 = MemoryInline::FlatRead32(r3);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(4));
    r9 = (r9_rot_2 & -16);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 60);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    r9 = (r10 + r9);
    r11 = MemoryInline::FlatRead16((r9 + 4));
    r10 = MemoryInline::FlatRead16((r9 + 8));
    r11 = (r11 * 12);
    r11 = (r31 + r11);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r11));
    r10 = (r10 * 12);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 68);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r11_psq_tmp_2 = (r11 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r11_psq_tmp_2));
    r10 = (r0 + r10);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r7, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f5.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_2 = (r10 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_2));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r7_psq_tmp_2 = (r7 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r7_psq_tmp_2, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_3 = (r7 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r7_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r10));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f5.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f4.d, f1.d, f6.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f5.d, f6.d, f6.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f3.d);
}

loc_807C2060:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C21C4;
    }
}

loc_807C2068:
{
    r10 = MemoryInline::FlatRead16((r9 + 10));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_4 = (r7 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r7_psq_tmp_4));
    r10 = (r10 * 12);
    r10 = (r0 + r10);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_3 = (r10 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r10));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f5.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f4.d, f1.d, f6.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f5.d, f6.d, f6.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f3.d);
}

loc_807C2090:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C21C4;
    }
}

loc_807C2098:
{
    r10 = MemoryInline::FlatRead16((r9 + 12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_5 = (r7 + 4);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r7_psq_tmp_5));
    r10 = (r10 * 12);
    f1.d = MemoryInline::FlatReadFloat32(r9);
    r10 = (r0 + r10);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_4 = (r10 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r10));
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f7.d, f6.d));
    PpcSetPairedFprInline(f6, PPC_PsMaddInline(f4.d, f5.d, f7.d));
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f6.d, f7.d, f7.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f5.d) - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_807C20C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C21C4;
    }
}

loc_807C20D0:
{
    r10 = MemoryInline::FlatRead16((r9 + 6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_6 = (r7 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r7_psq_tmp_6));
    r10 = (r10 * 12);
    r31 = (r0 + r10);
    r11 = MemoryInline::FlatRead32((r31 + 4));
    r10 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r11);
    r11 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWriteRam32((r1 + 16), r10);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_2 = (r8 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r8_psq_tmp_2));
    MemoryInline::FlatWriteRam32((r1 + 8), r11);
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, f1.d, f5.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f5.d, f5.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - PPC_PsToScalarInline(f1.d)));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_807C2114:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C21C4;
    }
}

loc_807C211C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f1.d, f6.d);
}

loc_807C2124:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C213C;
    }
}

loc_807C212C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f6.d);
}

loc_807C2134:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C21C4;
    }
}

loc_807C213C:
{
    r11 = MemoryInline::FlatRead16((r9 + 14));
    r10 = MemoryInline::FlatRead32((r3 + 100));
    r11 = (r11 & 31);
    r11 = PPC_Slw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r11));
    r10 = (r11 & r10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C21C4;
    }
}

loc_807C2154:
{
    r10 = (r11 & 84344832);
}

loc_807C2158:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_807C2180;
    }
}

loc_807C215C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 88);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_3 = (r8 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r8_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 84);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r8));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f1.d, f4.d, f5.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807C217C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807C21C4;
    }
}

loc_807C2180:
{
}

loc_807C2184:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807C218C;
    }
}

loc_807C2188:
{
    MemoryInline::FlatWriteFloat32(r4, f6.d);
}

loc_807C218C:
{
}

loc_807C2190:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807C21AC;
    }
}

loc_807C2194:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32(r5, f2.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
}

loc_807C21AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807C21B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C21BC;
    }
}

loc_807C21B4:
{
    r0 = MemoryInline::FlatRead16((r9 + 14));
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
}

loc_807C21BC:
{
    r3 = 1;
    goto loc_807C21E8;
}

loc_807C21C4:
{
    r9 = MemoryInline::FlatRead32((r3 + 104));
    r9 = (r9 + 2);
    MemoryInline::FlatWrite32((r3 + 104), r9);
    r9 = MemoryInline::FlatRead16(r9);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_807C21D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C1FF0;
    }
}

loc_807C21DC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 104), r0);
    r3 = 0;
}

loc_807C21E8:
{
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001F8B gpr_return=0x00000008 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807C1FAC func_807C1FAC preserves=true fpr_mask=0x00000000
