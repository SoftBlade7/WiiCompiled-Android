#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022FABC(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8022FABC;

loc_8022FABC:
{
    InvokeDirectCpu<0x80199FC8u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00003F80 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022FABC func_8022FABC preserves=true fpr_mask=0x00000000
