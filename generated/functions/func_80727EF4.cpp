#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80727EF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80727EF4;

loc_80727EF4:
{
    r3 = 0x809C0000u;
    r7 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 20));
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80727F10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80727F14:
{
    r0 = (r7 & 255);
    r3 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80727F2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80727F40;
    }
}

loc_80727F30:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80727F54;
}

loc_80727F40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80727F44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80727F54;
    }
}

loc_80727F48:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80727F54:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80727F14;
    }
}

loc_80727F5C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80727EF4 func_80727EF4 preserves=true fpr_mask=0x00000000
