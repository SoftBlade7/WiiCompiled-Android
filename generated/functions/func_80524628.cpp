#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80524628(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80524628;

loc_80524628:
{
}

loc_8052462C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80524688;
    }
}

loc_80524630:
{
    r0 = (r4 * 12);
    r6 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 16672), 0, 11u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r6 + 16672));
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 11u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 16674));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r6 + 16675));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r6 + 16676));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r5 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r6 + 16677));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r5 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 16678));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r5 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r6 + 16679));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r5 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r6 + 16680));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r5 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r6 + 16681));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r5 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r6 + 16682));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r5 + 10), static_cast<uint8_t>(r0));
}

loc_80524688:
{
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 16682));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805246A8;
    }
}

loc_8052469C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_805246A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805246B0;
    }
}

loc_805246A4:
{
    goto loc_805246B8;
}

loc_805246A8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805246B0:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805246B8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80524628 func_80524628 preserves=true fpr_mask=0x00000000
