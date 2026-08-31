#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016E424(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_10 = 0;
    uint32_t r11_mdest_11 = 0;
    uint32_t r11_mdest_12 = 0;
    uint32_t r11_mdest_13 = 0;
    uint32_t r11_mdest_14 = 0;
    uint32_t r11_mdest_15 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mdest_3 = 0;
    uint32_t r11_mdest_4 = 0;
    uint32_t r11_mdest_5 = 0;
    uint32_t r11_mdest_6 = 0;
    uint32_t r11_mdest_7 = 0;
    uint32_t r11_mdest_8 = 0;
    uint32_t r11_mdest_9 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_10 = 0;
    uint32_t r11_mrot_11 = 0;
    uint32_t r11_mrot_12 = 0;
    uint32_t r11_mrot_13 = 0;
    uint32_t r11_mrot_14 = 0;
    uint32_t r11_mrot_15 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_mrot_3 = 0;
    uint32_t r11_mrot_4 = 0;
    uint32_t r11_mrot_5 = 0;
    uint32_t r11_mrot_6 = 0;
    uint32_t r11_mrot_7 = 0;
    uint32_t r11_mrot_8 = 0;
    uint32_t r11_mrot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_10 = 0;
    uint32_t r11_rot_11 = 0;
    uint32_t r11_rot_12 = 0;
    uint32_t r11_rot_13 = 0;
    uint32_t r11_rot_14 = 0;
    uint32_t r11_rot_15 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r11_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8016E424;

loc_8016E424:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8016E428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016E44C;
    }
}

loc_8016E42C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016E43C;
    }
}

loc_8016E430:
{
}

loc_8016E434:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8016E45C;
    }
}

loc_8016E438:
{
    goto loc_8016E4C4;
}

loc_8016E43C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(10));
}

loc_8016E440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016E498;
    }
}

loc_8016E444:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016E4C4;
    }
}

loc_8016E448:
{
    goto loc_8016E470;
}

loc_8016E44C:
{
    r11 = 0;
    r11_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r11_mrot_13 = (r11_rot_13 & 4);
    r11_mdest_13 = (r11 & -5);
    r11 = (r11_mdest_13 | r11_mrot_13);
    r11_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(7));
    r11_mrot_14 = (r11_rot_14 & 3968);
    r11_mdest_14 = (r11 & -3969);
    r11 = (r11_mdest_14 | r11_mrot_14);
    goto loc_8016E4C4;
}

loc_8016E45C:
{
    r0 = 0;
    r11 = (r0 | 2);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r11_mrot_1 = (r11_rot_1 & 4);
    r11_mdest_1 = (r11 & -5);
    r11 = (r11_mdest_1 | r11_mrot_1);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(7));
    r11_mrot_2 = (r11_rot_2 & 3968);
    r11_mdest_2 = (r11 & -3969);
    r11 = (r11_mdest_2 | r11_mrot_2);
    goto loc_8016E4C4;
}

loc_8016E470:
{
    r9 = 1;
    r5 = (r5 + -12);
    r11 = 0;
    r0 = (r4 + -2);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r11_mrot_3 = (r11_rot_3 & 4);
    r11_mdest_3 = (r11 & -5);
    r11 = (r11_mdest_3 | r11_mrot_3);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(4));
    r11_mrot_4 = (r11_rot_4 & 112);
    r11_mdest_4 = (r11 & -113);
    r11 = (r11_mdest_4 | r11_mrot_4);
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(7));
    r11_mrot_5 = (r11_rot_5 & 3968);
    r11_mdest_5 = (r11 & -3969);
    r11 = (r11_mdest_5 | r11_mrot_5);
    r11_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r11_mrot_6 = (r11_rot_6 & 28672);
    r11_mdest_6 = (r11 & -28673);
    r11 = (r11_mdest_6 | r11_mrot_6);
    r11_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r11_mrot_7 = (r11_rot_7 & 229376);
    r11_mdest_7 = (r11 & -229377);
    r11 = (r11_mdest_7 | r11_mrot_7);
    goto loc_8016E4C4;
}

loc_8016E498:
{
}

loc_8016E49C:
{
    r11 = 0;
    r11_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r11_mrot_8 = (r11_rot_8 & 4);
    r11_mdest_8 = (r11 & -5);
    r11 = (r11_mdest_8 | r11_mrot_8);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(19))) {
        goto loc_8016E4B4;
    }
}

