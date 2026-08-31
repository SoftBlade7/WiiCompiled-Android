#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C2968(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_806C2968;

loc_806C2968:
{
    InvokeDirectCpu<0x80821DD8u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FCB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806C2968 func_806C2968 preserves=true fpr_mask=0x00000000
