#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FCDE8(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_805FCDE8;

loc_805FCDE8:
{
    InvokeDirectCpu<0x80529C40u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805FCDE8 func_805FCDE8 preserves=true fpr_mask=0x00000000
