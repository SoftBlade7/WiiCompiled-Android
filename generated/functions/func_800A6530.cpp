#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8008DF60_statefree(uint32_t, uint32_t);

extern "C" void func_800A6530(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800A6530;

loc_800A6530:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008DF60u) && KnownTranslatedCpuCall<0x8008DF60u>::kAvailable && !KnownTranslatedCpuCall<0x8008DF60u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008DF60u>()) {
        const auto state_free_result_8008DF60_421 = func_8008DF60_statefree(r2, r3);
        r4 = static_cast<uint32_t>(state_free_result_8008DF60_421);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8008DF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28056));
    r3 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28080));
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 286), 0, 3094u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 1810u, (r31 + 2096), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2694u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2694u, (r31 + 2980), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2698u, (r31 + 2984), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2750u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2750u, (r31 + 3036), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2754u, (r31 + 3040), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2806u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2806u, (r31 + 3092), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2810u, (r31 + 3096), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2862u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2862u, (r31 + 3148), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2866u, (r31 + 3152), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2918u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2918u, (r31 + 3204), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2922u, (r31 + 3208), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2974u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2974u, (r31 + 3260), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2978u, (r31 + 3264), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3030u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 3030u, (r31 + 3316), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 3034u, (r31 + 3320), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3086u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 3086u, (r31 + 3372), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 3090u, (r31 + 3376), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 286), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 287), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r31 + 298), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r31 + 291), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 292), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 293), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 294), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r31 + 297), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r31 + 295), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r31 + 296), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r31 + 299), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 14u, (r31 + 300), r3);
    MemoryInline::WriteResolved32(guest_range_0, 70u, (r31 + 356), r3);
    MemoryInline::WriteResolved8(guest_range_0, 2646u, (r31 + 2932), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 2650u, (r31 + 2936), r3);
    MemoryInline::WriteResolved8(guest_range_0, 2702u, (r31 + 2988), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 2706u, (r31 + 2992), r3);
    MemoryInline::WriteResolved8(guest_range_0, 2758u, (r31 + 3044), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 2762u, (r31 + 3048), r3);
    MemoryInline::WriteResolved8(guest_range_0, 2814u, (r31 + 3100), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 2818u, (r31 + 3104), r3);
    MemoryInline::WriteResolved8(guest_range_0, 2870u, (r31 + 3156), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 2874u, (r31 + 3160), r3);
    MemoryInline::WriteResolved8(guest_range_0, 2926u, (r31 + 3212), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 2930u, (r31 + 3216), r3);
    MemoryInline::WriteResolved8(guest_range_0, 2982u, (r31 + 3268), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 2986u, (r31 + 3272), r3);
    MemoryInline::WriteResolved8(guest_range_0, 3038u, (r31 + 3324), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 3042u, (r31 + 3328), r3);
    MemoryInline::WriteResolved32(guest_range_0, 1814u, (r31 + 2100), r3);
    MemoryInline::WriteResolved32(guest_range_0, 1866u, (r31 + 2152), r3);
    MemoryInline::WriteResolved32(guest_range_0, 1918u, (r31 + 2204), r3);
    MemoryInline::WriteResolved32(guest_range_0, 1970u, (r31 + 2256), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2022u, (r31 + 2308), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2074u, (r31 + 2360), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2126u, (r31 + 2412), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2178u, (r31 + 2464), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2230u, (r31 + 2516), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2282u, (r31 + 2568), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2334u, (r31 + 2620), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2386u, (r31 + 2672), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2438u, (r31 + 2724), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2490u, (r31 + 2776), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2542u, (r31 + 2828), r3);
    MemoryInline::WriteResolved32(guest_range_0, 2594u, (r31 + 2880), r3);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A6530 func_800A6530 preserves=true fpr_mask=0x00000000
