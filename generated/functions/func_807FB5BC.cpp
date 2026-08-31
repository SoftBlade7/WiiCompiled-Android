#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FB5BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_807FB5BC;

loc_807FB5BC:
{
    r10 = 0x808B0000u;
    r9 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r10 + -21672));
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x807FBAC0u>(ctx);
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0001FF gpr_write=0xFE000FFB gpr_return=0x00000018 fpr_read=0xF000005D fpr_write=0xF000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FB5BC func_807FB5BC preserves=true fpr_mask=0x00000000
