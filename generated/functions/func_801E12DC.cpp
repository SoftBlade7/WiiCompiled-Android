#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E12DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r9 = ctx->gpr[9];

    goto loc_801E12DC;

loc_801E12DC:
{
    r9 = 0;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x801E108Cu>(ctx);
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF801FB gpr_write=0xFFF80A3B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E12DC func_801E12DC preserves=true fpr_mask=0x00000000
