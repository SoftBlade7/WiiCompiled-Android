#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ADD80(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800ADD80;

loc_800ADD80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8008DC60u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r5 = 0x80270000u;
    r6 = 0;
    r5 = (r5 + 19384);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 233u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r31 + 208), r6);
    r4 = (r5 + 36);
    r3 = (r31 + 276);
    r0 = (r5 + 56);
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r31 + 212), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r31 + 220), r6);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r31 + 224), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r5);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r31 + 216), r4);
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r31 + 228), r0);
    MemoryInline::WriteResolved8(guest_range_0, 232u, (r31 + 232), static_cast<uint8_t>(r6));
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
    r3 = r31;
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

// RECOMP_GUEST_ABI gpr_read=0x80001FFE gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800ADD80 func_800ADD80 preserves=true fpr_mask=0x00000000
