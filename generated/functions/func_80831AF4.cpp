#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831AF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80831AF4;

loc_80831AF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 168));
}

loc_80831AFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80831B14;
    }
}

loc_80831B00:
{
}

loc_80831B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80831B3C;
    }
}

loc_80831B08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80831B0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831B64;
    }
}

loc_80831B10:
{
    goto loc_80831B8C;
}

loc_80831B14:
{
    r0 = MemoryInline::FlatRead32((r3 + 156));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80831B1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831B2C;
    }
}

loc_80831B20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80831B24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831B34;
    }
}

loc_80831B28:
{
    goto loc_80831B8C;
}

loc_80831B2C:
{
    r3 = 24;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80831B34:
{
    r3 = 25;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80831B3C:
{
    r0 = MemoryInline::FlatRead32((r3 + 156));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80831B44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831B54;
    }
}

loc_80831B48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80831B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831B5C;
    }
}

loc_80831B50:
{
    goto loc_80831B8C;
}

loc_80831B54:
{
    r3 = 30;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80831B5C:
{
    r3 = 31;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80831B64:
{
    r0 = MemoryInline::FlatRead32((r3 + 156));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80831B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831B7C;
    }
}

loc_80831B70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80831B74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831B84;
    }
}

loc_80831B78:
{
    goto loc_80831B8C;
}

loc_80831B7C:
{
    r3 = 36;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80831B84:
{
    r3 = 37;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80831B8C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80831AF4 func_80831AF4 preserves=true fpr_mask=0x00000000
