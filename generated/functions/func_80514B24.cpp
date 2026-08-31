#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80514B24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80514B24;

loc_80514B24:
{
    r0 = (r6 + -1);
    r6 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80514368u>(ctx);
    r0 = ctx->gpr[0];
    r6 = ctx->gpr[6];
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8000FE gpr_write=0xFF80087B gpr_return=0x00000018 fpr_read=0xF80003FF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80514B24 func_80514B24 preserves=true fpr_mask=0x00000000
