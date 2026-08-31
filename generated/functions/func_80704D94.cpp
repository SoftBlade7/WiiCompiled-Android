#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80704D94(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80704D94;

loc_80704D94:
{
    InvokeDirectCpu<0x8009C590u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80704D94 func_80704D94 preserves=true fpr_mask=0x00000000
