#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F98E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_807F98E4;

loc_807F98E4:
{
    r10 = 0x808B0000u;
    r9 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r10 + -21712));
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x807F9EF8u>(ctx);
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f1 = ctx->fpr[1];
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF9FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F98E4 func_807F98E4 preserves=true fpr_mask=0x00000000
