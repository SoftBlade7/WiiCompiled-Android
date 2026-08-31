#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80809774(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80809774;

loc_80809774:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r6 = 1127219200;
    r4 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -20376);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r29);
    }
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 288u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 284u, (r3 + 292));
    r30 = MemoryInline::FlatRead32((r4 + 32));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 272u, (r3 + 280));
    r4 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r6);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r6);
    r4 = (r4 * r5);
    r7 = (r30 - r4);
}

loc_808097D8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_808097E4;
    }
}

loc_808097DC:
{
    r5 = 0;
    goto loc_80809814;
}

loc_808097E4:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 276u, (r3 + 284));
    r4 = (r0 + r6);
}

loc_808097F0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_808097FC;
    }
}

loc_808097F4:
{
    r5 = 1;
    goto loc_80809814;
}

loc_808097FC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r5 = 3;
    r4 = (r4 + r6);
}

loc_8080980C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_80809814;
    }
}

loc_80809810:
{
    r5 = 2;
}

loc_80809814:
{
}

loc_80809818:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80809838;
    }
}

loc_8080981C:
{
}

loc_80809820:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8080986C;
    }
}

loc_80809824:
{
}

loc_80809828:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80809874;
    }
}

loc_8080982C:
{
}

loc_80809830:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_80809964;
    }
}

loc_80809834:
{
    goto loc_80809A58;
}

loc_80809838:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 264u, (r3 + 272));
    r4 = 1;
}

loc_80809844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8080984C;
    }
}

loc_80809848:
{
    r4 = -1;
}

loc_8080984C:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 268u, (r3 + 276));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80809A5C;
}

loc_8080986C:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80809A5C;
}

loc_80809874:
{
}

loc_80809878:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_80809894;
    }
}

loc_8080987C:
{
    r4 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080990C;
}

loc_80809894:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 276u, (r3 + 284));
    r8 = (r0 + r6);
}

loc_808098A0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_808098C0;
    }
}

loc_808098A4:
{
    r4 = (r7 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080990C;
}

loc_808098C0:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r4 = (r5 + r6);
}

loc_808098CC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_808098EC;
    }
}

loc_808098D0:
{
    r4 = (r7 - r8);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080990C;
}

loc_808098EC:
{
    r4 = (0 - r5);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r4 = (r4 - r6);
    r4 = (r4 + r7);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8080990C:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 264u, (r3 + 272));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80809920:
{
    r4 = MemoryInline::FlatRead32((r1 + 52));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080992C;
    }
}

loc_80809928:
{
    r5 = -1;
}

loc_8080992C:
{
    r4 = (r4 * r5);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 268u, (r3 + 276));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_80809A5C;
}

loc_80809964:
{
}

loc_80809968:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_80809984;
    }
}

loc_8080996C:
{
    r4 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_808099FC;
}

loc_80809984:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 276u, (r3 + 284));
    r8 = (r0 + r6);
}

loc_80809990:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_808099B0;
    }
}

loc_80809994:
{
    r4 = (r7 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_808099FC;
}

loc_808099B0:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r5 + r6);
}

loc_808099BC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_808099DC;
    }
}

loc_808099C0:
{
    r4 = (r7 - r8);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_808099FC;
}

loc_808099DC:
{
    r4 = (0 - r5);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r4 = (r4 - r6);
    r4 = (r4 + r7);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_808099FC:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 264u, (r3 + 272));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80809A10:
{
    r4 = MemoryInline::FlatRead32((r1 + 52));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809A1C;
    }
}

loc_80809A18:
{
    r5 = -1;
}

loc_80809A1C:
{
    r4 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    r4 = (r5 * r4);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 268u, (r3 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_80809A5C;
}

loc_80809A58:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
}

loc_80809A5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80809A64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80809A70;
    }
}

loc_80809A68:
{
    f31.d = f0.d;
    goto loc_80809A80;
}

loc_80809A70:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80809A78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80809A80;
    }
}

loc_80809A7C:
{
    f31.d = f0.d;
}

