#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009AE10(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8009AE10;

loc_8009AE10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 18696);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r31));
    r3 = (r3 + 140);
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
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 164), 0, 80u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 164), static_cast<uint8_t>(r31));
    r3 = r30;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 165), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r30 + 166), r31);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r30 + 168), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 170), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 171), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r30 + 172), r31);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r30 + 174), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r30 + 176), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r30 + 177), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r30 + 178), r31);
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r30 + 180), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 236), r31);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 240), r31);
    }
    ctx->lr = 0x8009AE84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8009AFB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000E gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009AE10 func_8009AE10 preserves=true fpr_mask=0x00000000
