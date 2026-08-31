#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A7090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A7090;

loc_800A7090:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 192u, (r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 176u, (r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 160u, (r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 144u, (r1 + 144), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 112);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead8(r4);
    r31 = r3;
    r25 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A70EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A73B8;
    }
}

loc_800A70F0:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -28080), 0, 36u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -28056));
    MemoryInline::FlatWriteRam32((r1 + 72), r5);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -28064));
    f30.d = f31.d;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -28052));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r6 = MemoryInline::FlatRead8((r4 + 9));
    f31.d = PpcFmulsInline(f31.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
}

loc_800A7134:
{
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28080));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f31.d = PpcFmulsInline(f31.d, f1.d);
    f30.d = PpcFmulsInline(f30.d, f2.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f4.d));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800A717C;
    }
}

loc_800A7150:
{
    r0 = (r6 + -63);
    MemoryInline::FlatWriteRam32((r1 + 72), r5);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -28072));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -28048));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    goto loc_800A71A4;
}

loc_800A717C:
{
    r0 = (r6 + -64);
    MemoryInline::FlatWriteRam32((r1 + 72), r5);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -28072));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -28048));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
}

loc_800A71A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    r27 = (r1 + 56);
    f27.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28080));
    r28 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28080));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f1.d));
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -28056));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f28.d = f25.d;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f1.d));
    r26 = MemoryInline::FlatRead32((r3 + 24));
}

loc_800A71E0:
{
    MemoryInline::FlatWriteFloat32(r27, f28.d);
    r3 = r31;
    r4 = r28;
    // inline leaf 0x8008E050 (4 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x8008E050
    f0.d = MemoryInline::FlatReadFloat32(r27);
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_800A71FC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A71E0;
    }
}

loc_800A720C:
{
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28080));
    r27 = (r1 + 40);
    r28 = (r1 + 24);
    r29 = (r1 + 8);
    r30 = 0;
}

loc_800A7220:
{
    r3 = r31;
    r4 = r30;
    // inline leaf 0x8008E070 (4 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    // end of inlined leaf 0x8008E070
    MemoryInline::FlatWriteFloat32(r27, f1.d);
    r3 = r31;
    r4 = r30;
    MemoryInline::FlatWriteFloat32(r28, f28.d);
    // inline leaf 0x8008E080 (4 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    // end of inlined leaf 0x8008E080
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r3 = r31;
    MemoryInline::FlatWriteFloat32(r29, f28.d);
    r4 = r30;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    // inline leaf 0x8008E090 (4 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 92));
    // end of inlined leaf 0x8008E090
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_800A7268:
{
    r27 = (r27 + 4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r28 = (r28 + 4);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r29 = (r29 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A7220;
    }
}

loc_800A7280:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r25 = MemoryInline::FlatRead32((r25 + 4));
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_800A7290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A73B0;
    }
}

loc_800A7294:
{
    f1.d = f31.d;
    r3 = r25;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AA860u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = f30.d;
    r3 = r25;
    // inline leaf 0x800AA960 (8 guest instruction(s))
}

loc_inl5_0x800AA960:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 252));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl5_0x800AA968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x800AA96C:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 252), f1.d);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl5_cont_800AA960;
}

loc_inl5_return:
{
}

loc_inl5_cont_800AA960:
{
    // end of inlined leaf 0x800AA960
    f1.d = f29.d;
    r3 = r25;
    // inline leaf 0x800AA9C0 (8 guest instruction(s))
}

loc_inl6_0x800AA9C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl6_0x800AA9C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x800AA9CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl6_cont_800AA9C0;
}

loc_inl6_return:
{
}

loc_inl6_cont_800AA9C0:
{
    // end of inlined leaf 0x800AA9C0
    f1.d = f27.d;
    r3 = r25;
    // inline leaf 0x800AA9E0 (8 guest instruction(s))
}

loc_inl7_0x800AA9E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 172));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl7_0x800AA9E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x800AA9EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 172), f1.d);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl7_cont_800AA9E0;
}

loc_inl7_return:
{
}

loc_inl7_cont_800AA9E0:
{
    // end of inlined leaf 0x800AA9E0
    f1.d = f26.d;
    r3 = r25;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAA00u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r25;
    r4 = r26;
    // inline leaf 0x800AAA50 (14 guest instruction(s))
}

loc_inl8_0x800AAA50:
{
}

loc_inl8_0x800AAA54:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(127))) {
        goto loc_inl8_0x800AAA60;
    }
}

loc_inl8_0x800AAA58:
{
    r4 = 127;
    goto loc_inl8_0x800AAA68;
}

loc_inl8_0x800AAA60:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 31);
    r4 = (r4 & ~r0);
}

loc_inl8_0x800AAA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 163));
}

loc_inl8_0x800AAA70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x800AAA74:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWrite8((r3 + 163), static_cast<uint8_t>(r4));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl8_cont_800AAA50;
}

loc_inl8_return:
{
}

loc_inl8_cont_800AAA50:
{
    // end of inlined leaf 0x800AAA50
    r4 = MemoryInline::FlatRead32((r31 + 28));
    r3 = r25;
    // inline leaf 0x800AAA90 (8 guest instruction(s))
}

loc_inl9_0x800AAA90:
{
    r0 = MemoryInline::FlatRead32((r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl9_0x800AAA98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x800AAA9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWrite32((r3 + 180), r4);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl9_cont_800AAA90;
}

loc_inl9_return:
{
}

loc_inl9_cont_800AAA90:
{
    // end of inlined leaf 0x800AAA90
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    r3 = r25;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAAB0u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = f25.d;
    r3 = r25;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAB00u>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r27 = (r1 + 56);
    r26 = 0;
}

loc_800A7308:
{
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = r25;
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAB50u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r26 = (r26 + 1);
    r27 = (r27 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(3));
}

loc_800A7324:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A7308;
    }
}

loc_800A7328:
{
    r29 = (r1 + 40);
    r28 = (r1 + 24);
    r27 = (r1 + 8);
    r26 = 0;
}

loc_800A7338:
{
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r3 = r25;
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AABA0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r28);
    r3 = r25;
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AABF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = r25;
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AAC40u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r26 = (r26 + 1);
    r28 = (r28 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_800A7374:
{
    r27 = (r27 + 4);
    r29 = (r29 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A7338;
    }
}

loc_800A7380:
{
    r29 = (r31 + 108);
    r26 = 0;
    goto loc_800A73A4;
}

loc_800A738C:
{
    r3 = r25;
    r4 = r26;
    r5 = r29;
    // inline leaf 0x800AAC90 (18 guest instruction(s))
    r0 = (r4 * 24);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r4 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    MemoryInline::FlatWriteFloat32((r4 + 52), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 64), f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 162));
    r0 = (r0 | 60);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800AAC90
    r29 = (r29 + 24);
    r26 = (r26 + 1);
}

loc_800A73A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 2096));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_800A73AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A738C;
    }
}

loc_800A73B0:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800A73B8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 84), 0, 148u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 124u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 108u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 92u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 76u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 60u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 44u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 112));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 144u, (r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFE00007F gpr_write=0xFE00087B gpr_return=0x00000018 fpr_read=0xFE00001F fpr_write=0xFE00001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A7090 func_800A7090 preserves=false fpr_mask=0xFE000000
