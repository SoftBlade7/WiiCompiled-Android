#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011312C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011312C;

loc_8011312C:
{
    r4 = 1374420992;
    r5 = MemoryInline::FlatRead32((r3 + 276));
    r0 = (r4 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8011314C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80113150:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80113164;
    }
}

loc_80113154:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80113158:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8011315C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80113160:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80113164:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80113168:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801131E0;
    }
}

loc_8011316C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80113170:
{
}

loc_80113180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(404));
}

loc_80113184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801131C8;
    }
}

loc_80113188:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801131A4;
    }
}

loc_8011318C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(402));
}

loc_80113190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801131D4;
    }
}

loc_80113194:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801131BC;
    }
}

loc_80113198:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(401));
}

loc_8011319C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801131B0;
    }
}

loc_801131A0:
{
    goto loc_801131D4;
}

loc_801131A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(410));
}

loc_801131A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801131C8;
    }
}

loc_801131AC:
{
    goto loc_801131D4;
}

loc_801131B0:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_801131BC:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_801131C8:
{
    r0 = 11;
    MemoryInline::FlatWrite32((r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_801131D4:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_801131E0:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8011312C func_8011312C preserves=true fpr_mask=0x00000000
