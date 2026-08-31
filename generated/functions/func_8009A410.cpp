#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009A410(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8009A410;

loc_8009A410:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r4 = r5;
    r5 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8008E0E0u>(ctx);
    r0 = ctx->gpr[0];
    r6 = ctx->gpr[6];
    r4 = 0x80270000u;
    r3 = (r30 + 256);
    r4 = (r4 + 18616);
    MemoryInline::FlatWrite32(r30, r4);
    ctx->lr = 0x8009A44Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80098DB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    r4 = 0x80270000u;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 632), 0, 576u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 652), static_cast<uint8_t>(r0));
    r4 = (r4 + 18672);
    r3 = r30;
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r30 + 653), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 632), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 636), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 648), r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 656), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 544u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 544u, (r30 + 1176), r0);
        MemoryInline::WriteResolved32(guest_range_0, 548u, (r30 + 1180), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 552u, (r30 + 1184), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 540u, (r30 + 1172), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 556u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 556u, (r30 + 1188), r0);
        MemoryInline::WriteResolved32(guest_range_0, 560u, (r30 + 1192), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 568u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 568u, (r30 + 1200), r0);
        MemoryInline::WriteResolved32(guest_range_0, 572u, (r30 + 1204), r0);
    }
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001E7E gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009A410 func_8009A410 preserves=true fpr_mask=0x00000000
