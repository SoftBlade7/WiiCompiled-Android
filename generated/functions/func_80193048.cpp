#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80193048(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80193048;

loc_80193048:
{
    r5 = r3;
    goto loc_80193054;
}

loc_80193050:
{
    r5 = (r5 + 1);
}

loc_80193054:
{
    r0 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019305C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019306C;
    }
}

loc_80193060:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80193064:
{
    r4 = (r4 + -1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80193050;
    }
}

loc_8019306C:
{
    r3 = (r5 - r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80193048 func_80193048 preserves=true fpr_mask=0x00000000
