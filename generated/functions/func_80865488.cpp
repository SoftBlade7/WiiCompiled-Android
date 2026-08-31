#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80865488(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80865488;

loc_80865488:
{
    r6 = 18;
}

loc_8086549C:
{
    r4 = r6;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80864914u>(ctx);
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFAF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80865488 func_80865488 preserves=true fpr_mask=0x00000000
