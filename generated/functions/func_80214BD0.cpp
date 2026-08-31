#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80214BD0;

loc_80214BD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r5 = (r2 + -24120);
    r4 = 16777216;
    r12 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r10 = (r4 + -1);
    r31 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r11 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25824), 0, 1705u, true, false);
    r30 = MemoryInline::ReadResolved8(guest_range_0, 1704u, (r2 + -24120));
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 1;
    r9 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r2 + -25824));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r2 + -25823));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r2 + -25822));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r2 + -25821));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r2 + -25820));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r2 + -25819));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r2 + -25818));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 35u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 4), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r3 + 20), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r3 + 21), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r3 + 22), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r3 + 23), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 24), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 28), r10);
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r3 + 32), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r3 + 33), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r3 + 34), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r3 + 35), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r3 + 36), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r3 + 37), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r3 + 38), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000000E gpr_write=0xF0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80214BD0 func_80214BD0 preserves=true fpr_mask=0x00000000
