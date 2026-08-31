#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80867788(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80867788;

loc_80867788:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 44), r7);
    // inline leaf 0x80867160 (13 guest instruction(s))
    r5 = (r5 - r4);
    r7 = 0;
    r5 = (r5 + 1);
    r8 = -1;
    r0 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 28), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 32), r7);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 36), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 38), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 39), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 40), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80867160
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x000001A1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80867788 func_80867788 preserves=true fpr_mask=0x00000000
