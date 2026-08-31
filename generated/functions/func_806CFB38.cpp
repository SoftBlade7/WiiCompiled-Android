#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CFB38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CFB38;

loc_806CFB38:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + -808);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 268));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 272));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    MemoryInline::FlatWriteFloat32((r3 + 364), f2.d);
    r6 = MemoryInline::FlatRead16((r3 + 340));
    MemoryInline::FlatWriteFloat32((r3 + 368), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 372), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 19040));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r4));
}

loc_806CFB88:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CFC1C;
    }
}

loc_806CFB90:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    r5 = 0x808C0000u;
    f6.d = MemoryInline::FlatReadFloat64((r30 + 120));
    r4 = (r3 + 364);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 108));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 19044));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 100));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 356), f1.d);
    r3 = (r3 + 256);
    f1.d = (-(f1.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x806CFBF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B3AC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 364));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 368));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 372));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 356));
    MemoryInline::FlatWriteFloat32((r31 + 268), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 272), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 276), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 376), f0.d);
    goto loc_806CFD14;
}

loc_806CFC1C:
{
    r0 = (r6 - r4);
    r5 = 0x808C0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 112));
    r4 = (r3 + 364);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 19044));
    f2.d = MemoryInline::FlatReadFloat64((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 376));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 100));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 356), f1.d);
    r3 = (r3 + 256);
    f1.d = (-(f1.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x806CFC6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B3AC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r31 + 304));
}

loc_806CFC74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CFC84;
    }
}

loc_806CFC78:
{
    r0 = MemoryInline::FlatRead16((r31 + 180));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806CFC80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CFCFC;
    }
}

loc_806CFC84:
{
    r3 = MemoryInline::FlatRead32((r31 + 364));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = MemoryInline::FlatRead32((r31 + 268));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r31 + 372));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r0 = MemoryInline::FlatRead32((r31 + 276));
    f4.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f4.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = MemoryInline::FlatRead32((r31 + 368));
    r0 = MemoryInline::FlatRead32((r31 + 272));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 116));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CFCE8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806CFD14;
    }
}

loc_806CFCF0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 338), static_cast<uint8_t>(r0));
    goto loc_806CFD14;
}

loc_806CFCFC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 364));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 368));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 372));
    MemoryInline::FlatWriteFloat32((r31 + 268), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 272), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 276), f0.d);
}

loc_806CFD14:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r3 = r31;
    r4 = 696;
    ctx->lr = 0x806CFD24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082051Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r31 + 340));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 340), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xC000107B gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806CFB38 func_806CFB38 preserves=true fpr_mask=0x00000000
