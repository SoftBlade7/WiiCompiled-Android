#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80128D7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80128F14_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80128D7C;

loc_80128D7C:
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
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 48);
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 272), 0, 56u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 272));
    r31 = 0x80280000u;
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
}

loc_80128DB8:
{
    r31 = (r31 + 6176);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128DC8;
    }
}

loc_80128DC0:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128DC8:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 280));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27340));
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_80128DD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128DE4;
    }
}

loc_80128DD8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r3 + 276));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80128DE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80128DEC;
    }
}

loc_80128DE4:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128DEC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 284));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_80128DF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128E00;
    }
}

loc_80128DF8:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128E00:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 288));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80128E08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80128E14;
    }
}

loc_80128E0C:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128E14:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r3 + 292));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80128E1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128E2C;
    }
}

loc_80128E20:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27336));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80128E28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80128E34;
    }
}

loc_80128E2C:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128E34:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 296));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80128E3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128E48;
    }
}

loc_80128E40:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80128E44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80128E50;
    }
}

loc_80128E48:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128E50:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r3 + 300));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80128E58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128E64;
    }
}

loc_80128E5C:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80128E60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80128E6C;
    }
}

loc_80128E64:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128E6C:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r3 + 304));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80128E74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128E80;
    }
}

loc_80128E78:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80128E7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80128E88;
    }
}

loc_80128E80:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128E88:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r3 + 308));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80128E90:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128E9C;
    }
}

loc_80128E94:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80128E98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80128EA4;
    }
}

loc_80128E9C:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128EA4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r3 + 320));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80128EAC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128EB8;
    }
}

loc_80128EB0:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80128EB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80128EC0;
    }
}

loc_80128EB8:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128EC0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r3 + 324));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80128EC8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128ED4;
    }
}

loc_80128ECC:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80128ED0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80128EDC;
    }
}

loc_80128ED4:
{
    r3 = 0;
    goto loc_80129070;
}

loc_80128EDC:
{
    r8 = (r4 * 12);
    r9 = (r31 + 0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27344));
    r5 = (r31 + 96);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27332));
    r27 = 0;
    r7 = (r9 + r8);
    f1.d = PpcFmulsInline(f0.d, f4.d);
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r4 = (r5 + r8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 24), r6);
    r9_addr_1 = (r9 + r8);
    r0 = MemoryInline::FlatRead32(r9_addr_1);
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 12), r0);
    addr_lfsx_80128F14_loc_0 = (r5 + r8);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80128F14_loc_0);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 32), f0.d);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 36), f0.d);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 56), r27);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 40), f0.d);
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
    MemoryInline::FlatWrite32((r30 + 60), r3);
    r26 = r30;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -27288));
    r28 = (r31 + 192);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -27312));
    r24 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27344));
    r25 = 0;
    r29 = 1127219200;
}

loc_80128F88:
{
    MemoryInline::FlatWrite32((r26 + 104), r27);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -27304));
    r0 = MemoryInline::FlatRead32((r30 + 284));
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r0 = (r25 + r0);
    r28_addr_2 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite32((r26 + 116), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 288));
    f2.d = PpcFmulsInline(f30.d, f2.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x80128FC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r24 = (r24 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(3));
}

loc_80128FD4:
{
    r25 = (r25 + 4);
    MemoryInline::FlatWriteFloat32((r26 + 140), f0.d);
    r26 = (r26 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128F88;
    }
}

loc_80128FE4:
{
    r0 = MemoryInline::FlatRead32((r30 + 284));
    r4 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 176), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r30 + 176), r4);
    r3 = (r31 + 192);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27336));
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 296));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27296));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 184), r0);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 292));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r30 + 180), r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80129020:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r30 + 188), r0);
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r30 + 212), r4);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r30 + 224), r0);
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r30 + 216), r4);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r30 + 228), r0);
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r30 + 220), r4);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r30 + 232), r0);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r30 + 248), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r30 + 264), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012905C;
    }
}

loc_80129058:
{
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r30 + 264), f0.d);
}

loc_8012905C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27340));
    r3 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r30 + 252), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r30 + 256), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r30 + 260), f0.d);
}

loc_80129070:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -4));
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF003FFF gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80128D7C func_80128D7C preserves=false fpr_mask=0xE0000000
