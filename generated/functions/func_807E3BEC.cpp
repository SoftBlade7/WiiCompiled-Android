#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807E3BEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807E3BEC;

loc_807E3BEC:
{
}

loc_807E3BF0:
{
    r5 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_807E3C84;
    }
}

loc_807E3BF8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 396), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 396));
}

loc_807E3C08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3C10;
    }
}

loc_807E3C0C:
{
    r5 = 1;
}

loc_807E3C10:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 397));
}

loc_807E3C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3C20;
    }
}

loc_807E3C1C:
{
    r5 = (r5 + 1);
}

loc_807E3C20:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 398));
}

loc_807E3C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3C30;
    }
}

loc_807E3C2C:
{
    r5 = (r5 + 1);
}

loc_807E3C30:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 399));
}

loc_807E3C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3C40;
    }
}

loc_807E3C3C:
{
    r5 = (r5 + 1);
}

loc_807E3C40:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 400));
}

loc_807E3C48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3C50;
    }
}

loc_807E3C4C:
{
    r5 = (r5 + 1);
}

loc_807E3C50:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 401));
}

loc_807E3C58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3C60;
    }
}

loc_807E3C5C:
{
    r5 = (r5 + 1);
}

loc_807E3C60:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 402));
}

loc_807E3C68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3C70;
    }
}

loc_807E3C6C:
{
    r5 = (r5 + 1);
}

loc_807E3C70:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 403));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E3C78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E3CA4;
    }
}

loc_807E3C7C:
{
    r5 = (r5 + 1);
    goto loc_807E3CA4;
}

loc_807E3C84:
{
    r0 = MemoryInline::FlatRead8((r3 + 420));
}

loc_807E3C8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3C94;
    }
}

loc_807E3C90:
{
    r5 = 1;
}

loc_807E3C94:
{
    r0 = MemoryInline::FlatRead8((r3 + 421));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E3C9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E3CA4;
    }
}

loc_807E3CA0:
{
    r5 = (r5 + 1);
}

loc_807E3CA4:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807E3BEC func_807E3BEC preserves=true fpr_mask=0x00000000
