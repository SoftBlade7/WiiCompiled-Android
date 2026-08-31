#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80815D64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_4 = 0;
    uint32_t r25_psq_tmp_5 = 0;
    uint32_t r25_psq_tmp_6 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_10 = 0;
    uint32_t r26_psq_tmp_11 = 0;
    uint32_t r26_psq_tmp_12 = 0;
    uint32_t r26_psq_tmp_13 = 0;
    uint32_t r26_psq_tmp_14 = 0;
    uint32_t r26_psq_tmp_15 = 0;
    uint32_t r26_psq_tmp_16 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r26_psq_tmp_6 = 0;
    uint32_t r26_psq_tmp_7 = 0;
    uint32_t r26_psq_tmp_8 = 0;
    uint32_t r26_psq_tmp_9 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_7 = 0;
    uint32_t r28_psq_tmp_8 = 0;
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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80815D64;

loc_80815D64:
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
    r23 = r9;
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

loc_80815DE8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80815E08;
    }
}

loc_80815DEC:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 180));
    f2.d = std::fabs(f2.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80815E04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80815E10;
    }
}

loc_80815E08:
{
    r3 = 0;
    goto loc_80816698;
}

loc_80815E10:
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

loc_80815E24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80815E34;
    }
}

loc_80815E28:
{
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    goto loc_80815E38;
}

loc_80815E34:
{
    r0 = MemoryInline::FlatRead32((r24 + 172));
}

loc_80815E38:
{
    r0 = (r23 + r0);
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

loc_80815E68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80815F08;
    }
}

loc_80815E6C:
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

loc_80815F08:
{
    r3 = 12;
    r0 = 1;
    r29 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r25 & r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808163A4;
    }
}

loc_80815F1C:
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
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 92u, true, false);
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

loc_80815F90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80815FC0;
    }
}

loc_80815F94:
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
    goto loc_80816010;
}

loc_80815FC0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f0.d));
    SetCRFloatResident(cr, 0, f5.d, f1.d);
}

loc_80815FD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8081600C;
    }
}

loc_80815FD8:
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
    goto loc_80816010;
}

loc_8081600C:
{
    r0 = 0;
}

loc_80816010:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80816014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816188;
    }
}

loc_80816018:
{
}

loc_8081601C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80816164;
    }
}

loc_80816020:
{
    f28.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r5 = 12;
    r0 = 1;
    r3 = r26;
    r23 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = r26;
    r28 = (r1 + 40);
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
    r3 = 552075264;
    r0 = (r3 + 4095);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808160A4;
    }
}

loc_80816064:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 72));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_8081606C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8081607C;
    }
}

loc_80816070:
{
    MemoryInline::FlatWriteFloat32((r26 + 72), f28.d);
    r0 = 1;
    goto loc_80816080;
}

loc_8081607C:
{
    r0 = 0;
}

loc_80816080:
{
}

loc_80816084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816164;
    }
}

loc_80816088:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r26 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r26 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r26 + 44), f0.d);
    goto loc_80816164;
}

loc_808160A4:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816164;
    }
}

loc_808160B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 76));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r31 + 88));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808160C0:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1);
}

loc_808160C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816128;
    }
}

loc_808160CC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 52);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r28_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_2 = (r26 + 48);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_2));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r28));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 84));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f2.d, f3.d, f4.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808160F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80816108;
    }
}

loc_808160FC:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f1.d);
    r0 = 1;
    goto loc_8081610C;
}

loc_80816108:
{
    r0 = 0;
}

loc_8081610C:
{
}

loc_80816110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80816128;
    }
}

loc_80816114:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 84));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80816120:
{
    if (((cr & 0x40000000u) == 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80816128;
    }
}

loc_80816124:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
}

loc_80816128:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 76));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80816130:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80816140;
    }
}

loc_80816134:
{
    MemoryInline::FlatWriteFloat32((r26 + 76), f28.d);
    r0 = 1;
    goto loc_80816144;
}

loc_80816140:
{
    r0 = 0;
}

loc_80816144:
{
}

loc_80816148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816164;
    }
}

loc_8081614C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r26 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r26 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r26 + 56), f0.d);
}

loc_80816164:
{
}

loc_80816168:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80816180;
    }
}

loc_8081616C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = r27;
    r4 = r29;
    r5 = 12;
    // inline leaf 0x807BDA9C (19 guest instruction(s))
}

loc_inl6_0x807BDA9C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r6 = 0x809C0000u;
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r3, r0);
    r7 = MemoryInline::FlatRead32((r6 + 15320));
}

