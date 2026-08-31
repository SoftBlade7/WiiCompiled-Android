#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80529C48(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80529C48;

loc_80529C48:
{
    InvokeDirectCpu<0x80550C68u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000200A gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80529C48 func_80529C48 preserves=true fpr_mask=0x00000000
