#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DB634(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805DB634;

loc_805DB634:
{
    r6 = r3;
    r8 = 0;
    r4 = 0;
    goto loc_805DB6A8;
}

loc_805DB644:
{
    r0 = MemoryInline::FlatRead32(r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_2 & 255);
    r0 = (r5 + -3);
}

loc_805DB654:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_805DB69C;
    }
}

loc_805DB658:
{
    r9 = r8;
    r7 = (r3 + r4);
    goto loc_805DB684;
}

loc_805DB664:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32(r7, r0);
    r0 = MemoryInline::FlatRead8((r7 + 12));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 13));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r0));
    r7 = (r7 + 8);
}

loc_805DB684:
{
    r5 = MemoryInline::FlatRead32((r3 + 240));
    r0 = (r5 + -1);
}

loc_805DB690:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_805DB664;
    }
}

loc_805DB694:
{
    MemoryInline::FlatWrite32((r3 + 240), r0);
    goto loc_805DB6A8;
}

loc_805DB69C:
{
    r6 = (r6 + 8);
    r8 = (r8 + 1);
    r4 = (r4 + 8);
}

loc_805DB6A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_805DB6B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DB644;
    }
}

loc_805DB6B4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805DB634 func_805DB634 preserves=true fpr_mask=0x00000000
