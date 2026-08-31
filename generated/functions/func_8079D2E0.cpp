#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079D2E0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8079D2E0;

loc_8079D2E0:
{
    InvokeDirectCpu<0x8079DEE4u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8079D2E0 func_8079D2E0 preserves=true fpr_mask=0x00000000
