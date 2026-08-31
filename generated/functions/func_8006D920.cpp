#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006D920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8006D920;

loc_8006D920:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
}

loc_8006D924:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8006DAA8;
    }
}

loc_8006D928:
{
    r6 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r6 + 12424);
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8006DAA8u:
        goto loc_8006DAA8;
        break;
    case 0x8006D940u:
        goto loc_8006D940;
        break;
    case 0x8006D968u:
        goto loc_8006D968;
        break;
    case 0x8006D990u:
        goto loc_8006D990;
        break;
    case 0x8006D9B8u:
        goto loc_8006D9B8;
        break;
    case 0x8006D9E0u:
        goto loc_8006D9E0;
        break;
    case 0x8006DA08u:
        goto loc_8006DA08;
        break;
    case 0x8006DA30u:
        goto loc_8006DA30;
        break;
    case 0x8006DA58u:
        goto loc_8006DA58;
        break;
    case 0x8006DA80u:
        goto loc_8006DA80;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8006D940:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006D944:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006D958;
    }
}

loc_8006D948:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D958:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D968:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006D96C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006D980;
    }
}

loc_8006D970:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D980:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D990:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006D994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006D9A8;
    }
}

loc_8006D998:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D9A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D9B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006D9BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006D9D0;
    }
}

loc_8006D9C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D9D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D9E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006D9E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006D9F8;
    }
}

loc_8006D9E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006D9F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DA08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006DA0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006DA20;
    }
}

loc_8006DA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DA20:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DA30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006DA34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006DA48;
    }
}

loc_8006DA38:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DA48:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DA58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006DA5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006DA70;
    }
}

loc_8006DA60:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DA70:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DA80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006DA84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006DA98;
    }
}

loc_8006DA88:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DA98:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -268435457);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DAB0;
}

loc_8006DAA8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8006DAB0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006D920 func_8006D920 preserves=true fpr_mask=0x00000000
