#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D098(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8016D098;

loc_8016D098:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r6 = MemoryInline::FlatRead32((r2 + -26840));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 16383);
    r4 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r4 & -2);
    MemoryInline::FlatWrite32((r6 + 8), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 60), static_cast<uint16_t>(r31));
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 62), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r0 & -3);
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r0 | 34);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r13 + -25672), r31);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000200E gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016D098 func_8016D098 preserves=true fpr_mask=0x00000000
