#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80546FE0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];

    goto loc_80546FE0;

loc_80546FE0:
{
    r6 = 65536;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r0 = (r6 + -29504);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r0 = (r5 * r0);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r3 = (r3 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 48), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 49), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 50), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 51), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 52), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 53), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 54), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 55), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80546FE0 func_80546FE0 preserves=true fpr_mask=0x00000000
