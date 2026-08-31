#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8008DF60_statefree(uint32_t, uint32_t);

extern "C" void func_800ADDF0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800ADDF0;

loc_800ADDF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008DF60u) && KnownTranslatedCpuCall<0x8008DF60u>::kAvailable && !KnownTranslatedCpuCall<0x8008DF60u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008DF60u>()) {
        const auto state_free_result_8008DF60_681 = func_8008DF60_statefree(r2, r3);
        r4 = static_cast<uint32_t>(state_free_result_8008DF60_681);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
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
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27888));
    r31 = 0;
    r5 = 64;
    r4 = -1;
    r0 = 127;
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 233), 0, 75u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r27 + 233), static_cast<uint8_t>(r31));
    r3 = (r27 + 276);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r27 + 234), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r27 + 236), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 7u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 7u, (r27 + 240), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 11u, (r27 + 244), r28);
    }
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r27 + 248), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 19u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 19u, (r27 + 252), r29);
        MemoryInline::WriteResolved32(guest_range_0, 23u, (r27 + 256), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 27u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 27u, (r27 + 260), r31);
        MemoryInline::WriteResolved32(guest_range_0, 31u, (r27 + 264), r4);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 59u, (r27 + 292), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r27 + 296), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r27 + 297), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 65u, (r27 + 298), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r27 + 299), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r27 + 300), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r27 + 301), static_cast<uint8_t>(r0));
    // inline leaf 0x80095B40 (9 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28384));
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28380));
    r0 = 0;
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x80095B40
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r27 + 235), static_cast<uint8_t>(r31));
    r11 = (r1 + 32);
    MemoryInline::WriteResolved32(guest_range_0, 71u, (r27 + 304), r31);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007E gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ADDF0 func_800ADDF0 preserves=true fpr_mask=0x00000000
