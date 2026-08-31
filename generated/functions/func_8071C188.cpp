#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_8071C188;

loc_8071C188:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x808A0000u;
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r4 + 8272);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C1A8:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C1BC;
    }
}

loc_8071C1B4:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    goto loc_8071C1C0;
}

loc_8071C1BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
}

loc_8071C1C0:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r5 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C1D4:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C1E4;
    }
}

loc_8071C1DC:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    goto loc_8071C1E8;
}

loc_8071C1E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
}

loc_8071C1E8:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C188 func_8071C188 preserves=true fpr_mask=0x00000000
