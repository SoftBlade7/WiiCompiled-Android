#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C6148(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_806C6148;

loc_806C6148:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 32), 0, 148u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 32));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24));
    MemoryInline::FlatWriteFloat32((r4 + 940), f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 32));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteFloat32((r4 + 948), f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 32));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 1176), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 32));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteFloat32((r3 + 976), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 980), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 984), f0.d);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C6148 func_806C6148 preserves=true fpr_mask=0x00000000
