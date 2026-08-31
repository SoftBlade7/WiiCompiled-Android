#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012256C(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8012256C;

loc_8012256C:
{
    InvokeDirectCpu<0x800F3884u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0x00001010 gpr_return=0x00000010 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8012256C func_8012256C preserves=true fpr_mask=0x00000000
