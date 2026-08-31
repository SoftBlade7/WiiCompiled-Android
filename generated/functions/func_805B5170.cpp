#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B5170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805B5170;

loc_805B5170:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -352), 0, 360u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 356u, (r1 + 356), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 336u, (r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 320u, (r1 + 320), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 304u, (r1 + 304), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 288u, (r1 + 288), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 272u, (r1 + 272), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 256u, (r1 + 256), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 240u, (r1 + 240), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 224u, (r1 + 224), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 208u, (r1 + 208), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 192u, (r1 + 192), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 176u, (r1 + 176), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    f30.d = f1.d;
    f31.d = f2.d;
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r1 + 172), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 10064);
    MemoryInline::WriteResolved32(guest_range_1, 168u, (r1 + 168), r30);
    r30 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 164), r29);
    r29 = r4;
    r0 = MemoryInline::FlatRead8((r3 + 369));
}

loc_805B5200:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B5214;
    }
}

loc_805B5204:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 276));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 328));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 276), f0.d);
}

loc_805B5214:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 272));
    MemoryInline::FlatWriteFloat32((r3 + 128), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 276));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 280));
    r0 = MemoryInline::FlatRead8((r3 + 370));
    MemoryInline::FlatWriteFloat32((r3 + 132), f2.d);
    r5 = MemoryInline::FlatRead32((r3 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B5234:
{
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 132));
    MemoryInline::FlatWriteRam32((r1 + 136), r5);
    r0 = MemoryInline::FlatRead32((r3 + 136));
    MemoryInline::FlatWriteRam32((r1 + 140), r4);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f6.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    f5.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f6.d));
    f4.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 116), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B52A8;
    }
}

loc_805B5298:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B52A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B52A8;
    }
}

loc_805B52A4:
{
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
}

loc_805B52A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 371));
}

loc_805B52B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B52BC;
    }
}

loc_805B52B4:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
}

loc_805B52BC:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 116));
    r8 = 0x802A0000u;
    f4.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = (r30 + 240);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    r5 = (r1 + 124);
    f6.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f5.d = PpcFmulsInline(f1.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 164));
    f4.d = PpcFmulsInline(f0.d, f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 168));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 172));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 116), f6.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 124), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 164), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 172), f0.d);
    r3 = (r1 + 8);
    r8 = (r8 + 16712);
    r7 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWriteRam32((r1 + 124), r7);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 128), r6);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    ctx->lr = 0x805B5338u;
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
    f7.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = PpcFmulsInline(f7.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f5.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B5370:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f4.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B5388:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B5460;
    }
}

loc_805B538C:
{
    r3 = (r1 + 112);
    ctx->lr = 0x805B5394u;
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
    r4 = (r30 + 116);
    r3 = (r1 + 100);
    r5 = r4;
    r6 = (r1 + 112);
    // inline leaf 0x805AEC24 (26 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32(r6);
    f4.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = PpcFmulsInline(f1.d, f6.d);
    f0.d = PpcFmulsInline(f5.d, f6.d);
    f1.d = PpcFmulsInline(f8.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x805AEC24
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B53D0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B53DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B53E8;
    }
}

loc_805B53E0:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_805B53EC;
}

loc_805B53E8:
{
    ctx->lr = 0x805B53ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_805B53EC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 100), 0, 36u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 124));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 112));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r1 + 128));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 116));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 132));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f5.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 380), f5.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 100));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 112));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 104));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 116));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 108));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 120));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B5454:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B5460;
    }
}

loc_805B5458:
{
    f0.d = (-(f5.d));
    MemoryInline::FlatWriteFloat32((r30 + 380), f0.d);
}

loc_805B5460:
{
    r4 = MemoryInline::FlatRead32((r30 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805B5468:
{
    MemoryInline::FlatWriteRam32((r1 + 88), r4);
    r3 = MemoryInline::FlatRead32((r30 + 120));
    r0 = MemoryInline::FlatRead32((r30 + 124));
    MemoryInline::FlatWriteRam32((r1 + 92), r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f2.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    f1.d = PpcFmulsInline(f1.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f2.d);
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B54BC;
    }
}

loc_805B54A4:
{
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 336));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 25992));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B54B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B54BC;
    }
}

loc_805B54B8:
{
    MemoryInline::FlatWriteFloat32((r30 + 336), f1.d);
}

loc_805B54BC:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r3 = (r30 + 212);
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 176), 0, 168u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 156u, (r30 + 332));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r30 + 176));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 160u, (r30 + 336));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 164u, (r30 + 340));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r30 + 180));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r30 + 184));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r30 + 200));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r30 + 204));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r30 + 208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 212), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 220), f0.d);
    ctx->lr = 0x805B5524u;
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
    f2.d = MemoryInline::FlatReadFloat32((r30 + 432));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 224), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805B5534:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B553C;
    }
}

