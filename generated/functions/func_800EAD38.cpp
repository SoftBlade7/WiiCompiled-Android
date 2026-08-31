#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EAD38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800EAD38;

loc_800EAD38:
{
    r6 = 27;
}

loc_800EAD54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800EAD58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EAD80;
    }
}

loc_800EAD5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800EAD60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EAD80;
    }
}

loc_800EAD64:
{
    r4 = (r3 * 100);
    r3 = -65536;
    r0 = (r3 + 25536);
    r3 = (r6 + r4);
    r3 = (r3 + 50);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_800EAD80:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EAD38 func_800EAD38 preserves=true fpr_mask=0x00000000
