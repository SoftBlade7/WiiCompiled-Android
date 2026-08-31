#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052E770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052E770;

loc_8052E770:
{
    r4 = MemoryInline::FlatRead8((r3 + 2924));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(100));
}

loc_8052E778:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052E788;
    }
}

loc_8052E77C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 2924), static_cast<uint8_t>(r0));
    goto loc_8052E790;
}

loc_8052E788:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2924), static_cast<uint8_t>(r0));
}

loc_8052E790:
{
    r6 = 0;
    r5 = (r6 * 240);
    r6 = 6;
    r4 = (r3 + r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 226), 0, 1209u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 234));
    r5 = (r6 * 240);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 224), 0, 1210u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 233), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 226));
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r4 + 224), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 248u, (r4 + 474));
    MemoryInline::WriteResolved8(guest_range_1, 249u, (r4 + 473), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 240u, (r4 + 466));
    MemoryInline::WriteResolved16(guest_range_1, 240u, (r4 + 464), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 488u, (r4 + 714));
    MemoryInline::WriteResolved8(guest_range_1, 489u, (r4 + 713), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 480u, (r4 + 706));
    MemoryInline::WriteResolved16(guest_range_1, 480u, (r4 + 704), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 728u, (r4 + 954));
    MemoryInline::WriteResolved8(guest_range_1, 729u, (r4 + 953), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 720u, (r4 + 946));
    MemoryInline::WriteResolved16(guest_range_1, 720u, (r4 + 944), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 968u, (r4 + 1194));
    MemoryInline::WriteResolved8(guest_range_1, 969u, (r4 + 1193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 960u, (r4 + 1186));
    MemoryInline::WriteResolved16(guest_range_1, 960u, (r4 + 1184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1208u, (r4 + 1434));
    MemoryInline::WriteResolved8(guest_range_1, 1209u, (r4 + 1433), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1200u, (r4 + 1426));
    MemoryInline::WriteResolved16(guest_range_1, 1200u, (r4 + 1424), static_cast<uint16_t>(r0));
    r4 = (r3 + r5);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 226), 0, 1209u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r4 + 234));
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 224), 0, 1210u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r4 + 233), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r4 + 226));
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r4 + 224), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 248u, (r4 + 474));
    MemoryInline::WriteResolved8(guest_range_3, 249u, (r4 + 473), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 240u, (r4 + 466));
    MemoryInline::WriteResolved16(guest_range_3, 240u, (r4 + 464), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 488u, (r4 + 714));
    MemoryInline::WriteResolved8(guest_range_3, 489u, (r4 + 713), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 480u, (r4 + 706));
    MemoryInline::WriteResolved16(guest_range_3, 480u, (r4 + 704), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 728u, (r4 + 954));
    MemoryInline::WriteResolved8(guest_range_3, 729u, (r4 + 953), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 720u, (r4 + 946));
    MemoryInline::WriteResolved16(guest_range_3, 720u, (r4 + 944), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 968u, (r4 + 1194));
    MemoryInline::WriteResolved8(guest_range_3, 969u, (r4 + 1193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 960u, (r4 + 1186));
    MemoryInline::WriteResolved16(guest_range_3, 960u, (r4 + 1184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1208u, (r4 + 1434));
    MemoryInline::WriteResolved8(guest_range_3, 1209u, (r4 + 1433), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 1200u, (r4 + 1426));
    MemoryInline::WriteResolved16(guest_range_3, 1200u, (r4 + 1424), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r3 + 2924));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052E770 func_8052E770 preserves=true fpr_mask=0x00000000
