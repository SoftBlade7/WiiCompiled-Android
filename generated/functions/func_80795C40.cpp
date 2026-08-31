#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80795C40(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80795C40;

loc_80795C40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = 0x808D0000u;
    r8 = (r8 + 6352);
    r3 = 0x80240000u;
    r3 = (r3 + 28832);
    r7 = MemoryInline::FlatRead32(r3);
    r5 = (r8 + 0);
    r4 = (r8 + 48);
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r8 + 96);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 108u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r8, r7);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r8 + 48), r7);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 4), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 8), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r8 + 96), r7);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 4), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 8), r0);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80795C40 func_80795C40 preserves=true fpr_mask=0x00000000
