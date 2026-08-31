#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80600038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80600038;

loc_80600038:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x8060005Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x806000A8u>(ctx);
    r0 = ctx->gpr[0];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80600038 func_80600038 preserves=true fpr_mask=0x00000000
