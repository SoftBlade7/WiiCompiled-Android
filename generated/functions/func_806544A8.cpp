#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806544A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806544A8;

loc_806544A8:
{
    r5 = 0x809C0000u;
}

loc_806544B0:
{
    r0 = MemoryInline::FlatRead32((r5 + 8408));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_806544CC;
    }
}

loc_806544B8:
{
}

loc_806544BC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(12))) {
        goto loc_806544CC;
    }
}

loc_806544C0:
{
    r4 = (r0 + r4);
    r6 = MemoryInline::FlatRead8((r4 + 10528));
    goto loc_806544D0;
}

loc_806544CC:
{
    r6 = 255;
}

loc_806544D0:
{
    r4 = 0x809C0000u;
    r0 = 1;
    r8 = MemoryInline::FlatRead32((r4 + 8408));
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = MemoryInline::FlatRead32((r8 + 10524));
    r0 = (r0 * 88);
    r4 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r5 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654560;
    }
}

loc_806544F8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r0 = (r0_rot_1 & 8160);
    r7 = (r8 + 336);
    r4 = (r8 + r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r0 = MemoryInline::FlatRead32((r4 + 10144));
    r0 = (r0 * 48);
    r4 = (r7 + r0);
    r4_addr_1 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80654524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654560;
    }
}

loc_80654528:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8065453C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654558;
    }
}

loc_80654540:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead32(r6);
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(600));
}

loc_80654554:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80654558:
{
    r3 = MemoryInline::FlatRead32(r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80654560:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806544A8 func_806544A8 preserves=true fpr_mask=0x00000000
