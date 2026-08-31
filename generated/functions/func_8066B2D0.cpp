#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066B2D0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066B2D0;

loc_8066B2D0:
{
    r5 = 0x809C0000u;
    r0 = 2;
    r5 = MemoryInline::FlatRead32((r5 + -10424));
    r8 = 0;
    r9 = 0;
    r7 = (r5 + 131072);
    ctr = r0;
}

loc_8066B2EC:
{
    r5 = MemoryInline::FlatRead32((r7 + 20476));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r6 = (r5 + 131072);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 27360));
}

loc_8066B304:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066B310;
    }
}

loc_8066B308:
{
    r8 = 1;
    goto loc_8066B398;
}

loc_8066B310:
{
    r9 = (r9 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 27360));
}

loc_8066B324:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066B330;
    }
}

loc_8066B328:
{
    r8 = 1;
    goto loc_8066B398;
}

loc_8066B330:
{
    r9 = (r9 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 27360));
}

loc_8066B344:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066B350;
    }
}

loc_8066B348:
{
    r8 = 1;
    goto loc_8066B398;
}

loc_8066B350:
{
    r9 = (r9 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 27360));
}

loc_8066B364:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066B370;
    }
}

loc_8066B368:
{
    r8 = 1;
    goto loc_8066B398;
}

loc_8066B370:
{
    r9 = (r9 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1020);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 27360));
}

loc_8066B384:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066B390;
    }
}

loc_8066B388:
{
    r8 = 1;
    goto loc_8066B398;
}

loc_8066B390:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066B2EC;
    }
}

loc_8066B398:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8066B39C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8066B3A0:
{
    r10 = 0;
}

loc_8066B3A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 30096));
    r8 = r3;
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & 1020);
    r11 = 0;
    ctr = r0;
}

loc_8066B3BC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8066B3EC;
    }
}

loc_8066B3C0:
{
    r5 = MemoryInline::FlatRead32((r7 + 20476));
    r6 = MemoryInline::FlatRead32((r8 + 30116));
    r0 = (r5 + 131072);
    r5 = (r0 + r9);
    r0 = MemoryInline::FlatRead32((r5 + 27360));
}

loc_8066B3D8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8066B3E4;
    }
}

loc_8066B3DC:
{
    r11 = 1;
    goto loc_8066B3EC;
}

loc_8066B3E4:
{
    r8 = (r8 + 112);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066B3C0;
    }
}

loc_8066B3EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_8066B3F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066B408;
    }
}

loc_8066B3F4:
{
    r3 = MemoryInline::FlatRead32((r7 + 20476));
    r0 = (r3 + 131072);
    r3 = (r0 + r9);
    MemoryInline::FlatWrite32((r3 + 27360), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8066B408:
{
    r10 = (r10 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(10));
}

loc_8066B410:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066B3A4;
    }
}

loc_8066B414:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066B2D0 func_8066B2D0 preserves=true fpr_mask=0x00000000
