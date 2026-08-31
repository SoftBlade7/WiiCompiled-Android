#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A3928(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_807A3928;

loc_807A3928:
{
    InvokeDirectCpu<0x807AA5ACu>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBE gpr_write=0xE00013FB gpr_return=0x00000018 fpr_read=0xFFFFF80F fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807A3928 func_807A3928 preserves=true fpr_mask=0x00000000
