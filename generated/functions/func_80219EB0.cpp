#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80219EB0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80219EB0;

loc_80219EB0:
{
    InvokeDirectCpu<0x80243ED0u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000201E gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000018 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80219EB0 func_80219EB0 preserves=true fpr_mask=0x00000000
