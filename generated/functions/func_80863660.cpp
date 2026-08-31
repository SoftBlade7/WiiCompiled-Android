#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80863660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80863660;

loc_80863660:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80863668:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(27))) {
        goto loc_80863710;
    }
}

loc_8086366C:
{
    r5 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + -18276);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80863710u:
        goto loc_80863710;
        break;
    case 0x80863708u:
        goto loc_80863708;
        break;
    case 0x80863684u:
        goto loc_80863684;
        break;
    case 0x808636C0u:
        goto loc_808636C0;
        break;
    case 0x808636CCu:
        goto loc_808636CC;
        break;
    case 0x8086369Cu:
        goto loc_8086369C;
        break;
    case 0x80863690u:
        goto loc_80863690;
        break;
    case 0x808636B4u:
        goto loc_808636B4;
        break;
    case 0x808636A8u:
        goto loc_808636A8;
        break;
    case 0x808636D8u:
        goto loc_808636D8;
        break;
    case 0x808636F0u:
        goto loc_808636F0;
        break;
    case 0x808636E4u:
        goto loc_808636E4;
        break;
    case 0x808636FCu:
        goto loc_808636FC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80863684:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_80863690:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_8086369C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_808636A8:
{
    r0 = 9;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_808636B4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_808636C0:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_808636CC:
{
    r0 = 20;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_808636D8:
{
    r0 = 9;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_808636E4:
{
    r0 = 20;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_808636F0:
{
    r0 = 20;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_808636FC:
{
    r0 = 26;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863710;
}

loc_80863708:
{
    r0 = 5;
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80863710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80863714:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80863718:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863738;
    }
}

loc_80863724:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_80863728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863744;
    }
}

loc_8086372C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_80863730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863750;
    }
}

loc_80863734:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863738:
{
    r0 = 5;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863744:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863750:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80863660 func_80863660 preserves=true fpr_mask=0x00000000
