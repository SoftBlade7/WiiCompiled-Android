#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C2E80(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_805C2E80;

loc_805C2E80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 1668546560;
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r6 + 29292);
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r7 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r7 + 204));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805C2EBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 4), r3);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r5 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 8), r5);
    r0 = MemoryInline::FlatRead16((r3 + 14));
    r4 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 20), r4);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 36), r0);
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r5 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 12), r0);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r5 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 16), r0);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 24), r0);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 28), r0);
    r0 = MemoryInline::FlatRead16((r4 + 8));
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 32), r0);
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
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF1E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805C2E80 func_805C2E80 preserves=true fpr_mask=0x00000000
