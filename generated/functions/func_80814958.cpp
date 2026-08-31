#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80814958(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80814958;

loc_80814958:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 144);
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
    f29.d = f1.d;
    r24 = r3;
    r0 = 1127219200;
    r30 = 0x808D0000u;
    r31 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r29 = r9;
    r30 = (r30 + 25320);
    r31 = (r31 + -19496);
    r3 = (r1 + 64);
    r5 = (r24 + 48);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 188));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808149DC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_808149FC;
    }
}

loc_808149E0:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 180));
    f2.d = std::fabs(f2.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_808149F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80814A04;
    }
}

loc_808149FC:
{
    r3 = 0;
    goto loc_80814E70;
}

loc_80814A04:
{
    r28 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    // end of inlined leaf 0x80536230
}

loc_80814A18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80814A28;
    }
}

loc_80814A1C:
{
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    goto loc_80814A2C;
}

loc_80814A28:
{
    r0 = MemoryInline::FlatRead32((r24 + 172));
}

loc_80814A2C:
{
    r0 = (r29 + r0);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat64((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r28 = 0;
    f30.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 2;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80814A5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80814AFC;
    }
}

loc_80814A60:
{
    f0.d = PPC_Fctiwz(f31.d);
    r4 = MemoryInline::FlatRead16((r30 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f0.d);
    r0 = (r4 ^ -2147483648);
    f2.d = (-(f1.d));
    r3 = fctiwzword0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 188));
    f5.d = MemoryInline::FlatReadFloat64((r31 + 56));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = (r0 * r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r0 = (r3 - r0);
    f1.d = PpcFmulsInline(f1.d, f6.d);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = PpcFmulsInline(f28.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = PpcFmulsInline(f28.d, f1.d);
    f1.d = PpcFmulsInline(f30.d, f1.d);
    f1.d = PpcFmulsInline(f30.d, f1.d);
    f30.d = PpcFmulsInline(f0.d, f1.d);
}

loc_80814AFC:
{
    r3 = 12;
    r0 = 1;
    r29 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r25 & r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80814D40;
    }
}

loc_80814B10:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    r3 = (r1 + 16);
    f2.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r1 + 20);
    f1.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
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
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 68u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r31 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f3.d = MemoryInline::FlatReadFloat32((r24 + 180));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    f5.d = PpcFmulsInline(f6.d, f5.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    SetCRFloatResident(cr, 0, f7.d, f1.d);
}

loc_80814B84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80814BB4;
    }
}

loc_80814B88:
{
    f0.d = PpcFmulsInline(f7.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    f3.d = PpcFmulsInline(f7.d, f2.d);
    r0 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f7.d);
    goto loc_80814C04;
}

loc_80814BB4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f0.d));
    SetCRFloatResident(cr, 0, f5.d, f1.d);
}

loc_80814BC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80814C00;
    }
}

loc_80814BCC:
{
    f0.d = (-(f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    f4.d = PpcFmulsInline(f5.d, f6.d);
    r0 = 1;
    f3.d = (-(f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f6.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    goto loc_80814C04;
}

loc_80814C00:
{
    r0 = 0;
}

loc_80814C04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80814C08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80814C50;
    }
}

loc_80814C0C:
{
}

loc_80814C10:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80814C34;
    }
}

loc_80814C14:
{
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 52);
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
    r3 = (r26 + 12);
    r5 = (r1 + 52);
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
}

loc_80814C34:
{
}

loc_80814C38:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80814C48;
    }
}

loc_80814C3C:
{
    r0 = MemoryInline::FlatRead32(r27);
    r0 = (r0 | r29);
    MemoryInline::FlatWrite32(r27, r0);
}

loc_80814C48:
{
    r28 = 1;
    goto loc_80814D40;
}

loc_80814C50:
{
    f0.d = PPC_Fctiwz(f31.d);
    r4 = MemoryInline::FlatRead16((r30 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f2.d = MemoryInline::FlatReadFloat32(r30);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f0.d);
    r0 = (r4 ^ -2147483648);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    r3 = fctiwzword1;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r31 + 56));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r31 + 28));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r31 + 36));
    r0 = (r0 * r4);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r31 + 16));
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r31 + 32));
    r0 = (r3 - r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = f29.d;
    r3 = r24;
    r4 = (r1 + 64);
    r5 = (r1 + 52);
    f2.d = PpcFmulsInline(f31.d, f2.d);
    r6 = (r1 + 40);
    r7 = (r1 + 24);
    f2.d = PpcFmulsInline(f28.d, f2.d);
    f2.d = PpcFmulsInline(f28.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    ctx->lr = 0x80814CF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80814270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
}

loc_80814CFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80814D40;
    }
}

loc_80814D00:
{
}

loc_80814D04:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80814D28;
    }
}

loc_80814D08:
{
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 52);
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
    r3 = (r26 + 12);
    r5 = (r1 + 52);
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
}

loc_80814D28:
{
}

loc_80814D2C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80814D3C;
    }
}

loc_80814D30:
{
    r0 = MemoryInline::FlatRead32(r27);
    r0 = (r0 | r29);
    MemoryInline::FlatWrite32(r27, r0);
}

loc_80814D3C:
{
    r28 = 1;
}

loc_80814D40:
{
    r3 = 0;
    r0 = 1;
    r29 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r25 & r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80814E6C;
    }
}

loc_80814D54:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    r3 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
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
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f3.d = (-(f1.d));
    f4.d = MemoryInline::FlatReadFloat32((r24 + 184));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80814DCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80814E20;
    }
}

loc_80814DD0:
{
    f1.d = f28.d;
    r4 = 0x802A0000u;
    r3 = (r1 + 28);
    r4 = (r4 + 16688);
    // inline leaf 0x80518AB8 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80518AB8
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0 = 1;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f28.d);
    goto loc_80814E24;
}

loc_80814E20:
{
    r0 = 0;
}

loc_80814E24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80814E28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80814E6C;
    }
}

loc_80814E2C:
{
}

loc_80814E30:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80814E54;
    }
}

loc_80814E34:
{
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 52);
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
    r3 = (r26 + 12);
    r5 = (r1 + 52);
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
}

loc_80814E54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80814E58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80814E68;
    }
}

loc_80814E5C:
{
    r0 = MemoryInline::FlatRead32(r27);
    r0 = (r0 | r29);
    MemoryInline::FlatWrite32(r27, r0);
}

loc_80814E68:
{
    r28 = 1;
}

loc_80814E6C:
{
    r3 = r28;
}

loc_80814E70:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 144);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 144));
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
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[7] = f7;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0003FF gpr_write=0xFF0008FB gpr_return=0x00000018 fpr_read=0xF00000FF fpr_write=0xF00000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80814958 func_80814958 preserves=false fpr_mask=0xF0000000
