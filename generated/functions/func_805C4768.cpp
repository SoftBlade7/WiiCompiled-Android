#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C4768(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805C4768;

loc_805C4768:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    ctx->lr = 0x805C4780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8060197Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r4 = 0x808B0000u;
    r5 = 0x808B0000u;
    r4 = (r4 + 32280);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 108u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
    r3 = 0x808B0000u;
    r5 = (r5 + 32404);
    r3 = (r3 + 32256);
    r10 = MemoryInline::FlatRead32(r3);
    r4 = 0x808B0000u;
    r7 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r10);
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r4 + 32380);
    r8 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r31 + 108);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r31 + 84), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r31 + 68), r5);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r31 + 72), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 76), r10);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r31 + 80), r9);
    }
    r7 = (r7 + 32268);
    r6 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWriteRam32((r1 + 28), r8);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r31 + 88), r4);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r31 + 92), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r31 + 96), r6);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r31 + 100), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r31 + 104), r0);
    // inline leaf 0x805EEB68 (9 guest instruction(s))
    r4 = 0x808C0000u;
    r0 = 0;
    r4 = (r4 + -25960);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805EEB68
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805C4768 func_805C4768 preserves=true fpr_mask=0x00000000
