#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80664F00(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t ctr = ctx->ctr;

    goto loc_80664F00;

loc_80664F00:
{
    r0 = 6;
    r9 = 0;
    r4 = 255;
    r6 = 0;
    r5 = -1;
    ctr = r0;
}

loc_80664F18:
{
    r0 = (r9 & 255);
    r9 = (r9 + 1);
    r7 = (r0 * 48);
    r0 = (r9 & 255);
    r9 = (r9 + 1);
    r8 = (r3 + r7);
    guest_range_0 = MemoryInline::ResolveRangeHost((r8 + 32), 0, 47u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r8 + 32), r6);
    r7 = (r0 * 48);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r8 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r8 + 56), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r8 + 60), r6);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r8 + 76), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r8 + 36), r5);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r8 + 44), r5);
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r8 + 77), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r8 + 40), r5);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r8 + 48), r5);
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r8 + 78), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r8 + 64), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r8 + 65), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r8 + 66), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r8 + 67), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r8 + 68), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r8 + 69), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r8 + 70), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r8 + 71), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r8 + 72), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r8 + 73), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r8 + 74), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r8 + 75), static_cast<uint8_t>(r4));
    r8 = (r3 + r7);
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 32), 0, 47u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r8 + 32), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r8 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r8 + 56), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r8 + 60), r6);
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r8 + 76), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r8 + 36), r5);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r8 + 44), r5);
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r8 + 77), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r8 + 40), r5);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r8 + 48), r5);
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r8 + 78), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r8 + 64), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r8 + 65), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r8 + 66), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r8 + 67), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r8 + 68), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r8 + 69), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r8 + 70), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r8 + 71), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r8 + 72), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r8 + 73), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r8 + 74), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r8 + 75), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80664F18;
    }
}

loc_80664FF4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80664F00 func_80664F00 preserves=true fpr_mask=0x00000000
