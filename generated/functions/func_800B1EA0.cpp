#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B1EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B1EA0;

loc_800B1EA0:
{
    r0 = MemoryInline::FlatRead16((r13 + -32312));
}

loc_800B1EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B1EB8;
    }
}

loc_800B1EAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800B1EB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B1ED4;
    }
}

loc_800B1EB4:
{
    goto loc_800B1F58;
}

loc_800B1EB8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(32));
}

loc_800B1EBC:
{
    r3 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_800B1EC4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_800B1EC8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_800B1ECC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800B1ED4:
{
}

loc_800B1ED8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(255))) {
        goto loc_800B1EE4;
    }
}

loc_800B1EDC:
{
    r0 = 0;
    goto loc_800B1F0C;
}

loc_800B1EE4:
{
}

loc_800B1EE8:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32))) {
        goto loc_800B1EF8;
    }
}

loc_800B1EF0:
{
}

loc_800B1EF4:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(126))) {
        goto loc_800B1F08;
    }
}

loc_800B1EF8:
{
}

loc_800B1EFC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(161))) {
        goto loc_800B1F0C;
    }
}

loc_800B1F00:
{
}

loc_800B1F04:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(223))) {
        goto loc_800B1F0C;
    }
}

loc_800B1F08:
{
    r0 = 1;
}

loc_800B1F0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800B1F10:
{
    r3 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_800B1F18:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & 255);
    r4 = (r4 & 255);
}

loc_800B1F24:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(129))) {
        goto loc_800B1F48;
    }
}

loc_800B1F2C:
{
}

loc_800B1F30:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(152))) {
        goto loc_800B1F48;
    }
}

loc_800B1F34:
{
}

loc_800B1F38:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_800B1F48;
    }
}

loc_800B1F3C:
{
}

loc_800B1F40:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(252))) {
        goto loc_800B1F48;
    }
}

loc_800B1F44:
{
    r0 = 1;
}

loc_800B1F48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800B1F4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_800B1F50:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800B1F58:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B1EA0 func_800B1EA0 preserves=true fpr_mask=0x00000000
