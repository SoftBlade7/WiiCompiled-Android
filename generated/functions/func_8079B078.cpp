#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079B078(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8079B078;

loc_8079B078:
{
}

loc_8079B07C:
{
    r7 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r7 = (r7 + 20952);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B148;
    }
}

loc_8079B08C:
{
}

loc_8079B090:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079B148;
    }
}

loc_8079B094:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B0A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079B0B0;
    }
}

loc_8079B0A4:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r0 = 1;
    goto loc_8079B0B4;
}

loc_8079B0B0:
{
    r0 = 0;
}

loc_8079B0B4:
{
}

loc_8079B0B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079B0D0;
    }
}

loc_8079B0BC:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B0C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079B0D0;
    }
}

loc_8079B0CC:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079B0D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B0DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079B0EC;
    }
}

loc_8079B0E0:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r0 = 1;
    goto loc_8079B0F0;
}

loc_8079B0EC:
{
    r0 = 0;
}

loc_8079B0F0:
{
}

loc_8079B0F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079B10C;
    }
}

loc_8079B0F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B104:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079B10C;
    }
}

loc_8079B108:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
}

loc_8079B10C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B118:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079B128;
    }
}

loc_8079B11C:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r0 = 1;
    goto loc_8079B12C;
}

loc_8079B128:
{
    r0 = 0;
}

loc_8079B12C:
{
}

loc_8079B130:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079B148;
    }
}

loc_8079B134:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B140:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079B148;
    }
}

loc_8079B144:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_8079B148:
{
}

loc_8079B14C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B158;
    }
}

loc_8079B150:
{
    r0 = r4;
    goto loc_8079B15C;
}

loc_8079B158:
{
    r0 = 0;
}

loc_8079B15C:
{
}

loc_8079B160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B1DC;
    }
}

loc_8079B164:
{
}

loc_8079B168:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079B19C;
    }
}

loc_8079B16C:
{
}

loc_8079B170:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B17C;
    }
}

loc_8079B174:
{
    r6 = r4;
    goto loc_8079B180;
}

loc_8079B17C:
{
    r6 = 0;
}

loc_8079B180:
{
    f0.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8079B1DC;
}

loc_8079B19C:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079B1AC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B1D4;
    }
}

loc_8079B1CC:
{
    r6 = r4;
    goto loc_8079B1D8;
}

loc_8079B1D4:
{
    r6 = 0;
}

loc_8079B1D8:
{
    MemoryInline::FlatWriteFloat32(r6, f0.d);
}

loc_8079B1DC:
{
}

loc_8079B1E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B1EC;
    }
}

loc_8079B1E4:
{
    r0 = (r4 + 4);
    goto loc_8079B1F0;
}

loc_8079B1EC:
{
    r0 = 0;
}

loc_8079B1F0:
{
}

loc_8079B1F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B268;
    }
}

loc_8079B1F8:
{
}

loc_8079B1FC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079B22C;
    }
}

loc_8079B200:
{
}

loc_8079B204:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B210;
    }
}

loc_8079B208:
{
    r6 = (r4 + 4);
    goto loc_8079B214;
}

loc_8079B210:
{
    r6 = 0;
}

loc_8079B214:
{
    f0.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_8079B268;
}

loc_8079B22C:
{
    r6 = MemoryInline::FlatRead8((r3 + 1));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079B23C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B260;
    }
}

loc_8079B258:
{
    r6 = (r4 + 4);
    goto loc_8079B264;
}

loc_8079B260:
{
    r6 = 0;
}

loc_8079B264:
{
    MemoryInline::FlatWriteFloat32(r6, f0.d);
}

loc_8079B268:
{
}

loc_8079B26C:
{
    r6 = (r3 + 2);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B27C;
    }
}

loc_8079B274:
{
    r0 = (r4 + 8);
    goto loc_8079B280;
}

loc_8079B27C:
{
    r0 = 0;
}

loc_8079B280:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079B284:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B300;
    }
}

loc_8079B288:
{
}

loc_8079B28C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079B2C0;
    }
}

loc_8079B290:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079B294:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B2A0;
    }
}

loc_8079B298:
{
    r3 = (r4 + 8);
    goto loc_8079B2A4;
}

loc_8079B2A0:
{
    r3 = 0;
}

loc_8079B2A4:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_8079B300;
}

loc_8079B2C0:
{
    r3 = MemoryInline::FlatRead8(r6);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079B2D0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B2F8;
    }
}

loc_8079B2F0:
{
    r3 = (r4 + 8);
    goto loc_8079B2FC;
}

loc_8079B2F8:
{
    r3 = 0;
}

loc_8079B2FC:
{
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_8079B300:
{
    r3 = (r6 + 1);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000CB gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8079B078 func_8079B078 preserves=true fpr_mask=0x00000000
