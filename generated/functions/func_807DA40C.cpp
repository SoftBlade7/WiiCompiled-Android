#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DA40C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807DA40C;

loc_807DA40C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = 0x808A0000u;
    f31.d = f1.d;
    r4 = (r4 + 30112);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    MemoryInline::FlatWriteRam32((r1 + 80), r28);
    r28 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 68));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807DA448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807DA550;
    }
}

loc_807DA44C:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807DA468:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807DA470;
    }
}

loc_807DA46C:
{
    goto loc_807DA484;
}

loc_807DA470:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807DA474:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807DA47C;
    }
}

loc_807DA478:
{
    goto loc_807DA480;
}

loc_807DA47C:
{
    f3.d = f0.d;
}

loc_807DA480:
{
    f2.d = f3.d;
}

loc_807DA484:
{
    f4.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f2.d = PPC_Fctiwz(f2.d);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PpcFmulsInline(f1.d, f4.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    r0 = fctiwzword0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807DA4A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807DA4B0;
    }
}

loc_807DA4AC:
{
    goto loc_807DA4C4;
}

loc_807DA4B0:
{
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807DA4B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807DA4BC;
    }
}

loc_807DA4B8:
{
    goto loc_807DA4C0;
}

loc_807DA4BC:
{
    f4.d = f0.d;
}

loc_807DA4C0:
{
    f3.d = f4.d;
}

loc_807DA4C4:
{
    f0.d = PPC_Fctiwz(f3.d);
    r29 = 0;
    r30 = 0;
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 16));
}

loc_807DA4E0:
{
    r0 = MemoryInline::FlatRead32(r28);
    r3 = (r1 + 20);
    r4 = (r0 + r30);
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807DA4F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807DA504;
    }
}

loc_807DA4FC:
{
    r4 = MemoryInline::FlatRead32(r4);
    goto loc_807DA508;
}

loc_807DA504:
{
    r4 = 0;
}

loc_807DA508:
{
    r5 = 0;
    ctx->lr = 0x807DA510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800730B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r1 + 20);
    ctx->lr = 0x807DA518u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    r5 = (r1 + 8);
    r4 = 3;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    ctx->lr = 0x807DA530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80050EA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x807DA53Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050470u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_807DA548:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807DA4E0;
    }
}

loc_807DA54C:
{
    MemoryInline::FlatWriteFloat32((r28 + 68), f31.d);
}

loc_807DA550:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 116));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFE3F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807DA40C func_807DA40C preserves=false fpr_mask=0x80000000
