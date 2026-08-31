#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80658F80(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t ctr = ctx->ctr;

    goto loc_80658F80;

loc_80658F80:
{
    r0 = 5;
    r5 = 0;
    r4 = 1;
    ctr = r0;
}

loc_80658F90:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 9708), 0, 70u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 9708), r5);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 9712), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 9713), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 9714), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 9715), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 9716), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 9717), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 9720), r5);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 9724), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 9725), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 9726), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 9727), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 9728), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 9729), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 9732), r5);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 9736), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 9737), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r3 + 9738), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r3 + 9739), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 9740), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 9741), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 9744), r5);
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 9748), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r3 + 9749), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r3 + 9750), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r3 + 9751), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 9752), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r3 + 9753), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 9756), r5);
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r3 + 9760), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r3 + 9761), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r3 + 9762), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r3 + 9763), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r3 + 9764), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r3 + 9765), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 9768), r5);
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r3 + 9772), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 65u, (r3 + 9773), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r3 + 9774), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r3 + 9775), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r3 + 9776), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 69u, (r3 + 9777), static_cast<uint8_t>(r4));
    r3 = (r3 + 72);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80658F90;
    }
}

loc_80659040:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80658F80 func_80658F80 preserves=true fpr_mask=0x00000000
