#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BE5C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_805BE5C8;

loc_805BE5C8:
{
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11812));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805BE5D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805BE5E8;
    }
}

loc_805BE5D8:
{
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11832));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_805BE5F4;
}

loc_805BE5E8:
{
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11832));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_805BE5F4:
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
// RECOMP_REGISTRATION base 0x805BE5C8 func_805BE5C8 preserves=true fpr_mask=0x00000000
