#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808633AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808633AC;

loc_808633AC:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_808633B4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_808633B8:
{
    r4 = 0x808E0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + -18644);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80863498u:
        goto loc_80863498;
        break;
    case 0x808633D0u:
        goto loc_808633D0;
        break;
    case 0x808633DCu:
        goto loc_808633DC;
        break;
    case 0x808633E8u:
        goto loc_808633E8;
        break;
    case 0x808633F4u:
        goto loc_808633F4;
        break;
    case 0x80863400u:
        goto loc_80863400;
        break;
    case 0x8086340Cu:
        goto loc_8086340C;
        break;
    case 0x80863418u:
        goto loc_80863418;
        break;
    case 0x80863424u:
        goto loc_80863424;
        break;
    case 0x80863430u:
        goto loc_80863430;
        break;
    case 0x8086343Cu:
        goto loc_8086343C;
        break;
    case 0x80863448u:
        goto loc_80863448;
        break;
    case 0x80863454u:
        goto loc_80863454;
        break;
    case 0x80863460u:
        goto loc_80863460;
        break;
    case 0x8086346Cu:
        goto loc_8086346C;
        break;
    case 0x80863478u:
        goto loc_80863478;
        break;
    case 0x80863484u:
        goto loc_80863484;
        break;
    case 0x80863490u:
        goto loc_80863490;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_808633D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808633DC:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808633E8:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_808633F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863400:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8086340C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863418:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863424:
{
    r0 = 11;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863430:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8086343C:
{
    r0 = 9;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863448:
{
    r0 = 17;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863454:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863460:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8086346C:
{
    r0 = 26;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863478:
{
    r0 = 11;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863484:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80863490:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80863498:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808633AC func_808633AC preserves=true fpr_mask=0x00000000
