#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806545DC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806545DC;

loc_806545DC:
{
    r3 = 0x809C0000u;
    r0 = 4;
    r6 = MemoryInline::FlatRead32((r3 + 8408));
    r7 = 0;
    r8 = 0;
    r3 = MemoryInline::FlatRead32((r6 + 10524));
    r3 = (r3 * 88);
    r3 = (r6 + r3);
    r4 = MemoryInline::FlatRead8((r3 + 89));
    ctr = r0;
}

loc_80654604:
{
    r0 = (r8 & 255);
}

loc_8065460C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_80654654;
    }
}

loc_80654610:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 10144));
    r0 = (r0 * 48);
    r0 = (r6 + r0);
    r3 = (r0 + r5);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8065463C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654654;
    }
}

loc_80654640:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8065464C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r7))) {
        goto loc_80654654;
    }
}

loc_80654650:
{
    r7 = r0;
}

loc_80654654:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
}

loc_80654660:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_806546A8;
    }
}

loc_80654664:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & 8160);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & 1020);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 10144));
    r0 = (r0 * 48);
    r0 = (r6 + r0);
    r3 = (r0 + r5);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80654690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806546A8;
    }
}

loc_80654694:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_806546A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r7))) {
        goto loc_806546A8;
    }
}

loc_806546A4:
{
    r7 = r0;
}

loc_806546A8:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
}

loc_806546B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_806546FC;
    }
}

loc_806546B8:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r0 = (r0_rot_6 & 8160);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_6 & 1020);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 10144));
    r0 = (r0 * 48);
    r0 = (r6 + r0);
    r3 = (r0 + r5);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_806546E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806546FC;
    }
}

loc_806546E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_806546F4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r7))) {
        goto loc_806546FC;
    }
}

loc_806546F8:
{
    r7 = r0;
}

loc_806546FC:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80654604;
    }
}

loc_80654704:
{
    r0 = MemoryInline::FlatRead32((r6 + 10688));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_8065470C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80654714;
    }
}

loc_80654710:
{
    r7 = r0;
}

loc_80654714:
{
    r3 = (r7 + 1);
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

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806545DC func_806545DC preserves=true fpr_mask=0x00000000
