#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80015650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_rot_0 = 0;

    uint32_t r5 = ctx->gpr[5];

    goto loc_80015650;

loc_80015650:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r5 = ctx->gpr[5];
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80015650 func_80015650 preserves=true fpr_mask=0x00000000
