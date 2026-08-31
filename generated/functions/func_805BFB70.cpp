#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BFB70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805BFB70;

loc_805BFB70:
{
    r0 = MemoryInline::FlatRead32((r3 + 608));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_805BFB78:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805BFBEC;
    }
}

loc_805BFB7C:
{
    r3 = 0x808B0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + 31060);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805BFB94u:
        goto loc_805BFB94;
        break;
    case 0x805BFB9Cu:
        goto loc_805BFB9C;
        break;
    case 0x805BFBA4u:
        goto loc_805BFBA4;
        break;
    case 0x805BFBACu:
        goto loc_805BFBAC;
        break;
    case 0x805BFBB4u:
        goto loc_805BFBB4;
        break;
    case 0x805BFBBCu:
        goto loc_805BFBBC;
        break;
    case 0x805BFBC4u:
        goto loc_805BFBC4;
        break;
    case 0x805BFBCCu:
        goto loc_805BFBCC;
        break;
    case 0x805BFBD4u:
        goto loc_805BFBD4;
        break;
    case 0x805BFBDCu:
        goto loc_805BFBDC;
        break;
    case 0x805BFBE4u:
        goto loc_805BFBE4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_805BFB94:
{
    r3 = 6510;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFB9C:
{
    r3 = 6500;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBA4:
{
    r3 = 6501;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBAC:
{
    r3 = 6502;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBB4:
{
    r3 = 6503;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBBC:
{
    r3 = 6504;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBC4:
{
    r3 = 6505;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBCC:
{
    r3 = 6506;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBD4:
{
    r3 = 6507;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBDC:
{
    r3 = 6508;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBE4:
{
    r3 = 6509;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BFBEC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805BFB70 func_805BFB70 preserves=true fpr_mask=0x00000000
