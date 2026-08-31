#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063E5C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8063E5C4;

loc_8063E5C4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002150C (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat64((r11 + -32), f28.d);
    MemoryInline::FlatWriteRamFloat64((r11 + -24), f29.d);
    MemoryInline::FlatWriteRamFloat64((r11 + -16), f30.d);
    MemoryInline::FlatWriteRamFloat64((r11 + -8), f31.d);
    // end of inlined leaf 0x8002150C
    f28.d = f1.d;
    r3 = (r3 + 168);
    f29.d = f2.d;
    f30.d = f3.d;
    f31.d = f4.d;
    ctx->lr = 0x8063E5F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x805E90E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1.d = f28.d;
    f2.d = f29.d;
    f3.d = f30.d;
    f4.d = f31.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805FBA68u>(ctx);
    r0 = ctx->gpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    r11 = (r1 + 48);
    // inline leaf 0x80021558 (5 guest instruction(s))
    f28.d = MemoryInline::FlatReadFloat64((r11 + -32));
    f29.d = MemoryInline::FlatReadFloat64((r11 + -24));
    f30.d = MemoryInline::FlatReadFloat64((r11 + -16));
    f31.d = MemoryInline::FlatReadFloat64((r11 + -8));
    // end of inlined leaf 0x80021558
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0001FA gpr_write=0xFC0009FB gpr_return=0x00000018 fpr_read=0xF000007F fpr_write=0xF00000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8063E5C4 func_8063E5C4 preserves=false fpr_mask=0xF0000000
