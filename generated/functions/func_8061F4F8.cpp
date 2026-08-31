#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061F4F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r30 = ctx->gpr[30];

    goto loc_8061F4F8;

loc_8061F4F8:
{
    r30 = 6312;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x8061F550u>(ctx);
    r30 = ctx->gpr[30];
    ctx->gpr[30] = r30;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xBFFFEFC6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8061F4F8 func_8061F4F8 preserves=true fpr_mask=0x00000000
