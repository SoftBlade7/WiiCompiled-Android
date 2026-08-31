#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80743DF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80743DF4;

loc_80743DF4:
{
    r5 = 0x808D0000u;
    r4 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r5 + -19188));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11088));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80743E14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80743E1C;
    }
}

loc_80743E18:
{
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
}

loc_80743E1C:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80743FB8u>(ctx);
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

// RECOMP_GUEST_ABI gpr_read=0xF800000A gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0xE000001F fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80743DF4 func_80743DF4 preserves=true fpr_mask=0x00000000
