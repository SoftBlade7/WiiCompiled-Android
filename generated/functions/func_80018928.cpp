#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80018928(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfdx_80018D38_loc_0 = 0;
    uint32_t addr_lfdx_80018DE0_loc_0 = 0;
    uint32_t addr_lfdx_80018E94_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80018928;

loc_80018928:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f2.d);
    r3 = 0x80240000u;
    r3 = (r3 + 27808);
    r5 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r11 = MemoryInline::FlatRead32((r1 + 20));
    r7 = (r5 & 2147483647);
    r9 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r7 | r11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r10 = MemoryInline::FlatRead32((r1 + 12));
    r6 = (r9 & 2147483647);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001899C;
    }
}

loc_80018994:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31952));
    goto loc_800190FC;
}

loc_8001899C:
{
    r0 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_800189A4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800189DC;
    }
}

loc_800189A8:
{
    r0 = (r6 + -2146435072);
}

loc_800189B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_800189BC;
    }
}

loc_800189B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_800189B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800189DC;
    }
}

loc_800189BC:
{
    r0 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_800189C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800189DC;
    }
}

loc_800189C8:
{
    r0 = (r7 + -2146435072);
}

loc_800189D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_800189E4;
    }
}

loc_800189D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_800189D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800189E4;
    }
}

loc_800189DC:
{
    f1.d = (f1.d + f2.d);
    goto loc_800190FC;
}

loc_800189E4:
{
}

loc_800189E8:
{
    r4 = 0;
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_80018A64;
    }
}

loc_800189F0:
{
    r0 = 1128267776;
}

loc_800189F8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80018A04;
    }
}

loc_800189FC:
{
    r4 = 2;
    goto loc_80018A64;
}

loc_80018A04:
{
    r0 = 1072693248;
}

loc_80018A0C:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80018A64;
    }
}

loc_80018A10:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r7) >> 20);
    r0 = (r8 + -1023);
}

loc_80018A1C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_80018A40;
    }
}

loc_80018A20:
{
    r0_subfic_ra_1 = r0;
    r0 = (52 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(52) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r8 = PPC_Srw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_80018A30:
{
    if ((static_cast<uint32_t>(r11) != static_cast<uint32_t>(r0))) {
        goto loc_80018A64;
    }
}

loc_80018A34:
{
    r0 = (r8 & 1);
    r4 = (2 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    goto loc_80018A64;
}

loc_80018A40:
{
}

loc_80018A44:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80018A64;
    }
}

loc_80018A48:
{
    r0_subfic_ra_2 = r0;
    r0 = (20 - r0_subfic_ra_2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r0) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = PPC_Sraw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_80018A58:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_80018A64;
    }
}

loc_80018A5C:
{
    r0 = (r8 & 1);
    r4 = (2 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80018A64:
{
}

loc_80018A68:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80018B18;
    }
}

loc_80018A6C:
{
    r0 = (r7 + -2146435072);
}

loc_80018A74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80018AC8;
    }
}

loc_80018A78:
{
    r0 = (r6 + -1072693248);
    r0 = (r0 | r10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018A8C;
    }
}

loc_80018A84:
{
    f1.d = (f2.d - f2.d);
    goto loc_800190FC;
}

loc_80018A8C:
{
    r0 = 1072693248;
}

loc_80018A94:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_80018AB0;
    }
}

loc_80018A98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018A9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80018AA8;
    }
}

loc_80018AA0:
{
    f1.d = f2.d;
    goto loc_800190FC;
}

loc_80018AA8:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31944));
    goto loc_800190FC;
}

loc_80018AB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018AB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80018AC0;
    }
}

loc_80018AB8:
{
    f1.d = (-(f2.d));
    goto loc_800190FC;
}

loc_80018AC0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31944));
    goto loc_800190FC;
}

loc_80018AC8:
{
    r0 = (r7 + -1072693248);
}

loc_80018AD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80018AE8;
    }
}

loc_80018AD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018AD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800190FC;
    }
}

loc_80018ADC:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31952));
    f1.d = (f0.d / f1.d);
    goto loc_800190FC;
}

loc_80018AE8:
{
    r0 = (r5 + -1073741824);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80018AF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018AFC;
    }
}

loc_80018AF4:
{
    f1.d = (f1.d * f1.d);
    goto loc_800190FC;
}

loc_80018AFC:
{
    r0 = (r5 + -1071644672);
}

loc_80018B04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80018B18;
    }
}

loc_80018B08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80018B0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80018B18;
    }
}

loc_80018B10:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800190FC;
}

loc_80018B18:
{
    f0.d = std::fabs(f1.d);
}

loc_80018B20:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80018B8C;
    }
}

