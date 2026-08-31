#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80863580(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80863580;

loc_80863580:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80863588:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(27))) {
        goto loc_80863618;
    }
}

loc_8086358C:
{
    r5 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + -18388);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80863618u:
        goto loc_80863618;
        break;
    case 0x80863610u:
        goto loc_80863610;
        break;
    case 0x808635C8u:
        goto loc_808635C8;
        break;
    case 0x808635D4u:
        goto loc_808635D4;
        break;
    case 0x808635A4u:
        goto loc_808635A4;
        break;
    case 0x808635BCu:
        goto loc_808635BC;
        break;
    case 0x808635B0u:
        goto loc_808635B0;
        break;
    case 0x808635E0u:
        goto loc_808635E0;
        break;
    case 0x808635ECu:
        goto loc_808635EC;
        break;
    case 0x808635F8u:
        goto loc_808635F8;
        break;
    case 0x80863604u:
        goto loc_80863604;
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

loc_808635A4:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_808635B0:
{
    r0 = 9;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_808635BC:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_808635C8:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_808635D4:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_808635E0:
{
    r0 = 5;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_808635EC:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_808635F8:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_80863604:
{
    r0 = 26;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80863618;
}

loc_80863610:
{
    r0 = 5;
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80863618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8086361C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80863620:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_80863628:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8086362C:
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
// RECOMP_REGISTRATION base 0x80863580 func_80863580 preserves=true fpr_mask=0x00000000
