#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FBE6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r26_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807FBE6C;

loc_807FBE6C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 112);
    // inline leaf 0x80021598 (8 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -28), r25);
    MemoryInline::FlatWriteRam32((r11 + -24), r26);
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x80021598
    f31.d = f1.d;
    r27 = r3;
    r31 = 0x808B0000u;
    r26 = r6;
    r28 = r7;
    r29 = r8;
    r25 = r9;
    r31 = (r31 + -21672);
    r3 = (r1 + 48);
    r5 = (r27 + 48);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807FBEC0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807FBEE4;
    }
}

loc_807FBEC4:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 188));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FBECC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807FBEE4;
    }
}

loc_807FBED0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 180));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FBEE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FBEEC;
    }
}

loc_807FBEE4:
{
    r3 = 0;
    goto loc_807FC228;
}

loc_807FBEEC:
{
    r3 = 0x809C0000u;
    r4 = 1127219200;
    r5 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = 552075264;
    r0 = (r3 + 4095);
    MemoryInline::FlatWriteRam32((r1 + 64), r4);
    r3 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (r26 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    f1.d = MemoryInline::FlatReadFloat64((r31 + 56));
    r0 = (r25 + r3);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r25 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FC224;
    }
}

loc_807FBF28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807FBF2C:
{
    r30 = 23;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FBF78;
    }
}

loc_807FBF34:
{
    r4 = MemoryInline::FlatRead32((r28 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807FBF3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FBF78;
    }
}

loc_807FBF40:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = 0;
    r5 = (r0 & 256);
}

loc_807FBF4C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807FBF60;
    }
}

loc_807FBF50:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_807FBF58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r27))) {
        goto loc_807FBF60;
    }
}

loc_807FBF5C:
{
    r3 = 1;
}

loc_807FBF60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807FBF64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807FBF70;
    }
}

loc_807FBF68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807FBF6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FBF78;
    }
}

loc_807FBF70:
{
    r3 = 0;
    goto loc_807FC228;
}

loc_807FBF78:
{
    f0.d = PPC_Fctiwz(f0.d);
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = f31.d;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 44), f2.d);
    r3 = r27;
    r4 = (r1 + 48);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r1 + 64), f0.d);
    r6 = (r1 + 36);
    r7 = (r1 + 24);
    r8 = (r1 + 8);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 40), f2.d);
    r5 = fctiwzword0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 36), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 32), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 28), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 24), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 8), f2.d);
    ctx->lr = 0x807FBFC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807FB060u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807FBFC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FC224;
    }
}

loc_807FBFC8:
{
}

loc_807FBFCC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807FC12C;
    }
}

loc_807FBFD0:
{
    f31.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r5 = 23;
    r0 = 1;
    r3 = r28;
    r25 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = r28;
    r26 = (r1 + 24);
    r5 = (r1 + 36);
    // inline leaf 0x800855C0 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x800855C0
    r3 = (r28 + 12);
    r5 = (r1 + 36);
    r4 = r3;
    // inline leaf 0x80085580 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80085580
    r3 = 552075264;
    r0 = (r3 + 4095);
    r0 = (r25 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807FC054;
    }
}

loc_807FC014:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 72));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807FC01C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FC02C;
    }
}

loc_807FC020:
{
    MemoryInline::FlatWriteFloat32((r28 + 72), f31.d);
    r0 = 1;
    goto loc_807FC030;
}

loc_807FC02C:
{
    r0 = 0;
}

loc_807FC030:
{
}

loc_807FC034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807FC114;
    }
}

loc_807FC038:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r28 + 44), f0.d);
    goto loc_807FC114;
}

loc_807FC054:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r25 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807FC114;
    }
}

loc_807FC064:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 92));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FC070:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
}

loc_807FC078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807FC0D8;
    }
}

loc_807FC07C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 52);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r26_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 48);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r26));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 84));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f2.d, f3.d, f4.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FC0A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FC0B8;
    }
}

loc_807FC0AC:
{
    MemoryInline::FlatWriteFloat32((r28 + 84), f1.d);
    r0 = 1;
    goto loc_807FC0BC;
}

loc_807FC0B8:
{
    r0 = 0;
}

loc_807FC0BC:
{
}

loc_807FC0C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_807FC0D8;
    }
}

