#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A0500(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800A0500;

loc_800A0500:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x80270000u;
    r5 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r6 + 18912);
    r4 = 0x80270000u;
    r7 = (r3 + 64);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    r0 = (r6 + 20);
    r5 = (r5 + 18976);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = (r4 + 18960);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r31);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r31);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r31);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r31);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r31);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r31);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r7);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r7);
    }
    r3 = (r3 + 72);
    ctx->lr = 0x800A0590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x801A7EACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    MemoryInline::FlatWrite32((r30 + 104), r31);
    r4 = (r30 + 104);
    r3 = (r30 + 112);
    MemoryInline::FlatWrite32((r30 + 108), r31);
    MemoryInline::FlatWrite32((r30 + 96), r31);
    MemoryInline::FlatWrite32((r30 + 100), r31);
    MemoryInline::FlatWrite32((r30 + 104), r4);
    MemoryInline::FlatWrite32((r30 + 108), r4);
    ctx->lr = 0x800A05B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x801A7EACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    MemoryInline::FlatWrite32((r30 + 144), r31);
    r4 = (r30 + 144);
    r3 = (r30 + 152);
    MemoryInline::FlatWrite32((r30 + 148), r31);
    MemoryInline::FlatWrite32((r30 + 136), r31);
    MemoryInline::FlatWrite32((r30 + 140), r31);
    MemoryInline::FlatWrite32((r30 + 144), r4);
    MemoryInline::FlatWrite32((r30 + 148), r4);
    ctx->lr = 0x800A05D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x801A7EACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    r4 = 0x80270000u;
    r3 = 0x80270000u;
    r4 = (r4 + 18320);
    r0 = (r30 + 212);
    r3 = (r3 + 18288);
    MemoryInline::FlatWrite32((r30 + 176), r4);
    MemoryInline::FlatWrite32((r30 + 180), r0);
    MemoryInline::FlatWrite32((r30 + 184), r31);
    MemoryInline::FlatWrite32((r30 + 212), r3);
    MemoryInline::FlatWrite32((r30 + 216), r31);
    MemoryInline::FlatWrite32((r30 + 220), r31);
    ctx->lr = 0x800A0608u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80090C00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r4 = r30;
    ctx->lr = 0x800A0610u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80090D00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = r30;
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000200A gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A0500 func_800A0500 preserves=true fpr_mask=0x00000000
