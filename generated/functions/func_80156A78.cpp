#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80156A78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80156A78;

loc_80156A78:
{
}

loc_80156A7C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80156A88;
    }
}

loc_80156A80:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80156B34;
}

loc_80156A88:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_80156B34;
}

loc_80156A90:
{
    r6 = MemoryInline::FlatRead32(r3);
    goto loc_80156B28;
}

loc_80156A98:
{
    r5 = MemoryInline::FlatRead16((r6 + 4));
}

loc_80156AA0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_80156AF4;
    }
}

loc_80156AA4:
{
    r0 = MemoryInline::FlatRead16((r6 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 12);
}

loc_80156AB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80156AF4;
    }
}

loc_80156AB4:
{
    r6 = MemoryInline::FlatRead32((r6 + 8));
    goto loc_80156AE8;
}

loc_80156ABC:
{
    r5 = MemoryInline::FlatRead16((r6 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r5) >> 12);
}

loc_80156AC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80156AE4;
    }
}

loc_80156ACC:
{
    r0 = (r5 & 4095);
}

loc_80156AD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80156AE4;
    }
}

loc_80156AD8:
{
    r0 = MemoryInline::FlatRead16((r6 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80156AE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80156AE4:
{
    r6 = MemoryInline::FlatRead32(r6);
}

loc_80156AE8:
{
}

loc_80156AEC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80156ABC;
    }
}

loc_80156AF0:
{
    goto loc_80156B30;
}

loc_80156AF4:
{
}

loc_80156AF8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(3))) {
        goto loc_80156B24;
    }
}

loc_80156AFC:
{
    r5 = MemoryInline::FlatRead16((r6 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r5) >> 12);
}

loc_80156B08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80156B24;
    }
}

loc_80156B0C:
{
    r0 = (r5 & 4095);
}

loc_80156B14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80156B24;
    }
}

loc_80156B18:
{
    r0 = MemoryInline::FlatRead16((r6 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80156B20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80156B24:
{
    r6 = MemoryInline::FlatRead32(r6);
}

loc_80156B28:
{
}

loc_80156B2C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80156A98;
    }
}

loc_80156B30:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80156B34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80156B38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80156A90;
    }
}

loc_80156B3C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80156A78 func_80156A78 preserves=true fpr_mask=0x00000000
