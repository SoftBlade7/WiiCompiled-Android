#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B6C90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B6C90;

loc_800B6C90:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = (r5 + r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteFloat32(r4, f31.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f31.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f31.d);
    MemoryInline::FlatWriteFloat32((r4 + 12), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f31.d);
}

loc_800B6CDC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f31.d);
    r3 = r29;
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f31.d);
    ctx->lr = 0x800B6CFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B65F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B6D0C:
{
    r6 = (r31 - r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6D18;
    }
}

loc_800B6D14:
{
    goto loc_800B6D1C;
}

loc_800B6D18:
{
    f1.d = f0.d;
}

loc_800B6D1C:
{
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B6D2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6D34;
    }
}

loc_800B6D30:
{
    goto loc_800B6D38;
}

loc_800B6D34:
{
    f1.d = f0.d;
}

loc_800B6D38:
{
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B6D48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B6D50;
    }
}

loc_800B6D4C:
{
    goto loc_800B6D54;
}

loc_800B6D50:
{
    f1.d = f0.d;
}

loc_800B6D54:
{
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B6D64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B6D6C;
    }
}

loc_800B6D68:
{
    goto loc_800B6D70;
}

loc_800B6D6C:
{
    f1.d = f0.d;
}

loc_800B6D70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800B6D74:
{
    MemoryInline::FlatWriteFloat32((r30 + 12), f1.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800B6CDC;
    }
}

loc_800B6D7C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B6C90 func_800B6C90 preserves=false fpr_mask=0x80000000
