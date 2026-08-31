#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078B7AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword12 = 0;
    uint32_t fctiwzword13 = 0;
    uint32_t fctiwzword14 = 0;
    uint32_t fctiwzword15 = 0;
    uint32_t fctiwzword16 = 0;
    uint32_t fctiwzword17 = 0;
    uint32_t fctiwzword18 = 0;
    uint32_t fctiwzword19 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword20 = 0;
    uint32_t fctiwzword21 = 0;
    uint32_t fctiwzword22 = 0;
    uint32_t fctiwzword23 = 0;
    uint32_t fctiwzword24 = 0;
    uint32_t fctiwzword25 = 0;
    uint32_t fctiwzword26 = 0;
    uint32_t fctiwzword27 = 0;
    uint32_t fctiwzword28 = 0;
    uint32_t fctiwzword29 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword30 = 0;
    uint32_t fctiwzword31 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8078B7AC;

loc_8078B7AC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0x808A0000u;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    r6 = (r6 + 19184);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 19072);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r5 + -10440));
    r5 = (r6 + 12);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x8078B800u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r5 = (r29 * 240);
    r0 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + 48));
    r5 = MemoryInline::FlatRead32((r4 + 52));
    r4 = (r0 * 1386);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & -32);
    r4 = (r3 + r4);
    r0 = (r0 + r5);
    r4 = (r4 + r0);
    r4 = (r4 + 268);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 33u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8078B834:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078B840;
    }
}

loc_8078B838:
{
    r3 = 0;
    goto loc_8078C944;
}

loc_8078B840:
{
    r0 = (r4 + 1);
    r5 = (r0 - r4);
    r0 = (r5 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078B860:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078B868;
    }
}

loc_8078B864:
{
    goto loc_8078B890;
}

loc_8078B868:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078B890:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 104u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 2);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 24), 0, 156u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r30 + 48), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078B8E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078B8F0;
    }
}

loc_8078B8EC:
{
    goto loc_8078B918;
}

loc_8078B8F0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078B918:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 3);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r30 + 52), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078B970:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078B978;
    }
}

loc_8078B974:
{
    goto loc_8078B9A0;
}

loc_8078B978:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078B9A0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 4);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r30 + 56), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078B9F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BA00;
    }
}

loc_8078B9FC:
{
    goto loc_8078BA28;
}

loc_8078BA00:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BA28:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 5);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r30 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BA80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BA88;
    }
}

loc_8078BA84:
{
    goto loc_8078BAB0;
}

loc_8078BA88:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BAB0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 6);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword4;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r30 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BB08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BB10;
    }
}

loc_8078BB0C:
{
    goto loc_8078BB38;
}

loc_8078BB10:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BB38:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 7);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword5;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r30 + 44), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BB90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BB98;
    }
}

loc_8078BB94:
{
    goto loc_8078BBC0;
}

loc_8078BB98:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BBC0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 8);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword6;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r30 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BC18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BC20;
    }
}

loc_8078BC1C:
{
    goto loc_8078BC48;
}

loc_8078BC20:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BC48:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 9);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword7;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r30 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BCA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BCA8;
    }
}

loc_8078BCA4:
{
    goto loc_8078BCD0;
}

loc_8078BCA8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BCD0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 10);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword8;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r30 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BD28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BD30;
    }
}

loc_8078BD2C:
{
    goto loc_8078BD58;
}

loc_8078BD30:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BD58:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 11);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword9;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r30 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BDB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BDB8;
    }
}

loc_8078BDB4:
{
    goto loc_8078BDE0;
}

loc_8078BDB8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BDE0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 12);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword10 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword10;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r30 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BE38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BE40;
    }
}

loc_8078BE3C:
{
    goto loc_8078BE68;
}

loc_8078BE40:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BE68:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 13);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword11 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword11;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r30 + 76), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BEC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BEC8;
    }
}

loc_8078BEC4:
{
    goto loc_8078BEF0;
}

loc_8078BEC8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r4 + 13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BEF0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 14);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword12 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword12;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r30 + 100), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BF48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BF50;
    }
}

