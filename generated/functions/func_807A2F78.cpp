#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A2F78(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_807A2F78;

loc_807A2F78:
{
    InvokeDirectCpu<0x807A6738u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FB gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807A2F78 func_807A2F78 preserves=true fpr_mask=0x00000000
