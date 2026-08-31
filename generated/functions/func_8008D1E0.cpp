#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008D1E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8008D1E0;

loc_8008D1E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = r4;
    r4 = r5;
    // inline leaf 0x8012E550 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -29688));
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -29684));
    MemoryInline::FlatWrite32(r4, r0);
    // end of inlined leaf 0x8012E550
    r3 = 0x80090000u;
    r4 = 0x80090000u;
    r3 = (r3 + -11648);
    r4 = (r4 + -11552);
    // inline leaf 0x8012E544 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -29688), r3);
    MemoryInline::FlatWrite32((r13 + -29684), r4);
    // end of inlined leaf 0x8012E544
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -27216), r31);
    MemoryInline::FlatWrite32((r13 + -27212), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000203A gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008D1E0 func_8008D1E0 preserves=true fpr_mask=0x00000000
