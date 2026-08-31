#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079AD38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079AD38;

loc_8079AD38:
{
}

loc_8079AD3C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079AD4C;
    }
}

loc_8079AD44:
{
    r0 = r4;
    goto loc_8079AD50;
}

loc_8079AD4C:
{
    r0 = 0;
}

loc_8079AD50:
{
}

loc_8079AD54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079ADD0;
    }
}

loc_8079AD58:
{
}

loc_8079AD5C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079AD90;
    }
}

loc_8079AD60:
{
}

loc_8079AD64:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079AD70;
    }
}

loc_8079AD68:
{
    r6 = r4;
    goto loc_8079AD74;
}

loc_8079AD70:
{
    r6 = 0;
}

loc_8079AD74:
{
    f0.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_8079ADD0;
}

loc_8079AD90:
{
    r7 = MemoryInline::FlatRead16(r3);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = 0x808A0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 20968));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079ADB4:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079ADC8;
    }
}

loc_8079ADC0:
{
    r6 = r4;
    goto loc_8079ADCC;
}

loc_8079ADC8:
{
    r6 = 0;
}

loc_8079ADCC:
{
    MemoryInline::FlatWriteFloat32(r6, f0.d);
}

loc_8079ADD0:
{
}

loc_8079ADD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079ADE0;
    }
}

loc_8079ADD8:
{
    r0 = (r4 + 4);
    goto loc_8079ADE4;
}

loc_8079ADE0:
{
    r0 = 0;
}

loc_8079ADE4:
{
}

loc_8079ADE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079AE64;
    }
}

loc_8079ADEC:
{
}

loc_8079ADF0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079AE24;
    }
}

loc_8079ADF4:
{
}

loc_8079ADF8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079AE04;
    }
}

loc_8079ADFC:
{
    r6 = (r4 + 4);
    goto loc_8079AE08;
}

loc_8079AE04:
{
    r6 = 0;
}

loc_8079AE08:
{
    f0.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_8079AE64;
}

loc_8079AE24:
{
    r7 = MemoryInline::FlatRead16((r3 + 2));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = 0x808A0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 20968));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079AE48:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079AE5C;
    }
}

loc_8079AE54:
{
    r6 = (r4 + 4);
    goto loc_8079AE60;
}

loc_8079AE5C:
{
    r6 = 0;
}

loc_8079AE60:
{
    MemoryInline::FlatWriteFloat32(r6, f0.d);
}

loc_8079AE64:
{
}

loc_8079AE68:
{
    r6 = (r3 + 4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079AE78;
    }
}

loc_8079AE70:
{
    r0 = (r4 + 8);
    goto loc_8079AE7C;
}

loc_8079AE78:
{
    r0 = 0;
}

loc_8079AE7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079AE80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079AEFC;
    }
}

loc_8079AE84:
{
}

loc_8079AE88:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079AEBC;
    }
}

loc_8079AE8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079AE90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079AE9C;
    }
}

loc_8079AE94:
{
    r3 = (r4 + 8);
    goto loc_8079AEA0;
}

loc_8079AE9C:
{
    r3 = 0;
}

loc_8079AEA0:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_8079AEFC;
}

loc_8079AEBC:
{
    r5 = MemoryInline::FlatRead16(r6);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 0x808A0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    f1.d = MemoryInline::FlatReadFloat64((r3 + 20968));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079AEE0:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079AEF4;
    }
}

loc_8079AEEC:
{
    r3 = (r4 + 8);
    goto loc_8079AEF8;
}

loc_8079AEF4:
{
    r3 = 0;
}

loc_8079AEF8:
{
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_8079AEFC:
{
    r3 = (r6 + 2);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000EB gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8079AD38 func_8079AD38 preserves=true fpr_mask=0x00000000
