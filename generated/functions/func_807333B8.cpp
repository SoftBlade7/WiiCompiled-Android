#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807333B8(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_807333B8;

loc_807333B8:
{
    InvokeDirectCpu<0x80732678u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x00001000 gpr_return=0x00000000 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807333B8 func_807333B8 preserves=true fpr_mask=0x00000000