loc_inl6_0x807BDAB4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(64))) {
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
}

loc_80816180:
{
    r28 = 1;
    goto loc_808163A4;
}

loc_80816188:
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
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
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
    ctx->lr = 0x80816230u;
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

loc_80816234:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808163A4;
    }
}

loc_80816238:
{
}

loc_8081623C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80816384;
    }
}

loc_80816240:
{
    f28.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r5 = 12;
    r0 = 1;
    r3 = r26;
    r23 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = r26;
    r28 = (r1 + 40);
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
    r3 = 552075264;
    r0 = (r3 + 4095);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808162C4;
    }
}

loc_80816284:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 72));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_8081628C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8081629C;
    }
}

loc_80816290:
{
    MemoryInline::FlatWriteFloat32((r26 + 72), f28.d);
    r0 = 1;
    goto loc_808162A0;
}

loc_8081629C:
{
    r0 = 0;
}

loc_808162A0:
{
}

loc_808162A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816384;
    }
}

loc_808162A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r26 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r26 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r26 + 44), f0.d);
    goto loc_80816384;
}

loc_808162C4:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816384;
    }
}

loc_808162D4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808162E0:
{
    r0 = cr;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1);
}

loc_808162E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816348;
    }
}

loc_808162EC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_5 = (r26 + 52);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_4 = (r28 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r28_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_6 = (r26 + 48);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_6));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r28));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 84));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f2.d, f3.d, f4.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80816318:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80816328;
    }
}

loc_8081631C:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f1.d);
    r0 = 1;
    goto loc_8081632C;
}

loc_80816328:
{
    r0 = 0;
}

loc_8081632C:
{
}

loc_80816330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80816348;
    }
}

loc_80816334:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80816340:
{
    if (((cr & 0x40000000u) == 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80816348;
    }
}

loc_80816344:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
}

loc_80816348:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 76));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80816350:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80816360;
    }
}

loc_80816354:
{
    MemoryInline::FlatWriteFloat32((r26 + 76), f28.d);
    r0 = 1;
    goto loc_80816364;
}

loc_80816360:
{
    r0 = 0;
}

loc_80816364:
{
}

loc_80816368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816384;
    }
}

loc_8081636C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r26 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r26 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r26 + 56), f0.d);
}

loc_80816384:
{
}

loc_80816388:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_808163A0;
    }
}

loc_8081638C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = r27;
    r4 = r29;
    r5 = 12;
    // inline leaf 0x807BDA9C (19 guest instruction(s))
}

loc_inl9_0x807BDA9C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r6 = 0x809C0000u;
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r3, r0);
    r7 = MemoryInline::FlatRead32((r6 + 15320));
}

loc_inl9_0x807BDAB4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(64))) {
        goto loc_inl9_0x807BDABC;
    }
}

loc_inl9_0x807BDAB8:
{
    r7 = 63;
}

loc_inl9_0x807BDABC:
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

loc_inl9_cont_807BDA9C:
{
    // end of inlined leaf 0x807BDA9C
}

loc_808163A0:
{
    r28 = 1;
}

loc_808163A4:
{
    r0 = 0;
    r4 = 1;
    r29 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r25 & r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816694;
    }
}

loc_808163B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_808163BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816404;
    }
}

loc_808163C0:
{
    r5 = MemoryInline::FlatRead32((r26 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_808163C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816404;
    }
}

loc_808163CC:
{
    r0 = MemoryInline::FlatRead32(r5);
    r3 = 0;
    r6 = (r0 & 256);
}

loc_808163D8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_808163EC;
    }
}

loc_808163DC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808163E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r24))) {
        goto loc_808163EC;
    }
}

loc_808163E8:
{
    r3 = r4;
}

loc_808163EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808163F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808163FC;
    }
}

loc_808163F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_808163F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816404;
    }
}

loc_808163FC:
{
    r3 = 0;
    goto loc_80816698;
}

loc_80816404:
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

loc_8081647C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808164D0;
    }
}

loc_80816480:
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
    goto loc_808164D4;
}

loc_808164D0:
{
    r0 = 0;
}

loc_808164D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808164D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816694;
    }
}

loc_808164DC:
{
}

loc_808164E0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80816640;
    }
}

loc_808164E4:
{
    f28.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r5 = 0;
    r0 = 1;
    r3 = r26;
    r23 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = r26;
    r25 = (r1 + 40);
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
    r3 = 552075264;
    r0 = (r3 + 4095);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816568;
    }
}

