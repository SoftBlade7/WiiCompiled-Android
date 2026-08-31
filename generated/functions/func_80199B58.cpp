#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80199B58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80199B58;

loc_80199B58:
{
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 8));
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80198D88u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80199B58 func_80199B58 preserves=true fpr_mask=0x00000000
