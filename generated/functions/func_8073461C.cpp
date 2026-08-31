#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073461C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8073461C;

loc_8073461C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = (r3 + 56);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 425u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 408u, (r3 + 412), r31);
    MemoryInline::WriteResolved8(guest_range_0, 412u, (r3 + 416), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 413u, (r3 + 417), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 414u, (r3 + 418), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 416u, (r3 + 420), r31);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    MemoryInline::WriteResolved32(guest_range_0, 420u, (r30 + 424), r31);
    MemoryInline::WriteResolved8(guest_range_0, 424u, (r30 + 428), static_cast<uint8_t>(r31));
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073461C func_8073461C preserves=true fpr_mask=0x00000000
