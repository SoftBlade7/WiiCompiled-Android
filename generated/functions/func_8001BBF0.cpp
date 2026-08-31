#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BBF0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8001BBF0;

loc_8001BBF0:
{
    InvokeDirectCpu<0x80018928u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80003FFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001BBF0 func_8001BBF0 preserves=true fpr_mask=0x00000000
