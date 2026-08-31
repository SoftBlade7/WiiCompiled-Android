#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8084FDAC(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8084FDAC;

loc_8084FDAC:
{
    InvokeDirectCpu<0x80836B9Cu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8084FDAC func_8084FDAC preserves=true fpr_mask=0x00000000
