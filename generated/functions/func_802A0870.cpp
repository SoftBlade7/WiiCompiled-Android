#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A0870(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r28 = ctx->gpr[28];

    goto loc_802A0870;

loc_802A0870:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + -3048), 0, 1240u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -3048));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r28 + -2876));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 200u, (r28 + -2848));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 360u, (r28 + -2688));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 628u, (r28 + -2420));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 644u, (r28 + -2404));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 880u, (r28 + -2168));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1220u, (r28 + -1828));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1236u, (r28 + -1812));
    ctx->lr = 0x802A0898u;
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x817859E8u>(ctx);
    r0 = ctx->gpr[0];
    r28 = ctx->gpr[28];
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x817C61B8u>(ctx);
    r0 = ctx->gpr[0];
    r28 = ctx->gpr[28];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x100007F8 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A0870 func_802A0870 preserves=true fpr_mask=0x00000000
