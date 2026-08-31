#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BBDC(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8001BBDC;

loc_8001BBDC:
{
    InvokeDirectCpu<0x80017A74u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0001FFF fpr_write=0xC0001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001BBDC func_8001BBDC preserves=true fpr_mask=0x00000000
