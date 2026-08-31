#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807828F0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_807828F0;

loc_807828F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80510000u;
    r4 = (r31 + 13824);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x809C0000u;
    r30 = (r30 + 11760);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 17872);
    r3 = (r30 + 16);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 208u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r5 = (r30 + 4);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 204u, (r29 + 204));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r29 + 12));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 96u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r30 + 16), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 4), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 8), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r3 = (r30 + 40);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 204u, (r29 + 204));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r30 + 40), f1.d);
    r5 = (r30 + 28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r3 = (r30 + 64);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r29 + 8));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r30 + 64), f1.d);
    r5 = (r30 + 52);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r3 = (r30 + 88);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r30 + 88), f0.d);
    r4 = (r31 + 13824);
    r5 = (r30 + 76);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000002 gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807828F0 func_807828F0 preserves=true fpr_mask=0x00000000
