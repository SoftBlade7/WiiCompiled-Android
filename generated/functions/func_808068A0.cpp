#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808068A0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_808068A0;

loc_808068A0:
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
    r11 = (r1 + 128);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    f30.d = f1.d;
    r25 = r3;
    r30 = 0x808D0000u;
    r31 = 0x808B0000u;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r23 = r9;
    r30 = (r30 + 21176);
    r31 = (r31 + -20672);
    r3 = (r1 + 52);
    r5 = (r25 + 48);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 184));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80806918:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80806938;
    }
}

loc_8080691C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 176));
    f2.d = std::fabs(f2.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80806934:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80806940;
    }
}

loc_80806938:
{
    r3 = 0;
    goto loc_80806BEC;
}

loc_80806940:
{
    r3 = 0x809C0000u;
    r24 = 1127219200;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 64), r24);
    r4 = 2;
    r0 = MemoryInline::FlatRead32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat64((r31 + 56));
    r0 = (r23 + r0);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f28.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
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
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8080697C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80806A24;
    }
}

loc_80806980:
{
    f0.d = PPC_Fctiwz(f29.d);
    r5 = MemoryInline::FlatRead16((r30 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r0 = (r5 ^ -2147483648);
    f1.d = (-(f1.d));
    r4 = fctiwzword0;
    f0.d = MemoryInline::FlatReadFloat32((r25 + 184));
    r3 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 80), r24);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r3 = (r3 * r5);
    f1.d = PpcFmulsInline(f0.d, f7.d);
    MemoryInline::FlatWriteRam32((r1 + 72), r24);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f2.d));
    f6.d = MemoryInline::FlatReadFloat64((r31 + 64));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f7.d));
    r0 = (r4 - r3);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f5.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
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
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f28.d = PpcFmulsInline(f0.d, f1.d);
}

loc_80806A24:
{
    r3 = 0;
    r0 = 1;
    r24 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r26 & r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80806BE8;
    }
}

loc_80806A38:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    r3 = (r1 + 8);
    f31.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f31.d);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 184));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f5.d = (-(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f4.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 180));
    f7.d = std::fabs(f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f6.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f2.d));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f0.d = f31.d;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80806B04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80806B7C;
    }
}

loc_80806B08:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80806B10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80806B7C;
    }
}

loc_80806B14:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80806B1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80806B2C;
    }
}

loc_80806B20:
{
    f0.d = MemoryInline::FlatReadFloat64((r31 + 88));
    f29.d = (f0.d * f29.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d));
}

loc_80806B2C:
{
    f1.d = f29.d;
    r4 = 0x802A0000u;
    r3 = (r1 + 16);
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
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f31.d = f29.d;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    goto loc_80806B80;
}

loc_80806B7C:
{
    r0 = 0;
}

loc_80806B80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80806B84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80806BE8;
    }
}

loc_80806B88:
{
}

loc_80806B8C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80806BB0;
    }
}

loc_80806B90:
{
    r3 = r27;
    r4 = r27;
    r5 = (r1 + 40);
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
    r3 = (r27 + 12);
    r5 = (r1 + 40);
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

loc_80806BB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80806BB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80806BE4;
    }
}

loc_80806BB8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d));
    r3 = r28;
    r4 = r24;
    r5 = 0;
    // inline leaf 0x807BDA9C (19 guest instruction(s))
}

loc_inl6_0x807BDA9C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r6 = 0x809C0000u;
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r3, r0);
    r7 = MemoryInline::FlatRead32((r6 + 15320));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(64));
}

loc_inl6_0x807BDAB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl6_0x807BDABC;
    }
}

loc_inl6_0x807BDAB8:
{
    r7 = 63;
}

loc_inl6_0x807BDABC:
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

loc_inl6_cont_807BDA9C:
{
    // end of inlined leaf 0x807BDA9C
    r3 = r28;
    r4 = 4;
    // inline leaf 0x807BDB5C (13 guest instruction(s))
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 15320));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & 65504);
    r3 = (r3 + 14552);
    r4 = (r5 + -1);
    r4 = (r4 * 12);
    r4 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r3 & -225);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x807BDB5C
    r3 = r28;
    r4 = 0;
    // inline leaf 0x807BDBC4 (13 guest instruction(s))
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 15320));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r0 = (r0_rot_4 & 57344);
    r3 = (r3 + 14552);
    r4 = (r5 + -1);
    r4 = (r4 * 12);
    r4 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r3 & -8193);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x807BDBC4
}

loc_80806BE4:
{
    r29 = 1;
}

loc_80806BE8:
{
    r3 = r29;
}

loc_80806BEC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 128));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFF8003FF gpr_write=0xFF8008FB gpr_return=0x00000018 fpr_read=0xF00000FF fpr_write=0xF00000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808068A0 func_808068A0 preserves=false fpr_mask=0xF0000000
