#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078C3E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_8078C3E0;

loc_8078C3E0:
{
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 132), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r30 + 132), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 23));
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

loc_8078C440:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 104u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 88));
    r0 = (r4 + 24);
    r5 = (r0 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r5 + -1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
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
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 136), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 24));
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
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
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
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r30 + 140), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 25));
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
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
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
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 148), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 26));
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
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
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 152), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 27));
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
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
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
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 156), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 28));
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
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
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
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r30 + 160), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 29));
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
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
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
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r30 + 164), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 30));
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
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
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
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r30 + 168), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 31));
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
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r31 + 104));
    r3 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword9;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r30 + 172), f0.d);
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
    r0 = MemoryInline::FlatRead8((r4 + 32));
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
    fctiwzword10 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword10;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r30 + 176), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xE000002B gpr_return=0x00000008 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8078C3E0 func_8078C3E0 preserves=true fpr_mask=0x00000000
