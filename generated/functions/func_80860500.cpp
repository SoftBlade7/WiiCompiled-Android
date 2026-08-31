#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80860500(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80860500;

loc_80860500:
{
    r3 = 0x809C0000u;
    r0 = 2;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = 0;
    r6 = 0;
    r5 = (r4 + 3096);
    ctr = r0;
}

loc_8086051C:
{
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80860530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8086053C;
    }
}

loc_80860534:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_8086053C:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80860554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80860560;
    }
}

loc_80860558:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_80860560:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80860578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80860584;
    }
}

loc_8086057C:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_80860584:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8086059C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_808605A8;
    }
}

loc_808605A0:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_808605A8:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_808605C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_808605CC;
    }
}

loc_808605C4:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_808605CC:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_808605E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808605F0;
    }
}

loc_808605E8:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_808605F0:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8086051C;
    }
}

loc_808605F8:
{
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
// RECOMP_REGISTRATION base 0x80860500 func_80860500 preserves=true fpr_mask=0x00000000
