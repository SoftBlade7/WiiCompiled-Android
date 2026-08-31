#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D608(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_10 = 0;
    uint32_t r6_mdest_11 = 0;
    uint32_t r6_mdest_12 = 0;
    uint32_t r6_mdest_13 = 0;
    uint32_t r6_mdest_14 = 0;
    uint32_t r6_mdest_15 = 0;
    uint32_t r6_mdest_16 = 0;
    uint32_t r6_mdest_17 = 0;
    uint32_t r6_mdest_18 = 0;
    uint32_t r6_mdest_19 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_20 = 0;
    uint32_t r6_mdest_21 = 0;
    uint32_t r6_mdest_22 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mdest_5 = 0;
    uint32_t r6_mdest_6 = 0;
    uint32_t r6_mdest_7 = 0;
    uint32_t r6_mdest_8 = 0;
    uint32_t r6_mdest_9 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_10 = 0;
    uint32_t r6_mrot_11 = 0;
    uint32_t r6_mrot_12 = 0;
    uint32_t r6_mrot_13 = 0;
    uint32_t r6_mrot_14 = 0;
    uint32_t r6_mrot_15 = 0;
    uint32_t r6_mrot_16 = 0;
    uint32_t r6_mrot_17 = 0;
    uint32_t r6_mrot_18 = 0;
    uint32_t r6_mrot_19 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_20 = 0;
    uint32_t r6_mrot_21 = 0;
    uint32_t r6_mrot_22 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_mrot_5 = 0;
    uint32_t r6_mrot_6 = 0;
    uint32_t r6_mrot_7 = 0;
    uint32_t r6_mrot_8 = 0;
    uint32_t r6_mrot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_17 = 0;
    uint32_t r6_rot_18 = 0;
    uint32_t r6_rot_19 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_20 = 0;
    uint32_t r6_rot_21 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8016D608;

loc_8016D608:
{
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r7 = 0;
    r8 = 1;
    r4 = 0x80290000u;
    goto loc_8016D7C0;
}

loc_8016D61C:
{
    r6 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8016D628:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(25))) {
        goto loc_8016D7BC;
    }
}

loc_8016D62C:
{
    r9 = (r4 + -24520);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r9_addr_2 = (r9 + r6);
    r9 = MemoryInline::FlatRead32(r9_addr_2);
    ctr = r9;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8016D640u:
        goto loc_8016D640;
        break;
    case 0x8016D650u:
        goto loc_8016D650;
        break;
    case 0x8016D660u:
        goto loc_8016D660;
        break;
    case 0x8016D670u:
        goto loc_8016D670;
        break;
    case 0x8016D680u:
        goto loc_8016D680;
        break;
    case 0x8016D690u:
        goto loc_8016D690;
        break;
    case 0x8016D6A0u:
        goto loc_8016D6A0;
        break;
    case 0x8016D6B0u:
        goto loc_8016D6B0;
        break;
    case 0x8016D6C0u:
        goto loc_8016D6C0;
        break;
    case 0x8016D6D0u:
        goto loc_8016D6D0;
        break;
    case 0x8016D6E0u:
        goto loc_8016D6E0;
        break;
    case 0x8016D720u:
        goto loc_8016D720;
        break;
    case 0x8016D730u:
        goto loc_8016D730;
        break;
    case 0x8016D740u:
        goto loc_8016D740;
        break;
    case 0x8016D750u:
        goto loc_8016D750;
        break;
    case 0x8016D760u:
        goto loc_8016D760;
        break;
    case 0x8016D770u:
        goto loc_8016D770;
        break;
    case 0x8016D780u:
        goto loc_8016D780;
        break;
    case 0x8016D790u:
        goto loc_8016D790;
        break;
    case 0x8016D7A0u:
        goto loc_8016D7A0;
        break;
    case 0x8016D7B0u:
        goto loc_8016D7B0;
        break;
    case 0x8016D7BCu:
        goto loc_8016D7BC;
        break;
    case 0x8016D700u:
        goto loc_8016D700;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8016D640:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_mrot_2 = (r0 & 1);
    r6_mdest_2 = (r6 & -2);
    r6 = (r6_mdest_2 | r6_mrot_2);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D650:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6_mrot_3 = (r6_rot_3 & 2);
    r6_mdest_3 = (r6 & -3);
    r6 = (r6_mdest_3 | r6_mrot_3);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D660:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6_mrot_4 = (r6_rot_4 & 4);
    r6_mdest_4 = (r6 & -5);
    r6 = (r6_mdest_4 | r6_mrot_4);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D670:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r6_mrot_5 = (r6_rot_5 & 8);
    r6_mdest_5 = (r6 & -9);
    r6 = (r6_mdest_5 | r6_mrot_5);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D680:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r6_mrot_6 = (r6_rot_6 & 16);
    r6_mdest_6 = (r6 & -17);
    r6 = (r6_mdest_6 | r6_mrot_6);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D690:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r6_mrot_7 = (r6_rot_7 & 32);
    r6_mdest_7 = (r6 & -33);
    r6 = (r6_mdest_7 | r6_mrot_7);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D6A0:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r6_mrot_8 = (r6_rot_8 & 64);
    r6_mdest_8 = (r6 & -65);
    r6 = (r6_mdest_8 | r6_mrot_8);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D6B0:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r6_mrot_9 = (r6_rot_9 & 128);
    r6_mdest_9 = (r6 & -129);
    r6 = (r6_mdest_9 | r6_mrot_9);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D6C0:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6_mrot_10 = (r6_rot_10 & 256);
    r6_mdest_10 = (r6 & -257);
    r6 = (r6_mdest_10 | r6_mrot_10);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D6D0:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r6_mrot_11 = (r6_rot_11 & 1536);
    r6_mdest_11 = (r6 & -1537);
    r6 = (r6_mdest_11 | r6_mrot_11);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D6E0:
{
}

loc_8016D6E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016D6F8;
    }
}