loc_80018B28:
{
    r0 = (r6 + -2146435072);
}

loc_80018B30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80018B48;
    }
}

loc_80018B34:
{
}

loc_80018B38:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80018B48;
    }
}

loc_80018B3C:
{
    r0 = (r6 + -1072693248);
}

loc_80018B44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80018B8C;
    }
}

loc_80018B48:
{
}

loc_80018B4C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80018B58;
    }
}

loc_80018B50:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31952));
    f0.d = (f1.d / f0.d);
}

loc_80018B58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80018B5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80018B84;
    }
}

loc_80018B60:
{
    r0 = (r6 + -1072693248);
    r0 = (r0 | r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018B78;
    }
}

loc_80018B6C:
{
    f0.d = (f0.d - f0.d);
    f0.d = (f0.d / f0.d);
    goto loc_80018B84;
}

loc_80018B78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80018B7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018B84;
    }
}

loc_80018B80:
{
    f0.d = (-(f0.d));
}

loc_80018B84:
{
    f1.d = f0.d;
    goto loc_800190FC;
}

loc_80018B8C:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r9) >> 31);
    r0 = (r8 + 1);
    r8 = (r0 | r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018BB0;
    }
}

loc_80018B9C:
{
    r3 = 0x80380000u;
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 19488));
    goto loc_800190FC;
}

loc_80018BB0:
{
    r8 = 1105199104;
}

loc_80018BB8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r8))) {
        goto loc_80018CB4;
    }
}

loc_80018BBC:
{
    r3 = 1139802112;
}

loc_80018BC4:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r3))) {
        goto loc_80018C04;
    }
}

loc_80018BC8:
{
    r0 = 1072693248;
}

loc_80018BD0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r0))) {
        goto loc_80018BEC;
    }
}

loc_80018BD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018BD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80018BE4;
    }
}

loc_80018BDC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31936));
    goto loc_800190FC;
}

loc_80018BE4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31944));
    goto loc_800190FC;
}

loc_80018BEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018BF0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80018BFC;
    }
}

loc_80018BF4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31936));
    goto loc_800190FC;
}

loc_80018BFC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31944));
    goto loc_800190FC;
}

loc_80018C04:
{
    r3 = 1072693248;
    r7 = (r3 + -1);
}

loc_80018C10:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_80018C2C;
    }
}

loc_80018C14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018C18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80018C24;
    }
}

loc_80018C1C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31936));
    goto loc_800190FC;
}

loc_80018C24:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31944));
    goto loc_800190FC;
}

loc_80018C2C:
{
}

loc_80018C30:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r3))) {
        goto loc_80018C4C;
    }
}

loc_80018C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018C38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80018C44;
    }
}

loc_80018C3C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31936));
    goto loc_800190FC;
}

loc_80018C44:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31944));
    goto loc_800190FC;
}

loc_80018C4C:
{
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31952));
    r3 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31912));
    f8.d = (f1.d - f3.d);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31896));
    f5.d = MemoryInline::FlatReadFloat64((r2 + -31920));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31904));
    f6.d = (f0.d * f8.d);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31928));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31888));
    f7.d = (f8.d * f8.d);
    f5.d = (f5.d - f6.d);
    f6.d = (f3.d * f8.d);
    f5.d = (f8.d * f5.d);
    f1.d = (f1.d * f8.d);
    f3.d = (f4.d - f5.d);
    f3.d = (f7.d * f3.d);
    f0.d = (f0.d * f3.d);
    f1.d = (f1.d - f0.d);
    f0.d = (f6.d + f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = (f0.d - f6.d);
    f0.d = (f1.d - f0.d);
    goto loc_80018EBC;
}

loc_80018CB4:
{
    r5 = 1048576;
    r11 = 0;
}

loc_80018CC0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80018CD8;
    }
}

loc_80018CC4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31880));
    r11 = -53;
    f0.d = (f0.d * f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r6 = MemoryInline::FlatRead32((r1 + 72));
}

loc_80018CD8:
{
    r5 = 262144;
    r8 = (r6 & 1048575);
    r5 = (r5 + -26482);
    r6 = (static_cast<int32_t>(r6) >> 20);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r5));
}

loc_80018CEC:
{
    r7 = (r8 | 1072693248);
    r5 = (r11 + r6);
    r11 = (r5 + -1023);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80018D04;
    }
}

loc_80018CFC:
{
    r6 = 0;
    goto loc_80018D28;
}

loc_80018D04:
{
    r5 = 786432;
    r5 = (r5 + -18822);
}

loc_80018D10:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r5))) {
        goto loc_80018D1C;
    }
}

loc_80018D14:
{
    r6 = 1;
    goto loc_80018D28;
}

