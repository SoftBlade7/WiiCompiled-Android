#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D31FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_805D31FC;

loc_805D31FC:
{
    r0 = 5;
    r5 = r3;
    r4 = 0;
    ctr = r0;
}

loc_805D320C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 + r4);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    r6 = MemoryInline::FlatRead32((r6 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 16), r0);
    }
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r6 + 472));
    r6 = MemoryInline::FlatRead32((r6 + 476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 24), r0);
    }
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r6 + 944));
    r6 = MemoryInline::FlatRead32((r6 + 948));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 36), r6);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 32), r0);
    }
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r6 + 1416));
    r6 = MemoryInline::FlatRead32((r6 + 1420));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 40), r0);
    }
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r6 + 1888));
    r6 = MemoryInline::FlatRead32((r6 + 1892));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r5 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 48), r0);
    }
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 + r4);
    r4 = (r4 + 2832);
    r0 = MemoryInline::FlatRead32((r6 + 2360));
    r6 = MemoryInline::FlatRead32((r6 + 2364));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r5 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r5 + 56), r0);
    }
    r5 = (r5 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805D320C;
    }
}

loc_805D32A8:
{
    r5 = 0x809C0000u;
    r4 = (r3 + 16);
    r3 = MemoryInline::FlatRead32((r5 + 8464));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80663644u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctr = ctx->ctr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF8E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D31FC func_805D31FC preserves=true fpr_mask=0x00000000
