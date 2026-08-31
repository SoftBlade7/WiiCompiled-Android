#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ACFF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;

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

    goto loc_800ACFF0;

loc_800ACFF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(127));
}

loc_800ACFF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AD000;
    }
}

loc_800ACFF8:
{
    r0 = 127;
    goto loc_800AD008;
}

loc_800AD000:
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

loc_800AD008:
{
    r9 = (r0 * 10);
    r3 = 0x80250000u;
    r3 = (r3 + -19752);
    r3_addr_0 = (r3 + r9);
    r0 = MemoryInline::FlatRead16(r3_addr_0);
    r3 = (r3 + r9);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite16(r8, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F8 gpr_write=0x00000209 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800ACFF0 func_800ACFF0 preserves=true fpr_mask=0x00000000
