#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80123B1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80123B1C;

loc_80123B1C:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80123B28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80123B34;
    }
}

loc_80123B2C:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80123B34:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80123B3C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80123B48;
    }
}

loc_80123B40:
{
    r3 = 13;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80123B48:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80123B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80123B5C;
    }
}

loc_80123B54:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80123B5C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80123B64:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80123B70;
    }
}

loc_80123B68:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80123B70:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80123B78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80123B84;
    }
}

loc_80123B7C:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80123B84:
{
    ctr = r0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80123BB4;
    }
}

loc_80123B8C:
{
    r4 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80123B94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80123BA4;
    }
}

loc_80123B98:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80123BAC;
    }
}

loc_80123BA4:
{
    r3 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80123BAC:
{
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80123B8C;
    }
}

loc_80123BB4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80123B1C func_80123B1C preserves=true fpr_mask=0x00000000
