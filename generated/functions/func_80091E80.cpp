#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80091E80;

loc_80091E80:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80091E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80091E94;
    }
}

loc_80091E8C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80091E94:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_80091E9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80091F40;
    }
}

loc_80091EA0:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 + 4);
    r8 = 128;
    r7 = 0;
    goto loc_80091EF4;
}

loc_80091EB8:
{
    r6 = MemoryInline::FlatRead8((r5 + -108));
    r9 = (r5 + -248);
    r3 = MemoryInline::FlatRead32((r5 + -176));
    r6 = (r6 + r3);
}

loc_80091ECC:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(127))) {
        goto loc_80091ED8;
    }
}

loc_80091ED0:
{
    r3 = 127;
    goto loc_80091EE0;
}

loc_80091ED8:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r6) >> 31);
    r3 = (r6 & ~r3);
}

loc_80091EE0:
{
}

loc_80091EE4:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r3))) {
        goto loc_80091EF0;
    }
}

loc_80091EE8:
{
    r7 = r9;
    r8 = r3;
}

loc_80091EF0:
{
    r5 = MemoryInline::FlatRead32(r5);
}

loc_80091EF4:
{
}

loc_80091EF8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80091EB8;
    }
}

loc_80091EFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80091F00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80091F0C;
    }
}

loc_80091F04:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80091F0C:
{
    r3 = MemoryInline::FlatRead8((r7 + 140));
    r0 = MemoryInline::FlatRead32((r7 + 72));
    r3 = (r3 + r0);
}

loc_80091F1C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(127))) {
        goto loc_80091F28;
    }
}

loc_80091F20:
{
    r0 = 127;
    goto loc_80091F30;
}

loc_80091F28:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r3 & ~r0);
}

loc_80091F30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80091F34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80091F40;
    }
}

loc_80091F38:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80091F40:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80091E80 func_80091E80 preserves=true fpr_mask=0x00000000
