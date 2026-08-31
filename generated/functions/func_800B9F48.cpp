#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B9F48(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_800B9F48;

loc_800B9F48:
{
    // nop
    // nop
    InvokeDirectCpu<0x800BA950u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B9F48 func_800B9F48 preserves=true fpr_mask=0x00000000
