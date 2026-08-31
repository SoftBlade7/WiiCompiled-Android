#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D9B88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_807D9B88;

loc_807D9B88:
{
    r3 = (r3 + -8);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x807D99ECu>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFDF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF80C3FF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807D9B88 func_807D9B88 preserves=true fpr_mask=0x00000000
