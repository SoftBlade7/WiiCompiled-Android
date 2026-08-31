#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006A6F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006A6F0;

loc_8006A6F0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006A6F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006A6FC:
{
}

loc_8006A700:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8006A70C;
    }
}

loc_8006A704:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 220));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8006A70C:
{
}

loc_8006A710:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8006A71C;
    }
}

loc_8006A714:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 224));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
}

loc_8006A71C:
{
}

loc_8006A720:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8006A72C;
    }
}

loc_8006A724:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 228));
    MemoryInline::FlatWriteFloat32(r6, f0.d);
}

loc_8006A72C:
{
}

loc_8006A730:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8006A73C;
    }
}

loc_8006A734:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 232));
    MemoryInline::FlatWriteFloat32(r7, f0.d);
}

loc_8006A73C:
{
}

loc_8006A740:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8006A74C;
    }
}

loc_8006A744:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 236));
    MemoryInline::FlatWriteFloat32(r8, f0.d);
}

loc_8006A74C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_8006A750:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006A754:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 240));
    MemoryInline::FlatWriteFloat32(r9, f0.d);
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

// RECOMP_GUEST_ABI gpr_read=0x000003F8 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006A6F0 func_8006A6F0 preserves=true fpr_mask=0x00000000
