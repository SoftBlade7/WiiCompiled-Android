#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C25CC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];

    goto loc_807C25CC;

loc_807C25CC:
{
    r12 = 0x809C0000u;
    r11 = 34;
    r12 = (r12 + 15336);
    r8 = 255;
    r10 = (r12 + 0);
    r9 = 170;
    r3 = (r12 + 8);
    r0 = 136;
    r4 = 85;
    r6 = (r12 + 4);
    r7 = 102;
    r5 = 51;
    guest_range_0 = MemoryInline::ResolveRangeHost(r12, 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r12, static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r10 + 1), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r10 + 2), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r10 + 3), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r12 + 4), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r6 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r6 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r12 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 2), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 3), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807C25CC func_807C25CC preserves=true fpr_mask=0x00000000
