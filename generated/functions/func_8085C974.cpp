#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085C974(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085C974;

loc_8085C974:
{
    r4 = 0x809C0000u;
    r3 = 48;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8085C98C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(36))) {
        goto loc_8085C998;
    }
}

loc_8085C990:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(39));
}

loc_8085C994:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8085C9A8;
    }
}

loc_8085C998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(113));
}

loc_8085C99C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085C9A8;
    }
}

loc_8085C9A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(117));
}

loc_8085C9A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8085C9A8:
{
    r3 = 50;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000001 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8085C974 func_8085C974 preserves=true fpr_mask=0x00000000
