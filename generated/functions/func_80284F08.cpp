#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80284F08(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r20 = ctx->gpr[20];

    goto loc_80284F08;

loc_80284F08:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r20 + 17604), 0, 336u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r20 + 17604));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r20 + 17612));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r20 + 17620));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r20 + 17660));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r20 + 17628));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r20 + 17628));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r20 + 17636));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r20 + 17644));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r20 + 17652));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 276u, (r20 + 17880));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 284u, (r20 + 17888));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 292u, (r20 + 17896));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 332u, (r20 + 17936));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r20 + 17904));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r20 + 17904));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 308u, (r20 + 17912));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 316u, (r20 + 17920));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 324u, (r20 + 17928));
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80719370u>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80284F08 func_80284F08 preserves=true fpr_mask=0x00000000