loc_8016E4A8:
{
    r0 = 2;
    r11_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r11_mrot_9 = (r11_rot_9 & 112);
    r11_mdest_9 = (r11 & -113);
    r11 = (r11_mdest_9 | r11_mrot_9);
    goto loc_8016E4BC;
}

loc_8016E4B4:
{
    r0 = 3;
    r11_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r11_mrot_10 = (r11_rot_10 & 112);
    r11_mdest_10 = (r11 & -113);
    r11 = (r11_mdest_10 | r11_mrot_10);
}

loc_8016E4BC:
{
    r0 = 2;
    r11_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r11_mrot_12 = (r11_rot_12 & 3968);
    r11_mdest_12 = (r11 & -3969);
    r11 = (r11_mdest_12 | r11_mrot_12);
}

loc_8016E4C4:
{
    r10 = MemoryInline::FlatRead32((r2 + -26840));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r9 = (r9_rot_0 & -4);
    r0 = (r8 + -64);
    r4 = 0;
    r8 = (r10 + r9);
    r5 = 65536;
    MemoryInline::FlatWrite32((r8 + 200), r11);
    r4_mrot_0 = (r0 & 63);
    r4_mdest_0 = (r4 & -64);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
}

loc_8016E4EC:
{
    r5 = MemoryInline::FlatRead32((r10 + 1532));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r4_mrot_1 = (r4_rot_0 & 256);
    r4_mdest_1 = (r4 & -257);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r10 + 1532), r0);
    MemoryInline::FlatWrite32((r8 + 232), r4);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8016E588;
    }
}

loc_8016E504:
{
    r3 = 0x80290000u;
    r3 = (r3 + -24108);
    r3_addr_0 = (r3 + r9);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8016E518u:
        goto loc_8016E518;
        break;
    case 0x8016E528u:
        goto loc_8016E528;
        break;
    case 0x8016E538u:
        goto loc_8016E538;
        break;
    case 0x8016E548u:
        goto loc_8016E548;
        break;
    case 0x8016E558u:
        goto loc_8016E558;
        break;
    case 0x8016E568u:
        goto loc_8016E568;
        break;
    case 0x8016E578u:
        goto loc_8016E578;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8016E518:
{
    r0 = MemoryInline::FlatRead32((r10 + 128));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r0_mrot_0 = (r0_rot_0 & 4032);
    r0_mdest_0 = (r0 & -4033);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r10 + 128), r0);
    goto loc_8016E594;
}

loc_8016E528:
{
    r0 = MemoryInline::FlatRead32((r10 + 128));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r0_mrot_1 = (r0_rot_1 & 258048);
    r0_mdest_1 = (r0 & -258049);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r10 + 128), r0);
    goto loc_8016E594;
}

loc_8016E538:
{
    r0 = MemoryInline::FlatRead32((r10 + 128));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0_mrot_2 = (r0_rot_2 & 16515072);
    r0_mdest_2 = (r0 & -16515073);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r10 + 128), r0);
    goto loc_8016E594;
}

loc_8016E548:
{
    r0 = MemoryInline::FlatRead32((r10 + 128));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0_mrot_3 = (r0_rot_3 & 1056964608);
    r0_mdest_3 = (r0 & -1056964609);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r10 + 128), r0);
    goto loc_8016E594;
}

loc_8016E558:
{
    r0 = MemoryInline::FlatRead32((r10 + 132));
    r0_mrot_4 = (r6 & 63);
    r0_mdest_4 = (r0 & -64);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r10 + 132), r0);
    goto loc_8016E594;
}

loc_8016E568:
{
    r0 = MemoryInline::FlatRead32((r10 + 132));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r0_mrot_5 = (r0_rot_5 & 4032);
    r0_mdest_5 = (r0 & -4033);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r10 + 132), r0);
    goto loc_8016E594;
}

loc_8016E578:
{
    r0 = MemoryInline::FlatRead32((r10 + 132));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r0_mrot_6 = (r0_rot_6 & 258048);
    r0_mdest_6 = (r0 & -258049);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::FlatWrite32((r10 + 132), r0);
    goto loc_8016E594;
}

loc_8016E588:
{
    r0 = MemoryInline::FlatRead32((r10 + 132));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0_mrot_7 = (r0_rot_7 & 16515072);
    r0_mdest_7 = (r0 & -16515073);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryInline::FlatWrite32((r10 + 132), r0);
}

loc_8016E594:
{
    r0 = MemoryInline::FlatRead32((r10 + 1532));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r10 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFD gpr_write=0x00000F39 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016E424 func_8016E424 preserves=true fpr_mask=0x00000000
