#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805148A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805148A0;

loc_805148A0:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = 0x80890000u;
    r30 = (r30 + -1816);
    r4 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 72);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 368));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    ctx->lr = 0x80514900u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r5 = 0x802A0000u;
    r3 = (r1 + 56);
    r4 = (r1 + 72);
    r5 = (r5 + 16712);
    ctx->lr = 0x80514914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x805147FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    r5 = 0x802A0000u;
    r3 = (r1 + 44);
    r4 = (r1 + 72);
    r5 = (r5 + 16664);
    ctx->lr = 0x80514928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x805147FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    r5 = 0x802A0000u;
    r3 = (r1 + 32);
    r4 = (r1 + 72);
    r5 = (r5 + 16688);
    ctx->lr = 0x8051493Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x805147FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r30 + 380));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f31.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 380));
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
    InvokeDirectCpu<0x80085110u>(ctx);
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
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f31.d));
    r3 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + -10520));
    r8 = 255;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 384));
    r9 = 0;
    r6 = MemoryInline::FlatRead32((r7 + 16));
    f12.d = MemoryInline::FlatReadFloat32((r1 + 64));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    f11.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
    f9.d = MemoryInline::FlatReadFloat32((r30 + 340));
    goto loc_80514ABC;
}

loc_80514988:
{
}

loc_8051498C:
{
    r4 = (r9 & 255);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805149A0;
    }
}

loc_80514994:
{
    r3 = MemoryInline::FlatRead32((r7 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_805149A4;
}

loc_805149A0:
{
    r0 = 0;
}

loc_805149A4:
{
}

loc_805149A8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805149D8;
    }
}

loc_805149AC:
{
    r4 = MemoryInline::FlatRead32((r7 + 16));
    r3 = (r9 & 255);
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_805149BC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_805149D0;
    }
}

loc_805149C0:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_805149DC;
}

loc_805149D0:
{
    r3 = 0;
    goto loc_805149DC;
}

loc_805149D8:
{
    r3 = 0;
}

loc_805149DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32(r31);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f6.d = MemoryInline::FlatReadFloat32(r3);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f3.d = PpcFmulsInline(f11.d, f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f6.d);
    f2.d = PpcFmulsInline(f10.d, f31.d);
    f4.d = PpcFmulsInline(f12.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f31.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f30.d);
    SetCRFloatResident(cr, 0, f29.d, f9.d);
}

loc_80514A38:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80514AB8;
    }
}

loc_80514A40:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f8.d = PpcFmulsInline(f29.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f6.d = PpcFmulsInline(f2.d, f13.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f5.d = PpcFmulsInline(f4.d, f31.d);
    f3.d = PpcFmulsInline(f3.d, f13.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f2.d = PpcFmulsInline(f2.d, f31.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f7.d = PpcFmulsInline(f7.d, f30.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f4.d = PpcFmulsInline(f4.d, f30.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f5.d));
    f5.d = PpcFmulsInline(f8.d, f8.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f5.d);
}

loc_80514A98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80514AB8;
    }
}

loc_80514A9C:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_80514AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80514AB0;
    }
}

loc_80514AA8:
{
    SetCRFloatResident(cr, 0, f29.d, f1.d);
}

loc_80514AAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80514AB8;
    }
}

loc_80514AB0:
{
    f1.d = f29.d;
    r8 = r9;
}

loc_80514AB8:
{
    r9 = (r9 + 1);
}

loc_80514ABC:
{
}

loc_80514AC0:
{
    r4 = (r9 & 255);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80514AD0;
    }
}

loc_80514AC8:
{
    r0 = 0;
    goto loc_80514AD8;
}

loc_80514AD0:
{
    r3 = MemoryInline::FlatRead32((r7 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80514AD8:
{
}

loc_80514ADC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80514988;
    }
}

loc_80514AE0:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_80514AE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80514AF0;
    }
}

loc_80514AEC:
{
    r8 = 0;
}

loc_80514AF0:
{
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00003DF gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805148A0 func_805148A0 preserves=false fpr_mask=0xE0000000
