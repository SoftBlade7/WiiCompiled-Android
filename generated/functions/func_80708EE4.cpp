#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80708EE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80708EE4;

loc_80708EE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = MemoryInline::FlatRead8((r3 + 225));
    r5 = 0x808A0000u;
    r5 = (r5 + 5856);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80708F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709138;
    }
}

loc_80708F0C:
{
}

loc_80708F10:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80709058;
    }
}

loc_80708F14:
{
    r6 = MemoryInline::FlatRead32((r3 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80708F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708F44;
    }
}

loc_80708F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708F30;
    }
}

loc_80708F28:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80708F34;
}

loc_80708F30:
{
    r0 = -1;
}

loc_80708F34:
{
}

loc_80708F38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(530))) {
        goto loc_80708F44;
    }
}

loc_80708F3C:
{
    r4 = (r3 + 128);
    goto loc_80708FC4;
}

loc_80708F44:
{
    r6 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80708F4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708F70;
    }
}

loc_80708F50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708F5C;
    }
}

loc_80708F54:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80708F60;
}

loc_80708F5C:
{
    r0 = -1;
}

loc_80708F60:
{
}

loc_80708F64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(530))) {
        goto loc_80708F70;
    }
}

loc_80708F68:
{
    r4 = (r3 + 132);
    goto loc_80708FC4;
}

loc_80708F70:
{
    r6 = MemoryInline::FlatRead32((r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80708F78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708F9C;
    }
}

loc_80708F7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708F88;
    }
}

loc_80708F80:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80708F8C;
}

loc_80708F88:
{
    r0 = -1;
}

loc_80708F8C:
{
}

loc_80708F90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(530))) {
        goto loc_80708F9C;
    }
}

loc_80708F94:
{
    r4 = (r3 + 136);
    goto loc_80708FC4;
}

loc_80708F9C:
{
    r6 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80708FA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708FC4;
    }
}

loc_80708FA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708FB4;
    }
}

loc_80708FAC:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80708FB8;
}

loc_80708FB4:
{
    r0 = -1;
}

loc_80708FB8:
{
}

loc_80708FBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(530))) {
        goto loc_80708FC4;
    }
}

loc_80708FC0:
{
    r4 = (r3 + 140);
}

loc_80708FC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708FC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80709138;
    }
}

loc_80708FCC:
{
    r0 = MemoryInline::FlatRead16((r3 + 204));
    f31.d = MemoryInline::FlatReadFloat32((r5 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80708FD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709018;
    }
}

loc_80708FDC:
{
    r4 = MemoryInline::FlatRead16((r3 + 206));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
}

loc_80708FE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80708FF0;
    }
}

loc_80708FE8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 206), static_cast<uint16_t>(r0));
}

loc_80708FF0:
{
    r4 = MemoryInline::FlatRead16((r3 + 206));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 96));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 72));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_80709018:
{
    r0 = 140;
    MemoryInline::FlatWrite16((r3 + 204), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32(r5);
    r4 = 530;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80709038u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070903C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709138;
    }
}

loc_80709040:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80709048:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709138;
    }
}

loc_8070904C:
{
    f1.d = f31.d;
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
    goto loc_80709138;
}

loc_80709058:
{
    r0 = MemoryInline::FlatRead16((r3 + 242));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 414;
}

loc_80709064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8070906C;
    }
}

loc_80709068:
{
    r4 = 771;
}

loc_8070906C:
{
    r7 = MemoryInline::FlatRead32((r3 + 128));
    r6 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80709078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070909C;
    }
}

loc_8070907C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709088;
    }
}

loc_80709080:
{
    r0 = MemoryInline::FlatRead32((r7 + 144));
    goto loc_8070908C;
}

loc_80709088:
{
    r0 = -1;
}

loc_8070908C:
{
}

loc_80709090:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070909C;
    }
}

loc_80709094:
{
    r6 = (r3 + 128);
    goto loc_8070911C;
}

loc_8070909C:
{
    r7 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_807090A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807090C8;
    }
}

loc_807090A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807090B4;
    }
}

loc_807090AC:
{
    r0 = MemoryInline::FlatRead32((r7 + 144));
    goto loc_807090B8;
}

loc_807090B4:
{
    r0 = -1;
}

loc_807090B8:
{
}

loc_807090BC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_807090C8;
    }
}

loc_807090C0:
{
    r6 = (r3 + 132);
    goto loc_8070911C;
}

loc_807090C8:
{
    r7 = MemoryInline::FlatRead32((r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_807090D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807090F4;
    }
}

loc_807090D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807090E0;
    }
}

loc_807090D8:
{
    r0 = MemoryInline::FlatRead32((r7 + 144));
    goto loc_807090E4;
}

loc_807090E0:
{
    r0 = -1;
}

loc_807090E4:
{
}

loc_807090E8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_807090F4;
    }
}

loc_807090EC:
{
    r6 = (r3 + 136);
    goto loc_8070911C;
}

loc_807090F4:
{
    r7 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_807090FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070911C;
    }
}

loc_80709100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070910C;
    }
}

loc_80709104:
{
    r0 = MemoryInline::FlatRead32((r7 + 144));
    goto loc_80709110;
}

loc_8070910C:
{
    r0 = -1;
}

loc_80709110:
{
}

loc_80709114:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070911C;
    }
}

loc_80709118:
{
    r6 = (r3 + 140);
}

loc_8070911C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80709120:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80709138;
    }
}

loc_80709124:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80709138u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80709138:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80708EE4 func_80708EE4 preserves=false fpr_mask=0x80000000
