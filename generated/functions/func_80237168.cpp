#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80234A54_statefree(uint32_t, uint32_t, uint32_t, PPC_FPR);
extern "C" uint64_t func_80234A54_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_80237168(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80237168;

loc_80237168:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80234A54u) && KnownTranslatedCpuCall<0x80234A54u>::kAvailable && !KnownTranslatedCpuCall<0x80234A54u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80234A54u>()) {
        const auto state_free_result_80234A54_52E = func_80234A54_statefree_v0(r1, r2, r3);
        r1 = static_cast<uint32_t>(state_free_result_80234A54_52E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80234A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r7 = MemoryInline::FlatRead8((r2 + -25692));
    r9 = 0x802A0000u;
    r6 = MemoryInline::FlatRead8((r2 + -25691));
    r9 = (r9 + 15472);
    r5 = MemoryInline::FlatRead8((r2 + -25690));
    r8 = 0;
    r4 = MemoryInline::FlatRead8((r2 + -25689));
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24680));
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24676));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 405u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 36), r9);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 40), r8);
    }
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 44), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r31 + 45), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r31 + 46), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r31 + 47), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 52), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 404u, (r31 + 440), static_cast<uint8_t>(r0));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x800003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80237168 func_80237168 preserves=true fpr_mask=0x00000000
