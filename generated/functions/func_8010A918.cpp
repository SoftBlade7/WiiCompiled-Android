#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010A918(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r8 = ctx->gpr[8];

    goto loc_8010A918;

loc_8010A918:
{
    r8 = 0;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8010DED8u>(ctx);
    r8 = ctx->gpr[8];
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFEFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010A918 func_8010A918 preserves=true fpr_mask=0x00000000
