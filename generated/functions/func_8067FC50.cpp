#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067FC50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067FC50;

loc_8067FC50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r7 = 1127219200;
    r5 = 0x809C0000u;
    r6 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 352), 0, 68u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 356));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r0 = (r0 - r4);
    f1.d = MemoryInline::FlatReadFloat32((r6 + -11772));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r8));
}

loc_8067FC7C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067FDEC;
    }
}

loc_8067FC84:
{
    r4 = 0x808C0000u;
    r7 = (r0 - r8);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 352));
    r4 = MemoryInline::FlatRead32((r4 + 3928));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 412));
    r5 = (r5 + r4);
    r4 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r5));
    r4 = (r4 * r5);
    r7 = (r7 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_8067FCAC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067FCB4;
    }
}

loc_8067FCB0:
{
    goto loc_8067FDEC;
}

loc_8067FCB4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 408));
}

loc_8067FCBC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_8067FD28;
    }
}

loc_8067FCC0:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 380));
    r4 = 0x808A0000u;
    f5.d = MemoryInline::FlatReadFloat64((r4 + -11752));
    r0 = (r7 - r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 416));
    r4 = (r4 + r5);
    r0 = (r0 ^ -2147483648);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 ^ -2147483648);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 360));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r6 + -11772));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8067FD1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8067FDEC;
    }
}

loc_8067FD20:
{
    f1.d = f0.d;
    goto loc_8067FDEC;
}

loc_8067FD28:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 404));
}

loc_8067FD30:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_8067FD88;
    }
}

loc_8067FD34:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 380));
    r5 = (r7 - r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8067FD4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8067FD80;
    }
}

loc_8067FD50:
{
    r0 = (r5 - r0);
    r4 = 0x808A0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + -11752));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 416));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 360));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8067FDEC;
}

loc_8067FD80:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 360));
    goto loc_8067FDEC;
}

loc_8067FD88:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 400));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_8067FD90:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067FD9C;
    }
}

loc_8067FD94:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 360));
    goto loc_8067FDEC;
}

loc_8067FD9C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_8067FDA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067FDB0;
    }
}

loc_8067FDA8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 360));
    goto loc_8067FDEC;
}

loc_8067FDB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8067FDB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067FDEC;
    }
}

loc_8067FDB8:
{
    r0 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0x808A0000u;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 416));
    f4.d = MemoryInline::FlatReadFloat64((r4 + -11752));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 360));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8067FDE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8067FDEC;
    }
}

loc_8067FDE8:
{
    f1.d = f0.d;
}

loc_8067FDEC:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8067FC50 func_8067FC50 preserves=true fpr_mask=0x00000000
