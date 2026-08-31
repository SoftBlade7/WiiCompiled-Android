#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801735CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mdest_6 = 0;
    uint32_t r4_mdest_7 = 0;
    uint32_t r4_mdest_8 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_mrot_6 = 0;
    uint32_t r4_mrot_7 = 0;
    uint32_t r4_mrot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801735CC;

loc_801735CC:
{
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r5 + 1516));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(34));
}

loc_801735D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80173604;
    }
}

loc_801735DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80173650;
    }
}

loc_801735E0:
{
}

loc_801735E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_801735F4;
    }
}

loc_801735E8:
{
}

loc_801735EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80173604;
    }
}

loc_801735F0:
{
    goto loc_80173650;
}

loc_801735F4:
{
}

loc_801735F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(27))) {
        goto loc_8017363C;
    }
}

loc_801735FC:
{
    goto loc_80173624;
}

loc_80173604:
{
    r7 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = 4102;
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173650;
}

loc_80173624:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 587202560;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173650;
}

loc_8017363C:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 603979776;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_80173650:
{
    r0 = MemoryInline::FlatRead32((r5 + 1520));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(21));
}

loc_80173658:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80173684;
    }
}

loc_8017365C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801736D4;
    }
}

loc_80173660:
{
}

loc_80173664:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_80173674;
    }
}

loc_80173668:
{
}

loc_8017366C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80173684;
    }
}

loc_80173670:
{
    goto loc_801736D4;
}

loc_80173674:
{
}

loc_80173678:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(17))) {
        goto loc_801736C8;
    }
}

loc_8017367C:
{
    goto loc_8017369C;
}

loc_80173684:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 1728053248;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_801736D4;
}

loc_8017369C:
{
    r8 = MemoryInline::FlatRead32((r5 + 1524));
    r6 = -872349696;
    r7 = 8;
    r0 = 32;
    r8 = (r8 & -241);
    MemoryInline::FlatWrite32((r5 + 1524), r8);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r7));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_801736D4;
}

loc_801736C8:
{
    r6 = MemoryInline::FlatRead32((r13 + -25716));
    r0 = 0;
    MemoryInline::FlatWrite16((r6 + 6), static_cast<uint16_t>(r0));
}

loc_801736D4:
{
}

loc_801736D8:
{
    MemoryInline::FlatWrite32((r5 + 1516), r3);
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(35))) {
        goto loc_80173AF8;
    }
}

loc_801736E0:
{
    r6 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r6 + -22860);
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801736F8u:
        goto loc_801736F8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_801736F8:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 627;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_80173AF8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(22));
}

loc_80173AFC:
{
    MemoryInline::FlatWrite32((r5 + 1520), r4);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80173DEC;
    }
}

loc_80173B04:
{
    r3 = 0x80290000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + -22952);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80173B1Cu:
        goto loc_80173B1C;
        break;
    case 0x80173B38u:
        goto loc_80173B38;
        break;
    case 0x80173B54u:
        goto loc_80173B54;
        break;
    case 0x80173B70u:
        goto loc_80173B70;
        break;
    case 0x80173BC4u:
        goto loc_80173BC4;
        break;
    case 0x80173BE0u:
        goto loc_80173BE0;
        break;
    case 0x80173BFCu:
        goto loc_80173BFC;
        break;
    case 0x80173C18u:
        goto loc_80173C18;
        break;
    case 0x80173B8Cu:
        goto loc_80173B8C;
        break;
    case 0x80173C34u:
        goto loc_80173C34;
        break;
    case 0x80173C64u:
        goto loc_80173C64;
        break;
    case 0x80173C94u:
        goto loc_80173C94;
        break;
    case 0x80173CC4u:
        goto loc_80173CC4;
        break;
    case 0x80173CF4u:
        goto loc_80173CF4;
        break;
    case 0x80173D24u:
        goto loc_80173D24;
        break;
    case 0x80173D54u:
        goto loc_80173D54;
        break;
    case 0x80173D84u:
        goto loc_80173D84;
        break;
    case 0x80173DB0u:
        goto loc_80173DB0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80173B1C:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 66);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173B38:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 132);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173B54:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 99);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173B70:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 297);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173B8C:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 594);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173BC4:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 331);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173BE0:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 397);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173BFC:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 463);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173C18:
{
    r4 = -872349696;
    r0 = 97;
    r3 = 1728053248;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + 529);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173C34:
{
    r4 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 2;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4_mrot_1 = (r4_rot_1 & 240);
    r4_mdest_1 = (r4 & -241);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r3 = -872349696;
    MemoryInline::FlatWrite32((r5 + 1524), r4);
    r4 = 8;
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173C64:
{
    r4 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 3;
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4_mrot_2 = (r4_rot_2 & 240);
    r4_mdest_2 = (r4 & -241);
    r4 = (r4_mdest_2 | r4_mrot_2);
    r3 = -872349696;
    MemoryInline::FlatWrite32((r5 + 1524), r4);
    r4 = 8;
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173C94:
{
    r4 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 4;
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4_mrot_3 = (r4_rot_3 & 240);
    r4_mdest_3 = (r4 & -241);
    r4 = (r4_mdest_3 | r4_mrot_3);
    r3 = -872349696;
    MemoryInline::FlatWrite32((r5 + 1524), r4);
    r4 = 8;
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173CC4:
{
    r4 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 5;
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4_mrot_4 = (r4_rot_4 & 240);
    r4_mdest_4 = (r4 & -241);
    r4 = (r4_mdest_4 | r4_mrot_4);
    r3 = -872349696;
    MemoryInline::FlatWrite32((r5 + 1524), r4);
    r4 = 8;
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173CF4:
{
    r4 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 6;
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4_mrot_5 = (r4_rot_5 & 240);
    r4_mdest_5 = (r4 & -241);
    r4 = (r4_mdest_5 | r4_mrot_5);
    r3 = -872349696;
    MemoryInline::FlatWrite32((r5 + 1524), r4);
    r4 = 8;
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173D24:
{
    r4 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 7;
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4_mrot_6 = (r4_rot_6 & 240);
    r4_mdest_6 = (r4 & -241);
    r4 = (r4_mdest_6 | r4_mrot_6);
    r3 = -872349696;
    MemoryInline::FlatWrite32((r5 + 1524), r4);
    r4 = 8;
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173D54:
{
    r4 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 9;
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4_mrot_7 = (r4_rot_7 & 240);
    r4_mdest_7 = (r4 & -241);
    r4 = (r4_mdest_7 | r4_mrot_7);
    r3 = -872349696;
    MemoryInline::FlatWrite32((r5 + 1524), r4);
    r4 = 8;
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173D84:
{
    r4 = 8;
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0_mrot_1 = (r0_rot_4 & 240);
    r0_mdest_1 = (r0 & -241);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r3 = -872349696;
    MemoryInline::FlatWrite32((r5 + 1524), r0);
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_80173DEC;
}

loc_80173DB0:
{
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    r0 = 2;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
}

loc_80173DEC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FD gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801735CC func_801735CC preserves=true fpr_mask=0x00000000
