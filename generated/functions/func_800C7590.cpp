#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C7590(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C7590;

loc_800C7590:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C7594:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C75A0;
    }
}

loc_800C7598:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_800C75A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C75AC;
    }
}

loc_800C75A4:
{
    r4 = 0;
    goto loc_800C75CC;
}

loc_800C75AC:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 0;
}

loc_800C75B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C75C8;
    }
}

loc_800C75BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800C75C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C75CC;
    }
}

loc_800C75C8:
{
    r4 = 1;
}

loc_800C75CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800C75D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C75DC;
    }
}

loc_800C75D4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_800C75DC:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C7590 func_800C7590 preserves=true fpr_mask=0x00000000
