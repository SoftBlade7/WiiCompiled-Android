#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80566FC0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80566FC0;

loc_80566FC0:
{
    InvokeDirectCpu<0x80227E18u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x000000CB gpr_return=0x00000008 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80566FC0 func_80566FC0 preserves=true fpr_mask=0x00000000
