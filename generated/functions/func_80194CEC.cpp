#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80194CEC(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80194CEC;

loc_80194CEC:
{
    InvokeDirectCpu<0x80194AE8u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00003FB gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80194CEC func_80194CEC preserves=true fpr_mask=0x00000000
