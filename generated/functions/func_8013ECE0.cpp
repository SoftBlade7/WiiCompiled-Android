#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013ECE0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8013ECE0;

loc_8013ECE0:
{
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013ECE0 func_8013ECE0 preserves=true fpr_mask=0x00000000
