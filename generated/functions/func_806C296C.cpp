#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C296C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_806C296C;

loc_806C296C:
{
    r5 = MemoryInline::FlatRead16((r3 + 44));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r0 = (r5 | 4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 92), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 100), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 108), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 116), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 124), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 132), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C296C func_806C296C preserves=true fpr_mask=0x00000000
