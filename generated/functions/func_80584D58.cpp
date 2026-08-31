#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80518AE0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80518AE0_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_80584D58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80584D58;

loc_80584D58:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = (r1 + 92);
    r5 = (r1 + 80);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 164), r29);
    ctx->lr = 0x80584D90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8058539Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r1 + 92));
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 68), r5);
    MemoryInline::FlatWriteRam32((r1 + 72), r4);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 488));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 492));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 496));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 524));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 528));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 532));
    r4 = MemoryInline::FlatRead32((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    ctx->lr = 0x80584E1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f31.d = f1.d;
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    r3 = (r1 + 56);
    ctx->lr = 0x80584E30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r30 + 500));
    r3 = (r1 + 44);
    r0 = MemoryInline::FlatRead32((r30 + 504));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    r0 = MemoryInline::FlatRead32((r30 + 508));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    ctx->lr = 0x80584E58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r5 = 0x80380000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 216));
    r3 = (r1 + 104);
    MemoryInline::FlatWriteFloat32((r30 + 176), f1.d);
    r4 = (r1 + 68);
    r5 = (r5 + 19408);
    MemoryInline::FlatWriteFloat32((r30 + 180), f0.d);
    ctx->lr = 0x80584E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE7B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 112));
    r4 = 0x802A0000u;
    r3 = (r4 + 16688);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80584E94:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 104), 0, 44u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r1 + 120));
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 104));
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r1 + 140));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 108));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r1 + 124));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r1 + 144));
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f9.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r1 + 128));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r1 + 112));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f4.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80584F50;
    }
}

loc_80584F14:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80584F48:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80585004;
    }
}

loc_80584F50:
{
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80584F60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805852A4;
    }
}

loc_80584F64:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 500));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 504));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 508));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 332), f0.d);
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r6 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 336), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 340), f0.d);
    r3 = r30;
    ctx->lr = 0x80584FF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x80590ED8 (8 guest instruction(s))
}

loc_inl1_0x80590ED8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x80590EE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80590EE8:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80590ED8;
}

loc_inl1_return:
{
}

loc_inl1_cont_80590ED8:
{
    // end of inlined leaf 0x80590ED8
    goto loc_805852A4;
}

loc_80585004:
{
    r4 = 0x802A0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 104), 0, 44u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r1 + 136));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16712));
    r3 = (r4 + 16712);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 120));
    r5 = 0x809C0000u;
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 104));
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r1 + 140));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 108));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 124));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f9.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r1 + 144));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r1 + 128));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 112));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    r3 = MemoryInline::FlatRead32(r30);
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 136), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 128), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r5 + -10520));
    r0 = MemoryInline::FlatRead32((r4 + 128));
    r4 = (r0 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80518AE0u) && KnownTranslatedCpuCall<0x80518AE0u>::kAvailable && !KnownTranslatedCpuCall<0x80518AE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80518AE0u>()) {
        const auto state_free_result_80518AE0_45D7 = func_80518AE0_statefree_v0(r3, r4, xer);
        r3 = static_cast<uint32_t>(state_free_result_80518AE0_45D7);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80518AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 0x808B0000u;
    r3 = (r3 + 23784);
    r0 = MemoryInline::FlatRead16((r4 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805850B4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r29 = (r3 + r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805850C4;
    }
}

loc_805850C0:
{
    r29 = r3;
}

loc_805850C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f7.d = MemoryInline::FlatReadFloat32(r29);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_805850D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80585138;
    }
}

loc_805850DC:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_805850E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805850F0;
    }
}

loc_805850EC:
{
    f4.d = f0.d;
}

loc_805850F0:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805850FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80585104;
    }
}

loc_80585100:
{
    goto loc_80585108;
}

loc_80585104:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 20));
}

loc_80585108:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058511C:
{
    f0.d = PpcFmulsInline(f4.d, f2.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80585138;
    }
}

loc_80585128:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    SetCRFloatResident(cr, 0, f7.d, f0.d);
}

loc_80585130:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80585138;
    }
}

loc_80585134:
{
    MemoryInline::FlatWriteFloat32((r30 + 32), f7.d);
}

loc_80585138:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 500));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 504));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 508));
    f6.d = PpcFmulsInline(f7.d, f2.d);
    f4.d = PpcFmulsInline(f7.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat32((r30 + 524));
    f2.d = PpcFmulsInline(f7.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 528));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 532));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 524), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 528), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 532), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80585184:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805851E0;
    }
}

loc_80585190:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 480));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 220));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 224));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 512));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 516));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 520));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_805851E0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r30, 0, 536u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 488u, (r30 + 488));
    r3 = r30;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 524u, (r30 + 524));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 492u, (r30 + 492));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 528u, (r30 + 528));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 496u, (r30 + 496));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 532u, (r30 + 532));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = (r1 + 68);
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 500u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 500u, (r30 + 500));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 504u, (r30 + 504));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 508u, (r30 + 508));
    MemoryInline::FlatWriteFloat32((r30 + 92), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 96), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 116), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 120), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 124), f0.d);
    ctx->lr = 0x8058527Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805855BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    r4 = (r4 + 16640);
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
}

loc_805852A4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 196));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r31 = MemoryInline::FlatRead32((r1 + 172));
    r30 = MemoryInline::FlatRead32((r1 + 168));
    r29 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF7F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80584D58 func_80584D58 preserves=false fpr_mask=0x80000000
