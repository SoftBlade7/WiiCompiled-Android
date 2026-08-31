#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8008DF60_statefree(uint32_t, uint32_t);

extern "C" void func_80099080(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80099080;

loc_80099080:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008DF60u) && KnownTranslatedCpuCall<0x8008DF60u>::kAvailable && !KnownTranslatedCpuCall<0x8008DF60u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008DF60u>()) {
        const auto state_free_result_8008DF60_549 = func_8008DF60_statefree(r2, r3);
        r4 = static_cast<uint32_t>(state_free_result_8008DF60_549);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8008DF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28304));
    r7 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28300));
    r6 = 120;
    r5 = 48;
    r4 = 127;
    r3 = 64;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 233), 0, 143u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 233), static_cast<uint8_t>(r7));
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r29 + 234), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 7u, (r29 + 240), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 15u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 15u, (r29 + 248), r7);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 19u, (r29 + 252), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 3u, (r29 + 236), f1.d);
    MemoryInline::WriteResolved32(guest_range_0, 139u, (r29 + 372), r7);
    MemoryInline::WriteResolved32(guest_range_0, 23u, (r29 + 256), r30);
    MemoryInline::WriteResolved16(guest_range_0, 31u, (r29 + 264), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r29 + 262), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r29 + 260), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r29 + 261), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 35u, (r29 + 268), r31);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 11u, (r29 + 244), f0.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 107u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 107u, (r29 + 340), r0);
        MemoryInline::WriteResolved16(guest_range_0, 109u, (r29 + 342), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 111u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 111u, (r29 + 344), r0);
        MemoryInline::WriteResolved16(guest_range_0, 113u, (r29 + 346), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 115u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 115u, (r29 + 348), r0);
        MemoryInline::WriteResolved16(guest_range_0, 117u, (r29 + 350), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 119u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 119u, (r29 + 352), r0);
        MemoryInline::WriteResolved16(guest_range_0, 121u, (r29 + 354), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 123u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 123u, (r29 + 356), r0);
        MemoryInline::WriteResolved16(guest_range_0, 125u, (r29 + 358), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 127u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 127u, (r29 + 360), r0);
        MemoryInline::WriteResolved16(guest_range_0, 129u, (r29 + 362), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 131u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 131u, (r29 + 364), r0);
        MemoryInline::WriteResolved16(guest_range_0, 133u, (r29 + 366), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 135u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 135u, (r29 + 368), r0);
        MemoryInline::WriteResolved16(guest_range_0, 137u, (r29 + 370), r0);
    }
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 43u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 43u, (r29 + 276), r0);
        MemoryInline::WriteResolved32(guest_range_0, 47u, (r29 + 280), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 51u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 51u, (r29 + 284), r0);
        MemoryInline::WriteResolved32(guest_range_0, 55u, (r29 + 288), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 59u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 59u, (r29 + 292), r0);
        MemoryInline::WriteResolved32(guest_range_0, 63u, (r29 + 296), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 67u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 67u, (r29 + 300), r0);
        MemoryInline::WriteResolved32(guest_range_0, 71u, (r29 + 304), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 75u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 75u, (r29 + 308), r0);
        MemoryInline::WriteResolved32(guest_range_0, 79u, (r29 + 312), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 83u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 83u, (r29 + 316), r0);
        MemoryInline::WriteResolved32(guest_range_0, 87u, (r29 + 320), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 91u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 91u, (r29 + 324), r0);
        MemoryInline::WriteResolved32(guest_range_0, 95u, (r29 + 328), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 99u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 99u, (r29 + 332), r0);
        MemoryInline::WriteResolved32(guest_range_0, 103u, (r29 + 336), r0);
    }
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003E gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80099080 func_80099080 preserves=true fpr_mask=0x00000000
