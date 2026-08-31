#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80869340(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80869340;

loc_80869340:
{
    InvokeDirectCpu<0x808691FCu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00000B gpr_write=0xFC00081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80869340 func_80869340 preserves=true fpr_mask=0x00000000
