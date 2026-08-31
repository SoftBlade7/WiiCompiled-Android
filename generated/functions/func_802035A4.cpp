#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802035A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6 = ctx->gpr[6];

    goto loc_802035A4;

loc_802035A4:
{
    r6 = 0;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8020252Cu>(ctx);
    r6 = ctx->gpr[6];
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802035A4 func_802035A4 preserves=true fpr_mask=0x00000000
