#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070EC90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070EC90;

loc_8070EC90:
{
    r4 = MemoryInline::FlatRead16((r3 + 144));
    r5 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r4 + -5);
    r4 = MemoryInline::FlatRead32((r5 + 9892));
    r6 = (r6 & -16);
    r6 = (r6 | r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_8070ECB0:
{
    MemoryInline::FlatWrite32((r3 + 96), r6);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_8070ECB8:
{
    r4 = 0x808D0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -29416);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8070ECD0u:
        goto loc_8070ECD0;
        break;
    case 0x8070ED0Cu:
        goto loc_8070ED0C;
        break;
    case 0x8070EDE4u:
        goto loc_8070EDE4;
        break;
    case 0x8070ED1Cu:
        goto loc_8070ED1C;
        break;
    case 0x8070ED2Cu:
        goto loc_8070ED2C;
        break;
    case 0x8070ED5Cu:
        goto loc_8070ED5C;
        break;
    case 0x8070ED98u:
        goto loc_8070ED98;
        break;
    case 0x8070EDB8u:
        goto loc_8070EDB8;
        break;
    case 0x8070EDC8u:
        goto loc_8070EDC8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8070ECD0:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 9904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_8070ECDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070ECEC;
    }
}

loc_8070ECE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_8070ECE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070ECFC;
    }
}

loc_8070ECE8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ECEC:
{
    r0 = (r6 & -16);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ECFC:
{
    r0 = (r6 & -16);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ED0C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 10);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ED1C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 10);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ED2C:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 9904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_8070ED38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070ED4C;
    }
}

loc_8070ED3C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 12);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ED4C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 6);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ED5C:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 9904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_8070ED68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070ED78;
    }
}

loc_8070ED6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_8070ED70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070ED88;
    }
}

loc_8070ED74:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ED78:
{
    r0 = (r6 & -16);
    r0 = (r0 | 14);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ED88:
{
    r0 = (r6 & -16);
    r0 = (r0 | 10);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070ED98:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 9904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_8070EDA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070EDA8:
{
    r0 = (r6 & -16);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070EDB8:
{
    r0 = (r6 & -16);
    r0 = (r0 | 14);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070EDC8:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 9904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_8070EDD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070EDD8:
{
    r0 = (r6 & -16);
    r0 = (r0 | 9);
    MemoryInline::FlatWrite32((r3 + 96), r0);
}

loc_8070EDE4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000059 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070EC90 func_8070EC90 preserves=true fpr_mask=0x00000000
