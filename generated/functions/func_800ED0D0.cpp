#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ED0D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800ED0D0;

loc_800ED0D0:
{
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r4 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32((r13 + -31912));
    r4 = (r4 + -10544);
    r5 = (r5 + 23016);
    ctx->lr = 0x800ED0E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019B6E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r0 = 8;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x800ED5A8u>(ctx);
    r0 = ctx->gpr[0];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFC7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800ED0D0 func_800ED0D0 preserves=true fpr_mask=0x00000000
