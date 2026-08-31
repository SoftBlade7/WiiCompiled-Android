#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D0324(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D0324;

loc_805D0324:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead8((r3 + 21036));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D034C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D0564;
    }
}

loc_805D0350:
{
    r0 = MemoryInline::FlatRead32((r3 + 21024));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(512));
}

loc_805D0358:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D0364;
    }
}

loc_805D035C:
{
    ctx->lr = 0x805D0360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D0674u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D0564;
}

loc_805D0364:
{
    r9 = MemoryInline::FlatRead16(r4);
    r6 = (r0 * 40);
    r7 = MemoryInline::FlatRead32((r3 + 21032));
    r8 = 0;
    r0 = (r9 + 4096);
    r7 = (r7 * 28);
    r0 = (r0 & 65535);
    r31 = (r3 + r6);
}

loc_805D0388:
{
    r29 = (r3 + r7);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_805D0394;
    }
}

loc_805D0390:
{
    r8 = 1;
}

loc_805D0394:
{
}

loc_805D0398:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_805D03A4;
    }
}

loc_805D039C:
{
    r28 = (r3 + 32);
    goto loc_805D03D0;
}

loc_805D03A4:
{
    r0 = (r9 + 3840);
    r6 = 0;
    r0 = (r0 & 65535);
}

loc_805D03B4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_805D03BC;
    }
}

loc_805D03B8:
{
    r6 = 1;
}

loc_805D03BC:
{
}

loc_805D03C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805D03CC;
    }
}

loc_805D03C4:
{
    r28 = (r3 + 52);
    goto loc_805D03D0;
}

loc_805D03CC:
{
    r28 = (r3 + 12);
}

loc_805D03D0:
{
    r7 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r7 + 16));
}

loc_805D03E0:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_805D0400;
    }
}

loc_805D03E4:
{
    r6 = (r6 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r6);
    r0 = (r6 + -1);
    r0 = (r0 * 68);
    r3 = MemoryInline::FlatRead32((r7 + 12));
    r3 = (r3 + r0);
    goto loc_805D0404;
}

loc_805D0400:
{
    r3 = 0;
}

loc_805D0404:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805D0408:
{
    MemoryInline::FlatWrite32((r31 + 112), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D0564;
    }
}

loc_805D0410:
{
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16((r31 + 108), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead32(r28);
    r7 = MemoryInline::FlatRead32((r30 + 92));
    ctx->lr = 0x805D0424u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805CF154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWrite32((r31 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    MemoryInline::FlatWriteFloat32((r31 + 104), f0.d);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = MemoryInline::FlatRead16((r31 + 108));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x805D046Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f3.d = MemoryInline::FlatReadFloat64((r4 + 16408));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 100), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20596));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805D04B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D04BC;
    }
}

loc_805D04B8:
{
    MemoryInline::FlatWriteFloat32((r29 + 20596), f1.d);
}

loc_805D04BC:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20600));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805D04D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D04D8;
    }
}

loc_805D04D4:
{
    MemoryInline::FlatWriteFloat32((r29 + 20600), f1.d);
}

loc_805D04D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20592));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805D04E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D04EC;
    }
}

loc_805D04E8:
{
    MemoryInline::FlatWriteFloat32((r29 + 20592), f1.d);
}

loc_805D04EC:
{
    r0 = MemoryInline::FlatRead32((r30 + 21028));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D04F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0534;
    }
}

loc_805D04F8:
{
    r3 = MemoryInline::FlatRead32((r30 + 21024));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 104));
    r0 = (r3 + -1);
    r0 = (r0 * 40);
    r3 = (r30 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805D0514:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D051C;
    }
}

loc_805D0518:
{
    goto loc_805D0520;
}

loc_805D051C:
{
    f2.d = f0.d;
}

loc_805D0520:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 84), f0.d);
}

loc_805D0534:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    MemoryInline::FlatWriteFloat32((r31 + 96), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 100));
    r4 = MemoryInline::FlatRead32((r30 + 21024));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r3 = MemoryInline::FlatRead32((r30 + 21028));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r30 + 21024), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteFloat32((r30 + 84), f0.d);
    MemoryInline::FlatWrite32((r30 + 21028), r0);
}

loc_805D0564:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D0324 func_805D0324 preserves=true fpr_mask=0x00000000
