#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A6334(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806A6334;

loc_806A6334:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + -10592);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 150));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A635C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A6410;
    }
}

loc_806A6360:
{
    r0 = MemoryInline::FlatRead8((r3 + 297));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A6368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A6410;
    }
}

loc_806A636C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1973));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_806A6378:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806A6410;
    }
}

loc_806A637C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1768));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806A6388:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806A6410;
    }
}

loc_806A638C:
{
    ctx->lr = 0x806A6390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x806A65ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A6398:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A63A4;
    }
}

loc_806A639C:
{
    r3 = MemoryInline::FlatRead32((r30 + 280));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059184Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_806A63A4:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 1776));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 1768));
    MemoryInline::FlatWrite8((r30 + 1973), static_cast<uint8_t>(r0));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_806A63B8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A63C4;
    }
}

loc_806A63C0:
{
    goto loc_806A63DC;
}

loc_806A63C4:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 40));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_806A63CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A63D8;
    }
}

loc_806A63D4:
{
    goto loc_806A63DC;
}

loc_806A63D8:
{
    f2.d = f0.d;
}

loc_806A63DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r4 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 1776));
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 280));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->lr = 0x806A6410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059041Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806A6410:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806A6334 func_806A6334 preserves=true fpr_mask=0x00000000
