#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80619FE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80619FE8;

loc_80619FE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r5 = 0x80890000u;
    r5 = (r5 + 31472);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 52u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A008:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A014;
    }
}

loc_8061A00C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_8061A014:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A028:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061A034;
    }
}

loc_8061A02C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
}

loc_8061A034:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r4 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7552));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8061A064:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061A074;
    }
}

loc_8061A06C:
{
    r7 = 200;
    goto loc_8061A10C;
}

loc_8061A074:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r5 + 44));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8061A07C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061A08C;
    }
}

loc_8061A084:
{
    r7 = 500;
    goto loc_8061A10C;
}

loc_8061A08C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r5 + 48));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8061A094:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061A0A4;
    }
}

loc_8061A09C:
{
    r7 = 1000;
    goto loc_8061A10C;
}

loc_8061A0A4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 52));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8061A0AC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061A0BC;
    }
}

loc_8061A0B4:
{
    r7 = 2000;
    goto loc_8061A10C;
}

loc_8061A0BC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 56));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8061A0C4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061A0D4;
    }
}

loc_8061A0CC:
{
    r7 = 5000;
    goto loc_8061A10C;
}

loc_8061A0D4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 60));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8061A0DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061A0EC;
    }
}

loc_8061A0E4:
{
    r7 = 10000;
    goto loc_8061A10C;
}

loc_8061A0EC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r5 + 64));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8061A0F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061A104;
    }
}

loc_8061A0FC:
{
    r7 = 30000;
    goto loc_8061A10C;
}

loc_8061A104:
{
    r4 = 65536;
    r7 = (r4 + -5536);
}

loc_8061A10C:
{
    r4 = (r7 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r5 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r5 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A138:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061A154;
    }
}

loc_8061A140:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r0 = (r4 + 1);
    goto loc_8061A160;
}

loc_8061A154:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
}

loc_8061A160:
{
    r8 = (r7 * r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r5 + 24));
    r0 = 2;
    r6 = r3;
    r9 = 0;
    r5 = 1127219200;
    r4 = -1;
    ctr = r0;
}

loc_8061A180:
{
    r0 = (r8 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A19C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A1A8;
    }
}

loc_8061A1A0:
{
    MemoryInline::FlatWrite32((r6 + 24), r8);
    goto loc_8061A1AC;
}

loc_8061A1A8:
{
    MemoryInline::FlatWrite32((r6 + 24), r4);
}

loc_8061A1AC:
{
    r8 = (r8 + r7);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r0 = (r8 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A1CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A1D8;
    }
}

loc_8061A1D0:
{
    MemoryInline::FlatWrite32((r6 + 28), r8);
    goto loc_8061A1DC;
}

loc_8061A1D8:
{
    MemoryInline::FlatWrite32((r6 + 28), r4);
}

loc_8061A1DC:
{
    r8 = (r8 + r7);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r0 = (r8 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A1FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A208;
    }
}

loc_8061A200:
{
    MemoryInline::FlatWrite32((r6 + 32), r8);
    goto loc_8061A20C;
}

loc_8061A208:
{
    MemoryInline::FlatWrite32((r6 + 32), r4);
}

loc_8061A20C:
{
    r8 = (r8 + r7);
    r6 = (r6 + 12);
    r9 = (r9 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8061A180;
    }
}

loc_8061A21C:
{
    r4 = (r7 ^ 1000);
    r0 = (r4 & 1000);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061A224:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    r0 = (r4 - r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003F3 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80619FE8 func_80619FE8 preserves=true fpr_mask=0x00000000
