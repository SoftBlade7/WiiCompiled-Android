#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80664B34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80664B34;

loc_80664B34:
{
    r0 = 3;
    r5 = 0;
    ctr = r0;
}

loc_80664B40:
{
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664B54:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664B5C;
    }
}

loc_80664B58:
{
    goto loc_80664B60;
}

loc_80664B5C:
{
    r4 = -1;
}

loc_80664B60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664B64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664B74;
    }
}

loc_80664B68:
{
    r3 = (r3 + r0);
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664B74:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664B8C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664B94;
    }
}

loc_80664B90:
{
    goto loc_80664B98;
}

loc_80664B94:
{
    r4 = -1;
}

loc_80664B98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664B9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664BAC;
    }
}

loc_80664BA0:
{
    r3 = (r3 + r0);
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664BAC:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664BC4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664BCC;
    }
}

loc_80664BC8:
{
    goto loc_80664BD0;
}

loc_80664BCC:
{
    r4 = -1;
}

loc_80664BD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664BD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664BE4;
    }
}

loc_80664BD8:
{
    r3 = (r3 + r0);
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664BE4:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664BFC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664C04;
    }
}

loc_80664C00:
{
    goto loc_80664C08;
}

loc_80664C04:
{
    r4 = -1;
}

loc_80664C08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664C0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664C1C;
    }
}

loc_80664C10:
{
    r3 = (r3 + r0);
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664C1C:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80664B40;
    }
}

loc_80664C24:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80664B34 func_80664B34 preserves=true fpr_mask=0x00000000
