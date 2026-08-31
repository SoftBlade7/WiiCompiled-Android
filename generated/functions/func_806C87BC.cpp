#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C87BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];

    goto loc_806C87BC;

loc_806C87BC:
{
    r4 = 622;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8082055Cu>(ctx);
    r4 = ctx->gpr[4];
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0x00001018 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806C87BC func_806C87BC preserves=true fpr_mask=0x00000000
