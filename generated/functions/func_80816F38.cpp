#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80816F38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80816F38;

loc_80816F38:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 144);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r4 = 0x809C0000u;
    r5 = 1127219200;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r28 = 0x808B0000u;
    r29 = 0x808D0000u;
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    r28 = (r28 + -19392);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r5);
    r29 = (r29 + 25680);
}

loc_80816F80:
{
    r30 = 1;
    MemoryInline::FlatWriteRam32((r1 + 104), r5);
    r3 = 0;
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80816F9C;
    }
}

loc_80816F90:
{
}

loc_80816F94:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80816F9C;
    }
}

loc_80816F98:
{
    r3 = 1;
}

loc_80816F9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80816FA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816FC0;
    }
}

loc_80816FA4:
{
    r3 = 0x809C0000u;
    r4 = 1;
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

loc_80816FB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80816FC0;
    }
}

loc_80816FBC:
{
    r30 = 0;
}

loc_80816FC0:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r4 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80816FD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r30 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_3 = r0;
    r0 = (r0_subfc_min_3 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_3) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_3 = r3;
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_3);
    r3 = (r3 + r3_ca_3);
    // end of inlined leaf 0x80536230
}

loc_80816FEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081700C;
    }
}

loc_80816FF0:
{
    r3 = MemoryInline::FlatRead32((r30 + -10448));
    f1.d = MemoryInline::FlatReadFloat64((r28 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80817010;
}

loc_8081700C:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
}

loc_80817010:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 0x809C0000u;
    f31.d = MemoryInline::FlatReadFloat32(r28);
    r4 = 1;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r27 = fctiwzword0;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_4 = r0;
    r0 = (r0_subfc_min_4 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_4) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_4 = r3;
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_4);
    r3 = (r3 + r3_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80817034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808170C4;
    }
}

loc_80817038:
{
    r4 = MemoryInline::FlatRead16(r29);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r4));
}

loc_80817040:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80817048;
    }
}

loc_80817044:
{
    goto loc_808170C4;
}

loc_80817048:
{
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r4 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    r0 = (r0 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r28 + 8));
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 100), r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80817090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808170B0;
    }
}

loc_80817094:
{
    r0 = (r27 - r4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_808170C4;
}

loc_808170B0:
{
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_808170C4:
{
    f1.d = MemoryInline::FlatReadFloat32(r28);
    r3 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    r4 = (r31 + 48);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r4 = 0x802A0000u;
    r3 = (r1 + 48);
    r4 = (r4 + 16640);
    r5 = (r1 + 20);
    ctx->lr = 0x808170FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    r27 = MemoryInline::FlatRead32((r31 + 16));
    r30 = 0;
}

loc_80817104:
{
    r3 = MemoryInline::FlatRead32((r27 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80817110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80817120;
    }
}

loc_80817114:
{
    r5 = (r1 + 48);
    r4 = 0;
    ctx->lr = 0x80817120u;
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
    InvokeDirectCpu<0x8006DB90u>(ctx);
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
}

loc_80817120:
{
    r30 = (r30 + 1);
    r27 = (r27 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8081712C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80817104;
    }
}

loc_80817130:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f2.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
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
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r31 + 16));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8081717Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 144);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80816F38 func_80816F38 preserves=false fpr_mask=0x80000000
