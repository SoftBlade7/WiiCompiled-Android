#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C798(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_8071C798;

loc_8071C798:
{
    r4 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r4 + 8272);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C7B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C7BC;
    }
}

loc_8071C7B4:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    goto loc_8071C7C0;
}

loc_8071C7BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
}

loc_8071C7C0:
{
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C7D4:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C7E4;
    }
}

loc_8071C7DC:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    goto loc_8071C7E8;
}

loc_8071C7E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
}

loc_8071C7E8:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C798 func_8071C798 preserves=true fpr_mask=0x00000000
