#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055F848(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8055F848;

loc_8055F848:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8055F854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055F87C;
    }
}

loc_8055F858:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8055F85C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8055F860:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 220));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 224));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 228));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_8055F87C:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5052));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055F848 func_8055F848 preserves=true fpr_mask=0x00000000
