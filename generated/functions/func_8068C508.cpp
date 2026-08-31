#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8068C508(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
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

    goto loc_8068C508;

loc_8068C508:
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
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + -11112);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 44u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 12u, (r31 + 48));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 252));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f3.d = std::fabs(f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 56));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8068C5B8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8068C5C8;
    }
}

loc_8068C5C0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 260), static_cast<uint16_t>(r0));
}

loc_8068C5C8:
{
    r0 = MemoryInline::FlatRead16((r3 + 262));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 256));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = std::fabs(f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 56));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 12u, (r31 + 48));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8068C5F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8068C604;
    }
}

loc_8068C5FC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 262), static_cast<uint16_t>(r0));
}

loc_8068C604:
{
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 56));
    r29 = 0;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 68));
    r30 = 0;
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 12u, (r31 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            f26.d = PpcBitCastToFloatInline(resolved_pair.first);
            f27.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f26.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 60));
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 64));
        }
    }
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 36));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 36u, (r31 + 72));
    goto loc_8068C940;
}

loc_8068C62C:
{
    r5 = MemoryInline::FlatRead32((r28 + 216));
    r0 = MemoryInline::FlatRead32((r28 + 240));
    r9 = (r5 + 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r6 = PPC_Divw(static_cast<int32_t>(r29), static_cast<int32_t>(r9));
    r8 = MemoryInline::FlatRead32((r28 + 224));
    r7 = (r3 + r5);
    r4 = MemoryInline::FlatRead32((r28 + 220));
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 208));
    r5 = (r6 * r9);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r7 = (static_cast<int32_t>(r7) >> 1);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 212));
    r3 = (r3 + r4);
    r4 = MemoryInline::FlatRead32((r28 + 228));
    r5 = (r29 - r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 1);
    r5 = (r5 - r7);
    r5 = (r8 * r5);
    r3 = (r6 - r3);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r3 = (r4 * r3);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r3 ^ -2147483648);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f25.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f1.d = PpcFmulsInline(f27.d, f0.d);
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
    r0 = MemoryInline::FlatRead16((r28 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 264));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f5.d = MemoryInline::FlatReadFloat32((r28 + 268));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f22.d / f0.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 252));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f25.d));
    f4.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f24.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = PpcFmulsInline(f27.d, f0.d);
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
    r3 = MemoryInline::FlatRead32((r28 + 196));
    f4.d = MemoryInline::FlatReadFloat32((r28 + 268));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = MemoryInline::FlatRead16((r28 + 262));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 256));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = PpcFmulsInline(f2.d, f28.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f23.d = PpcFmulsInline(f4.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f3.d));
    f2.d = PpcFmulsInline(f28.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f22.d / f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f1.d = PpcFmulsInline(f27.d, f0.d);
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
    r4 = MemoryInline::FlatRead8((r28 + 276));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = MemoryInline::FlatRead16((r28 + 262));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 268));
    r3 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 256));
    f5.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = PpcFmulsInline(f3.d, f28.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f25.d));
    f0.d = PpcFmulsInline(f5.d, f5.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_8068C7B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068C87C;
    }
}

loc_8068C7BC:
{
    r0 = MemoryInline::FlatRead32((r28 + 196));
    f6.d = PpcFmulsInline(f30.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f25.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f6.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f22.d, f1.d);
}

loc_8068C7FC:
{
    r5 = cr;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = PpcFmulsInline(f4.d, f31.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f6.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    SetCRFloatResident(cr, 0, f22.d, f1.d);
}

loc_8068C85C:
{
    r0 = cr;
}

loc_8068C864:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8068C874;
    }
}

loc_8068C86C:
{
}

loc_8068C870:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8068C910;
    }
}

loc_8068C874:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_8068C910;
}

loc_8068C87C:
{
    r0 = MemoryInline::FlatRead32((r28 + 196));
    f5.d = PpcFmulsInline(f30.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f25.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f22.d, f1.d);
}

loc_8068C8BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8068C910;
    }
}

loc_8068C8C0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = PpcFmulsInline(f4.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f25.d));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f22.d, f1.d);
}

loc_8068C908:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068C910;
    }
}

loc_8068C90C:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
}

loc_8068C910:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 200));
    r29 = (r29 + 1);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 272));
    f2.d = PpcFmulsInline(f2.d, f24.d);
    r0 = MemoryInline::FlatRead32((r28 + 172));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    r3 = (r0 + r30);
    r30 = (r30 + 12);
    f1.d = PpcFmulsInline(f23.d, f2.d);
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_8068C940:
{
    r0 = MemoryInline::FlatRead32((r28 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8068C948:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8068C62C;
    }
}

loc_8068C94C:
{
    r4 = MemoryInline::FlatRead16((r28 + 260));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r28 + 262));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r28 + 260), static_cast<uint16_t>(r0));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r28 + 262), static_cast<uint16_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 184u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 160u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 144u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 128u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 112u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 80u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 36));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 32));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 180u, (r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

// RECOMP_GUEST_ABI gpr_read=0xF00003FF gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0xFFC0007F fpr_write=0xFFC0007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8068C508 func_8068C508 preserves=false fpr_mask=0x01C00000
