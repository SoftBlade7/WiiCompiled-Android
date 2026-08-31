#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058985C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8058985C;

loc_8058985C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x8058987Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8059018Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r3 = 0x80890000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6920));
    r3 = 0x808B0000u;
    r3 = (r3 + 25208);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 12), r3);
    r3 = r30;
    MemoryInline::WriteResolved8(guest_range_0, 76u, (r30 + 88), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 84u, (r30 + 96), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 100), r31);
    MemoryInline::WriteResolved16(guest_range_0, 154u, (r30 + 166), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r30 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 172), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 176), r0);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 73u, (r30 + 85), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 74u, (r30 + 86), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r30 + 80), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 28), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8058985C func_8058985C preserves=true fpr_mask=0x00000000
