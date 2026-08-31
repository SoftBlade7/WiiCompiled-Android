#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80242F1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80242F1C;

loc_80242F1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80214BD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead8((r13 + -23716));
    r6 = (r13 + -23716);
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r3 = 1;
    r5 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r5));
    r0 = (r0 | 16);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000200E gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80242F1C func_80242F1C preserves=true fpr_mask=0x00000000
