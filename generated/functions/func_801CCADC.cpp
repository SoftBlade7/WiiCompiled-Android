#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CCADC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];

    goto loc_801CCADC;

loc_801CCADC:
{
    ctx->lr = 0x801CCAE0u;
    InvokeDirectCpu<0x801CC9B4u>(ctx);
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    MemoryInline::FlatWrite8((r29 + 13), static_cast<uint8_t>(r3));
    InvokeDirectCpu<0x801CCBA8u>(ctx);
    r29 = ctx->gpr[29];
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801CCADC func_801CCADC preserves=true fpr_mask=0x00000000
