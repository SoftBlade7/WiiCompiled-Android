#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A186C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t ctr = ctx->ctr;

    goto loc_801A186C;

loc_801A186C:
{
    r3 = -536870912;
    r4 = 512;
    ctr = r4;
}

loc_801A1878:
{
    // dcbi @ 0x801A1878 (no-op)
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A1878;
    }
}

loc_801A1884:
{
    r4 = ctx->hid2;
    r4 = (r4 & -268435457);
    ctx->hid2 = r4;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A186C func_801A186C preserves=true fpr_mask=0x00000000
