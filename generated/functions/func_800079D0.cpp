#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800079D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800079D0;

loc_800079D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 3264));
    r4 = MemoryInline::FlatRead32((r3 + 3268));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 3264), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 3268), r0);
    r3 = MemoryInline::FlatRead32((r13 + -27704));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80007A18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80007A1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80007A6C;
    }
}

loc_80007A20:
{
    r3 = MemoryInline::FlatRead32((r31 + 3268));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = MemoryInline::FlatRead32((r13 + -27648));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32752));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32768));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80007A50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80007A6C;
    }
}

loc_80007A54:
{
    r3 = MemoryInline::FlatRead32((r31 + 3272));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 3268), r0);
    r0 = (r3 + 1);
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32((r31 + 3272), r0);
}

loc_80007A6C:
{
    r3 = MemoryInline::FlatRead32((r13 + -27648));
    r0 = MemoryInline::FlatRead8((r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80007A78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80007A84;
    }
}

loc_80007A7C:
{
    ctx->lr = 0x80007A80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8000B154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80007BAC;
}

loc_80007A84:
{
    r0 = MemoryInline::FlatRead8((r3 + 181));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80007A8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80007A98;
    }
}

loc_80007A90:
{
    ctx->lr = 0x80007A94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8000B1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80007BAC;
}

loc_80007A98:
{
    r3 = MemoryInline::FlatRead32((r31 + 3192));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80242C98u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80007AA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80007BAC;
    }
}

loc_80007AA8:
{
    r3 = MemoryInline::FlatRead32((r13 + -27704));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80007AC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80007AC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80007B60;
    }
}

loc_80007ACC:
{
    r3 = MemoryInline::FlatRead32((r13 + -27704));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80007ADC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80007B60;
    }
}

loc_80007AE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 3192));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80242C98u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80007AEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80007B60;
    }
}

loc_80007AF0:
{
    r3 = MemoryInline::FlatRead32((r31 + 3264));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = MemoryInline::FlatRead32((r13 + -27648));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32752));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32764));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80007B20:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80007B3C;
    }
}

loc_80007B24:
{
    r0 = MemoryInline::FlatRead8((r31 + 3276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80007B2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80007B3C;
    }
}

loc_80007B30:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80007B38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80007B60;
    }
}

loc_80007B3C:
{
    // inline leaf 0x80008E84 (3 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 16512);
    // end of inlined leaf 0x80008E84
    r3 = MemoryInline::FlatRead32((r3 + 96));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80007B54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27656));
    r4 = 1;
    ctx->lr = 0x80007B60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8000A3F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80007B60:
{
    r0 = MemoryInline::FlatRead8((r31 + 3276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80007B68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80007BAC;
    }
}

loc_80007B6C:
{
    r3 = MemoryInline::FlatRead32((r31 + 3264));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = MemoryInline::FlatRead32((r13 + -27648));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32752));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32760));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80007B9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80007BAC;
    }
}

loc_80007BA0:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800077C8u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r31 + 3276), static_cast<uint8_t>(r3));
}

loc_80007BAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800079D0 func_800079D0 preserves=true fpr_mask=0x00000000