loc_80018D1C:
{
    r7 = (r7 + -1048576);
    r6 = 0;
    r11 = (r11 + 1);
}

loc_80018D28:
{
    MemoryInline::FlatWriteRam32((r1 + 72), r7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r7) >> 1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r10 = (r10_rot_1 & -8);
    r5 = (r3 + 0);
    addr_lfdx_80018D38_loc_0 = (r5 + r10);
    f8.d = MemoryInline::FlatReadFloat64(addr_lfdx_80018D38_loc_0);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r8 = (r8_rot_1 & -262144);
    f10.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r6 = (r11 ^ -2147483648);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31952), 0, 272u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -31944));
    r5 = 1127219200;
    f3.d = (f10.d + f8.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -31952));
    f26.d = (f10.d - f8.d);
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 120u, (r2 + -31832));
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 104u, (r2 + -31848));
    r9 = (r9 | 536870912);
    f1.d = (f1.d / f3.d);
    r8 = (r8 + 524288);
    r8 = (r9 + r8);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 112u, (r2 + -31840));
    r9 = 0;
    f4.d = (f26.d * f1.d);
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    f13.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r2 + -31856));
    r7 = (r3 + 32);
    f9.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f4.d);
    f5.d = (f4.d * f4.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r9);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r2 + -31864));
    f8.d = (f9.d - f8.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 92), r6);
    f7.d = (f7.d * f5.d);
    MemoryInline::FlatWriteRam32((r1 + 88), r5);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 80u, (r2 + -31872));
    f8.d = (f10.d - f8.d);
    f12.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 128u, (r2 + -31824));
    f28.d = (f0.d * f9.d);
    f7.d = (f3.d + f7.d);
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 144u, (r2 + -31808));
    f27.d = (f0.d * f8.d);
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 152u, (r2 + -31800));
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 136u, (r2 + -31816));
    f7.d = (f5.d * f7.d);
    addr_lfdx_80018DE0_loc_0 = (r7 + r10);
    f8.d = MemoryInline::FlatReadFloat64(addr_lfdx_80018DE0_loc_0);
    f28.d = (f26.d - f28.d);
    f3.d = (f0.d * f0.d);
    f29.d = (f6.d + f7.d);
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 264u, (r2 + -31688));
    f27.d = (f28.d - f27.d);
    f6.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f28.d = (f5.d * f5.d);
    f29.d = (f5.d * f29.d);
    f27.d = (f1.d * f27.d);
    f13.d = (f13.d + f29.d);
    f1.d = (f12.d + f3.d);
    f29.d = (f5.d * f13.d);
    f13.d = (f0.d + f4.d);
    f30.d = (f30.d + f29.d);
    f13.d = (f27.d * f13.d);
    f30.d = (f5.d * f30.d);
    f5.d = (f6.d - f7.d);
    f6.d = (f31.d + f30.d);
    f26.d = (f28.d * f6.d);
    f26.d = (f26.d + f13.d);
    f1.d = (f1.d + f26.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 28), r9);
    f7.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f6.d = (f7.d - f12.d);
    f1.d = (f27.d * f7.d);
    f3.d = (f6.d - f3.d);
    f6.d = (f0.d * f7.d);
    f0.d = (f26.d - f3.d);
    f0.d = (f0.d * f4.d);
    f4.d = (f1.d + f0.d);
    f3.d = (f6.d + f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f3.d);
    MemoryInline::FlatWriteRam32((r1 + 68), r9);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = (f3.d - f6.d);
    f1.d = (f10.d * f3.d);
    f0.d = (f4.d - f0.d);
    f3.d = (f11.d * f3.d);
    f0.d = (f9.d * f0.d);
    f0.d = (f1.d + f0.d);
    f4.d = (f8.d + f0.d);
    r3 = (r3 + 16);
    f0.d = (f3.d + f4.d);
    addr_lfdx_80018E94_loc_0 = (r3 + r10);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80018E94_loc_0);
    f0.d = (f0.d + f1.d);
    f0.d = (f5.d + f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 52), r9);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = (f0.d - f5.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f0.d - f3.d);
    f0.d = (f4.d - f0.d);
}

loc_80018EBC:
{
    r3 = (r4 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31952), 0, 264u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -31952));
    r0 = (r0 | r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80018ED0;
    }
}

loc_80018ECC:
{
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 160u, (r2 + -31792));
}

loc_80018ED0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f2.d);
    r0 = 0;
    f0.d = (f2.d * f0.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r0 = 1083179008;
    f3.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = (f2.d - f3.d);
    f3.d = (f3.d * f1.d);
    f1.d = (f1.d * f2.d);
    f10.d = (f1.d + f0.d);
    f0.d = (f10.d + f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r6 = MemoryInline::FlatRead32((r1 + 80));
    r5 = MemoryInline::FlatRead32((r1 + 84));
}

loc_80018F10:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_80018F54;
    }
}