loc_8016D6E8:
{
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32((r5 + 1312), r0);
    goto loc_8016D7BC;
}

loc_8016D6F8:
{
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r7));
    goto loc_8016D7BC;
}

loc_8016D700:
{
}

loc_8016D704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016D718;
    }
}

loc_8016D708:
{
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32((r5 + 1312), r0);
    goto loc_8016D7BC;
}

loc_8016D718:
{
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r7));
    goto loc_8016D7BC;
}

loc_8016D720:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r6_mrot_12 = (r6_rot_12 & 24576);
    r6_mdest_12 = (r6 & -24577);
    r6 = (r6_mdest_12 | r6_mrot_12);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D730:
{
    r6 = MemoryInline::FlatRead32((r5 + 20));
    r6_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r6_mrot_13 = (r6_rot_13 & 98304);
    r6_mdest_13 = (r6 & -98305);
    r6 = (r6_mdest_13 | r6_mrot_13);
    MemoryInline::FlatWrite32((r5 + 20), r6);
    goto loc_8016D7BC;
}

loc_8016D740:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_mrot_14 = (r0 & 3);
    r6_mdest_14 = (r6 & -4);
    r6 = (r6_mdest_14 | r6_mrot_14);
    MemoryInline::FlatWrite32((r5 + 24), r6);
    goto loc_8016D7BC;
}

loc_8016D750:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6_mrot_15 = (r6_rot_14 & 12);
    r6_mdest_15 = (r6 & -13);
    r6 = (r6_mdest_15 | r6_mrot_15);
    MemoryInline::FlatWrite32((r5 + 24), r6);
    goto loc_8016D7BC;
}

loc_8016D760:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r6_mrot_16 = (r6_rot_15 & 48);
    r6_mdest_16 = (r6 & -49);
    r6 = (r6_mdest_16 | r6_mrot_16);
    MemoryInline::FlatWrite32((r5 + 24), r6);
    goto loc_8016D7BC;
}

loc_8016D770:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r6_mrot_17 = (r6_rot_16 & 192);
    r6_mdest_17 = (r6 & -193);
    r6 = (r6_mdest_17 | r6_mrot_17);
    MemoryInline::FlatWrite32((r5 + 24), r6);
    goto loc_8016D7BC;
}

loc_8016D780:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6_mrot_18 = (r6_rot_17 & 768);
    r6_mdest_18 = (r6 & -769);
    r6 = (r6_mdest_18 | r6_mrot_18);
    MemoryInline::FlatWrite32((r5 + 24), r6);
    goto loc_8016D7BC;
}

loc_8016D790:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r6_mrot_19 = (r6_rot_18 & 3072);
    r6_mdest_19 = (r6 & -3073);
    r6 = (r6_mdest_19 | r6_mrot_19);
    MemoryInline::FlatWrite32((r5 + 24), r6);
    goto loc_8016D7BC;
}

loc_8016D7A0:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r6_mrot_20 = (r6_rot_19 & 12288);
    r6_mdest_20 = (r6 & -12289);
    r6 = (r6_mdest_20 | r6_mrot_20);
    MemoryInline::FlatWrite32((r5 + 24), r6);
    goto loc_8016D7BC;
}

loc_8016D7B0:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r6_mrot_21 = (r6_rot_20 & 49152);
    r6_mdest_21 = (r6 & -49153);
    r6 = (r6_mdest_21 | r6_mrot_21);
    MemoryInline::FlatWrite32((r5 + 24), r6);
}

loc_8016D7BC:
{
    r3 = (r3 + 8);
}

loc_8016D7C0:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8016D7C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8016D61C;
    }
}

loc_8016D7CC:
{
    r0 = MemoryInline::FlatRead8((r5 + 1316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D7D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016D7E4;
    }
}

loc_8016D7D8:
{
    r0 = MemoryInline::FlatRead8((r5 + 1317));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D7E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016D7F8;
    }
}

loc_8016D7E4:
{
    r0 = MemoryInline::FlatRead32((r5 + 1312));
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r3_mrot_1 = (r3_rot_1 & 6144);
    r3_mdest_1 = (r3 & -6145);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r5 + 20), r3);
    goto loc_8016D804;
}

loc_8016D7F8:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r0 & -6145);
    MemoryInline::FlatWrite32((r5 + 20), r0);
}

loc_8016D804:
{
    r0 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FD gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016D608 func_8016D608 preserves=true fpr_mask=0x00000000
