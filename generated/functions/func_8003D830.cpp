#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003D830(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
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
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8003D830;

loc_8003D830:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -448), 0, 456u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -448), r1);
    r1 = (r1 + -448);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 452u, (r1 + 452), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 432u, (r1 + 432), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 416u, (r1 + 416), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 400u, (r1 + 400), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 384u, (r1 + 384), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 368u, (r1 + 368), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 352u, (r1 + 352), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 336u, (r1 + 336), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 320u, (r1 + 320), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 304u, (r1 + 304), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r11 = (r1 + 288);
    // inline leaf 0x80021574 (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021574
    r16 = r4;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r1 + 200), r0);
    r17 = r5;
    f27.d = MemoryInline::FlatReadFloat64((r2 + -30240));
    r18 = r6;
    MemoryInline::WriteResolved32(guest_range_2, 208u, (r1 + 208), r0);
    r19 = r7;
    f28.d = MemoryInline::FlatReadFloat64((r2 + -30232));
    r31 = r3;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -30252));
    r30 = r16;
    f22.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    r27 = r16;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30264));
    r26 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30248));
    r22 = 0;
    r21 = 0;
    r29 = 0;
    r28 = 0;
}

loc_8003D8E8:
{
    r0 = MemoryInline::FlatRead32((r31 + 196));
    r4 = (r29 + 2);
}

loc_8003D8F4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8003DE10;
    }
}

loc_8003D8F8:
{
    r25 = MemoryInline::FlatRead32((r30 + 136));
}

loc_8003D900:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8003DE10;
    }
}

loc_8003D904:
{
    r5 = MemoryInline::FlatRead16((r16 + 148));
    r3 = 1;
    r0 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r29));
    r24 = (r0 & 3);
}

loc_8003D918:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(2))) {
        goto loc_8003D920;
    }
}

loc_8003D91C:
{
    r3 = 2;
}

loc_8003D920:
{
    r0 = MemoryInline::FlatRead8((r16 + 150));
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
    r6 = (r0 & 3);
}

loc_8003D930:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(1))) {
        goto loc_8003D93C;
    }
}

loc_8003D934:
{
}

loc_8003D938:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(3))) {
        goto loc_8003D944;
    }
}

loc_8003D93C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r3 - r0);
}

loc_8003D944:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = 1;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    r23 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(2));
}

loc_8003D960:
{
    f26.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003D96C;
    }
}

loc_8003D968:
{
    r3 = 2;
}

loc_8003D96C:
{
    r4 = (r6 + 254);
    r0 = (r4 & 255);
}

loc_8003D978:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8003D980;
    }
}

loc_8003D97C:
{
    r3 = (0 - r3);
}

loc_8003D980:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
}

loc_8003D98C:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = 0;
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003D9A4;
    }
}

loc_8003D99C:
{
}

loc_8003D9A0:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(3))) {
        goto loc_8003D9A8;
    }
}

loc_8003D9A4:
{
    r0 = 1;
}

loc_8003D9A8:
{
}

loc_8003D9AC:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(2))) {
        goto loc_8003D9B4;
    }
}

loc_8003D9B0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
}

loc_8003D9B4:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    r0 = (r4 & 255);
    r3 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8003D9CC:
{
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8003D9D8;
    }
}

loc_8003D9D4:
{
    r3 = 1;
}

loc_8003D9D8:
{
}

loc_8003D9DC:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(2))) {
        goto loc_8003D9E4;
    }
}

loc_8003D9E0:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
}

loc_8003D9E4:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_8003D9F0:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = r19;
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAD8;
    }
}

loc_8003DA00:
{
    r0 = MemoryInline::FlatRead32((r26 + 4));
    r5 = MemoryInline::FlatRead32((r27 + 76));
    r4 = MemoryInline::FlatRead32((r27 + 80));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
}

loc_8003DA10:
{
    r3 = MemoryInline::FlatRead32((r27 + 112));
    r0 = MemoryInline::FlatRead32((r27 + 116));
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 100));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DA30:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    SetCRFloatResident(cr, 0, f0.d, f26.d);
}

loc_8003DA38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DA3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    SetCRFloatResident(cr, 0, f0.d, f25.d);
}

