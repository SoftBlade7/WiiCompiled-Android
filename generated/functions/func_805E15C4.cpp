#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E15C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_805E15C4;

loc_805E15C4:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r3 = MemoryInline::FlatRead32((r3 + 232));
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80242C98u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000031 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E15C4 func_805E15C4 preserves=true fpr_mask=0x00000000
