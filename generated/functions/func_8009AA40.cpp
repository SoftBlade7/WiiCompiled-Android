#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009AA40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_8009AA40;

loc_8009AA40:
{
    r3 = (r3 + 256);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80099960u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xF000187B gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x80000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8009AA40 func_8009AA40 preserves=true fpr_mask=0x00000000
