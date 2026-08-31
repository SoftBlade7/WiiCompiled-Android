#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053BE70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r17 = ctx->gpr[17];

    goto loc_8053BE70;

loc_8053BE70:
{
    r17 = 0;
    ctx->gpr[17] = r17;
    InvokeDirectCpu<0x8053BE7Cu>(ctx);
    r17 = ctx->gpr[17];
    ctx->gpr[17] = r17;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFDFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8053BE70 func_8053BE70 preserves=true fpr_mask=0x00000000
