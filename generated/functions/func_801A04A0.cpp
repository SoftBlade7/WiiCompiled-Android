#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A04A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];

    goto loc_801A04A0;

loc_801A04A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012E630u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r3 | -1610612736);
    ctx->lr = 0x801A04B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012E638u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1744u>(ctx);
    // sync @ 0x801A04BC (no-op)
    r3 = 0;
    ctx->gqr[0] = r3;
    ctx->gqr[1] = r3;
    ctx->gqr[2] = r3;
    ctx->gqr[3] = r3;
    ctx->gqr[4] = r3;
    ctx->gqr[5] = r3;
    ctx->gqr[6] = r3;
    ctx->gqr[7] = r3;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A04A0 func_801A04A0 preserves=true fpr_mask=0x00000000
