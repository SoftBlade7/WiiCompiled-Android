#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8075A398(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_8075A398;

loc_8075A398:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 232));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 13812));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8075A3A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075A3C0;
    }
}

loc_8075A3AC:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 13920));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 232), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8075A3C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 248), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8075A398 func_8075A398 preserves=true fpr_mask=0x00000000
