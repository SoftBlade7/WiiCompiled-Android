#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073EAE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8073EAE4;

loc_8073EAE4:
{
    ctx->lr = 0x8073EAE8u;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8073E688u>(ctx);
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r6 = r3;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8073EAF8u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE00007F gpr_write=0xFE00087B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073EAE4 func_8073EAE4 preserves=true fpr_mask=0x00000000
