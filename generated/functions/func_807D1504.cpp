#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D1504(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807D1504;

loc_807D1504:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 21;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r5 = MemoryInline::FlatRead32((r3 + 108));
    r3 = MemoryInline::FlatRead32((r5 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807D1538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D15F8;
    }
}

loc_807D153C:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 21;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807D1554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D15DC;
    }
}

loc_807D1558:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 21;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r30 = MemoryInline::FlatRead32((r3 + 12));
    r29 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807D1574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D15A8;
    }
}

loc_807D1578:
{
    r4 = 0x80240000u;
    r3 = r30;
    r4 = (r4 + 30272);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r4 = (r1 + 20);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807D159Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D15A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D15A8;
    }
}

loc_807D15A4:
{
    r29 = 1;
}

loc_807D15A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807D15AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D15B4;
    }
}

loc_807D15B0:
{
    goto loc_807D15B8;
}

loc_807D15B4:
{
    r30 = 0;
}

loc_807D15B8:
{
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r6 = (r1 + 16);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28952));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 264));
    r5 = 0;
    ctx->lr = 0x807D15DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807CAE8Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D15DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 260));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1332));
    MemoryInline::FlatWriteFloat32((r31 + 1728), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1336));
    MemoryInline::FlatWriteFloat32((r31 + 1732), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1340));
    MemoryInline::FlatWriteFloat32((r31 + 1736), f0.d);
}

loc_807D15F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 23;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807D1610:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D16D0;
    }
}

loc_807D1614:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 23;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807D162C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D16B4;
    }
}

loc_807D1630:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 23;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r30 = MemoryInline::FlatRead32((r3 + 12));
    r29 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807D164C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D1680;
    }
}

loc_807D1650:
{
    r4 = 0x80240000u;
    r3 = r30;
    r4 = (r4 + 30272);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r4 = (r1 + 12);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807D1674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D1678:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D1680;
    }
}

loc_807D167C:
{
    r29 = 1;
}

loc_807D1680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807D1684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D168C;
    }
}

loc_807D1688:
{
    goto loc_807D1690;
}

loc_807D168C:
{
    r30 = 0;
}

loc_807D1690:
{
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28952));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 264));
    r5 = 0;
    ctx->lr = 0x807D16B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807CAE8Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D16B4:
{
    r3 = MemoryInline::FlatRead32((r31 + 260));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1332));
    MemoryInline::FlatWriteFloat32((r31 + 1740), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1336));
    MemoryInline::FlatWriteFloat32((r31 + 1744), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1340));
    MemoryInline::FlatWriteFloat32((r31 + 1748), f0.d);
}

loc_807D16D0:
{
    r4 = 0x809C0000u;
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 14544));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 26416));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D16E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D1700;
    }
}

loc_807D16E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1732));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D16F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D16F8;
    }
}

loc_807D16F4:
{
    goto loc_807D16FC;
}

loc_807D16F8:
{
    f1.d = f0.d;
}

loc_807D16FC:
{
    MemoryInline::FlatWriteFloat32((r31 + 1732), f1.d);
}

loc_807D1700:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D1504 func_807D1504 preserves=true fpr_mask=0x00000000
