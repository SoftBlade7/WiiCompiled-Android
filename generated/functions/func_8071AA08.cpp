#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071AA08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r27 = ctx->gpr[27];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8071AA08;

loc_8071AA08:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x8071AA20u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    f1 = ctx->fpr[1];
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFC6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8071AA08 func_8071AA08 preserves=true fpr_mask=0x00000000
