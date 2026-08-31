#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A3934(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_807A3934;

loc_807A3934:
{
    InvokeDirectCpu<0x807A6F74u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x000000FD fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807A3934 func_807A3934 preserves=true fpr_mask=0x00000000
