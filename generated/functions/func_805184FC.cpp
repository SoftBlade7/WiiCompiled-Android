#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805184FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;

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

    goto loc_805184FC;

loc_805184FC:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = 0x80890000u;
    r31 = (r31 + -1816);
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    r30 = r3;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 368));
    r4 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 96);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    ctx->lr = 0x8051855Cu;
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
    r3 = (r1 + 80);
    r4 = (r1 + 96);
    r5 = (r5 + 16712);
    ctx->lr = 0x80518570u;
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
    r3 = (r1 + 68);
    r4 = (r1 + 96);
    r5 = (r5 + 16664);
    ctx->lr = 0x80518584u;
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
    r3 = (r1 + 56);
    r4 = (r1 + 96);
    r5 = (r5 + 16688);
    ctx->lr = 0x80518598u;
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
    f1.d = MemoryInline::FlatReadFloat32((r31 + 404));
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
    f1.d = MemoryInline::FlatReadFloat32((r31 + 404));
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
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f31.d));
    r3 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + -10520));
    r8 = 255;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 408));
    r9 = 0;
    r6 = MemoryInline::FlatRead32((r7 + 16));
    f12.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    f11.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 84));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
    f9.d = MemoryInline::FlatReadFloat32((r31 + 340));
    goto loc_80518718;
}

loc_805185E4:
{
}

loc_805185E8:
{
    r4 = (r9 & 255);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805185FC;
    }
}

loc_805185F0:
{
    r3 = MemoryInline::FlatRead32((r7 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80518600;
}

loc_805185FC:
{
    r0 = 0;
}

loc_80518600:
{
}

loc_80518604:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80518634;
    }
}

loc_80518608:
{
    r4 = MemoryInline::FlatRead32((r7 + 16));
    r3 = (r9 & 255);
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80518618:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8051862C;
    }
}

loc_8051861C:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_80518638;
}

loc_8051862C:
{
    r3 = 0;
    goto loc_80518638;
}

loc_80518634:
{
    r3 = 0;
}

loc_80518638:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32(r30);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f6.d = MemoryInline::FlatReadFloat32(r3);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f4.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f3.d = PpcFmulsInline(f11.d, f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f6.d);
    f2.d = PpcFmulsInline(f10.d, f31.d);
    f4.d = PpcFmulsInline(f12.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f31.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f30.d);
    SetCRFloatResident(cr, 0, f29.d, f9.d);
}

loc_80518694:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80518714;
    }
}

loc_8051869C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f8.d = PpcFmulsInline(f29.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f6.d = PpcFmulsInline(f2.d, f13.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f5.d = PpcFmulsInline(f4.d, f31.d);
    f3.d = PpcFmulsInline(f3.d, f13.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f2.d = PpcFmulsInline(f2.d, f31.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 64));
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

loc_805186F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80518714;
    }
}

loc_805186F8:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_80518700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051870C;
    }
}

loc_80518704:
{
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80518708:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80518714;
    }
}

loc_8051870C:
{
    f0.d = f29.d;
    r8 = r9;
}

loc_80518714:
{
    r9 = (r9 + 1);
}

loc_80518718:
{
}

loc_8051871C:
{
    r4 = (r9 & 255);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8051872C;
    }
}

loc_80518724:
{
    r0 = 0;
    goto loc_80518734;
}

loc_8051872C:
{
    r3 = MemoryInline::FlatRead32((r7 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80518734:
{
}

loc_80518738:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_805185E4;
    }
}

loc_8051873C:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_80518744:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051874C;
    }
}

loc_80518748:
{
    r8 = 0;
}

loc_8051874C:
{
    MemoryInline::FlatWrite8((r30 + 40), static_cast<uint8_t>(r8));
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 408));
    r8 = 255;
    r7 = MemoryInline::FlatRead32((r3 + -10520));
    r9 = 0;
    f12.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r6 = MemoryInline::FlatRead32((r7 + 24));
    f11.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f9.d = MemoryInline::FlatReadFloat32((r31 + 340));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    goto loc_805188B8;
}

loc_80518784:
{
}

loc_80518788:
{
    r4 = (r9 & 255);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8051879C;
    }
}

loc_80518790:
{
    r3 = MemoryInline::FlatRead32((r7 + 24));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_805187A0;
}

loc_8051879C:
{
    r0 = 0;
}

loc_805187A0:
{
}

loc_805187A4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805187D4;
    }
}

loc_805187A8:
{
    r4 = MemoryInline::FlatRead32((r7 + 24));
    r3 = (r9 & 255);
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_805187B8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_805187CC;
    }
}

loc_805187BC:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    goto loc_805187D8;
}

loc_805187CC:
{
    r3 = 0;
    goto loc_805187D8;
}

loc_805187D4:
{
    r3 = 0;
}

loc_805187D8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r30);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f6.d = MemoryInline::FlatReadFloat32(r3);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f3.d = PpcFmulsInline(f11.d, f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f6.d);
    f2.d = PpcFmulsInline(f10.d, f30.d);
    f4.d = PpcFmulsInline(f12.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f30.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f31.d);
    SetCRFloatResident(cr, 0, f29.d, f9.d);
}

loc_80518834:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805188B4;
    }
}

loc_8051883C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f8.d = PpcFmulsInline(f29.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f6.d = PpcFmulsInline(f2.d, f13.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f5.d = PpcFmulsInline(f4.d, f30.d);
    f3.d = PpcFmulsInline(f3.d, f13.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f2.d = PpcFmulsInline(f2.d, f30.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f7.d = PpcFmulsInline(f7.d, f31.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f4.d = PpcFmulsInline(f4.d, f31.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f5.d));
    f5.d = PpcFmulsInline(f8.d, f8.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f5.d);
}

loc_80518894:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805188B4;
    }
}

loc_80518898:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_805188A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805188AC;
    }
}

loc_805188A4:
{
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_805188A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805188B4;
    }
}

loc_805188AC:
{
    f0.d = f29.d;
    r8 = r9;
}

loc_805188B4:
{
    r9 = (r9 + 1);
}

loc_805188B8:
{
}

loc_805188BC:
{
    r4 = (r9 & 255);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805188CC;
    }
}

loc_805188C4:
{
    r0 = 0;
    goto loc_805188D4;
}

loc_805188CC:
{
    r3 = MemoryInline::FlatRead32((r7 + 24));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_805188D4:
{
}

loc_805188D8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80518784;
    }
}

loc_805188DC:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_805188E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805188EC;
    }
}

loc_805188E8:
{
    r8 = 0;
}

loc_805188EC:
{
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
// RECOMP_REGISTRATION base 0x805184FC func_805184FC preserves=false fpr_mask=0xE0000000
