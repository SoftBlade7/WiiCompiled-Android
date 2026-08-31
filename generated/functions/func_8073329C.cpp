#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073329C(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8073329C;

loc_8073329C:
{
    // inline leaf 0x80732A6C (1 guest instruction(s))
    // end of inlined leaf 0x80732A6C
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073329C func_8073329C preserves=true fpr_mask=0x00000000
