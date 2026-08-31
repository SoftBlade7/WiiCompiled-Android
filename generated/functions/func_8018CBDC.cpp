#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018CBDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8018CBDC;

loc_8018CBDC:
{
    r6 = 0;
    r5 = 0;
    goto loc_8018CBFC;
}

loc_8018CBE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_8018CBEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018CBF8;
    }
}

loc_8018CBF0:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8018CBF8:
{
    r6 = (r6 + 1);
}

loc_8018CBFC:
{
}

loc_8018CC00:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8018CC14;
    }
}

loc_8018CC04:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_8018CC18;
}

loc_8018CC14:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_8018CC18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8018CC1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018CBE8;
    }
}

loc_8018CC20:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8018CBDC func_8018CBDC preserves=true fpr_mask=0x00000000
