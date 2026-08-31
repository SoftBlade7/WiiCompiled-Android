#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8084D3B0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8084D3B0;

loc_8084D3B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 2;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 116), r31);
    ctx->lr = 0x8084D3E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80837170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = 0x808B0000u;
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r5 + -8708));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = 1;
    ctx->lr = 0x8084D3FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80838884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = 0x809C0000u;
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + -10456), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r6 = (r4 * 240);
    r4 = 6;
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3300), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3540), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3780), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4020), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4260), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4500), r31);
    r6 = (r4 * 240);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3300), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3540), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3780), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4020), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4260), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4500), r31);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8084D3B0 func_8084D3B0 preserves=true fpr_mask=0x00000000
