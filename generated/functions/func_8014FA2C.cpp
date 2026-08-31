#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014FA2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8014FA2C;

loc_8014FA2C:
{
    r4 = 0x80340000u;
    r0 = 2;
    r4 = (r4 + -27840);
    r5 = 0;
    r4 = (r4 + 1616);
    ctr = r0;
}

loc_8014FA44:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8014FA4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FA64;
    }
}

loc_8014FA50:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8014FA58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014FA64;
    }
}

loc_8014FA5C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8014FA64:
{
    r4 = (r4 + 44);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + 1);
}

loc_8014FA70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FA88;
    }
}

loc_8014FA74:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8014FA7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014FA88;
    }
}

loc_8014FA80:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8014FA88:
{
    r4 = (r4 + 44);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + 1);
}

loc_8014FA94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FAAC;
    }
}

loc_8014FA98:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8014FAA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014FAAC;
    }
}

loc_8014FAA4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8014FAAC:
{
    r4 = (r4 + 44);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014FAB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014FAD0;
    }
}

loc_8014FABC:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8014FAC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014FAD0;
    }
}

loc_8014FAC8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8014FAD0:
{
    r5 = (r5 + 1);
    r4 = (r4 + 44);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8014FA44;
    }
}

loc_8014FADC:
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
// RECOMP_REGISTRATION base 0x8014FA2C func_8014FA2C preserves=true fpr_mask=0x00000000
