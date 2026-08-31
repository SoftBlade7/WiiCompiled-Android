#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806692D4(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_806692D4;

loc_806692D4:
{
    ctx->lr = 0x806692D8u;
    InvokeDirectCpu<0x8066AFACu>(ctx);
    InvokeDirectCpu<0x80669720u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806692D4 func_806692D4 preserves=true fpr_mask=0x00000000
