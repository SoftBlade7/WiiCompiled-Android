#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80651A84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r22 = ctx->gpr[22];

    goto loc_80651A84;

loc_80651A84:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r22 + 504), r0);
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80651B1Cu>(ctx);
    r0 = ctx->gpr[0];
    r22 = ctx->gpr[22];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80651A84 func_80651A84 preserves=true fpr_mask=0x00000000
