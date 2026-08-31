#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063CFFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_8063CFFC;

loc_8063CFFC:
{
    r3 = (r3 + 104);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x805C2804u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00007FA gpr_write=0xE000000B gpr_return=0x00000008 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8063CFFC func_8063CFFC preserves=true fpr_mask=0x00000000
