#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801280B4(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_801280B4;

loc_801280B4:
{
    InvokeDirectCpu<0x801284B4u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE001FFF gpr_write=0xFE001FEB gpr_return=0x00000008 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801280B4 func_801280B4 preserves=true fpr_mask=0x00000000
