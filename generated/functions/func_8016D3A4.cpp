#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D3A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_13 = 0;
    uint32_t r0_mdest_14 = 0;
    uint32_t r0_mdest_15 = 0;
    uint32_t r0_mdest_16 = 0;
    uint32_t r0_mdest_17 = 0;
    uint32_t r0_mdest_18 = 0;
    uint32_t r0_mdest_19 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_20 = 0;
    uint32_t r0_mdest_21 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_12 = 0;
    uint32_t r0_mrot_13 = 0;
    uint32_t r0_mrot_14 = 0;
    uint32_t r0_mrot_15 = 0;
    uint32_t r0_mrot_16 = 0;
    uint32_t r0_mrot_17 = 0;
    uint32_t r0_mrot_18 = 0;
    uint32_t r0_mrot_19 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_20 = 0;
    uint32_t r0_mrot_21 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8016D3A4;

loc_8016D3A4:
{
}

loc_8016D3A8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(25))) {
        goto loc_8016D5B8;
    }
}

loc_8016D3AC:
{
    r5 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + -24624);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8016D3C4u:
        goto loc_8016D3C4;
        break;
    case 0x8016D3D8u:
        goto loc_8016D3D8;
        break;
    case 0x8016D3ECu:
        goto loc_8016D3EC;
        break;
    case 0x8016D400u:
        goto loc_8016D400;
        break;
    case 0x8016D414u:
        goto loc_8016D414;
        break;
    case 0x8016D428u:
        goto loc_8016D428;
        break;
    case 0x8016D43Cu:
        goto loc_8016D43C;
        break;
    case 0x8016D450u:
        goto loc_8016D450;
        break;
    case 0x8016D464u:
        goto loc_8016D464;
        break;
    case 0x8016D478u:
        goto loc_8016D478;
        break;
    case 0x8016D48Cu:
        goto loc_8016D48C;
        break;
    case 0x8016D4F4u:
        goto loc_8016D4F4;
        break;
    case 0x8016D508u:
        goto loc_8016D508;
        break;
    case 0x8016D51Cu:
        goto loc_8016D51C;
        break;
    case 0x8016D530u:
        goto loc_8016D530;
        break;
    case 0x8016D544u:
        goto loc_8016D544;
        break;
    case 0x8016D558u:
        goto loc_8016D558;
        break;
    case 0x8016D56Cu:
        goto loc_8016D56C;
        break;
    case 0x8016D580u:
        goto loc_8016D580;
        break;
    case 0x8016D594u:
        goto loc_8016D594;
        break;
    case 0x8016D5A8u:
        goto loc_8016D5A8;
        break;
    case 0x8016D5B8u:
        goto loc_8016D5B8;
        break;
    case 0x8016D4C0u:
        goto loc_8016D4C0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8016D3C4:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_mrot_1 = (r4 & 1);
    r0_mdest_1 = (r0 & -2);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D3D8:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0_mrot_2 = (r0_rot_2 & 2);
    r0_mdest_2 = (r0 & -3);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D3EC:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_3 = (r0_rot_3 & 4);
    r0_mdest_3 = (r0 & -5);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D400:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0_mrot_4 = (r0_rot_4 & 8);
    r0_mdest_4 = (r0 & -9);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D414:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0_mrot_5 = (r0_rot_5 & 16);
    r0_mdest_5 = (r0 & -17);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D428:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0_mrot_6 = (r0_rot_6 & 32);
    r0_mdest_6 = (r0 & -33);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D43C:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0_mrot_7 = (r0_rot_7 & 64);
    r0_mdest_7 = (r0 & -65);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D450:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r0_mrot_8 = (r0_rot_8 & 128);
    r0_mdest_8 = (r0 & -129);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D464:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_9 = (r0_rot_9 & 256);
    r0_mdest_9 = (r0 & -257);
    r0 = (r0_mdest_9 | r0_mrot_9);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D478:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0_mrot_10 = (r0_rot_10 & 1536);
    r0_mdest_10 = (r0 & -1537);
    r0 = (r0_mdest_10 | r0_mrot_10);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D48C:
{
}

loc_8016D490:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8016D4B0;
    }
}

loc_8016D494:
{
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r5 + 1312), r4);
    goto loc_8016D5B8;
}

loc_8016D4B0:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1316), static_cast<uint8_t>(r0));
    goto loc_8016D5B8;
}

loc_8016D4C0:
{
}

loc_8016D4C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8016D4E4;
    }
}

loc_8016D4C8:
{
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r5 + 1312), r4);
    goto loc_8016D5B8;
}

loc_8016D4E4:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1317), static_cast<uint8_t>(r0));
    goto loc_8016D5B8;
}

loc_8016D4F4:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r0_mrot_11 = (r0_rot_11 & 24576);
    r0_mdest_11 = (r0 & -24577);
    r0 = (r0_mdest_11 | r0_mrot_11);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D508:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r0_mrot_12 = (r0_rot_12 & 98304);
    r0_mdest_12 = (r0 & -98305);
    r0 = (r0_mdest_12 | r0_mrot_12);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8016D5B8;
}

loc_8016D51C:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_mrot_13 = (r4 & 3);
    r0_mdest_13 = (r0 & -4);
    r0 = (r0_mdest_13 | r0_mrot_13);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_8016D5B8;
}

loc_8016D530:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_14 = (r0_rot_13 & 12);
    r0_mdest_14 = (r0 & -13);
    r0 = (r0_mdest_14 | r0_mrot_14);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_8016D5B8;
}

loc_8016D544:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0_mrot_15 = (r0_rot_14 & 48);
    r0_mdest_15 = (r0 & -49);
    r0 = (r0_mdest_15 | r0_mrot_15);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_8016D5B8;
}

loc_8016D558:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0_mrot_16 = (r0_rot_15 & 192);
    r0_mdest_16 = (r0 & -193);
    r0 = (r0_mdest_16 | r0_mrot_16);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_8016D5B8;
}

loc_8016D56C:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_17 = (r0_rot_16 & 768);
    r0_mdest_17 = (r0 & -769);
    r0 = (r0_mdest_17 | r0_mrot_17);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_8016D5B8;
}

loc_8016D580:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0_mrot_18 = (r0_rot_17 & 3072);
    r0_mdest_18 = (r0 & -3073);
    r0 = (r0_mdest_18 | r0_mrot_18);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_8016D5B8;
}

loc_8016D594:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r0_mrot_19 = (r0_rot_18 & 12288);
    r0_mdest_19 = (r0 & -12289);
    r0 = (r0_mdest_19 | r0_mrot_19);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_8016D5B8;
}

loc_8016D5A8:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r0_mrot_20 = (r0_rot_19 & 49152);
    r0_mdest_20 = (r0 & -49153);
    r0 = (r0_mdest_20 | r0_mrot_20);
    MemoryInline::FlatWrite32((r3 + 24), r0);
}

loc_8016D5B8:
{
    r4 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead8((r4 + 1316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D5C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016D5D4;
    }
}

loc_8016D5C8:
{
    r0 = MemoryInline::FlatRead8((r4 + 1317));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D5D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016D5EC;
    }
}

loc_8016D5D4:
{
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r5 + 1312));
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r3_mrot_1 = (r3_rot_1 & 6144);
    r3_mdest_1 = (r3 & -6145);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r5 + 20), r3);
    goto loc_8016D5F8;
}

loc_8016D5EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & -6145);
    MemoryInline::FlatWrite32((r4 + 20), r0);
}

loc_8016D5F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 1532));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r4 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016D3A4 func_8016D3A4 preserves=true fpr_mask=0x00000000
