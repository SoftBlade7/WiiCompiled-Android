#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067643C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8067643C;

loc_8067643C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80676444:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80676448:
{
    r0 = 159;
    r5 = 0;
    r4 = 0;
    ctr = r0;
}

loc_80676458:
{
    r0 = MemoryInline::FlatRead16((r3 + 784));
}

loc_80676460:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80676490;
    }
}

loc_80676464:
{
    r0 = MemoryInline::FlatRead16((r3 + 786));
}

loc_8067646C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80676490;
    }
}

loc_80676470:
{
    MemoryInline::FlatWrite16((r3 + 784), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 786), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r3 + 788));
}

loc_80676480:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80676490;
    }
}

loc_80676484:
{
    r0 = MemoryInline::FlatRead16((r3 + 790));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8067648C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80676490:
{
    r0 = MemoryInline::FlatRead16((r3 + 786));
}

loc_80676498:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_806764C8;
    }
}

loc_8067649C:
{
    r0 = MemoryInline::FlatRead16((r3 + 788));
}

loc_806764A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_806764C8;
    }
}

loc_806764A8:
{
    MemoryInline::FlatWrite16((r3 + 786), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 788), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r3 + 790));
}

loc_806764B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_806764C8;
    }
}

loc_806764BC:
{
    r0 = MemoryInline::FlatRead16((r3 + 792));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_806764C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_806764C8:
{
    r0 = MemoryInline::FlatRead16((r3 + 788));
}

loc_806764D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80676500;
    }
}

loc_806764D4:
{
    r0 = MemoryInline::FlatRead16((r3 + 790));
}

loc_806764DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80676500;
    }
}

loc_806764E0:
{
    MemoryInline::FlatWrite16((r3 + 788), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 790), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r3 + 792));
}

loc_806764F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80676500;
    }
}

loc_806764F4:
{
    r0 = MemoryInline::FlatRead16((r3 + 794));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_806764FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80676500:
{
    r0 = MemoryInline::FlatRead16((r3 + 790));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
}

loc_80676508:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80676538;
    }
}

loc_8067650C:
{
    r0 = MemoryInline::FlatRead16((r3 + 792));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_80676514:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80676538;
    }
}

loc_80676518:
{
    MemoryInline::FlatWrite16((r3 + 790), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 792), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r3 + 794));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
}

loc_80676528:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80676538;
    }
}

loc_8067652C:
{
    r0 = MemoryInline::FlatRead16((r3 + 796));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_80676534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80676538:
{
    r3 = (r3 + 8);
    r5 = (r5 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80676458;
    }
}

loc_80676544:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067643C func_8067643C preserves=true fpr_mask=0x00000000
