#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80227724_statefree(uint32_t, uint32_t, PPC_FPR);

extern "C" void func_8023D448(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8023D448;

loc_8023D448:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80227724u) && KnownTranslatedCpuCall<0x80227724u>::kAvailable && !KnownTranslatedCpuCall<0x80227724u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80227724u>()) {
        const auto state_free_result_80227724_4A0 = func_80227724_statefree(r3, r4, f0);
        r5 = static_cast<uint32_t>(state_free_result_80227724_4A0[0]);
        f0.raw = static_cast<uint64_t>(state_free_result_80227724_4A0[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80227724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
    }
    r4 = 0x802A0000u;
    r3 = r30;
    r4 = (r4 + 16140);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 56), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 56), r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 60), 0, 44u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 60));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r31 + 64));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r31 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 64), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r31 + 72));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r31 + 76));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 76), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 72), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r31 + 80));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r31 + 84));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 84), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 80), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r31 + 88));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r31 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 92), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 88), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r31 + 96));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r31 + 100));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 100), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 96), r4);
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
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023D448 func_8023D448 preserves=true fpr_mask=0x00000000
