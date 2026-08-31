#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80790AD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];

    goto loc_80790AD8;

loc_80790AD8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80790AE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80790AFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80790FB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80790AD8 func_80790AD8 preserves=true fpr_mask=0x00000000
