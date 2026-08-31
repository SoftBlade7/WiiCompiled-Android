#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8088F334_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_808895AC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_808895AC;

loc_808895AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80510000u;
    r4 = (r30 + 13824);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808B0000u;
    r29 = (r29 + 10056);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0x809C0000u;
    r28 = (r28 + 18920);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 120u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r29 + 84));
    r3 = (r28 + 64);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    guest_range_2 = MemoryInline::ResolveRangeHost((r28 + 52), 0, 128u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r28 + 64), f1.d);
    r5 = (r28 + 52);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r31 = (r28 + 176);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r29 + 88));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r29 + 92));
        }
    }
    r3 = r31;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r28 + 176), f1.d);
    r4 = (r30 + 13824);
    r5 = (r28 + 76);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 92u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r31 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r29 + 96));
    r3 = (r31 + 12);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r29 + 100));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 12), f1.d);
    r5 = (r28 + 88);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 20), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r29 + 104));
    r3 = (r31 + 24);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r29 + 108));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 24), f1.d);
    r5 = (r28 + 100);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 32), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r29 + 104));
    r3 = (r31 + 36);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r29 + 108));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 36), f1.d);
    r5 = (r28 + 112);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 44), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r29 + 112));
    r3 = (r31 + 48);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r29 + 92));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 48), f1.d);
    r5 = (r28 + 124);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r31 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r31 + 56), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 72u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r29 + 116));
    r3 = (r31 + 60);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r29 + 108));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r31 + 60), f1.d);
    r5 = (r28 + 136);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r31 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r31 + 68), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 84u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r29 + 96));
    r3 = (r31 + 72);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r29 + 108));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r31 + 72), f1.d);
    r5 = (r28 + 148);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r31 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r31 + 80), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r29 + 96));
    r3 = (r31 + 84);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r29 + 108));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r31 + 84), f1.d);
    r5 = (r28 + 160);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r31 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r31 + 92), f1.d);
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8088F334u) && KnownTranslatedCpuCall<0x8088F334u>::kAvailable && !KnownTranslatedCpuCall<0x8088F334u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8088F334u>()) {
        const auto state_free_result_8088F334_32C6 = func_8088F334_statefree(r3, r4, r5);
        r6 = static_cast<uint32_t>(state_free_result_8088F334_32C6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8088F334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0000002 gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808895AC func_808895AC preserves=true fpr_mask=0x00000000