loc_80809A80:
{
    f2.d = std::fabs(f31.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80809A9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80809AA8;
    }
}

loc_80809AA0:
{
    f30.d = f0.d;
    goto loc_80809AB4;
}

loc_80809AA8:
{
    SetCRFloatResident(cr, 0, f30.d, f3.d);
}

loc_80809AAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80809AB4;
    }
}

loc_80809AB0:
{
    f30.d = f3.d;
}

loc_80809AB4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f30.d;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80809AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    f1.d = std::fabs(f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80809AE8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80809AFC;
    }
}

loc_80809AF0:
{
    r0 = MemoryInline::FlatRead32((r29 + 356));
    MemoryInline::FlatWrite32((r29 + 172), r0);
    goto loc_80809B24;
}

loc_80809AFC:
{
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23260));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80809B08:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80809B1C;
    }
}

loc_80809B10:
{
    r0 = MemoryInline::FlatRead32((r29 + 352));
    MemoryInline::FlatWrite32((r29 + 172), r0);
    goto loc_80809B24;
}

loc_80809B1C:
{
    r0 = MemoryInline::FlatRead32((r29 + 348));
    MemoryInline::FlatWrite32((r29 + 172), r0);
}

loc_80809B24:
{
    r0 = MemoryInline::FlatRead8((r29 + 84));
    r3 = MemoryInline::FlatRead16((r29 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80809B30:
{
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80809BF4;
    }
}

loc_80809B3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809B48;
    }
}

loc_80809B40:
{
    r3 = (r29 + 72);
    goto loc_80809B78;
}

loc_80809B48:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r29 + 88);
    ctx->lr = 0x80809B5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r29 + 72);
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r29 + 80), f0.d);
}

loc_80809B78:
{
    r0 = MemoryInline::FlatRead8((r29 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80809B84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809B90;
    }
}

loc_80809B88:
{
    r4 = (r29 + 72);
    goto loc_80809BC0;
}

loc_80809B90:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r29 + 88);
    ctx->lr = 0x80809BA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = (r29 + 72);
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r29 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r29 + 80), f0.d);
}

loc_80809BC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r29 + 44));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r29 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 80), f0.d);
}

loc_80809BF4:
{
    r3 = MemoryInline::FlatRead32((r29 + 292));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    r0 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r3));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    r4 = MemoryInline::FlatRead32((r29 + 280));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r0 = (r0 * r3);
    MemoryInline::FlatWriteFloat32((r29 + 80), f0.d);
    r3 = (r30 - r0);
}

loc_80809C20:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_80809C2C;
    }
}

loc_80809C24:
{
    r30 = 0;
    goto loc_80809C5C;
}

loc_80809C2C:
{
    r5 = MemoryInline::FlatRead32((r29 + 284));
    r0 = (r4 + r5);
}

loc_80809C38:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80809C44;
    }
}

loc_80809C3C:
{
    r30 = 1;
    goto loc_80809C5C;
}

loc_80809C44:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r30 = 3;
    r0 = (r0 + r5);
}

loc_80809C54:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80809C5C;
    }
}

loc_80809C58:
{
    r30 = 2;
}

loc_80809C5C:
{
    r0 = MemoryInline::FlatRead32((r29 + 296));
}

loc_80809C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r30))) {
        goto loc_80809C8C;
    }
}

loc_80809C68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_80809C6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809C78;
    }
}

loc_80809C70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(3));
}

loc_80809C74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80809C88;
    }
}

loc_80809C78:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r29;
    r4 = 901;
    ctx->lr = 0x80809C88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808204FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80809C88:
{
    MemoryInline::FlatWrite32((r29 + 296), r30);
}

loc_80809C8C:
{
    r0 = MemoryInline::FlatRead32((r29 + 296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80809C94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809CA0;
    }
}

loc_80809C98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80809C9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80809CB0;
    }
}

loc_80809CA0:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r29;
    r4 = 900;
    ctx->lr = 0x80809CB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8082051Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80809CB0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80809774 func_80809774 preserves=false fpr_mask=0xC0000000
