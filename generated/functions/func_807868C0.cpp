#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807868C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80786918_loc_0 = 0;
    uint32_t addr_lfsx_80786924_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_addr_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807868C0;

loc_807868C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807868D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786B00;
    }
}

loc_807868DC:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = 0x808A0000u;
    r29 = MemoryInline::FlatRead32(r4);
    r9 = 0;
    r6 = MemoryInline::FlatRead16((r4 + 20));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r11 = (r11_rot_1 & -8);
    r12 = MemoryInline::FlatRead32((r3 + 20));
    r7 = r0;
    r10 = MemoryInline::FlatRead32((r3 + 1056));
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r30 = (r30_rot_1 & -8);
    r31 = MemoryInline::FlatRead32((r3 + 16));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r10 = (r10 + -1);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f1.d = MemoryInline::FlatReadFloat32(r29);
    addr_lfsx_80786918_loc_0 = (r31 + r30);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80786918_loc_0);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f6.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    addr_lfsx_80786924_loc_0 = (r12 + r11);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_80786924_loc_0);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 18412));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    MemoryInline::FlatWrite32((r3 + 1080), r9);
    MemoryInline::FlatWrite32((r3 + 1084), r4);
    MemoryInline::FlatWriteFloat32((r3 + 1100), f0.d);
    MemoryInline::FlatWrite32((r3 + 1104), r5);
    goto loc_80786958;
}

loc_80786950:
{
    r30 = (r30 + -64);
    r6 = (r6 + -8);
}

loc_80786958:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(7));
}

loc_8078695C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80786978;
    }
}

loc_80786960:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r4 + r30);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -64));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80786970:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786950;
    }
}

loc_80786978:
{
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_1 & -8);
    goto loc_80786988;
}

loc_80786980:
{
    r8 = (r8 + -8);
    r6 = (r6 + -1);
}

loc_80786988:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8078698C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807869A8;
    }
}

loc_80786990:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r4 + r8);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -8));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807869A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786980;
    }
}

loc_807869A8:
{
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r9 = (r9_rot_1 & -8);
    r8 = (r10 + -7);
    goto loc_807869BC;
}

loc_807869B4:
{
    r9 = (r9 + 64);
    r7 = (r7 + 8);
}

loc_807869BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r8));
}

loc_807869C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807869DC;
    }
}

loc_807869C4:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r4 = (r4 + r9);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807869D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807869B4;
    }
}

loc_807869DC:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r8 = (r8_rot_2 & -8);
    goto loc_807869EC;
}

loc_807869E4:
{
    r8 = (r8 + 8);
    r7 = (r7 + 1);
}

loc_807869EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r10));
}

loc_807869F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80786A0C;
    }
}

loc_807869F4:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r4 = (r4 + r8);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80786A04:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807869E4;
    }
}

loc_80786A0C:
{
    r9 = MemoryInline::FlatRead32((r3 + 16));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -8);
    r4 = (r7 + 1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r10 = (r10_rot_1 & -8);
    r8 = (r9 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 5));
    r4 = (r4 - r8);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r8));
}

loc_80786A30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786B00;
    }
}

loc_80786A34:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r8 = (r4 + r10);
    r4 = MemoryInline::FlatRead8((r8 + 4));
}

loc_80786A44:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r6))) {
        goto loc_80786AEC;
    }
}

loc_80786A48:
{
}

loc_80786A4C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_80786AEC;
    }
}

loc_80786A50:
{
    r4 = MemoryInline::FlatRead8((r8 + 5));
    r8 = MemoryInline::FlatRead32((r3 + 24));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r4 = (r4_rot_2 & -32);
    r11 = (r8 + r4);
    f0.d = MemoryInline::FlatReadFloat32((r11 + 24));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_80786A68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786AF4;
    }
}

loc_80786A6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r11 + 28));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_80786A74:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80786AF4;
    }
}

loc_80786A78:
{
    r8 = MemoryInline::FlatRead32((r11 + 12));
    r4 = (r8 & r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786AF4;
    }
}

loc_80786A84:
{
    r4 = (r8 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80786A88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80786AF4;
    }
}

loc_80786A8C:
{
    r4 = MemoryInline::FlatRead32(r11);
    f2.d = MemoryInline::FlatReadFloat32((r11 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f8.d);
}

loc_80786AA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786AF4;
    }
}

loc_80786AA4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f7.d);
}

loc_80786AAC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80786AF4;
    }
}

loc_80786AB0:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f6.d);
}

loc_80786ABC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786AF4;
    }
}

loc_80786AC0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f9.d);
}

loc_80786AC8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80786AF4;
    }
}

loc_80786ACC:
{
    r8 = MemoryInline::FlatRead32((r3 + 1080));
    r9 = MemoryInline::FlatRead32((r3 + 28));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r8 = (r8 + 1);
    r9_addr_2 = (r9 + r4);
    MemoryInline::FlatWrite32(r9_addr_2, r11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(256));
}

loc_80786AE4:
{
    MemoryInline::FlatWrite32((r3 + 1080), r8);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786B00;
    }
}

loc_80786AEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80786AF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786B00;
    }
}

loc_80786AF4:
{
    r10 = (r10 + -8);
    r7 = (r7 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80786A34;
    }
}

loc_80786B00:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FD3 gpr_return=0x00000010 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807868C0 func_807868C0 preserves=true fpr_mask=0x00000000
