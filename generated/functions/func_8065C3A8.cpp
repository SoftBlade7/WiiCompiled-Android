#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065C3A8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_8065C3A8;

loc_8065C3A8:
{
    r6 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 388u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r6));
    r4 = 20;
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    r7 = r3;
    r5 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 12), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 13), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 14), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 15), static_cast<uint8_t>(r6));
    ctr = r0;
}

loc_8065C400:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 16), 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r7 + 16), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r7 + 17), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r7 + 18), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r7 + 19), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r7 + 20), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r7 + 21), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r7 + 22), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r7 + 23), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r7 + 24), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r7 + 25), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r7 + 26), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r7 + 27), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r7 + 28), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r7 + 29), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r7 + 30), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r7 + 31), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r7 + 32), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r7 + 33), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r7 + 34), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r7 + 35), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r7 + 36), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r7 + 37), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r7 + 38), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r7 + 39), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r7 + 40), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r7 + 41), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r7 + 42), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r7 + 43), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r7 + 44), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r7 + 45), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r7 + 46), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r7 + 47), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r7 + 48), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r7 + 49), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r7 + 50), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r7 + 51), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r7 + 52), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r7 + 53), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r7 + 54), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r7 + 55), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r7 + 56), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r7 + 57), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r7 + 58), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r7 + 59), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r7 + 60), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r7 + 61), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r7 + 62), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r7 + 63), static_cast<uint8_t>(r5));
    r7 = (r7 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065C400;
    }
}

loc_8065C4C8:
{
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r0);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r0);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r0);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r0);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 152), r0);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 208), r0);
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r3 + 212), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 216), r0);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r3 + 220), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 224), r0);
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r3 + 228), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r3 + 232), r0);
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r3 + 236), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r3 + 240), r0);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r3 + 244), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r3 + 248), r0);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r3 + 252), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r3 + 256), r0);
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r3 + 260), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r3 + 264), r0);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r3 + 268), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 272u, (r3 + 272), r0);
        MemoryInline::WriteResolved32(guest_range_0, 276u, (r3 + 276), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r3 + 280), r0);
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r3 + 284), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r3 + 288), r0);
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r3 + 292), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r3 + 296), r0);
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r3 + 300), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 304u, (r3 + 304), r0);
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r3 + 308), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 312), r0);
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r3 + 316), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 320), r0);
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r3 + 324), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r3 + 328), r0);
        MemoryInline::WriteResolved32(guest_range_0, 332u, (r3 + 332), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 336u, (r3 + 336), r0);
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r3 + 340), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 344u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r3 + 344), r0);
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r3 + 348), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r3 + 352), r0);
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r3 + 356), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 360u, (r3 + 360), r0);
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r3 + 364), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 368u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r3 + 368), r0);
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r3 + 372), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r3 + 376), r0);
        MemoryInline::WriteResolved32(guest_range_0, 380u, (r3 + 380), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 384u, (r3 + 384), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r0);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r3 + 172), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r3 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r3 + 180), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r3 + 184), r0);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r3 + 188), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 192), r0);
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r3 + 196), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r3 + 200), r0);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r3 + 204), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065C3A8 func_8065C3A8 preserves=true fpr_mask=0x00000000
