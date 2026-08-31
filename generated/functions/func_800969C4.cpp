#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800969C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r27 = ctx->gpr[27];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800969C4;

loc_800969C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1023));
}

loc_800969C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800969D4;
    }
}

loc_800969CC:
{
    r0 = 1023;
    goto loc_800969DC;
}

loc_800969D4:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 31);
    r0 = (r6 & ~r0);
}

loc_800969DC:
{
    MemoryInline::FlatWrite16((r27 + 264), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009716Cu>(ctx);
    r0 = ctx->gpr[0];
    r27 = ctx->gpr[27];
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x08000042 gpr_write=0xFE000803 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800969C4 func_800969C4 preserves=true fpr_mask=0x00000000
