#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_8021C2E0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_8022183C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8022183C;

loc_8022183C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x80221854u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8021C2E0u) && KnownTranslatedCpuCall<0x8021C2E0u>::kAvailable && !KnownTranslatedCpuCall<0x8021C2E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8021C2E0u>()) {
        const auto state_free_result_8021C2E0_43E = func_8021C2E0_statefree(r1, r3, r31, 0x80221854u);
        r1 = static_cast<uint32_t>(state_free_result_8021C2E0_43E[0]);
        r31 = static_cast<uint32_t>(state_free_result_8021C2E0_43E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x8021C2E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r31 = ctx->gpr[31];
    }
    r3 = 0x802A0000u;
    r0 = 0;
    r3 = (r3 + 11632);
    r5 = 6;
    r6 = (r3 + 12);
    r4 = 255;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 4), r3);
    r3 = r31;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 16), r6);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r31 + 20), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r31 + 21), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 44), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 48), r0);
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

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022183C func_8022183C preserves=true fpr_mask=0x00000000