loc_805B5538:
{
    f31.d = PpcFmulsInline(f31.d, f2.d);
}

loc_805B553C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 224));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_805B5544:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B554C;
    }
}

loc_805B5548:
{
    MemoryInline::FlatWriteFloat32((r30 + 224), f31.d);
}

loc_805B554C:
{
    f25.d = MemoryInline::FlatReadFloat32((r30 + 284));
    f28.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f8.d = MemoryInline::FlatReadFloat32((r30 + 288));
    f29.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f1.d = PpcFmulsInline(f28.d, f25.d);
    f13.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = PpcFmulsInline(f29.d, f8.d);
    f24.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f12.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f3.d = PpcFmulsInline(f13.d, f25.d);
    f26.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f9.d = PpcFmulsInline(f24.d, f25.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f23.d = MemoryInline::FlatReadFloat32((r30 + 292));
    f27.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f2.d = PpcFmulsInline(f12.d, f8.d);
    f31.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f7.d = PpcFmulsInline(f26.d, f8.d);
    f6.d = PpcFmulsInline(f27.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 92));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f4.d = PpcFmulsInline(f31.d, f23.d);
    f22.d = MemoryInline::FlatReadFloat32((r30 + 216));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f6.d = MemoryInline::FlatReadFloat32((r30 + 212));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f21.d = PpcFmulsInline(f6.d, f1.d);
    f10.d = PpcFmulsInline(f10.d, f30.d);
    f11.d = PpcFmulsInline(f2.d, f30.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    MemoryInline::FlatWriteFloat32((r30 + 212), f21.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f10.d));
    f5.d = PpcFmulsInline(f0.d, f23.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f11.d));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 76), f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 220));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 80), f10.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f9.d = PpcFmulsInline(f3.d, f30.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 108));
    MemoryInline::FlatWriteFloat32((r30 + 220), f5.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f9.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 84), f9.d);
    f23.d = PpcFmulsInline(f22.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f21.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 52), f8.d);
    f4.d = PpcFmulsInline(f24.d, f8.d);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f23.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f23.d);
    f23.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f3.d = PpcFmulsInline(f26.d, f7.d);
    MemoryInline::FlatWriteFloat32((r30 + 104), f1.d);
    f2.d = PpcFmulsInline(f28.d, f8.d);
    f1.d = PpcFmulsInline(f29.d, f7.d);
    MemoryInline::FlatWriteFloat32((r30 + 108), f25.d);
    f5.d = PpcFmulsInline(f0.d, f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 112), f23.d);
    f3.d = PpcFmulsInline(f27.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 56), f7.d);
    f21.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 60), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PpcFmulsInline(f12.d, f7.d);
    r0 = MemoryInline::FlatRead8((r30 + 368));
    f4.d = PpcFmulsInline(f13.d, f8.d);
    f5.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f3.d = PpcFmulsInline(f1.d, f30.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 168));
    f7.d = PpcFmulsInline(f31.d, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 68), f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 164));
    f6.d = PpcFmulsInline(f21.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 172));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 72), f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f3.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B569C:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f6.d));
    f6.d = PpcFmulsInline(f7.d, f30.d);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f6.d);
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f4.d = PpcFmulsInline(f6.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 168), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 164), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 172), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B56F4;
    }
}

loc_805B56E0:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805B56F4u;
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
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
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
    r8 = ctx->gpr[8];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B56F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 52u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 164));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B5700:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B570C;
    }
}

loc_805B5704:
{
    MemoryInline::FlatWriteFloat32((r30 + 164), f0.d);
    goto loc_805B571C;
}

loc_805B570C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B5714:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B571C;
    }
}

loc_805B5718:
{
    MemoryInline::FlatWriteFloat32((r30 + 164), f0.d);
}

loc_805B571C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 168));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B5728:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B5734;
    }
}

loc_805B572C:
{
    MemoryInline::FlatWriteFloat32((r30 + 168), f0.d);
    goto loc_805B5744;
}

loc_805B5734:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B573C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B5744;
    }
}

loc_805B5740:
{
    MemoryInline::FlatWriteFloat32((r30 + 168), f0.d);
}

loc_805B5744:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 172));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B5750:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B575C;
    }
}

loc_805B5754:
{
    MemoryInline::FlatWriteFloat32((r30 + 172), f0.d);
    goto loc_805B576C;
}

loc_805B575C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B5764:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B576C;
    }
}

loc_805B5768:
{
    MemoryInline::FlatWriteFloat32((r30 + 172), f0.d);
}

loc_805B576C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 420));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 228));
    f8.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 188));
    f9.d = MemoryInline::FlatReadFloat32((r30 + 100));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 164));
    f6.d = MemoryInline::FlatReadFloat32((r30 + 232));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 192));
    f3.d = PpcFmulsInline(f9.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 172));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 236));
    f2.d = PpcFmulsInline(f9.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f7.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 168), f8.d);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f3.d);
    f2.d = PpcFmulsInline(f31.d, f31.d);
    f1.d = PpcFmulsInline(f13.d, f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f31.d);
    f3.d = PpcFmulsInline(f12.d, f12.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f12.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B57F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
}

