#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80218300(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80218300;

loc_80218300:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 16u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r7 = 1;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r5 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + -32), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r8 + -32), static_cast<uint8_t>(r0));
    r0 = 32;
    r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r8 + -31), static_cast<uint8_t>(r7));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r8 + -30), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r8 + -28), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r8 + -26), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r8 + -25), static_cast<uint8_t>(r6));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r8 + -24), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r8 + -23), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r8 + -22), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r8 + -20), r5);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r8 + -16), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r8 + -15), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r8 + -14), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r8 + -13), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r8 + -12), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r8 + -11), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r8 + -10), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r8 + -9), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r8 + -8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r8 + -6), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r8 + -4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80218300 func_80218300 preserves=true fpr_mask=0x00000000
