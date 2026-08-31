#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BBE8(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8001BBE8;

loc_8001BBE8:
{
    InvokeDirectCpu<0x80018230u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001BBE8 func_8001BBE8 preserves=true fpr_mask=0x00000000