loc_8078BF4C:
{
    goto loc_8078BF78;
}

loc_8078BF50:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078BF78:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 15);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword13 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword13;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r30 + 104), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078BFD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078BFD8;
    }
}

loc_8078BFD4:
{
    goto loc_8078C000;
}

loc_8078BFD8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r4 + 15));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C000:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 16);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword14 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword14;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r30 + 108), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C058:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C060;
    }
}

loc_8078C05C:
{
    goto loc_8078C088;
}

loc_8078C060:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r4 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C088:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 17);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword15 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword15;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r30 + 144), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C0E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C0E8;
    }
}

loc_8078C0E4:
{
    goto loc_8078C110;
}

loc_8078C0E8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r4 + 17));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C110:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 18);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword16 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword16;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r30 + 112), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C168:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C170;
    }
}

loc_8078C16C:
{
    goto loc_8078C198;
}

loc_8078C170:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r4 + 18));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C198:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 19);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword17 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword17;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r30 + 116), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C1F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C1F8;
    }
}

loc_8078C1F4:
{
    goto loc_8078C220;
}

loc_8078C1F8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r4 + 19));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C220:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 20);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword18 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword18;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 96u, (r30 + 120), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C278:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C280;
    }
}

loc_8078C27C:
{
    goto loc_8078C2A8;
}

loc_8078C280:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r4 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C2A8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 21);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword19 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword19;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 100u, (r30 + 124), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C300:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C308;
    }
}

loc_8078C304:
{
    goto loc_8078C330;
}

loc_8078C308:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r4 + 21));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C330:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 22);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword20 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword20;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r30 + 128), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C388:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C390;
    }
}

loc_8078C38C:
{
    goto loc_8078C3B8;
}

loc_8078C390:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r4 + 22));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C3B8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 23);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword21 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword21;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r30 + 132), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C410:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C418;
    }
}

loc_8078C414:
{
    goto loc_8078C440;
}

loc_8078C418:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r4 + 23));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C440:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 24);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword22 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword22;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r30 + 136), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C498:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C4A0;
    }
}

loc_8078C49C:
{
    goto loc_8078C4C8;
}

loc_8078C4A0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r4 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C4C8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 25);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword23 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword23;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r30 + 140), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C520:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C528;
    }
}

loc_8078C524:
{
    goto loc_8078C550;
}

loc_8078C528:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r4 + 25));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C550:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 26);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword24 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword24;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r30 + 148), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C5A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C5B0;
    }
}

loc_8078C5AC:
{
    goto loc_8078C5D8;
}

loc_8078C5B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r4 + 26));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C5D8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 27);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword25 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword25;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 128u, (r30 + 152), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C630:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C638;
    }
}

loc_8078C634:
{
    goto loc_8078C660;
}

loc_8078C638:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r4 + 27));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C660:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 28);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword26 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword26;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r30 + 156), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C6B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C6C0;
    }
}

loc_8078C6BC:
{
    goto loc_8078C6E8;
}

loc_8078C6C0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r4 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C6E8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 29);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword27 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword27;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r30 + 160), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C740:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C748;
    }
}

loc_8078C744:
{
    goto loc_8078C770;
}

loc_8078C748:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r4 + 29));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C770:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 30);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword28 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword28;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r30 + 164), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C7C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C7D0;
    }
}

loc_8078C7CC:
{
    goto loc_8078C7F8;
}

loc_8078C7D0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r4 + 30));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C7F8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 31);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r5 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword29 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword29;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r30 + 168), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C850:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C858;
    }
}

loc_8078C854:
{
    goto loc_8078C880;
}

loc_8078C858:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r4 + 31));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C880:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 32);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r3 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword30 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword30;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r30 + 172), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 140));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8078C8D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078C8E0;
    }
}

loc_8078C8DC:
{
    goto loc_8078C908;
}

loc_8078C8E0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 32u, (r4 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8078C908:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r3 = 1;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword31 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword31;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 152u, (r30 + 176), f0.d);
}

loc_8078C944:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8078B7AC func_8078B7AC preserves=true fpr_mask=0x00000000
