#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80028E90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80028E90;

loc_80028E90:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r1 + 156), r31);
    r31 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r1 + 152), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r1 + 144), r28);
    r6 = MemoryInline::FlatRead16((r3 + 224));
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80028ED0:
{
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80028EE4;
    }
}

loc_80028ED8:
{
    r0 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 224), static_cast<uint16_t>(r0));
    goto loc_800292B8;
}

loc_80028EE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31132));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 52));
    r6 = MemoryInline::FlatRead16((r3 + 48));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_80028EF4:
{
    MemoryInline::FlatWrite16((r3 + 224), static_cast<uint16_t>(r6));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80028F70;
    }
}

loc_80028EFC:
{
    r4 = 196608;
    r5 = MemoryInline::FlatRead32((r3 + 236));
    r0 = (r4 + 17405);
    MemoryInline::FlatWriteRam32((r1 + 124), r6);
    r4 = (r5 * r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31128));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31108));
    r4 = (r4 + 2555904);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    r0 = (r4 + -24893);
    MemoryInline::FlatWrite32((r3 + 236), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001B418u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = MemoryInline::FlatRead16((r29 + 224));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f0.d);
    r0 = fctiwzword0;
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 224), static_cast<uint16_t>(r0));
}

loc_80028F70:
{
    r0 = MemoryInline::FlatRead32((r29 + 36));
    r0 = (r0 & 131072);
}

loc_80028F78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80028F98;
    }
}

loc_80028F7C:
{
    r0 = MemoryInline::FlatRead16((r29 + 50));
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31128));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    goto loc_800290A4;
}

loc_80028F98:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31132));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80028FA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80028FB0;
    }
}

loc_80028FA8:
{
    f31.d = MemoryInline::FlatReadFloat32((r29 + 40));
    goto loc_80029008;
}

loc_80028FB0:
{
    r3 = 196608;
    r4 = MemoryInline::FlatRead32((r29 + 236));
    r0 = (r3 + 17405);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 40));
    r3 = (r4 * r0);
    f6.d = MemoryInline::FlatReadFloat64((r2 + -31128));
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -31104));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31100));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31108));
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r29 + 236), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_80029008:
{
    r0 = MemoryInline::FlatRead32((r29 + 36));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80029010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002906C;
    }
}

loc_80029014:
{
    r5 = MemoryInline::FlatRead32((r29 + 188));
    r3 = r29;
    r4 = 0;
    r28 = MemoryInline::FlatRead32((r5 + 32));
    ctx->lr = 0x80029028u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80029A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r29 + 144);
    r5 = (r1 + 24);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    r4 = (r28 + 65536);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -16292));
    r3 = (r1 + 24);
    f2.d = MemoryInline::FlatReadFloat32((r4 + -16288));
    r4 = (r4 + -16352);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 64));
    ctx->lr = 0x80029054u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80028D90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31108));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
}

loc_8002906C:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    r0 = MemoryInline::FlatRead8((r29 + 220));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
}

loc_8002907C:
{
    MemoryInline::FlatWriteFloat32((r29 + 56), f2.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800290A4;
    }
}

loc_80029084:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31132));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80029090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800290A4;
    }
}

loc_80029094:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31108));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8002909C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800290A4;
    }
}

loc_800290A0:
{
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
}

loc_800290A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31108));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800290B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800292A4;
    }
}

loc_800290B8:
{
    // inline leaf 0x80035940 (3 guest instruction(s))
    r3 = 0x802B0000u;
    r3 = (r3 + 30096);
    // end of inlined leaf 0x80035940
    r3 = MemoryInline::FlatRead32((r29 + 240));
    r28 = MemoryInline::FlatRead32((r29 + 184));
}

loc_800290C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80029278;
    }
}

loc_800290CC:
{
    r11 = MemoryInline::FlatRead32((r29 + 188));
    r0 = MemoryInline::FlatRead32((r11 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800290D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002921C;
    }
}

loc_800290DC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 36), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r29 + 56));
    r3 = r29;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31120));
    r4 = r30;
    f1.d = PPC_Fctiwz(f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31136));
    r5 = (r1 + 20);
    r6 = (r1 + 16);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f1.d);
    r7 = (r1 + 40);
    r0 = fctiwzword1;
    r8 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r9 = (r1 + 12);
    r10 = (r1 + 64);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 36));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r29 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r29 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r29 + 84));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r29 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r29 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r29 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    r0 = MemoryInline::FlatRead16((r28 + 18));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 20));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 4));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 64), r12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    MemoryInline::FlatWriteRam32((r1 + 72), r12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 80), r12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    MemoryInline::FlatWriteRam32((r1 + 88), r12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r31 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r31 + 36));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 96), r12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r31 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r31 + 44));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    MemoryInline::FlatWriteRam32((r1 + 104), r12);
    r12 = MemoryInline::FlatRead32((r11 + 68));
    ctr = r12;
    ctx->lr = 0x800291E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r29 + 240));
    r4 = r29;
    r5 = r30;
    r8 = (r1 + 40);
    r12 = MemoryInline::FlatRead32(r3);
    r10 = (r1 + 64);
    r6 = MemoryInline::FlatRead32((r1 + 20));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r9 = MemoryInline::FlatRead16((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    ctr = r12;
    ctx->lr = 0x80029218u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80029278;
}

loc_8002921C:
{
    r0 = MemoryInline::FlatRead8((r28 + 20));
    r4 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    r5 = r30;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r12 = MemoryInline::FlatRead32(r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f2.d = PPC_Fctiwz(f0.d);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31120));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    r10 = r31;
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f2.d);
    r8 = (r29 + 76);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31136));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    r6 = fctiwzword2;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r7 = MemoryInline::FlatRead32((r29 + 36));
    r9 = MemoryInline::FlatRead16((r28 + 18));
    ctr = r12;
    ctx->lr = 0x80029278u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80029278:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31120));
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
}

loc_800292A4:
{
    r0 = MemoryInline::FlatRead8((r29 + 220));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800292AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800292B8;
    }
}

loc_800292B0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 220), static_cast<uint8_t>(r0));
}

loc_800292B8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 180));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r29 = MemoryInline::FlatRead32((r1 + 148));
    r28 = MemoryInline::FlatRead32((r1 + 144));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80028E90 func_80028E90 preserves=false fpr_mask=0x80000000
