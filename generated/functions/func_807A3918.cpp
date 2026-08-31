#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A3918(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_807A3918;

loc_807A3918:
{
    InvokeDirectCpu<0x807B6F54u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D1 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A3918 func_807A3918 preserves=true fpr_mask=0x00000000
