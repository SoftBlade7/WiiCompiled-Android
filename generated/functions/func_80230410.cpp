#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80230410(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80230410;

loc_80230410:
{
    InvokeDirectCpu<0x80199D64u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x00000042 gpr_return=0x00000000 fpr_read=0x8000C000 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80230410 func_80230410 preserves=true fpr_mask=0x00000000
