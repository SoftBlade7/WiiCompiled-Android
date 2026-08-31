#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80780F0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80780F0C;

loc_80780F0C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 17872);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 328));
    ctx->lr = 0x80780F44u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022A4A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80780F48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80780FE0;
    }
}

loc_80780F4C:
{
    r3 = MemoryInline::FlatRead32((r29 + 328));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 124));
    r30 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    f31.d = MemoryInline::FlatReadFloat32((r31 + 128));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f1.d);
    ctx->lr = 0x80780F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r30 + 48), f31.d);
    r5 = (r31 + 108);
    r3 = MemoryInline::FlatRead32((r29 + 328));
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r5 = MemoryInline::FlatRead8((r31 + 108));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_80781104;
}

loc_80780FE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_80780FE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80781028;
    }
}

loc_80780FE8:
{
    r3 = MemoryInline::FlatRead32((r29 + 328));
    r5 = (r31 + 112);
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r5 = MemoryInline::FlatRead8((r31 + 112));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_80781104;
}

loc_80781028:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8078102C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807810C0;
    }
}

loc_80781030:
{
    r3 = MemoryInline::FlatRead32((r29 + 328));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 132));
    r3 = MemoryInline::FlatRead32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 136));
    MemoryInline::FlatWriteFloat32((r3 + 20), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 124));
    MemoryInline::FlatWriteFloat32((r3 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    ctx->lr = 0x80781080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 328));
    r5 = (r31 + 116);
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r5 = MemoryInline::FlatRead8((r31 + 116));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_80781104;
}

loc_807810C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(3));
}

loc_807810C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80781104;
    }
}

loc_807810C8:
{
    r3 = MemoryInline::FlatRead32((r29 + 328));
    r5 = (r31 + 120);
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r5 = MemoryInline::FlatRead8((r31 + 120));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_80781104:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 116));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00007FF gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80780F0C func_80780F0C preserves=false fpr_mask=0x80000000
