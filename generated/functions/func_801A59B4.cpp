#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A59B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A59B4;

loc_801A59B4:
{
    r0 = MemoryInline::FlatRead16((r13 + -28976));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801A59BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A59C4;
    }
}

loc_801A59C0:
{
    goto loc_801A5A08;
}

loc_801A59C4:
{
    r4 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r4 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A59D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A59DC;
    }
}

loc_801A59D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A59F0;
    }
}

loc_801A59D8:
{
    goto loc_801A59F0;
}

loc_801A59DC:
{
    r4 = -872415232;
    r0 = MemoryInline::FlatRead16((r4 + 8302));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite16((r13 + -28976), static_cast<uint16_t>(r0));
    goto loc_801A59F8;
}

loc_801A59F0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r13 + -28976), static_cast<uint16_t>(r0));
}

loc_801A59F8:
{
    r4 = 0x801A0000u;
    r0 = (r0 & 65535);
    r4 = (r4 + 24156);
    MemoryInline::FlatWrite32((r13 + -25384), r4);
}

loc_801A5A08:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
}

loc_801A5A0C:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_801A5A2C;
    }
}

loc_801A5A10:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
}

loc_801A5A14:
{
    MemoryInline::FlatWrite16((r13 + -28976), static_cast<uint16_t>(r3));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A5A2C;
    }
}

loc_801A5A1C:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_801A5A2C;
    }
}

loc_801A5A20:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 24408);
    MemoryInline::FlatWrite32((r13 + -25384), r3);
}

loc_801A5A2C:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A59B4 func_801A59B4 preserves=true fpr_mask=0x00000000
