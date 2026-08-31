#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063D284(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8063D284;

loc_8063D284:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r4 = MemoryInline::FlatRead32((r3 + 100));
    f28.d = MemoryInline::FlatReadFloat32((r3 + 140));
    r4 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8063D2C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8063D350;
    }
}

loc_8063D2C4:
{
    r3 = MemoryInline::FlatRead32((r4 + 100));
    f31.d = MemoryInline::FlatReadFloat32((r4 + 140));
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8063D2D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8063D338;
    }
}

loc_8063D2D8:
{
    r3 = MemoryInline::FlatRead32((r4 + 100));
    f30.d = MemoryInline::FlatReadFloat32((r4 + 140));
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8063D2E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8063D320;
    }
}

loc_8063D2EC:
{
    r3 = MemoryInline::FlatRead32((r4 + 100));
    f29.d = MemoryInline::FlatReadFloat32((r4 + 140));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8063D2FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063D308;
    }
}

loc_8063D300:
{
    ctx->lr = 0x8063D304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063D284u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f1.d));
}

loc_8063D308:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -29740));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_8063D314:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063D31C;
    }
}

loc_8063D318:
{
    f29.d = f0.d;
}

loc_8063D31C:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f29.d));
}

loc_8063D320:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -29740));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8063D32C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063D334;
    }
}

loc_8063D330:
{
    f30.d = f0.d;
}

loc_8063D334:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f30.d));
}

loc_8063D338:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -29740));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8063D344:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063D34C;
    }
}

loc_8063D348:
{
    f31.d = f0.d;
}

loc_8063D34C:
{
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f31.d));
}

loc_8063D350:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -29740));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_8063D35C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063D364;
    }
}

loc_8063D360:
{
    f28.d = f0.d;
}

loc_8063D364:
{
    f1.d = f28.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 32));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FA gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8063D284 func_8063D284 preserves=false fpr_mask=0xF0000000