loc_8003DA44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DA48:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 16));
    SetCRFloatResident(cr, 0, f0.d, f24.d);
}

loc_8003DA50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DA54:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 20));
    SetCRFloatResident(cr, 0, f0.d, f23.d);
}

loc_8003DA5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DA60:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
}

loc_8003DA68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r24))) {
        goto loc_8003DAC4;
    }
}

loc_8003DA6C:
{
    r0 = MemoryInline::FlatRead32((r26 + 28));
}

loc_8003DA74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r23))) {
        goto loc_8003DAC4;
    }
}

loc_8003DA78:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003DA84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DA88:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003DA94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DA98:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 40));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8003DAA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DAA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003DAB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DAC4;
    }
}

loc_8003DAB4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003DAC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003DACC;
    }
}

loc_8003DAC4:
{
    r0 = 0;
    goto loc_8003DAD0;
}

loc_8003DACC:
{
    r0 = 1;
}

loc_8003DAD0:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
}

loc_8003DAD8:
{
}

loc_8003DADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003DE10;
    }
}

loc_8003DAE0:
{
    r5 = MemoryInline::FlatRead32((r27 + 112));
    r22 = 1;
    r4 = MemoryInline::FlatRead32((r27 + 116));
    r3 = MemoryInline::FlatRead32((r27 + 76));
    r0 = MemoryInline::FlatRead32((r27 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 100));
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r26 + 4), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r26 + 4), r25);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f26.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f25.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r26 + 8), f26.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r26 + 12), f25.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f24.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f23.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r26 + 16), f24.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r26 + 20), f23.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r26 + 24), r24);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r26 + 28), r23);
    }
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r26 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r26 + 36), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r26 + 40), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r26 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r26 + 48), f0.d);
    r20 = MemoryInline::FlatRead8((r25 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(6));
}

loc_8003DB50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003DBC4;
    }
}

loc_8003DB54:
{
    r0 = (r20 + -8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8003DB5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003DB6C;
    }
}

loc_8003DB60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(14));
}

loc_8003DB64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003DBC4;
    }
}

loc_8003DB68:
{
    goto loc_8003DBF0;
}

loc_8003DB6C:
{
    r4 = MemoryInline::FlatRead32((r25 + 28));
    r3 = (r1 + 56);
    r5 = MemoryInline::FlatRead8((r25 + 13));
    r6 = MemoryInline::FlatRead16((r25 + 14));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170F80u>(ctx);
    r4 = MemoryInline::FlatRead32((r31 + 196));
    r3 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170FA8u>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 196));
    r7 = r20;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r8 = r24;
    r9 = r23;
    r3 = (r1 + 72);
    r0 = MemoryInline::FlatRead8((r25 + 20));
    r4 = MemoryInline::FlatRead32((r25 + 24));
    r0_subfic_ra_2 = r0;
    r0 = (1 - r0_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1) >= static_cast<uint32_t>(r0_subfic_ra_2) ? 1u : 0u) << 29);
    r5 = MemoryInline::FlatRead16((r25 + 4));
    r6 = MemoryInline::FlatRead16((r25 + 6));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    ctx->lr = 0x8003DBC0u;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170A04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8003DBF0;
}

loc_8003DBC4:
{
    r0 = MemoryInline::FlatRead8((r25 + 20));
    r7 = r20;
    r4 = MemoryInline::FlatRead32((r25 + 24));
    r8 = r24;
    r0_subfic_ra_3 = r0;
    r0 = (1 - r0_subfic_ra_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1) >= static_cast<uint32_t>(r0_subfic_ra_3) ? 1u : 0u) << 29);
    r5 = MemoryInline::FlatRead16((r25 + 4));
    r6 = MemoryInline::FlatRead16((r25 + 6));
    r9 = r23;
    r3 = (r1 + 72);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 1);
    ctx->lr = 0x8003DBF0u;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801707F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8003DBF0:
{
    r0 = MemoryInline::FlatRead8((r25 + 20));
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    r4 = 1;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8003DC04:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003DC18;
    }
}

loc_8003DC14:
{
    r4 = 5;
}

