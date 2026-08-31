#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D24C0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_805D24C0;

loc_805D24C0:
{
    r0 = 5;
    r5 = 0;
    r6 = 0;
    ctr = r0;
}

loc_805D24D0:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D24E4;
    }
}

loc_805D24E0:
{
    r5 = (r5 + 1);
}

loc_805D24E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 472));
    r4 = MemoryInline::FlatRead32((r3 + 476));
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D24F8;
    }
}

loc_805D24F4:
{
    r5 = (r5 + 1);
}

loc_805D24F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 944));
    r4 = MemoryInline::FlatRead32((r3 + 948));
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D250C;
    }
}

loc_805D2508:
{
    r5 = (r5 + 1);
}

loc_805D250C:
{
    r0 = MemoryInline::FlatRead32((r3 + 1416));
    r4 = MemoryInline::FlatRead32((r3 + 1420));
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D2520;
    }
}

loc_805D251C:
{
    r5 = (r5 + 1);
}

loc_805D2520:
{
    r0 = MemoryInline::FlatRead32((r3 + 1888));
    r4 = MemoryInline::FlatRead32((r3 + 1892));
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D2534;
    }
}

loc_805D2530:
{
    r5 = (r5 + 1);
}

loc_805D2534:
{
    r0 = MemoryInline::FlatRead32((r3 + 2360));
    r4 = MemoryInline::FlatRead32((r3 + 2364));
    r0 = (r4 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D2548;
    }
}

loc_805D2544:
{
    r5 = (r5 + 1);
}

loc_805D2548:
{
    r3 = (r3 + 2832);
    r6 = (r6 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805D24D0;
    }
}

loc_805D2554:
{
    r3 = r5;
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

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805D24C0 func_805D24C0 preserves=true fpr_mask=0x00000000
