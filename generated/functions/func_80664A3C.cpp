#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80664A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80664A3C;

loc_80664A3C:
{
    r0 = 3;
    r5 = 0;
    ctr = r0;
}

loc_80664A48:
{
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664A5C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664A64;
    }
}

loc_80664A60:
{
    goto loc_80664A68;
}

loc_80664A64:
{
    r4 = -1;
}

loc_80664A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664A6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664A7C;
    }
}

loc_80664A70:
{
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 76));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664A7C:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664A94:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664A9C;
    }
}

loc_80664A98:
{
    goto loc_80664AA0;
}

loc_80664A9C:
{
    r4 = -1;
}

loc_80664AA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664AB4;
    }
}

loc_80664AA8:
{
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 76));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664AB4:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664ACC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664AD4;
    }
}

loc_80664AD0:
{
    goto loc_80664AD8;
}

loc_80664AD4:
{
    r4 = -1;
}

loc_80664AD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664ADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664AEC;
    }
}

loc_80664AE0:
{
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 76));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664AEC:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664B04:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664B0C;
    }
}

loc_80664B08:
{
    goto loc_80664B10;
}

loc_80664B0C:
{
    r4 = -1;
}

loc_80664B10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664B24;
    }
}

loc_80664B18:
{
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 76));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664B24:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80664A48;
    }
}

loc_80664B2C:
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
// RECOMP_REGISTRATION base 0x80664A3C func_80664A3C preserves=true fpr_mask=0x00000000
