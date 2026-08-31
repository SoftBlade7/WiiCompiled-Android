#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016DC68(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_mdest_22 = 0;
    uint32_t r0_mdest_23 = 0;
    uint32_t r0_mdest_24 = 0;
    uint32_t r0_mdest_25 = 0;
    uint32_t r0_mdest_26 = 0;
    uint32_t r0_mdest_27 = 0;
    uint32_t r0_mdest_28 = 0;
    uint32_t r0_mdest_29 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_30 = 0;
    uint32_t r0_mdest_31 = 0;
    uint32_t r0_mdest_32 = 0;
    uint32_t r0_mdest_33 = 0;
    uint32_t r0_mdest_34 = 0;
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
    uint32_t r0_mrot_22 = 0;
    uint32_t r0_mrot_23 = 0;
    uint32_t r0_mrot_24 = 0;
    uint32_t r0_mrot_25 = 0;
    uint32_t r0_mrot_26 = 0;
    uint32_t r0_mrot_27 = 0;
    uint32_t r0_mrot_28 = 0;
    uint32_t r0_mrot_29 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_30 = 0;
    uint32_t r0_mrot_31 = 0;
    uint32_t r0_mrot_32 = 0;
    uint32_t r0_mrot_33 = 0;
    uint32_t r0_mrot_34 = 0;
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
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8016DC68;

loc_8016DC68:
{
    r0 = (r4 + -9);
    r8 = MemoryInline::FlatRead32((r2 + -26840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_8016DC74:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r8 = (r8 + r4);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8016DDD8;
    }
}

loc_8016DC80:
{
    r4 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -24312);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8016DC98u:
        goto loc_8016DC98;
        break;
    case 0x8016DCB0u:
        goto loc_8016DCB0;
        break;
    case 0x8016DCECu:
        goto loc_8016DCEC;
        break;
    case 0x8016DD00u:
        goto loc_8016DD00;
        break;
    case 0x8016DD14u:
        goto loc_8016DD14;
        break;
    case 0x8016DD2Cu:
        goto loc_8016DD2C;
        break;
    case 0x8016DD44u:
        goto loc_8016DD44;
        break;
    case 0x8016DD5Cu:
        goto loc_8016DD5C;
        break;
    case 0x8016DD74u:
        goto loc_8016DD74;
        break;
    case 0x8016DD94u:
        goto loc_8016DD94;
        break;
    case 0x8016DDACu:
        goto loc_8016DDAC;
        break;
    case 0x8016DDC4u:
        goto loc_8016DDC4;
        break;
    case 0x8016DDD8u:
        goto loc_8016DDD8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8016DC98:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_mrot_1 = (r5 & 1);
    r0_mdest_1 = (r0 & -2);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0_mrot_2 = (r0_rot_2 & 14);
    r0_mdest_2 = (r0 & -15);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0_mrot_3 = (r0_rot_3 & 496);
    r0_mdest_3 = (r0 & -497);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_8016DDD8;
}

loc_8016DCB0:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(10));
    r0_mrot_4 = (r0_rot_4 & 7168);
    r0_mdest_4 = (r0 & -7169);
    r0 = (r0_mdest_4 | r0_mrot_4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8016DCBC:
{
    MemoryInline::FlatWrite32((r8 + 28), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016DCD8;
    }
}

loc_8016DCC4:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0 = (r0 | 512);
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_8016DDD8;
}

loc_8016DCD8:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r0_mrot_5 = (r0_rot_5 & 512);
    r0_mdest_5 = (r0 & -513);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_8016DDD8;
}

loc_8016DCEC:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(13));
    r0_mrot_6 = (r0_rot_6 & 8192);
    r0_mdest_6 = (r0 & -8193);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r0_mrot_7 = (r0_rot_7 & 114688);
    r0_mdest_7 = (r0 & -114689);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_8016DDD8;
}

loc_8016DD00:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(17));
    r0_mrot_8 = (r0_rot_8 & 131072);
    r0_mdest_8 = (r0 & -131073);
    r0 = (r0_mdest_8 | r0_mrot_8);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0_mrot_9 = (r0_rot_9 & 1835008);
    r0_mdest_9 = (r0 & -1835009);
    r0 = (r0_mdest_9 | r0_mrot_9);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_8016DDD8;
}

loc_8016DD14:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(21));
    r0_mrot_10 = (r0_rot_10 & 2097152);
    r0_mdest_10 = (r0 & -2097153);
    r0 = (r0_mdest_10 | r0_mrot_10);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(22));
    r0_mrot_11 = (r0_rot_11 & 29360128);
    r0_mdest_11 = (r0 & -29360129);
    r0 = (r0_mdest_11 | r0_mrot_11);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(25));
    r0_mrot_12 = (r0_rot_12 & 1040187392);
    r0_mdest_12 = (r0 & -1040187393);
    r0 = (r0_mdest_12 | r0_mrot_12);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_8016DDD8;
}

loc_8016DD2C:
{
    r0 = MemoryInline::FlatRead32((r8 + 60));
    r0_mrot_13 = (r5 & 1);
    r0_mdest_13 = (r0 & -2);
    r0 = (r0_mdest_13 | r0_mrot_13);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0_mrot_14 = (r0_rot_13 & 14);
    r0_mdest_14 = (r0 & -15);
    r0 = (r0_mdest_14 | r0_mrot_14);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0_mrot_15 = (r0_rot_14 & 496);
    r0_mdest_15 = (r0 & -497);
    r0 = (r0_mdest_15 | r0_mrot_15);
    MemoryInline::FlatWrite32((r8 + 60), r0);
    goto loc_8016DDD8;
}

