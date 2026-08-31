#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FB540(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_807FB540;

loc_807FB540:
{
    InvokeDirectCpu<0x807FB8B0u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0003FF gpr_write=0xFE000BFB gpr_return=0x00000018 fpr_read=0xF0000057 fpr_write=0xF000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FB540 func_807FB540 preserves=true fpr_mask=0x00000000
