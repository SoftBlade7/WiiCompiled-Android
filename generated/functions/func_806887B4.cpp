#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806887B4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_806887B4;

loc_806887B4:
{
    r5 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 172), 0, 28u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 172));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -11336));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 172));
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 172));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 172));
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 196));
    MemoryInline::FlatWriteFloat32((r4 + 52), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 196));
    MemoryInline::FlatWriteFloat32((r4 + 64), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 196));
    MemoryInline::FlatWriteFloat32((r4 + 76), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 196));
    MemoryInline::FlatWriteFloat32((r4 + 88), f0.d);
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000030 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806887B4 func_806887B4 preserves=true fpr_mask=0x00000000
