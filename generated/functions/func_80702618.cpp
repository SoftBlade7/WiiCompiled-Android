#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80702618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_80702618;

loc_80702618:
{
    r3 = (r3 + -148);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80701140u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFDF gpr_write=0x00001028 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80702618 func_80702618 preserves=true fpr_mask=0x00000000
