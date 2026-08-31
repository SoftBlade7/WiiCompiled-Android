#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C0E20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];

    goto loc_800C0E20;

loc_800C0E20:
{
    r4 = 0x80250000u;
    r4 = (r4 + -18328);
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800C14A0u>(ctx);
    r4 = ctx->gpr[4];
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C0E20 func_800C0E20 preserves=true fpr_mask=0x00000000
