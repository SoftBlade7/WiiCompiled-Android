#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F4884(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_807F4884;

loc_807F4884:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -24836));
    r4 = 0x80510000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + 16544);
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25288));
    r3 = (r31 + 12);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 12), f1.d);
    r4 = (r4 + 13824);
    r5 = (r31 + 0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r3 = 0x809C0000u;
    r3 = (r3 + 7812);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 28), r3);
    }
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000002 gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807F4884 func_807F4884 preserves=true fpr_mask=0x00000000
