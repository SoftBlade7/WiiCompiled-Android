#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014BBBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8014BBBC;

loc_8014BBBC:
{
    r0 = MemoryInline::FlatRead16((r31 + 20));
    r3 = r31;
    r4 = r27;
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r0));
    ctx->lr = 0x8014BBD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8014BF64u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r27 = ctx->gpr[27];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8014BC0Cu>(ctx);
    r0 = ctx->gpr[0];
    r27 = ctx->gpr[27];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFE6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014BBBC func_8014BBBC preserves=true fpr_mask=0x00000000
