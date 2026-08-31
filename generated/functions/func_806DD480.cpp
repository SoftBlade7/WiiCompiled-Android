#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DD480(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806DD480;

loc_806DD480:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 1000);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x806DD4BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead16((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r3 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 48), f2.d);
    r0 = MemoryInline::FlatRead32((r30 + 180));
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806DD4F0:
{
    MemoryInline::FlatWriteFloat32((r30 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteFloat32((r30 + 184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 188), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 44));
    MemoryInline::FlatWriteFloat32((r30 + 192), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806DD53C;
    }
}

loc_806DD514:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = (r30 + 184);
    r4 = (r1 + 8);
    ctx->lr = 0x806DD524u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B3900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 188), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 192), f0.d);
}

loc_806DD53C:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = MemoryInline::FlatReadFloat32(r31);
}

loc_806DD550:
{
    MemoryInline::FlatWriteFloat32((r30 + 196), f1.d);
    MemoryInline::FlatWrite32((r30 + 204), r0);
    MemoryInline::FlatWriteFloat32((r30 + 208), f0.d);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806DD57C;
    }
}

loc_806DD560:
{
}

loc_806DD564:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_806DD588;
    }
}

loc_806DD568:
{
}

loc_806DD56C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_806DD594;
    }
}

loc_806DD570:
{
}

loc_806DD574:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_806DD5A0;
    }
}

loc_806DD578:
{
    goto loc_806DD5A8;
}

loc_806DD57C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 200), f0.d);
    goto loc_806DD5A8;
}

loc_806DD588:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 200), f0.d);
    goto loc_806DD5A8;
}

loc_806DD594:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 200), f0.d);
    goto loc_806DD5A8;
}

loc_806DD5A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    MemoryInline::FlatWriteFloat32((r30 + 200), f0.d);
}

loc_806DD5A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806DD5B4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806DD5C4;
    }
}

loc_806DD5B8:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x806DD5C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808204B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806DD5C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806DD480 func_806DD480 preserves=true fpr_mask=0x00000000