loc_8003DC18:
{
    f3.d = f22.d;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    r5 = 1;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170A4Cu>(ctx);
    r4 = MemoryInline::FlatRead32((r31 + 196));
    r3 = (r1 + 72);
    ctx->lr = 0x8003DC40u;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 152);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_5, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_6, f2.d);
    // end of inlined leaf 0x80199D04
    f0.d = MemoryInline::FlatReadFloat32((r27 + 112));
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 100));
    SetCRFloatResident(cr, 0, f22.d, f1.d);
}

loc_8003DC60:
{
    if (((cr & 0x20000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_8003DCC0;
    }
}

loc_8003DC64:
{
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 104);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_7, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_8, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_9, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_10 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_10, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_11, f2.d);
    // end of inlined leaf 0x80199D04
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r4 = (r1 + 152);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = r4;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f1.d);
    f2.d = (-(f3.d));
    r3 = (r1 + 104);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f3.d);
    f1.d = PpcFmulsInline(f31.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f2.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
}

loc_8003DCC0:
{
    SetCRFloatResident(cr, 0, f30.d, f26.d);
}

loc_8003DCC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DCF8;
    }
}

loc_8003DCC8:
{
    SetCRFloatResident(cr, 0, f30.d, f25.d);
}

loc_8003DCCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DCF8;
    }
}

loc_8003DCD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 76));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8003DCD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DCF8;
    }
}

loc_8003DCDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 80));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8003DCE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DCF8;
    }
}

loc_8003DCE8:
{
    SetCRFloatResident(cr, 0, f22.d, f24.d);
}

loc_8003DCEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DCF8;
    }
}

loc_8003DCF0:
{
    SetCRFloatResident(cr, 0, f22.d, f23.d);
}

loc_8003DCF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003DD68;
    }
}

loc_8003DCF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 76));
    r4 = (r1 + 152);
    f2.d = PpcFmulsInline(f31.d, f26.d);
    r5 = r4;
    f3.d = PpcFmulsInline(f26.d, f0.d);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 104), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 108), f22.d);
    f1.d = PpcFmulsInline(f31.d, f25.d);
    r3 = (r1 + 104);
    f0.d = PpcFmulsInline(f31.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 104), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 112), f22.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 120), f22.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 80));
    f0.d = PpcFmulsInline(f25.d, f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f22.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 128), f22.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 124), f0.d);
    }
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 136), f22.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f22.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f30.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r1 + 140), f22.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r1 + 144), f30.d);
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r1 + 148), f22.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 132), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
}

loc_8003DD68:
{
    r3 = MemoryInline::FlatRead16(r17);
    r0 = (r21 + 7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r0) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003DD78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DDC0;
    }
}

loc_8003DD7C:
{
    r4 = MemoryInline::FlatRead32((r31 + 196));
    r3 = (r1 + 152);
    r5 = 1;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4 = (r0 - r4);
    r4 = (r4 + 30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80173234u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 196));
    r4 = 1;
    r5 = 4;
    r7 = 0;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r8 = 125;
    r6 = (r0 - r3);
    r6 = (r6 + 30);
    ctx->lr = 0x8003DDBCu;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016E37Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8003DE10;
}

loc_8003DDC0:
{
    r4 = (r1 + 152);
    r3 = (r18 + 48);
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    r4 = MemoryInline::FlatRead32((r31 + 196));
    r3 = (r1 + 152);
    r5 = 0;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r4 = (r0 - r4);
    r4 = (r4 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80173234u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 196));
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r7 = 0;
    r8 = (r0 - r3);
    r8 = (r8 + 64);
    ctx->lr = 0x8003DE10u;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016E37Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8003DE10:
{
    r21 = (r21 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(3));
}

loc_8003DE1C:
{
    r29 = (r29 + 4);
    r28 = (r28 + 2);
    r27 = (r27 + 8);
    r26 = (r26 + 48);
    r31 = (r31 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003D8E8;
    }
}

loc_8003DE34:
{
    r3 = r22;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 288), 0, 168u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 144u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 128u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 112u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 96u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 80u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 64u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, (r1 + 288));
    r11 = (r1 + 288);
    // inline leaf 0x800215C0 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C0
    r0 = MemoryInline::ReadResolved32(guest_range_5, 164u, (r1 + 452));
    ctx->lr = r0;
    r1 = (r1 + 448);
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8003D830 func_8003D830 preserves=false fpr_mask=0xFFC00000
