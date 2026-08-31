#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D2940(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807D2940;

loc_807D2940:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead8((r3 + 168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D2960:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D2A90;
    }
}

loc_807D2964:
{
    r0 = MemoryInline::FlatRead8((r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D296C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D2A90;
    }
}

loc_807D2970:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807D2974:
{
    r30 = 25;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D2980;
    }
}

loc_807D297C:
{
    r30 = 24;
}

loc_807D2980:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = r30;
    ctx->lr = 0x807D298Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808654A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = r30;
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

loc_807D29A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D2A90;
    }
}

loc_807D29A8:
{
}

loc_807D29AC:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(7))) {
        goto loc_807D29C4;
    }
}

loc_807D29B4:
{
}

loc_807D29B8:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(20))) {
        goto loc_807D29C8;
    }
}

loc_807D29BC:
{
}

loc_807D29C0:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(40))) {
        goto loc_807D29C8;
    }
}

loc_807D29C4:
{
    r0 = 1;
}

loc_807D29C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D29CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D29D8;
    }
}

loc_807D29D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 728), r0);
}

loc_807D29D8:
{
    r0 = MemoryInline::FlatRead16((r31 + 250));
    r3 = 0x808A0000u;
    MemoryInline::FlatWrite16((r31 + 252), static_cast<uint16_t>(r0));
    r5 = 0x808A0000u;
    r6 = MemoryInline::FlatRead32((r31 + 108));
    r4 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 26416));
    r3 = MemoryInline::FlatRead32((r6 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 26420));
    ctx->lr = 0x807D2A00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 740));
    r4 = 255;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 456), static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D2A14:
{
    MemoryInline::FlatWrite16((r31 + 458), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r31 + 248), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 250), static_cast<uint16_t>(r30));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D2A34;
    }
}

loc_807D2A24:
{
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x807D2A34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D2A34:
{
    r3 = MemoryInline::FlatRead16((r31 + 252));
    r0 = 0;
}

loc_807D2A40:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807D2A4C;
    }
}

loc_807D2A44:
{
}

loc_807D2A48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807D2A50;
    }
}

loc_807D2A4C:
{
    r0 = 1;
}

loc_807D2A50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D2A54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D2A90;
    }
}

loc_807D2A58:
{
    r3 = MemoryInline::FlatRead16((r31 + 250));
    r0 = 0;
}

loc_807D2A64:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807D2A70;
    }
}

loc_807D2A68:
{
}

loc_807D2A6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807D2A74;
    }
}

loc_807D2A70:
{
    r0 = 1;
}

loc_807D2A74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D2A78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D2A90;
    }
}

loc_807D2A7C:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807D2A90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807D2A90:
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
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D2940 func_807D2940 preserves=true fpr_mask=0x00000000
