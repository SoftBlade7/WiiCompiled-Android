#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806BBAE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_806BBAE8;

loc_806BBAE8:
{
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 356));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -3576));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 356), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806BBB08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806BBB10;
    }
}

loc_806BBB0C:
{
    MemoryInline::FlatWriteFloat32((r3 + 356), f0.d);
}

loc_806BBB10:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806BB840u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806BBAE8 func_806BBAE8 preserves=true fpr_mask=0x00000000
