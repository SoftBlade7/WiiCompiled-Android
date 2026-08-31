#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085CC84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085CC84;

loc_8085CC84:
{
    r7 = MemoryInline::FlatRead32(r3);
    r8 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r7));
}

loc_8085CC90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085CC9C;
    }
}

loc_8085CC94:
{
    r3 = (r8 - r7);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8085CC9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r0 * 240);
    r6 = (r5 + 40);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_8085CCBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085CCC4;
    }
}

loc_8085CCC0:
{
    r7 = (r7 + 1);
}

loc_8085CCC4:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r0 = (r0 * 240);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_8085CCD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085CCE0;
    }
}

loc_8085CCDC:
{
    r8 = (r8 + 1);
}

loc_8085CCE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r7));
}

loc_8085CCE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085CCF0;
    }
}

loc_8085CCE8:
{
    r3 = (r8 - r7);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8085CCF0:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r7 = (r7 + r3);
    r8 = (r8 + r0);
    r3 = (r8 - r7);
    r0 = (r7 - r8);
    r0 = (r3 | r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 & r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001D8 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8085CC84 func_8085CC84 preserves=true fpr_mask=0x00000000
