#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080BDF0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8080BDF0;

loc_8080BDF0:
{
    InvokeDirectCpu<0x8080D12Cu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8080BDF0 func_8080BDF0 preserves=true fpr_mask=0x00000000
