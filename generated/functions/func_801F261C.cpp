#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F261C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
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

    goto loc_801F261C;

loc_801F261C:
{
    r8 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F2628:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(26))) {
        goto loc_801F2634;
    }
}

loc_801F262C:
{
}

loc_801F2630:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_801F263C;
    }
}

loc_801F2634:
{
    r0 = 1;
    goto loc_801F26C8;
}

loc_801F263C:
{
    r4 = (r8 * 56);
    r5 = 0x80360000u;
    r0 = 13;
    r5 = (r5 + -23936);
    r4 = (r5 + r4);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_0 & 65535);
    r6 = (r4 + 420);
    r4 = 0;
    ctr = r0;
}

loc_801F2660:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r9 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F2670:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_801F2680;
    }
}

loc_801F2674:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F267C:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F26AC;
    }
}

loc_801F2680:
{
    r4 = (r4 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r9 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F2694:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_801F26A4;
    }
}

loc_801F2698:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F26A0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F26AC;
    }
}

loc_801F26A4:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F2660;
    }
}

loc_801F26AC:
{
    r5 = (r4 & 65535);
    r4 = 26;
    r0 = (r5 + -26);
    r4 = (r5 | ~r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r4 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_801F26C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F26CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801F26D0:
{
    r0 = (r8 * 56);
    r4 = 0x80360000u;
    r4 = (r4 + -23936);
    r5 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 420));
    r4 = 1;
    r0 = (r0 | 44);
    MemoryInline::FlatWrite32((r5 + 420), r0);
}

loc_801F3DF0:
{
    r6 = 0x80360000u;
    r0 = 13;
    r6 = (r6 + -23936);
    r8 = 0;
    ctr = r0;
}

loc_801F3E04:
{
    r0 = (r8 & 65535);
    r0 = (r0 * 44);
    r7 = (r6 + r0);
    r5 = MemoryInline::FlatRead32((r7 + 1876));
    r0 = (r5 & 1);
}

loc_801F3E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F3E50;
    }
}

loc_801F3E1C:
{
    r0 = MemoryInline::FlatRead32((r7 + 1880));
}

loc_801F3E24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801F3E50;
    }
}

loc_801F3E28:
{
}

loc_801F3E2C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801F3E3C;
    }
}

loc_801F3E30:
{
    r0 = (r5 & -5);
    MemoryInline::FlatWrite32((r7 + 1876), r0);
    goto loc_801F3E44;
}

loc_801F3E3C:
{
    r0 = (r5 | 4);
    MemoryInline::FlatWrite32((r7 + 1876), r0);
}

loc_801F3E44:
{
    r0 = MemoryInline::FlatRead32((r7 + 1876));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r7 + 1876), r0);
}

loc_801F3E50:
{
    r8 = (r8 + 1);
    r0 = (r8 & 65535);
    r0 = (r0 * 44);
    r7 = (r6 + r0);
    r5 = MemoryInline::FlatRead32((r7 + 1876));
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F3E68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F3EA0;
    }
}

loc_801F3E6C:
{
    r0 = MemoryInline::FlatRead32((r7 + 1880));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801F3E74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3EA0;
    }
}

loc_801F3E78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F3E7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3E8C;
    }
}

loc_801F3E80:
{
    r0 = (r5 & -5);
    MemoryInline::FlatWrite32((r7 + 1876), r0);
    goto loc_801F3E94;
}

loc_801F3E8C:
{
    r0 = (r5 | 4);
    MemoryInline::FlatWrite32((r7 + 1876), r0);
}

loc_801F3E94:
{
    r0 = MemoryInline::FlatRead32((r7 + 1876));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r7 + 1876), r0);
}

loc_801F3EA0:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F3E04;
    }
}

loc_801F3EA8:
{
    ctx->gpr[0] = r0;
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

loc_return:
{
    ctx->gpr[0] = r0;
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

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F261C func_801F261C preserves=true fpr_mask=0x00000000
