#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BBE0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8001BBE0;

loc_8001BBE0:
{
    InvokeDirectCpu<0x80017D40u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFF gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001BBE0 func_8001BBE0 preserves=true fpr_mask=0x00000000
