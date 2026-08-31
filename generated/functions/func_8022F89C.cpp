#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022F89C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8022F89C;

loc_8022F89C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8022F8ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8001BBE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFE gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8022F89C func_8022F89C preserves=true fpr_mask=0x00000000
