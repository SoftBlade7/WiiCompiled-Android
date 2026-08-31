#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FCDA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806FCDA8;

loc_806FCDA8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    r6 = MemoryInline::FlatRead32((r6 + 10232));
}

loc_806FCDD4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_806FCDE0;
    }
}

loc_806FCDD8:
{
    r0 = MemoryInline::FlatRead8((r6 + 112));
    goto loc_806FCDE4;
}

loc_806FCDE0:
{
    r0 = 0;
}

loc_806FCDE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FCDE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FCEE0;
    }
}

loc_806FCDEC:
{
    r0 = 3;
    r6 = r31;
    r8 = 0;
    ctr = r0;
}

loc_806FCDFC:
{
    r7 = MemoryInline::FlatRead32((r6 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_806FCE04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCE28;
    }
}

loc_806FCE08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCE14;
    }
}

loc_806FCE0C:
{
    r0 = MemoryInline::FlatRead32((r7 + 144));
    goto loc_806FCE18;
}

loc_806FCE14:
{
    r0 = -1;
}

loc_806FCE18:
{
}

loc_806FCE1C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_806FCE28;
    }
}

loc_806FCE20:
{
    r0 = 1;
    goto loc_806FCE2C;
}

loc_806FCE28:
{
    r0 = 0;
}

loc_806FCE2C:
{
}

loc_806FCE30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806FCE68;
    }
}

loc_806FCE34:
{
    r6 = (r8 * 116);
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4960));
    r0 = (r5 * 28);
    r3 = (r3 + r6);
    r4 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FCE54:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806FCEE0;
    }
}

loc_806FCE58:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4968));
    MemoryInline::FlatWriteFloat32((r4 + 52), f0.d);
    goto loc_806FCEE0;
}

loc_806FCE68:
{
    r6 = (r6 + 116);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806FCDFC;
    }
}

loc_806FCE74:
{
    r0 = 3;
    r3 = r31;
    r6 = 0;
    ctr = r0;
}

loc_806FCE84:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FCE8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FCED4;
    }
}

loc_806FCE90:
{
    r3 = 0x809C0000u;
    r5 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r30 = (r6 * 116);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + r30);
    r12 = MemoryInline::FlatRead32((r12 + 176));
    r4 = (r4 + 28);
    ctr = r12;
    ctx->lr = 0x806FCEB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r29 * 28);
    r3 = (r31 + r30);
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4968));
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    goto loc_806FCEE0;
}

loc_806FCED4:
{
    r3 = (r3 + 116);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806FCE84;
    }
}

loc_806FCEE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
// RECOMP_REGISTRATION base 0x806FCDA8 func_806FCDA8 preserves=true fpr_mask=0x00000000
