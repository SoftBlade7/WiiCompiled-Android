#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80025AF0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80025AF0;

loc_80025AF0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r9 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1;
    r8 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r4 = 16;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31176));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 25u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 16), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 17), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 18), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 19), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 24), static_cast<uint8_t>(r0));
    r3 = (r3 + 4);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003E gpr_write=0x800003DB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80025AF0 func_80025AF0 preserves=true fpr_mask=0x00000000
