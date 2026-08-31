#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80233C94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80233C94;

loc_80233C94:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 564u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    r0 = 65;
    r8 = 74;
    r7 = 80;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r6 = 71;
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r8));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r7));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r6));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r6 = (r6_rot_0 & -2048);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r8 = (r8_rot_0 & -16777216);
    r6 = (r7 | r6);
    r6 = (r8 | r6);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 560u, (r4 + 560));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80233C94 func_80233C94 preserves=true fpr_mask=0x00000000
