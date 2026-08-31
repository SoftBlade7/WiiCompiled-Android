#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052EFD4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8052EFD4;

loc_8052EFD4:
{
    r6 = 0;
    r0 = -1;
    r5 = (r6 * 240);
    r6 = 6;
    r4 = (r3 + r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 13), 0, 1202u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 13), static_cast<uint8_t>(r0));
    r5 = (r6 * 240);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 240u, (r4 + 253), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 241u, (r4 + 254), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 480u, (r4 + 493), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 481u, (r4 + 494), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 720u, (r4 + 733), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 721u, (r4 + 734), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 960u, (r4 + 973), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 961u, (r4 + 974), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1200u, (r4 + 1213), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1201u, (r4 + 1214), static_cast<uint8_t>(r0));
    r4 = (r3 + r5);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 13), 0, 1202u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 240u, (r4 + 253), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 241u, (r4 + 254), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 480u, (r4 + 493), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 481u, (r4 + 494), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 720u, (r4 + 733), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 721u, (r4 + 734), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 960u, (r4 + 973), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 961u, (r4 + 974), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1200u, (r4 + 1213), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1201u, (r4 + 1214), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2916), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2917), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2918), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2919), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052EFD4 func_8052EFD4 preserves=true fpr_mask=0x00000000
