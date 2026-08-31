#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000AFEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000AFEC;

loc_8000AFEC:
{
    r6 = MemoryInline::FlatRead32((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000AFF4:
{
    r5 = (r6 & -16777216);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000B01C;
    }
}

loc_8000AFFC:
{
}

loc_8000B000:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8000B01C;
    }
}

loc_8000B004:
{
    r0 = (r5 + 16777216);
}

loc_8000B00C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8000B01C;
    }
}

loc_8000B010:
{
    r0 = (r6 + 65536);
}

loc_8000B018:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8000B048;
    }
}

loc_8000B01C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000B020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000B040;
    }
}

loc_8000B024:
{
    r0 = MemoryInline::FlatRead32((r3 + 132));
    r3 = 0x80240000u;
    r3 = (r3 + 23976);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_8000B040:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8000B048:
{
    r5 = (r6 & 16711680);
}

loc_8000B04C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8000B05C;
    }
}

loc_8000B050:
{
    r0 = (r5 + -16711680);
}

loc_8000B058:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8000B088;
    }
}

loc_8000B05C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000B060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000B080;
    }
}

loc_8000B064:
{
    r0 = MemoryInline::FlatRead32((r3 + 132));
    r3 = 0x80240000u;
    r3 = (r3 + 23976);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_8000B080:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8000B088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000B08C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000B098;
    }
}

loc_8000B090:
{
    r0 = MemoryInline::FlatRead16((r3 + 4348));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_8000B098:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000AFEC func_8000AFEC preserves=true fpr_mask=0x00000000
