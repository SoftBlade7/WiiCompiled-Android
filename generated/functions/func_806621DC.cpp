#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806621DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806621DC;

loc_806621DC:
{
    r0 = 2;
    r6 = 0;
    ctr = r0;
}

loc_806621E8:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_806621F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662200;
    }
}

loc_806621F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80662200:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8066220C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662218;
    }
}

loc_80662210:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80662218:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80662224:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662230;
    }
}

loc_80662228:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80662230:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8066223C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662248;
    }
}

loc_80662240:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80662248:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80662254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662260;
    }
}

loc_80662258:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80662260:
{
    r3 = MemoryInline::FlatRead8((r4 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8066226C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662278;
    }
}

loc_80662270:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80662278:
{
    r6 = (r6 + 5);
    r5 = (r5 + 6);
    r4 = (r4 + 6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806621E8;
    }
}

loc_80662288:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806621DC func_806621DC preserves=true fpr_mask=0x00000000
