#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80775614(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_80775614;

loc_80775614:
{
    r3 = (r3 + -8);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x807753B4u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001F gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0xC000C03F fpr_write=0xC000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80775614 func_80775614 preserves=true fpr_mask=0x00000000
