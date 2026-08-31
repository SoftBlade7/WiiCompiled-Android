#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BBEC(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8001BBEC;

loc_8001BBEC:
{
    InvokeDirectCpu<0x80018814u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x80001FFF fpr_write=0x80001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001BBEC func_8001BBEC preserves=true fpr_mask=0x00000000
