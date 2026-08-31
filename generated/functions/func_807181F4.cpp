#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807181F4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_807181F4;

loc_807181F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 212u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 36), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 64), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 96), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 124), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 156), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r3 + 184), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (r3 + 216), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 208u, (r3 + 244), f2.d);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000006 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807181F4 func_807181F4 preserves=true fpr_mask=0x00000000
