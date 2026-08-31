#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CB988(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_801CB988;

loc_801CB988:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801CB9B0;
    }
}

loc_801CB990:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 0u, (r1 + 40), f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 8u, (r1 + 48), f2.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r1 + 56), f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 24u, (r1 + 64), f4.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 72), f5.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r1 + 80), f6.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 88), f7.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r1 + 96), f8.d);
}

loc_801CB9B0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r7);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r10);
    }
    r1 = (r1 + 112);
    ctx->gpr[1] = r1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FA gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x02 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801CB988 func_801CB988 preserves=true fpr_mask=0x00000000
