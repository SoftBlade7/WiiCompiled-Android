#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807634C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807634C0;

loc_807634C0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r0 = MemoryInline::FlatRead32((r3 + 220));
    r4 = MemoryInline::FlatRead32((r3 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807634E8:
{
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    r4 = (r4 + 2);
    MemoryInline::FlatWriteRam32((r1 + 64), r5);
    MemoryInline::FlatWrite32((r3 + 224), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80763674;
    }
}

loc_807634FC:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r30 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 48));
    f1.d = MemoryInline::FlatReadFloat64((r30 + 14600));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r0 = MemoryInline::FlatRead32((r3 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 14568));
    r4 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 0x808D0000u;
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r4 = MemoryInline::FlatRead32((r3 + -11948));
    r3 = 0x808D0000u;
    r6 = (r0 | 1);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = MemoryInline::FlatRead32((r31 + 180));
    f2.d = MemoryInline::FlatReadFloat64((r30 + 14600));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8076356C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r5 = MemoryInline::FlatRead32((r1 + 44));
    r4 = MemoryInline::FlatRead32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteFloat32((r31 + 48), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 52), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11940));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807635D4;
    }
}

loc_807635C0:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807635D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807635D4:
{
    r4 = MemoryInline::FlatRead32((r31 + 184));
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = MemoryInline::FlatRead32(r4);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 52), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r4 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11940));
    r0 = MemoryInline::FlatRead32((r31 + 180));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80763624:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80763644;
    }
}

loc_80763630:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80763644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80763644:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r0 = MemoryInline::FlatRead16((r3 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    goto loc_807637EC;
}

loc_80763674:
{
    r0 = (r4 + 180);
    r30 = 0x808A0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r6 = MemoryInline::FlatRead32((r3 + 48));
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat64((r30 + 14600));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 14568));
    r0 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 0x808D0000u;
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r4 = MemoryInline::FlatRead32((r3 + -11948));
    r3 = 0x808D0000u;
    r6 = (r0 | 1);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = MemoryInline::FlatRead32((r31 + 180));
    f2.d = MemoryInline::FlatReadFloat64((r30 + 14600));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807636E8:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r5 = MemoryInline::FlatRead32((r1 + 32));
    r4 = MemoryInline::FlatRead32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteFloat32((r31 + 48), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 52), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11940));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80763750;
    }
}

loc_8076373C:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80763750u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80763750:
{
    r4 = MemoryInline::FlatRead32((r31 + 184));
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = MemoryInline::FlatRead32(r4);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 52), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r4 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11940));
    r0 = MemoryInline::FlatRead32((r31 + 180));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807637A0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807637C0;
    }
}

loc_807637AC:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807637C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807637C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
}

loc_807637EC:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
    r30 = 0;
}

loc_807637F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80763810;
    }
}

loc_807637FC:
{
    r0 = MemoryInline::FlatRead32((r31 + 224));
}

loc_80763804:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(170))) {
        goto loc_807638A8;
    }
}

loc_80763808:
{
    r30 = 1;
    goto loc_807638A8;
}

loc_80763810:
{
    r3 = MemoryInline::FlatRead32((r31 + 224));
}

loc_80763818:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(90))) {
        goto loc_80763860;
    }
}

loc_8076381C:
{
    r0 = MemoryInline::FlatRead32((r31 + 220));
}

loc_80763824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80763860;
    }
}

loc_80763828:
{
    r3 = MemoryInline::FlatRead32((r31 + 240));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 14624));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80763848:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80763858;
    }
}

loc_8076384C:
{
    r0 = MemoryInline::FlatRead32((r31 + 224));
}

loc_80763854:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(180))) {
        goto loc_807638A8;
    }
}

loc_80763858:
{
    r30 = 1;
    goto loc_807638A8;
}

loc_80763860:
{
}

loc_80763864:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(90))) {
        goto loc_807638A8;
    }
}

loc_80763868:
{
    r0 = MemoryInline::FlatRead32((r31 + 220));
}

loc_80763870:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_807638A8;
    }
}

loc_80763874:
{
    r3 = MemoryInline::FlatRead32((r31 + 240));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 14624));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80763894:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807638A4;
    }
}

loc_80763898:
{
    r0 = MemoryInline::FlatRead32((r31 + 224));
}

loc_807638A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(180))) {
        goto loc_807638A8;
    }
}

loc_807638A4:
{
    r30 = 1;
}

loc_807638A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807638AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807638E0;
    }
}

loc_807638B0:
{
    r0 = MemoryInline::FlatRead32((r31 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807638B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807638C4;
    }
}

loc_807638BC:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    // inline leaf 0x806ED204 (18 guest instruction(s))
}

loc_inl2_0x806ED204:
{
    r0 = MemoryInline::FlatRead8((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x806ED20C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x806ED21C;
    }
}

loc_inl2_0x806ED210:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    goto loc_inl2_0x806ED224;
}

loc_inl2_0x806ED21C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
}

loc_inl2_0x806ED224:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 2816));
    r4 = MemoryInline::FlatRead16((r3 + 70));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWrite16((r3 + 70), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
}

loc_inl2_cont_806ED204:
{
    // end of inlined leaf 0x806ED204
}

loc_807638C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    r0 = 0;
    r3 = 2;
    MemoryInline::FlatWrite32((r31 + 188), r3);
    MemoryInline::FlatWrite32((r31 + 212), r0);
    MemoryInline::FlatWrite8((r31 + 209), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 232), f0.d);
}

loc_807638E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807634C0 func_807634C0 preserves=true fpr_mask=0x00000000