loc_80816528:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 72));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80816530:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80816540;
    }
}

loc_80816534:
{
    MemoryInline::FlatWriteFloat32((r26 + 72), f28.d);
    r0 = 1;
    goto loc_80816544;
}

loc_80816540:
{
    r0 = 0;
}

loc_80816544:
{
}

loc_80816548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816628;
    }
}

loc_8081654C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r26 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r26 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r26 + 44), f0.d);
    goto loc_80816628;
}

loc_80816568:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816628;
    }
}

loc_80816578:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80816584:
{
    r0 = cr;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & 1);
}

loc_8081658C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808165EC;
    }
}

loc_80816590:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_10 = (r26 + 52);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_10));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_1 = (r25 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r25_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_11 = (r26 + 48);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_11));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r25));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 84));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f2.d, f3.d, f4.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808165BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808165CC;
    }
}

loc_808165C0:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f1.d);
    r0 = 1;
    goto loc_808165D0;
}

loc_808165CC:
{
    r0 = 0;
}

loc_808165D0:
{
}

loc_808165D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808165EC;
    }
}

loc_808165D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808165E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808165EC;
    }
}

loc_808165E8:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f0.d);
}

loc_808165EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 76));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_808165F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80816604;
    }
}

loc_808165F8:
{
    MemoryInline::FlatWriteFloat32((r26 + 76), f28.d);
    r0 = 1;
    goto loc_80816608;
}

loc_80816604:
{
    r0 = 0;
}

loc_80816608:
{
}

loc_8081660C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80816628;
    }
}

loc_80816610:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r26 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r26 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r26 + 56), f0.d);
}

loc_80816628:
{
    r3 = MemoryInline::FlatRead32((r26 + 88));
}

loc_80816630:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80816640;
    }
}

loc_80816634:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r4 = r24;
    // inline leaf 0x807BD7D8 (14 guest instruction(s))
}

loc_inl13_0x807BD7D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl13_0x807BD7E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl13_0x807BD7F0;
    }
}

loc_inl13_0x807BD7E4:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    r0 = 1;
    goto loc_inl13_0x807BD7F4;
}

loc_inl13_0x807BD7F0:
{
    r0 = 0;
}

loc_inl13_0x807BD7F4:
{
}

loc_inl13_0x807BD7F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x807BD7FC:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_inl13_cont_807BD7D8;
}

loc_inl13_return:
{
}

loc_inl13_cont_807BD7D8:
{
    // end of inlined leaf 0x807BD7D8
}

loc_80816640:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80816644:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816690;
    }
}

loc_80816648:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = r27;
    r4 = r29;
    r5 = 0;
    // inline leaf 0x807BDA9C (19 guest instruction(s))
}

loc_inl14_0x807BDA9C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r6 = 0x809C0000u;
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r3, r0);
    r7 = MemoryInline::FlatRead32((r6 + 15320));
}

loc_inl14_0x807BDAB4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(64))) {
        goto loc_inl14_0x807BDABC;
    }
}

loc_inl14_0x807BDAB8:
{
    r7 = 63;
}

loc_inl14_0x807BDABC:
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

loc_inl14_cont_807BDA9C:
{
    // end of inlined leaf 0x807BDA9C
    r3 = r27;
    r4 = 2;
    // inline leaf 0x807BDB5C (13 guest instruction(s))
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 15320));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_12 & 65504);
    r3 = (r3 + 14552);
    r4 = (r5 + -1);
    r4 = (r4 * 12);
    r4 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r3 & -225);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x807BDB5C
    f1.d = MemoryInline::FlatReadFloat32((r24 + 188));
    f0.d = MemoryInline::FlatReadFloat64((r31 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = (f0.d * f1.d);
    f1.d = std::fabs(f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80816680:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80816690;
    }
}

loc_80816684:
{
    r3 = r27;
    r4 = 1;
    // inline leaf 0x807BDBC4 (13 guest instruction(s))
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 15320));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r0 = (r0_rot_13 & 57344);
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

loc_80816690:
{
    r28 = 1;
}

loc_80816694:
{
    r3 = r28;
}

loc_80816698:
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
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
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

// RECOMP_GUEST_ABI gpr_read=0xFF8003FF gpr_write=0xFF8008FB gpr_return=0x00000018 fpr_read=0xF00000FF fpr_write=0xF00000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80815D64 func_80815D64 preserves=false fpr_mask=0xF0000000
