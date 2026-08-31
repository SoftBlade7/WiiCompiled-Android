#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80194EDC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_80194EDC;

loc_80194EDC:
{
    r4 = 0;
    r5 = 0x80340000u;
    r6 = 0x80340000u;
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -25584), r4);
    r5 = (r5 + 22368);
    r6 = (r6 + 22240);
    r3 = -1;
    MemoryInline::FlatWrite32((r13 + -25580), r4);
    ctr = r0;
}

loc_80194F04:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r3);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r4);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r3);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r4);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 12), r4);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r3);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 16), r4);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r3);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 20), r4);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r3);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 24), r4);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r3);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 28), r4);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r3);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 32), r4);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r6 + 32), r3);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r5 + 36), r4);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r6 + 36), r3);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r5 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r6 + 40), r3);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r5 + 44), r4);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r6 + 44), r3);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r5 + 48), r4);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r6 + 48), r3);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r5 + 52), r4);
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r6 + 52), r3);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r5 + 56), r4);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r6 + 56), r3);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r5 + 60), r4);
    r5 = (r5 + 64);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r6 + 60), r3);
    r6 = (r6 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80194F04;
    }
}

loc_80194F90:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80194EDC func_80194EDC preserves=true fpr_mask=0x00000000
