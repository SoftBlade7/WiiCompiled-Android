#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E3BA8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t ctr = ctx->ctr;

    goto loc_805E3BA8;

loc_805E3BA8:
{
    r7 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 236u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
    r8 = -1;
    r6 = 15;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r8);
    r0 = 6;
    r9 = r3;
    r10 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r8));
    r5 = 2;
    r4 = 255;
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r7);
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r3 + 188), r6);
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 9), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r7);
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 192), r6);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 10), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r7);
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r3 + 196), r6);
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 11), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 152), r7);
    MemoryInline::WriteResolved32(guest_range_0, 200u, (r3 + 200), r6);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 12), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r7);
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r3 + 204), r6);
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 13), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r7);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 208), r6);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 14), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r7);
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r3 + 212), r6);
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 15), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 168), r7);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 216), r6);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 16), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r3 + 172), r7);
    MemoryInline::WriteResolved32(guest_range_0, 220u, (r3 + 220), r6);
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 17), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r3 + 176), r7);
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 224), r6);
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 18), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r3 + 180), r7);
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r3 + 228), r6);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 19), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r3 + 184), r7);
    MemoryInline::WriteResolved32(guest_range_0, 232u, (r3 + 232), r6);
    ctr = r0;
}

loc_805E3C64:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 20), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 20), r5);
    r10 = (r10 + 1);
    guest_range_2 = MemoryInline::ResolveRangeHost((r9 + 116), 0, 14u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r9 + 116), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 24), r5);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r9 + 117), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 28), r5);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r9 + 118), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 32), r5);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r9 + 119), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 36), r5);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r9 + 120), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 40), r5);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r9 + 121), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 44), r5);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r9 + 122), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 48), r5);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r9 + 123), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 52), r5);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r9 + 124), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 56), r5);
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r9 + 125), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 60), r5);
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r9 + 126), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 64), r5);
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r9 + 127), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 28), r5);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r9 + 118), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 32), r5);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r9 + 119), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 36), r5);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r9 + 120), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 40), r5);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r9 + 121), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 44), r5);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r9 + 122), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 48), r5);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r9 + 123), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 52), r5);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r9 + 124), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 56), r5);
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r9 + 125), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 60), r5);
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r9 + 126), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 64), r5);
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r9 + 127), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 68), r5);
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r9 + 128), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 72), r5);
    r3 = (r3 + 16);
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r9 + 129), static_cast<uint8_t>(r4));
    r9 = (r9 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E3C64;
    }
}

loc_805E3D34:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E3BA8 func_805E3BA8 preserves=true fpr_mask=0x00000000
