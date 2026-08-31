#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016EE14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_8016EE14;

loc_8016EE14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80170000u;
    r3 = 18;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -4916);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A65F8u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80170000u;
    r3 = 19;
    r4 = (r4 + -4716);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A65F8u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r13 + -25648);
    // inline leaf 0x801A98A0 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x801A98A0
    r3 = 8192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A69BCu>(ctx);
    r3 = ctx->gpr[3];
    r3 = 4096;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A69BCu>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r13 + -25712));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 | 15);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016EE14 func_8016EE14 preserves=true fpr_mask=0x00000000
