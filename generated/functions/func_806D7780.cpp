#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D7780(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806D7780;

loc_806D7780:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_806D778C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 152);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806D77CC;
    }
}

loc_806D77B0:
{
}

loc_806D77B4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806D7890;
    }
}

loc_806D77B8:
{
}

loc_806D77BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806D7954;
    }
}

loc_806D77C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806D77C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D7A18;
    }
}

loc_806D77C8:
{
    goto loc_806D7AD8;
}

loc_806D77CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 445));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806D77D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D7AD8;
    }
}

loc_806D77D8:
{
}

loc_806D77DC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806D77F4;
    }
}

loc_806D77E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_806D77E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_806D77F4;
    }
}

loc_806D77EC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 536), static_cast<uint8_t>(r0));
}

loc_806D77F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806D77FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D780C;
    }
}

loc_806D7800:
{
    r3 = r29;
    ctx->lr = 0x806D7808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806D7F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806D7AD8;
}

loc_806D780C:
{
    r0 = 0;
    r4 = 1;
    MemoryInline::FlatWrite8((r3 + 445), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 544), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 545), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 448), r0);
    r3 = r29;
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806D7838u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r29 + 512), f0.d);
    r3 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 22600));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 22604));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 384));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 376));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 380));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 120));
    MemoryInline::FlatWriteFloat32((r29 + 532), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 524), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 528), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 520), f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 452), f5.d);
    MemoryInline::FlatWriteFloat32((r29 + 516), f0.d);
    goto loc_806D7AD8;
}

loc_806D7890:
{
    r0 = MemoryInline::FlatRead8((r3 + 445));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806D7898:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D7AD8;
    }
}

loc_806D789C:
{
}

loc_806D78A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806D78B8;
    }
}

loc_806D78A4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_806D78AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_806D78B8;
    }
}

loc_806D78B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 536), static_cast<uint8_t>(r0));
}

loc_806D78B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806D78C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D78D0;
    }
}

loc_806D78C4:
{
    r3 = r29;
    ctx->lr = 0x806D78CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806D7F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806D7AD8;
}

loc_806D78D0:
{
    r0 = 0;
    r4 = 1;
    MemoryInline::FlatWrite8((r3 + 445), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 544), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 545), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 448), r0);
    r3 = r29;
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806D78FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r29 + 512), f0.d);
    r3 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 22600));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 22604));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 384));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 376));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 380));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 120));
    MemoryInline::FlatWriteFloat32((r29 + 532), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 524), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 528), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 520), f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 452), f5.d);
    MemoryInline::FlatWriteFloat32((r29 + 516), f0.d);
    goto loc_806D7AD8;
}

loc_806D7954:
{
    r0 = MemoryInline::FlatRead8((r3 + 445));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806D795C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D7AD8;
    }
}

loc_806D7960:
{
}

loc_806D7964:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806D797C;
    }
}

loc_806D7968:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_806D7970:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_806D797C;
    }
}

loc_806D7974:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 536), static_cast<uint8_t>(r0));
}

loc_806D797C:
{
    r0 = MemoryInline::FlatRead32((r3 + 340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806D7984:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D7994;
    }
}

loc_806D7988:
{
    r3 = r29;
    ctx->lr = 0x806D7990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806D7F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806D7AD8;
}

loc_806D7994:
{
    r0 = 0;
    r4 = 1;
    MemoryInline::FlatWrite8((r3 + 445), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 544), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 545), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 448), r0);
    r3 = r29;
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806D79C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r29 + 512), f0.d);
    r3 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 22600));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 22604));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 384));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 376));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 380));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 120));
    MemoryInline::FlatWriteFloat32((r29 + 532), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 524), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 528), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 520), f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 452), f5.d);
    MemoryInline::FlatWriteFloat32((r29 + 516), f0.d);
    goto loc_806D7AD8;
}

loc_806D7A18:
{
    r0 = MemoryInline::FlatRead8((r3 + 445));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806D7A20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D7AD8;
    }
}

loc_806D7A24:
{
}

loc_806D7A28:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806D7A40;
    }
}

loc_806D7A2C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_806D7A34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_806D7A40;
    }
}

loc_806D7A38:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 536), static_cast<uint8_t>(r0));
}

loc_806D7A40:
{
    r0 = MemoryInline::FlatRead32((r3 + 340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806D7A48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D7A58;
    }
}

loc_806D7A4C:
{
    r3 = r29;
    ctx->lr = 0x806D7A54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806D7F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806D7AD8;
}

loc_806D7A58:
{
    r0 = 0;
    r4 = 1;
    MemoryInline::FlatWrite8((r3 + 445), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 544), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 545), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 448), r0);
    r3 = r29;
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806D7A84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r29 + 512), f0.d);
    r3 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 22600));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 22604));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 384));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 376));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 380));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 120));
    MemoryInline::FlatWriteFloat32((r29 + 532), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 524), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 528), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 520), f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 452), f5.d);
    MemoryInline::FlatWriteFloat32((r29 + 516), f0.d);
}

loc_806D7AD8:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806D7780 func_806D7780 preserves=true fpr_mask=0x00000000
