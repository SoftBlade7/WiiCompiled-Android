#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A3474(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_807A3474;

loc_807A3474:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    r0 = (r0 & -16777217);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWrite32((r3 + 120), r0);
    MemoryInline::FlatWriteFloat32((r3 + 32), f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f7.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A3474 func_807A3474 preserves=true fpr_mask=0x00000000
