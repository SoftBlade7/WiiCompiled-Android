#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806018FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_806018FC;

loc_806018FC:
{
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 26592));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80601908:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8060191C;
    }
}

loc_8060190C:
{
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 26596));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80601928;
}

loc_8060191C:
{
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 26596));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_80601928:
{
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063D550u>(ctx);
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806018FC func_806018FC preserves=true fpr_mask=0x00000000
