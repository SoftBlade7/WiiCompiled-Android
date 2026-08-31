#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051C52C(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8051C52C;

loc_8051C52C:
{
    InvokeDirectCpu<0x8051C530u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051C52C func_8051C52C preserves=true fpr_mask=0x00000000
