#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80219FB0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80219FB0;

loc_80219FB0:
{
    InvokeDirectCpu<0x8016EAB0u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80219FB0 func_80219FB0 preserves=true fpr_mask=0x00000000