loc_805B5804:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B5924;
    }
}

loc_805B5808:
{
    f9.d = MemoryInline::FlatReadFloat32((r30 + 244));
    r3 = (r1 + 24);
    f10.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f1.d = PpcFmulsInline(f9.d, f13.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 252));
    f2.d = PpcFmulsInline(f10.d, f31.d);
    f11.d = MemoryInline::FlatReadFloat32((r30 + 248));
    f5.d = PpcFmulsInline(f0.d, f31.d);
    f6.d = PpcFmulsInline(f11.d, f12.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = PpcFmulsInline(f9.d, f12.d);
    f3.d = PpcFmulsInline(f0.d, f13.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f12.d);
    f2.d = PpcFmulsInline(f11.d, f31.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = PpcFmulsInline(f10.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f6.d = PpcFmulsInline(f11.d, f13.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f3.d = PpcFmulsInline(f10.d, f12.d);
    f0.d = PpcFmulsInline(f9.d, f31.d);
    f1.d = (-(f8.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    r3 = (r30 + 240);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f4.d = PpcFmulsInline(f0.d, f30.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f3.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 244));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 248));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 252));
    MemoryInline::FlatWriteFloat32((r30 + 240), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 252), f0.d);
    // inline leaf 0x8023A138 (12 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // end of inlined leaf 0x8023A138
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B58FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B590C;
    }
}

loc_805B5900:
{
    r3 = (r30 + 240);
    ctx->lr = 0x805B5908u;
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
    InvokeDirectCpu<0x8023A168u>(ctx);
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
    goto loc_805B5924;
}

loc_805B590C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r30 + 240);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
}

loc_805B5924:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B592C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B5944;
    }
}

loc_805B5930:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805B5944u;
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
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
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
    r8 = ctx->gpr[8];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B5944:
{
    r3 = (r30 + 240);
    // inline leaf 0x8023A138 (12 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // end of inlined leaf 0x8023A138
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B5958:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B5968;
    }
}

loc_805B595C:
{
    r3 = (r30 + 240);
    ctx->lr = 0x805B5964u;
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
    InvokeDirectCpu<0x8023A168u>(ctx);
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
    goto loc_805B5980;
}

loc_805B5968:
{
    f2.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r30 + 240);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
}

loc_805B5980:
{
    f10.d = MemoryInline::FlatReadFloat32((r30 + 324));
    r3 = (r30 + 256);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 252));
    f30.d = MemoryInline::FlatReadFloat32((r30 + 312));
    f13.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::FlatReadFloat32((r30 + 316));
    f5.d = PpcFmulsInline(f30.d, f0.d);
    f11.d = MemoryInline::FlatReadFloat32((r30 + 244));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f9.d = MemoryInline::FlatReadFloat32((r30 + 320));
    f8.d = MemoryInline::FlatReadFloat32((r30 + 248));
    f6.d = PpcFmulsInline(f30.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f30.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f30.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f10.d = MemoryInline::FlatReadFloat32((r30 + 268));
    r3 = (r30 + 256);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 308));
    f30.d = MemoryInline::FlatReadFloat32((r30 + 256));
    f13.d = MemoryInline::FlatReadFloat32((r30 + 296));
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::FlatReadFloat32((r30 + 260));
    f5.d = PpcFmulsInline(f30.d, f0.d);
    f11.d = MemoryInline::FlatReadFloat32((r30 + 300));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f9.d = MemoryInline::FlatReadFloat32((r30 + 264));
    f8.d = MemoryInline::FlatReadFloat32((r30 + 304));
    f6.d = PpcFmulsInline(f30.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f30.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f30.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r3 = (r30 + 256);
    ctx->lr = 0x805B5AB8u;
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
    InvokeDirectCpu<0x8023A168u>(ctx);
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
    r3 = (r30 + 240);
    r4 = (r30 + 116);
    r5 = (r30 + 140);
    ctx->lr = 0x805B5AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32(r31);
    guest_range_5 = MemoryInline::ResolveRangeHost((r30 + 228), 0, 68u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 52u, (r30 + 280), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 48u, (r30 + 276), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r30 + 272), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 64u, (r30 + 292), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 60u, (r30 + 288), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 56u, (r30 + 284), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r30 + 236), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r30 + 232), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r30 + 228), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 164), 0, 196u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 172u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 156u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 140u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 124u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 108u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 92u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 76u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 60u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 44u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 28u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 12u, (r1 + 176));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 4u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 172));
            r30 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 168));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 164));
    r0 = MemoryInline::ReadResolved32(guest_range_6, 192u, (r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
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
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B5170 func_805B5170 preserves=false fpr_mask=0xFFE00000