loc_8016DD44:
{
    r0 = MemoryInline::FlatRead32((r8 + 60));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r0_mrot_16 = (r0_rot_15 & 512);
    r0_mdest_16 = (r0 & -513);
    r0 = (r0_mdest_16 | r0_mrot_16);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(10));
    r0_mrot_17 = (r0_rot_16 & 7168);
    r0_mdest_17 = (r0 & -7169);
    r0 = (r0_mdest_17 | r0_mrot_17);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(13));
    r0_mrot_18 = (r0_rot_17 & 253952);
    r0_mdest_18 = (r0 & -253953);
    r0 = (r0_mdest_18 | r0_mrot_18);
    MemoryInline::FlatWrite32((r8 + 60), r0);
    goto loc_8016DDD8;
}

loc_8016DD5C:
{
    r0 = MemoryInline::FlatRead32((r8 + 60));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(18));
    r0_mrot_19 = (r0_rot_18 & 262144);
    r0_mdest_19 = (r0 & -262145);
    r0 = (r0_mdest_19 | r0_mrot_19);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(19));
    r0_mrot_20 = (r0_rot_19 & 3670016);
    r0_mdest_20 = (r0 & -3670017);
    r0 = (r0_mdest_20 | r0_mrot_20);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(22));
    r0_mrot_21 = (r0_rot_20 & 130023424);
    r0_mdest_21 = (r0 & -130023425);
    r0 = (r0_mdest_21 | r0_mrot_21);
    MemoryInline::FlatWrite32((r8 + 60), r0);
    goto loc_8016DDD8;
}

loc_8016DD74:
{
    r0 = MemoryInline::FlatRead32((r8 + 60));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r0_mrot_22 = (r0_rot_21 & 134217728);
    r0_mdest_22 = (r0 & -134217729);
    r0 = (r0_mdest_22 | r0_mrot_22);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r0_mrot_23 = (r0_rot_22 & 1879048192);
    r0_mdest_23 = (r0 & -1879048193);
    r0 = (r0_mdest_23 | r0_mrot_23);
    MemoryInline::FlatWrite32((r8 + 60), r0);
    r0 = MemoryInline::FlatRead32((r8 + 92));
    r0_mrot_24 = (r7 & 31);
    r0_mdest_24 = (r0 & -32);
    r0 = (r0_mdest_24 | r0_mrot_24);
    MemoryInline::FlatWrite32((r8 + 92), r0);
    goto loc_8016DDD8;
}

loc_8016DD94:
{
    r0 = MemoryInline::FlatRead32((r8 + 92));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0_mrot_25 = (r0_rot_23 & 32);
    r0_mdest_25 = (r0 & -33);
    r0 = (r0_mdest_25 | r0_mrot_25);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r0_mrot_26 = (r0_rot_24 & 448);
    r0_mdest_26 = (r0 & -449);
    r0 = (r0_mdest_26 | r0_mrot_26);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r0_mrot_27 = (r0_rot_25 & 15872);
    r0_mdest_27 = (r0 & -15873);
    r0 = (r0_mdest_27 | r0_mrot_27);
    MemoryInline::FlatWrite32((r8 + 92), r0);
    goto loc_8016DDD8;
}

loc_8016DDAC:
{
    r0 = MemoryInline::FlatRead32((r8 + 92));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r0_mrot_28 = (r0_rot_26 & 16384);
    r0_mdest_28 = (r0 & -16385);
    r0 = (r0_mdest_28 | r0_mrot_28);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(15));
    r0_mrot_29 = (r0_rot_27 & 229376);
    r0_mdest_29 = (r0 & -229377);
    r0 = (r0_mdest_29 | r0_mrot_29);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(18));
    r0_mrot_30 = (r0_rot_28 & 8126464);
    r0_mdest_30 = (r0 & -8126465);
    r0 = (r0_mdest_30 | r0_mrot_30);
    MemoryInline::FlatWrite32((r8 + 92), r0);
    goto loc_8016DDD8;
}

loc_8016DDC4:
{
    r0 = MemoryInline::FlatRead32((r8 + 92));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(23));
    r0_mrot_31 = (r0_rot_29 & 8388608);
    r0_mdest_31 = (r0 & -8388609);
    r0 = (r0_mdest_31 | r0_mrot_31);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0_mrot_32 = (r0_rot_30 & 117440512);
    r0_mdest_32 = (r0 & -117440513);
    r0 = (r0_mdest_32 | r0_mrot_32);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r0_mrot_33 = (r0_rot_31 & -134217728);
    r0_mdest_33 = (r0 & 134217727);
    r0 = (r0_mdest_33 | r0_mrot_33);
    MemoryInline::FlatWrite32((r8 + 92), r0);
}

loc_8016DDD8:
{
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = (r3 & 255);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r3 = (r4 | 16);
    MemoryInline::FlatWrite32((r5 + 1532), r3);
    r3 = MemoryInline::FlatRead8((r5 + 1531));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r5 + 1531), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FD gpr_write=0x00000139 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016DC68 func_8016DC68 preserves=true fpr_mask=0x00000000