loc_80018F14:
{
    r0 = (r6 + -1083179008);
    r0 = (r0 | r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018F30;
    }
}

loc_80018F20:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 168u, (r2 + -31784));
    f0.d = (f1.d * f31.d);
    f1.d = (f1.d * f0.d);
    goto loc_800190FC;
}

loc_80018F30:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 176u, (r2 + -31776));
    f0.d = (f0.d - f3.d);
    f1.d = (f1.d + f10.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80018F40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80018FA8;
    }
}

loc_80018F44:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 168u, (r2 + -31784));
    f0.d = (f1.d * f31.d);
    f1.d = (f1.d * f0.d);
    goto loc_800190FC;
}

loc_80018F54:
{
    r3 = 1083244544;
    r4 = (r6 & 2147483647);
    r0 = (r3 + -13312);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80018F64:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80018FA8;
    }
}

loc_80018F68:
{
    r3 = (r6 + 1064239104);
    r0 = (r3 + 13312);
    r0 = (r0 | r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018F88;
    }
}

loc_80018F78:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 184u, (r2 + -31768));
    f0.d = (f1.d * f31.d);
    f1.d = (f1.d * f0.d);
    goto loc_800190FC;
}

loc_80018F88:
{
    f0.d = (f0.d - f3.d);
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_80018F90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018FA8;
    }
}

loc_80018F98:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 184u, (r2 + -31768));
    f0.d = (f1.d * f31.d);
    f1.d = (f1.d * f0.d);
    goto loc_800190FC;
}

loc_80018FA8:
{
    r3 = (r6 & 2147483647);
    r0 = 1071644672;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80018FB4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r4 = (r4_rot_1 & 2047);
    r3 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80019018;
    }
}

loc_80018FC0:
{
    r3 = 1048576;
    r0 = (r4 + -1022);
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -31944));
    r7 = (r6 + r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = (r7 & 2147483647);
    r3 = (r3 + -1);
    r4 = (static_cast<int32_t>(r0) >> 20);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80018FE8:
{
    r5 = (r4 + -1023);
    r0 = (r7 & 1048575);
    r4 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r3 = (r0 | 1048576);
    r0 = (20 - r5);
    r4 = (r7 & ~r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r0) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80019010;
    }
}

loc_8001900C:
{
    r3 = (0 - r3);
}

loc_80019010:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = (f3.d - f0.d);
}

loc_80019018:
{
    f0.d = (f10.d + f3.d);
    r0 = 0;
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 200u, (r2 + -31752));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r4 = (r4_rot_2 & -1048576);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 208u, (r2 + -31744));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 192u, (r2 + -31760));
    f8.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 248u, (r2 + -31704));
    f3.d = (f8.d - f3.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 240u, (r2 + -31712));
    f7.d = (f0.d * f8.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 232u, (r2 + -31720));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 224u, (r2 + -31728));
    f0.d = (f10.d - f3.d);
    f10.d = (f9.d * f8.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 216u, (r2 + -31736));
    f8.d = (f2.d * f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 256u, (r2 + -31696));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -31952));
    f11.d = (f8.d + f7.d);
    f9.d = (f10.d + f11.d);
    f7.d = (f9.d * f9.d);
    f8.d = (f9.d - f10.d);
    f6.d = (f6.d * f7.d);
    f8.d = (f11.d - f8.d);
    f6.d = (f1.d + f6.d);
    f1.d = (f9.d * f8.d);
    f6.d = (f7.d * f6.d);
    f1.d = (f8.d + f1.d);
    f5.d = (f5.d + f6.d);
    f5.d = (f7.d * f5.d);
    f4.d = (f4.d + f5.d);
    f4.d = (f7.d * f4.d);
    f3.d = (f3.d + f4.d);
    f3.d = (f7.d * f3.d);
    f4.d = (f9.d - f3.d);
    f3.d = (f9.d * f4.d);
    f2.d = (f4.d - f2.d);
    f2.d = (f3.d / f2.d);
    f1.d = (f2.d - f1.d);
    f1.d = (f1.d - f9.d);
    f1.d = (f0.d - f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 80));
    r0 = (r0 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 20);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800190E8;
    }
}

loc_800190DC:
{
    ctx->lr = 0x800190E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f1.d);
    goto loc_800190F4;
}

loc_800190E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 80));
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_800190F4:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f1.d = (f31.d * f0.d);
}

loc_800190FC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 196));
    f26.d = MemoryInline::FlatReadFloat64((r1 + 96));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80003FFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80018928 func_80018928 preserves=false fpr_mask=0xFC000000