loc_807FC0C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FC0D0:
{
    if (((cr & 0x40000000u) == 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_807FC0D8;
    }
}

loc_807FC0D4:
{
    MemoryInline::FlatWriteFloat32((r28 + 84), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
}

loc_807FC0D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 76));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807FC0E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FC0F0;
    }
}

loc_807FC0E4:
{
    MemoryInline::FlatWriteFloat32((r28 + 76), f31.d);
    r0 = 1;
    goto loc_807FC0F4;
}

loc_807FC0F0:
{
    r0 = 0;
}

loc_807FC0F4:
{
}

loc_807FC0F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807FC114;
    }
}

loc_807FC0FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r28 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r28 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r28 + 56), f0.d);
}

loc_807FC114:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
}

loc_807FC11C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807FC12C;
    }
}

loc_807FC120:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = r27;
    // inline leaf 0x807BD7D8 (14 guest instruction(s))
}

loc_inl4_0x807BD7D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl4_0x807BD7E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl4_0x807BD7F0;
    }
}

loc_inl4_0x807BD7E4:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    r0 = 1;
    goto loc_inl4_0x807BD7F4;
}

loc_inl4_0x807BD7F0:
{
    r0 = 0;
}

loc_inl4_0x807BD7F4:
{
}

loc_inl4_0x807BD7F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x807BD7FC:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_inl4_cont_807BD7D8;
}

loc_inl4_return:
{
}

loc_inl4_cont_807BD7D8:
{
    // end of inlined leaf 0x807BD7D8
}

loc_807FC12C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807FC130:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FC220;
    }
}

loc_807FC134:
{
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r29;
    r5 = 23;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    // inline leaf 0x807BDA9C (19 guest instruction(s))
}

loc_inl5_0x807BDA9C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r6 = 0x809C0000u;
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r3, r0);
    r7 = MemoryInline::FlatRead32((r6 + 15320));
}

loc_inl5_0x807BDAB4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(64))) {
        goto loc_inl5_0x807BDABC;
    }
}

loc_inl5_0x807BDAB8:
{
    r7 = 63;
}

loc_inl5_0x807BDABC:
{
    r0 = (r7 * 12);
    r3 = 0x809C0000u;
    r6 = 0x809C0000u;
    r3 = (r3 + 14552);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRam32((r6 + 15320), r0);
}

loc_inl5_cont_807BDA9C:
{
    // end of inlined leaf 0x807BDA9C
    r3 = r29;
    r4 = 7;
    // inline leaf 0x807BDB5C (13 guest instruction(s))
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 15320));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & 65504);
    r3 = (r3 + 14552);
    r4 = (r5 + -1);
    r4 = (r4 * 12);
    r4 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r3 & -225);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x807BDB5C
    r3 = r29;
    r4 = 1;
    // inline leaf 0x807BDBC4 (13 guest instruction(s))
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 15320));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r0 = (r0_rot_5 & 57344);
    r3 = (r3 + 14552);
    r4 = (r5 + -1);
    r4 = (r4 * 12);
    r4 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r3 & -8193);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x807BDBC4
    r3 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 17056));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 188));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807FC184:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FC1A0;
    }
}

loc_807FC188:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r29;
    r4 = 128;
    r5 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BDA9Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    goto loc_807FC220;
}

loc_807FC1A0:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r3 + 16824));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807FC1AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FC220;
    }
}

loc_807FC1B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807FC1B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FC20C;
    }
}

loc_807FC1B8:
{
    r4 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    r3 = (r1 + 12);
    r4 = (r4 + 16688);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 80));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FC1D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FC1E8;
    }
}

loc_807FC1DC:
{
    MemoryInline::FlatWriteFloat32((r28 + 80), f1.d);
    r0 = 1;
    goto loc_807FC1EC;
}

loc_807FC1E8:
{
    r0 = 0;
}

loc_807FC1EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807FC1F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FC20C;
    }
}

loc_807FC1F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r28 + 68), f0.d);
}

loc_807FC20C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r29;
    r4 = 4194304;
    r5 = 22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BDA9Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_807FC220:
{
    r25 = 1;
}

loc_807FC224:
{
    r3 = r25;
}

loc_807FC228:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 84), 0, 52u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 112));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0003FF gpr_write=0xFE000BFB gpr_return=0x00000018 fpr_read=0xF000005F fpr_write=0xF000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FBE6C func_807FBE6C preserves=false fpr_mask=0x80000000
