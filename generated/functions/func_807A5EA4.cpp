#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A5EA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A5EA4;

loc_807A5EA4:
{
    r5 = 0x808A0000u;
    r4 = 0x809C0000u;
    r5 = (r5 + 21600);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 13880));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 244));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 488));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807A5EC4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_807A5EC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 248));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807A5ED4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A5EF4;
    }
}

loc_807A5ED8:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 476));
    r4 = MemoryInline::FlatRead32((r4 + 13884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_807A5EE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807A5EEC:
{
    MemoryInline::FlatWrite32((r3 + 476), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_807A5EF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 252));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807A5F00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A5F24;
    }
}

loc_807A5F04:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 476));
    r4 = MemoryInline::FlatRead32((r4 + 13884));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_807A5F18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807A5F1C:
{
    MemoryInline::FlatWrite32((r3 + 476), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_807A5F24:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_807A5F28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A5F4C;
    }
}

loc_807A5F2C:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 476));
    r4 = MemoryInline::FlatRead32((r4 + 13884));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_807A5F40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807A5F44:
{
    MemoryInline::FlatWrite32((r3 + 476), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_807A5F4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 476));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_807A5F54:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807A5F58:
{
    r4 = 4;
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 476), r4);
    MemoryInline::FlatWrite32((r3 + 480), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807A5EA4 func_807A5EA4 preserves=true fpr_mask=0x00000000
