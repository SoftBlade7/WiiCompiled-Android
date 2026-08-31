#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D396C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_807D396C;

loc_807D396C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead32((r3 + 1196));
    r29 = 0x808A0000u;
    r30 = r3;
    r26 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D399C:
{
    r28 = r5;
    r29 = (r29 + 26416);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D3D38;
    }
}

loc_807D39A8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r27 = (r27_rot_1 & 1);
}

loc_807D39B8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807D39C4;
    }
}

loc_807D39BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807D39C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D3D38;
    }
}

loc_807D39C4:
{
    r3 = r30;
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    r4 = r3;
    r5 = r26;
    r3 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807DEB24u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 2856u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D39E8:
{
    r31 = cr;
}

loc_807D39F0:
{
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r31 = (r31_rot_1 & 1);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D3AE0;
    }
}

loc_807D39F8:
{
    r3 = r30;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2672u, (r29 + 2672));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807D3A14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3A20;
    }
}

loc_807D3A18:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2648u, (r29 + 2648));
    goto loc_807D3A34;
}

loc_807D3A20:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2648u, (r29 + 2648));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807D3A34:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2648u, (r29 + 2648));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_807D3A3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D3A44;
    }
}

loc_807D3A40:
{
    goto loc_807D3A58;
}

loc_807D3A44:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r29 + 2708));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_807D3A4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D3A54;
    }
}

loc_807D3A50:
{
    goto loc_807D3A58;
}

loc_807D3A54:
{
    f31.d = f0.d;
}

loc_807D3A58:
{
}

loc_807D3A5C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807D3A68;
    }
}

loc_807D3A60:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2832u, (r29 + 2832));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_807D3A68:
{
    r3 = r30;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r3 = 4;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807D3A80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D3A88;
    }
}

loc_807D3A84:
{
    r3 = 5;
}

loc_807D3A88:
{
    r4 = MemoryInline::FlatRead32((r30 + 1196));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_807D3A94:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_807D3AA0;
    }
}

loc_807D3A98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_807D3A9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3D38;
    }
}

loc_807D3AA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_807D3AA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D3AC4;
    }
}

loc_807D3AA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_807D3AAC:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D3ABC;
    }
}

loc_807D3AB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_807D3AB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3AC0;
    }
}

loc_807D3ABC:
{
    r0 = 1;
}

loc_807D3AC0:
{
    MemoryInline::FlatWrite8((r4 + 17), static_cast<uint8_t>(r0));
}

loc_807D3AC4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWriteFloat32((r4 + 12), f31.d);
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r31));
    goto loc_807D3D38;
}

loc_807D3AE0:
{
    f2.d = std::fabs(f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2836u, (r29 + 2836));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D3AF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D3BA8;
    }
}

loc_807D3AF8:
{
    r3 = r30;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2672u, (r29 + 2672));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807D3B14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3B1C;
    }
}

loc_807D3B18:
{
    goto loc_807D3B30;
}

loc_807D3B1C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2840u, (r29 + 2840));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_807D3B30:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2672u, (r29 + 2672));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_807D3B38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D3B40;
    }
}

loc_807D3B3C:
{
    goto loc_807D3B54;
}

loc_807D3B40:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2844u, (r29 + 2844));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_807D3B48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D3B50;
    }
}

loc_807D3B4C:
{
    goto loc_807D3B54;
}

loc_807D3B50:
{
    f1.d = f3.d;
}

loc_807D3B54:
{
}

loc_807D3B58:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807D3B64;
    }
}

loc_807D3B5C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2492u, (r29 + 2492));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_807D3B64:
{
    r5 = MemoryInline::FlatRead32((r30 + 1196));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_807D3B70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D3D38;
    }
}

loc_807D3B74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_807D3B78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D3B84;
    }
}

loc_807D3B7C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
}

loc_807D3B84:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r3 = 1;
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    MemoryInline::FlatWriteFloat32((r5 + 12), f1.d);
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r4));
    goto loc_807D3D38;
}

loc_807D3BA8:
{
    r3 = r30;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2848u, (r29 + 2848));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807D3BC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3BCC;
    }
}

loc_807D3BC8:
{
    goto loc_807D3BE0;
}

loc_807D3BCC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2852u, (r29 + 2852));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_807D3BE0:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2848u, (r29 + 2848));
    SetCRFloatResident(cr, 0, f3.d, f31.d);
}

loc_807D3BE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D3BF0;
    }
}

loc_807D3BEC:
{
    goto loc_807D3C04;
}

loc_807D3BF0:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r29 + 2708));
    SetCRFloatResident(cr, 0, f3.d, f31.d);
}

loc_807D3BF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D3C00;
    }
}

loc_807D3BFC:
{
    goto loc_807D3C04;
}

loc_807D3C00:
{
    f31.d = f3.d;
}

loc_807D3C04:
{
    r3 = r30;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    r28 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    r3 = r28;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_1));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f0.d));
    r5 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_1 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_1, f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807D3C54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r28_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 108);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 104);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2856));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 2708));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f2.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807D3C8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D3C94;
    }
}

loc_807D3C90:
{
    goto loc_807D3CA8;
}

loc_807D3C94:
{
    f4.d = MemoryInline::FlatReadFloat32((r29 + 4));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807D3C9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D3CA4;
    }
}

loc_807D3CA0:
{
    goto loc_807D3CA8;
}

loc_807D3CA4:
{
    f4.d = f0.d;
}

loc_807D3CA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_807D3CAC:
{
    f31.d = PpcFmulsInline(f31.d, f4.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D3CBC;
    }
}

loc_807D3CB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2832));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_807D3CBC:
{
    r3 = r30;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r4 = 2;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
}

loc_807D3CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D3CDC;
    }
}

loc_807D3CD8:
{
    r4 = 3;
}

loc_807D3CDC:
{
    r5 = MemoryInline::FlatRead32((r30 + 1196));
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_807D3CE8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_807D3CF4;
    }
}

loc_807D3CEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_807D3CF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3D38;
    }
}

loc_807D3CF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_807D3CF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D3D18;
    }
}

loc_807D3CFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_807D3D00:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D3D10;
    }
}

loc_807D3D08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_807D3D0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3D14;
    }
}

loc_807D3D10:
{
    r0 = 1;
}

loc_807D3D14:
{
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
}

loc_807D3D18:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r5 + 4), r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    MemoryInline::FlatWrite32(r5, r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteFloat32((r5 + 12), f31.d);
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r0));
}

loc_807D3D38:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 64));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00007F gpr_write=0xFC00083B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x80000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D396C func_807D396C preserves=false fpr_mask=0x80000000
