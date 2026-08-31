#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80178CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80178CEC;

loc_80178CEC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 80);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 516));
    r0 = 1127219200;
    r30 = 0x80250000u;
    r12 = MemoryInline::FlatRead32(r3);
    r31 = 0x80290000u;
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r30 = (r30 + 10112);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 24), r0);
    r31 = (r31 + -21096);
    ctr = r12;
    ctx->lr = 0x80178D48u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = r28;
    r26 = 0;
    goto loc_80178D64;
}

loc_80178D54:
{
    r3 = MemoryInline::FlatRead32((r25 + 628));
    ctx->lr = 0x80178D5Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017400Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = (r25 + 4);
    r26 = (r26 + 1);
}

loc_80178D64:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_80178D6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80178D54;
    }
}

loc_80178D70:
{
    r25 = r28;
    r26 = 0;
}

loc_80178D78:
{
    r3 = MemoryInline::FlatRead32((r25 + 972));
    ctx->lr = 0x80178D80u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017400Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(15));
}

loc_80178D8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80178D78;
    }
}

loc_80178D90:
{
    r25 = r28;
    r26 = 0;
}

loc_80178D98:
{
    r3 = MemoryInline::FlatRead32((r25 + 676));
    ctx->lr = 0x80178DA0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017400Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(74));
}

loc_80178DAC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80178D98;
    }
}

loc_80178DB0:
{
    f30.d = MemoryInline::FlatReadFloat32((r30 + 744));
    r25 = r28;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 808));
    r26 = 0;
}

loc_80178DC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 452));
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80178DC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80178E48;
    }
}

loc_80178DCC:
{
    r3 = (r28 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 124));
}

loc_80178DD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80178DEC;
    }
}

loc_80178DDC:
{
    r3 = MemoryInline::FlatRead32((r25 + 608));
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_80178DE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80178E0C;
    }
}

loc_80178DEC:
{
    MemoryInline::FlatWriteFloat32((r25 + 452), f30.d);
    MemoryInline::FlatWriteFloat32((r25 + 468), f30.d);
    r3 = MemoryInline::FlatRead32((r25 + 608));
    r0 = MemoryInline::FlatRead8((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80178E00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80178E74;
    }
}

loc_80178E04:
{
    ctx->lr = 0x80178E08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80175F3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80178E74;
}

loc_80178E0C:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80178E1C:
{
    MemoryInline::FlatWriteFloat32((r25 + 452), f0.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80178E34;
    }
}

loc_80178E28:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(17));
}

loc_80178E30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178E74;
    }
}

loc_80178E34:
{
    r3 = MemoryInline::FlatRead32((r25 + 608));
    ctx->lr = 0x80178E3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80175F3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r25 + 452), f30.d);
    MemoryInline::FlatWriteFloat32((r25 + 468), f31.d);
    goto loc_80178E74;
}

loc_80178E48:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 468));
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80178E50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80178E74;
    }
}

loc_80178E54:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80178E64:
{
    MemoryInline::FlatWriteFloat32((r25 + 468), f0.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178E74;
    }
}

loc_80178E70:
{
    MemoryInline::FlatWriteFloat32((r25 + 468), f30.d);
}

loc_80178E74:
{
    r26 = (r26 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_80178E80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80178DC0;
    }
}

loc_80178E84:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
}

loc_80178E8C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(19))) {
        goto loc_8017A6DC;
    }
}

loc_80178E90:
{
    r3 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -18120);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80178EA8u:
        goto loc_80178EA8;
        break;
    case 0x80179070u:
        goto loc_80179070;
        break;
    case 0x801792D8u:
        goto loc_801792D8;
        break;
    case 0x8017938Cu:
        goto loc_8017938C;
        break;
    case 0x80179484u:
        goto loc_80179484;
        break;
    case 0x801795A4u:
        goto loc_801795A4;
        break;
    case 0x8017986Cu:
        goto loc_8017986C;
        break;
    case 0x80179930u:
        goto loc_80179930;
        break;
    case 0x80179AE8u:
        goto loc_80179AE8;
        break;
    case 0x80179B3Cu:
        goto loc_80179B3C;
        break;
    case 0x80179C38u:
        goto loc_80179C38;
        break;
    case 0x80179C7Cu:
        goto loc_80179C7C;
        break;
    case 0x80179CB4u:
        goto loc_80179CB4;
        break;
    case 0x80179DACu:
        goto loc_80179DAC;
        break;
    case 0x80179F38u:
        goto loc_80179F38;
        break;
    case 0x80179FBCu:
        goto loc_80179FBC;
        break;
    case 0x8017A060u:
        goto loc_8017A060;
        break;
    case 0x8017A2CCu:
        goto loc_8017A2CC;
        break;
    case 0x8017A2D8u:
        goto loc_8017A2D8;
        break;
    default:
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
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80178EA8:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80178EB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80178F78;
    }
}

loc_80178EB8:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_80178EC8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80178ED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80178EE4;
    }
}

loc_80178ED4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80178EDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178EE4;
    }
}

loc_80178EE0:
{
    goto loc_80178F14;
}

loc_80178EE4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80178EF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178F04;
    }
}

loc_80178EF4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80178EFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178F04;
    }
}

loc_80178F00:
{
    goto loc_80178F14;
}

loc_80178F04:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80178EC8;
    }
}

loc_80178F10:
{
    r3 = -1;
}

loc_80178F14:
{
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r4 = (r31 + 2960);
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80178F38u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2968);
    r5 = 1;
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80178F64u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    goto loc_80179034;
}

loc_80178F78:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_80178F88:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80178F90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80178FA4;
    }
}

loc_80178F94:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80178F9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178FA4;
    }
}

loc_80178FA0:
{
    goto loc_80178FD4;
}

loc_80178FA4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80178FB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178FC4;
    }
}

loc_80178FB4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80178FBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178FC4;
    }
}

loc_80178FC0:
{
    goto loc_80178FD4;
}

loc_80178FC4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80178F88;
    }
}

loc_80178FD0:
{
    r3 = -1;
}

loc_80178FD4:
{
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r4 = (r31 + 2960);
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80178FF8u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2968);
    r5 = 1;
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80179028u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_80179034:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl1_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x80173E54;
    }
}

loc_inl1_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x80173E58;
}

loc_inl1_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80179054:
{
    MemoryInline::FlatWrite32((r27 + 20), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_8017905C:
{
    MemoryInline::FlatWrite32((r28 + 16), r0);
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x8017906Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80178A84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_80179070:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80179088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_8017908C:
{
    r3 = r28;
    ctx->lr = 0x80179094u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80178754u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x80179098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0FC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_801790A4:
{
    MemoryInline::FlatWrite8((r28 + 136), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801791A0;
    }
}

loc_801790AC:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_801790BC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_801790C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801790D8;
    }
}

loc_801790C8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_801790D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_801790D8;
    }
}

loc_801790D4:
{
    goto loc_80179108;
}

loc_801790D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_801790E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801790F8;
    }
}

loc_801790E8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_801790F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_801790F8;
    }
}

loc_801790F4:
{
    goto loc_80179108;
}

loc_801790F8:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801790BC;
    }
}

loc_80179104:
{
    r3 = -1;
}

loc_80179108:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl2_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x80173E54;
    }
}

loc_inl2_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x80173E58;
}

loc_inl2_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 37;
    MemoryInline::FlatWrite32((r27 + 20), r3);
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_80179134:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017913C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80179150;
    }
}

loc_80179140:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80179148:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80179150;
    }
}

loc_8017914C:
{
    goto loc_80179180;
}

loc_80179150:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017915C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80179170;
    }
}

loc_80179160:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80179168:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80179170;
    }
}

loc_8017916C:
{
    goto loc_80179180;
}

loc_80179170:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80179134;
    }
}

loc_8017917C:
{
    r3 = -1;
}

loc_80179180:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl3_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl3_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x80173E54;
    }
}

loc_inl3_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x80173E58;
}

loc_inl3_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    goto loc_80179290;
}

loc_801791A0:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_801791B0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_801791B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801791CC;
    }
}

loc_801791BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_801791C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_801791CC;
    }
}

loc_801791C8:
{
    goto loc_801791FC;
}

loc_801791CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_801791D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801791EC;
    }
}

loc_801791DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_801791E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_801791EC;
    }
}

loc_801791E8:
{
    goto loc_801791FC;
}

loc_801791EC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801791B0;
    }
}

loc_801791F8:
{
    r3 = -1;
}

loc_801791FC:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl4_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl4_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl4_0x80173E54;
    }
}

loc_inl4_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x80173E58;
}

loc_inl4_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 37;
    MemoryInline::FlatWrite32((r27 + 20), r3);
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_80179228:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80179230:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80179244;
    }
}

loc_80179234:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017923C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80179244;
    }
}

loc_80179240:
{
    goto loc_80179274;
}

loc_80179244:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80179250:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80179264;
    }
}

loc_80179254:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017925C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80179264;
    }
}

loc_80179260:
{
    goto loc_80179274;
}

loc_80179264:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80179228;
    }
}

loc_80179270:
{
    r3 = -1;
}

loc_80179274:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl5_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl5_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x80173E54;
    }
}

loc_inl5_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl5_0x80173E58;
}

loc_inl5_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl5_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl5_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
}

loc_80179290:
{
    r3 = r28;
    ctx->lr = 0x80179298u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80178954u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801792A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801792BC;
    }
}

loc_801792AC:
{
    r3 = 5;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x801792BCu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801792BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801792C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801792CC;
    }
}

loc_801792C4:
{
    r3 = 0;
    ctx->lr = 0x801792CCu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80176D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801792CC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    goto loc_8017A6DC;
}

loc_801792D8:
{
    r4 = MemoryInline::FlatRead8((r28 + 138));
}

loc_801792E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80179348;
    }
}

loc_801792E4:
{
    r3 = MemoryInline::FlatRead32((r28 + 972));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801792F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80179348;
    }
}

loc_801792F4:
{
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r31 + 2384));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80179314u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r3 + 207));
    r0 = 2;
    r4 = (r4 & 254);
    r4 = (r4 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 972));
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r27 = MemoryInline::FlatRead32((r28 + 972));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl6_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl6_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl6_0x80173E54;
    }
}

loc_inl6_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl6_0x80173E58;
}

loc_inl6_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl6_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    goto loc_8017A6DC;
}

loc_80179348:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8017934C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179350:
{
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r31 + 2384));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80179370u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r3 + 207));
    r0 = 0;
    r4 = (r4 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 972));
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_8017A6DC;
}

loc_8017938C:
{
    r4 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_801793A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80179428;
    }
}

loc_801793A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_801793AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80179428;
    }
}

loc_801793B0:
{
    r25 = (r31 + 2880);
    r31 = 0;
}

loc_801793B8:
{
    r26 = r25;
    r27 = 0;
}

loc_801793C0:
{
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r26);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x801793E0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(4));
}

loc_801793EC:
{
    r26 = (r26 + 4);
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801793C0;
    }
}

loc_801793FC:
{
    r31 = (r31 + 1);
    r25 = (r25 + 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_80179408:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801793B8;
    }
}

loc_8017940C:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r27 = MemoryInline::FlatRead32((r28 + 992));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl7_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl7_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl7_0x80173E54;
    }
}

loc_inl7_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl7_0x80173E58;
}

loc_inl7_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl7_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl7_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
}

loc_80179428:
{
    r3 = MemoryInline::FlatRead32((r28 + 484));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80179430:
{
    MemoryInline::FlatWrite32((r28 + 484), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179438:
{
    r25 = 0;
}

loc_8017943C:
{
    r3 = r25;
    ctx->lr = 0x80179444u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C08CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(4));
}

loc_8017944C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8017943C;
    }
}

loc_80179450:
{
    r0 = 4;
    r3 = 0x80340000u;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 812));
    r3 = MemoryInline::FlatRead32((r3 + 18768));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r28 + 488), r0);
    goto loc_8017A6DC;
}

loc_80179484:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017949C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A6DC;
    }
}

loc_801794A0:
{
    r0 = MemoryInline::FlatRead32((r28 + 488));
}

loc_801794A8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_801794F0;
    }
}

loc_801794AC:
{
    r25 = 0;
}

loc_801794B0:
{
    r3 = r25;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801794C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_801794D0;
    }
}

loc_801794C4:
{
    r25 = (r25 + 1);
}

loc_801794CC:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_801794B0;
    }
}

loc_801794D0:
{
}

loc_801794D4:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(4))) {
        goto loc_801794E8;
    }
}

loc_801794D8:
{
    r3 = MemoryInline::FlatRead32((r28 + 488));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 488), r0);
    goto loc_8017A6DC;
}

loc_801794E8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 488), r0);
}

loc_801794F0:
{
    r27 = 0;
    r0 = 5;
    r3 = 0x80180000u;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    r3 = (r3 + -20944);
    MemoryInline::FlatWrite32((r28 + 24), r27);
    MemoryInline::FlatWrite32((r28 + 152), r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF640u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r28 + 448), r3);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r28 + 608));
    MemoryInline::FlatWrite8((r28 + 142), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r28 + 143), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 612));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 616));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 620));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF638u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80179550:
{
    MemoryInline::FlatWrite8((r28 + 141), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179558:
{
    r3 = (r28 + 1432);
    ctx->lr = 0x80179560u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1432);
    r4 = 0;
    // inline leaf 0x801A0D8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x801A0D8C
    r4 = 0x80000000u;
    r7 = 0x80180000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + -21148);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_13 & 1073741823);
    r3 = (r28 + 1432);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_14 & 67108863);
    r6 = (r0 * 100);
    ctx->lr = 0x801795A0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_801795A4:
{
    r0 = MemoryInline::FlatRead8((r28 + 141));
}

loc_801795AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A6DC;
    }
}

loc_801795B0:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 972));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_801795C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A6DC;
    }
}

loc_801795CC:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
}

loc_801795D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8017968C;
    }
}

loc_801795D8:
{
    r25 = 0;
    r27 = 1;
    r31 = 37;
}

loc_801795E4:
{
    r5 = (r30 + 112);
    r3 = (r25 + 6);
    r4 = 0;
    ctr = r31;
}

loc_801795F4:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_801795FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80179610;
    }
}

loc_80179600:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80179608:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80179610;
    }
}

loc_8017960C:
{
    goto loc_80179640;
}

loc_80179610:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_8017961C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80179630;
    }
}

loc_80179620:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80179628:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80179630;
    }
}

loc_8017962C:
{
    goto loc_80179640;
}

loc_80179630:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801795F4;
    }
}

loc_8017963C:
{
    r4 = -1;
}

loc_80179640:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = (r28 + r0);
    r26 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r26;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl9_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl9_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl9_0x80173E54;
    }
}

loc_inl9_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl9_0x80173E58;
}

loc_inl9_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl9_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r25 = (r25 + 1);
    MemoryInline::FlatWrite32((r26 + 20), r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(5));
}

loc_80179660:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801795E4;
    }
}

loc_80179664:
{
    r3 = r28;
    ctx->lr = 0x8017966Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017EDDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r28 + 1028));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1028));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl10_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl10_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl10_0x80173E54;
    }
}

loc_inl10_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl10_0x80173E58;
}

loc_inl10_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl10_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl10_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
}

loc_8017968C:
{
    r0 = MemoryInline::FlatRead8((r28 + 124));
    r3 = 0;
}

loc_80179698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801796D0;
    }
}

loc_8017969C:
{
    r0 = MemoryInline::FlatRead8((r28 + 125));
    r3 = 1;
}

loc_801796A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801796D0;
    }
}

loc_801796AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 126));
    r3 = 2;
}

loc_801796B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801796D0;
    }
}

loc_801796BC:
{
    r0 = MemoryInline::FlatRead8((r28 + 127));
    r3 = 3;
}

loc_801796C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801796D0;
    }
}

loc_801796CC:
{
    r3 = 4;
}

loc_801796D0:
{
}

loc_801796D4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(4))) {
        goto loc_801796E0;
    }
}

loc_801796D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 143), static_cast<uint8_t>(r0));
}

loc_801796E0:
{
    r0 = MemoryInline::FlatRead8((r28 + 143));
}

loc_801796E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801797EC;
    }
}

loc_801796EC:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
}

loc_801796F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8017976C;
    }
}

loc_801796F8:
{
    r0 = MemoryInline::FlatRead32((r28 + 132));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 608));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80175EC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80179710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80179734;
    }
}

loc_80179714:
{
    r0 = MemoryInline::FlatRead32((r28 + 132));
    r4 = 5;
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 608));
    ctx->lr = 0x8017972Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80175C1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80179730:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80179744;
    }
}

loc_80179734:
{
    r0 = MemoryInline::FlatRead32((r28 + 1488));
    r3 = 6;
    MemoryInline::FlatWrite32((r28 + 16), r3);
    MemoryInline::FlatWrite32((r28 + 24), r0);
}

loc_80179744:
{
    r4 = MemoryInline::FlatRead32((r28 + 152));
    r3 = MemoryInline::FlatRead32((r28 + 1488));
    r0 = (r4 + 1);
}

loc_80179754:
{
    MemoryInline::FlatWrite32((r28 + 152), r0);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_8017A6DC;
    }
}

loc_8017975C:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r28 + 24), r3);
    MemoryInline::FlatWrite32((r28 + 16), r0);
    goto loc_8017A6DC;
}

loc_8017976C:
{
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r0 = MemoryInline::FlatRead32((r28 + 1484));
    r3 = (r3 + 1);
}

loc_8017977C:
{
    MemoryInline::FlatWrite32((r28 + 24), r3);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8017A6DC;
    }
}

loc_80179784:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF63Cu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80179794:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801797E0;
    }
}

loc_80179798:
{
    r3 = (r28 + 1432);
    ctx->lr = 0x801797A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1432);
    r4 = 1;
    // inline leaf 0x801A0D8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x801A0D8C
    r4 = 0x80000000u;
    r7 = 0x80180000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + -21148);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_23 & 1073741823);
    r3 = (r28 + 1432);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_24 & 67108863);
    r6 = (r0 * 100);
    ctx->lr = 0x801797E0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801797E0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 142), static_cast<uint8_t>(r0));
    goto loc_8017A6DC;
}

loc_801797EC:
{
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r0 = MemoryInline::FlatRead32((r28 + 1484));
    r3 = (r3 + 1);
}

loc_801797FC:
{
    MemoryInline::FlatWrite32((r28 + 24), r3);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8017A6DC;
    }
}

loc_80179804:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF63Cu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80179814:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80179860;
    }
}

loc_80179818:
{
    r3 = (r28 + 1432);
    ctx->lr = 0x80179820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1432);
    r4 = 1;
    // inline leaf 0x801A0D8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x801A0D8C
    r4 = 0x80000000u;
    r7 = 0x80180000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + -21148);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_26 & 1073741823);
    r3 = (r28 + 1432);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_27 & 67108863);
    r6 = (r0 * 100);
    ctx->lr = 0x80179860u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80179860:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 142), static_cast<uint8_t>(r0));
    goto loc_8017A6DC;
}

loc_8017986C:
{
    r0 = MemoryInline::FlatRead8((r28 + 142));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80179874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179878:
{
    r3 = MemoryInline::FlatRead32((r28 + 448));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF640u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r28 + 624));
    // inline leaf 0x801762C0 (11 guest instruction(s))
    r4 = 0;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 80), 0, 324u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 80), r4);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 88), r0);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 184), r4);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 192), r0);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 288), r4);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 296), r0);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 392), r4);
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 400), r0);
    // end of inlined leaf 0x801762C0
    r25 = 0;
}

loc_8017988C:
{
    r3 = MemoryInline::FlatRead32((r28 + 516));
    r4 = r25;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 768));
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r6 = 0;
    f2.d = f1.d;
    r7 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 44));
    r8 = 0;
    ctr = r12;
    ctx->lr = 0x801798BCu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(8));
}

loc_801798C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8017988C;
    }
}

loc_801798C8:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r25 = MemoryInline::FlatRead32((r28 + 996));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl14_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl14_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl14_0x80173E54;
    }
}

loc_inl14_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl14_0x80173E58;
}

loc_inl14_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl14_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl14_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r4 = 8;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = 0;
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 16), r4);
    r4 = MemoryInline::FlatRead32((r28 + 1028));
    MemoryInline::FlatWrite32((r4 + 24), r0);
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80179908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017991C;
    }
}

loc_8017990C:
{
    r3 = 5;
    r4 = 21;
    ctr = r12;
    ctx->lr = 0x8017991Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017991C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80179920:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179924:
{
    r3 = 21;
    ctx->lr = 0x8017992Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80176D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_80179930:
{
    r4 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 972));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80179948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A6DC;
    }
}

loc_8017994C:
{
}

loc_80179950:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(13))) {
        goto loc_80179A78;
    }
}

loc_80179954:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_80179964:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017996C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_80179980;
    }
}

loc_80179970:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80179978:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_80179980;
    }
}

loc_8017997C:
{
    goto loc_801799B0;
}

loc_80179980:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017998C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_801799A0;
    }
}

loc_80179990:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80179998:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_801799A0;
    }
}

loc_8017999C:
{
    goto loc_801799B0;
}

loc_801799A0:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80179964;
    }
}

loc_801799AC:
{
    r3 = -1;
}

loc_801799B0:
{
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl15_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl15_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl15_0x80173E54;
    }
}

loc_inl15_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl15_0x80173E58;
}

loc_inl15_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl15_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl15_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 37;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_801799DC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_801799E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_801799F8;
    }
}

loc_801799E8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_801799F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_801799F8;
    }
}

loc_801799F4:
{
    goto loc_80179A28;
}

loc_801799F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80179A04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_80179A18;
    }
}

loc_80179A08:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80179A10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_80179A18;
    }
}

loc_80179A14:
{
    goto loc_80179A28;
}

loc_80179A18:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801799DC;
    }
}

loc_80179A24:
{
    r3 = -1;
}

loc_80179A28:
{
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl16_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl16_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl16_0x80173E54;
    }
}

loc_inl16_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl16_0x80173E58;
}

loc_inl16_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl16_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl16_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r3 = (r31 + 2612);
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r28 + 492));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80179A68u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    goto loc_80179ADC;
}

loc_80179A78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_80179A7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80179ADC;
    }
}

loc_80179A80:
{
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r31 + 2612));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80179AA0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2612);
    r5 = 1;
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80179AD0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_80179ADC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    goto loc_8017A6DC;
}

loc_80179AE8:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80179B00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A6DC;
    }
}

loc_80179B04:
{
    r0 = MemoryInline::FlatRead8((r28 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80179B0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80179B30;
    }
}

loc_80179B10:
{
    r25 = r28;
    r26 = 0;
}

loc_80179B18:
{
    r3 = MemoryInline::FlatRead32((r25 + 608));
    ctx->lr = 0x80179B20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80175F3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_80179B2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80179B18;
    }
}

loc_80179B30:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    goto loc_8017A6DC;
}

loc_80179B3C:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 972));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80179B54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A6DC;
    }
}

loc_80179B58:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 104), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80179B68:
{
    MemoryInline::FlatWrite32((r28 + 108), r0);
    MemoryInline::FlatWrite32((r28 + 112), r0);
    MemoryInline::FlatWrite32((r28 + 116), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80179BCC;
    }
}

loc_80179B78:
{
    r3 = (r31 + 2536);
    r26 = 2;
    r25 = (r3 + 8);
}

loc_80179B84:
{
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80179BA4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r26 = (r26 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(7));
}

loc_80179BB0:
{
    r25 = (r25 + 4);
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80179B84;
    }
}

loc_80179BC0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    goto loc_80179C2C;
}

loc_80179BCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80179C2C;
    }
}

loc_80179BD0:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1012));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl17_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl17_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl17_0x80173E54;
    }
}

loc_inl17_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl17_0x80173E58;
}

loc_inl17_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl17_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl17_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80179C00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80179C14;
    }
}

loc_80179C04:
{
    r3 = 5;
    r4 = 7;
    ctr = r12;
    ctx->lr = 0x80179C14u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80179C14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80179C18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80179C24;
    }
}

loc_80179C1C:
{
    r3 = 7;
    ctx->lr = 0x80179C24u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80176D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80179C24:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r28 + 16), r0);
}

loc_80179C2C:
{
    r3 = r28;
    ctx->lr = 0x80179C34u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017C038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_80179C38:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_35 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 628));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80179C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A6DC;
    }
}

loc_80179C54:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1000));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl18_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl18_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl18_0x80173E54;
    }
}

loc_inl18_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl18_0x80173E58;
}

loc_inl18_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl18_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl18_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 12;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    MemoryInline::FlatWrite32((r28 + 16), r0);
    goto loc_8017A6DC;
}

loc_80179C7C:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 972));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80179C94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179C98:
{
    r3 = r28;
    ctx->lr = 0x80179CA0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017C038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r28;
    ctx->lr = 0x80179CA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017EDDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    goto loc_8017A6DC;
}

loc_80179CB4:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_37 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80179CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A6DC;
    }
}

loc_80179CD0:
{
    r5 = MemoryInline::FlatRead32((r28 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80179CD8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80179D3C;
    }
}

loc_80179CDC:
{
    r0 = MemoryInline::FlatRead32((r28 + 1036));
    r4 = 1;
    r3 = 19;
    f1.d = MemoryInline::FlatReadFloat64((r30 + 792));
    r0 = (r0 ^ -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_80179CF4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWrite32((r28 + 1040), r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWrite32((r28 + 16), r3);
    MemoryInline::FlatWriteFloat32((r28 + 1868), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80179D68;
    }
}

loc_80179D10:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80179D1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80179D68;
    }
}

loc_80179D20:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 3;
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r4 = fctiwzword1;
    ctr = r12;
    ctx->lr = 0x80179D38u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80179D68;
}

loc_80179D3C:
{
    r3 = r28;
    ctx->lr = 0x80179D44u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017C038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 13;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1024));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl19_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl19_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl19_0x80173E54;
    }
}

loc_inl19_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl19_0x80173E58;
}

loc_inl19_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl19_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl19_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 8;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    MemoryInline::FlatWrite32((r28 + 16), r0);
}

loc_80179D68:
{
    r25 = 0;
}

loc_80179D6C:
{
    r3 = MemoryInline::FlatRead32((r28 + 516));
    r4 = r25;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 768));
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r6 = 0;
    f2.d = f1.d;
    r7 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 44));
    r8 = 0;
    ctr = r12;
    ctx->lr = 0x80179D9Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(8));
}

loc_80179DA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80179D6C;
    }
}

loc_80179DA8:
{
    goto loc_8017A6DC;
}

loc_80179DAC:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 972));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80179DC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179DC8:
{
    r6 = MemoryInline::FlatRead32((r28 + 492));
    r3 = (r31 + 2612);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80179DECu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80179E04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80179E6C;
    }
}

loc_80179E08:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_80179E18:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80179E20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80179E34;
    }
}

loc_80179E24:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80179E2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80179E34;
    }
}

loc_80179E30:
{
    goto loc_80179E64;
}

loc_80179E34:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80179E40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80179E54;
    }
}

loc_80179E44:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80179E4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80179E54;
    }
}

loc_80179E50:
{
    goto loc_80179E64;
}

loc_80179E54:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80179E18;
    }
}

loc_80179E60:
{
    r3 = -1;
}

loc_80179E64:
{
    MemoryInline::FlatWrite32((r28 + 20), r3);
    goto loc_80179ECC;
}

loc_80179E6C:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_80179E7C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80179E84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80179E98;
    }
}

loc_80179E88:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80179E90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80179E98;
    }
}

loc_80179E94:
{
    goto loc_80179EC8;
}

loc_80179E98:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80179EA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80179EB8;
    }
}

loc_80179EA8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80179EB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80179EB8;
    }
}

loc_80179EB4:
{
    goto loc_80179EC8;
}

loc_80179EB8:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80179E7C;
    }
}

loc_80179EC4:
{
    r3 = -1;
}

loc_80179EC8:
{
    MemoryInline::FlatWrite32((r28 + 20), r3);
}

loc_80179ECC:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_39 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl20_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl20_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl20_0x80173E54;
    }
}

loc_inl20_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl20_0x80173E58;
}

loc_inl20_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl20_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl20_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r3 = 16;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 20));
    MemoryInline::FlatWrite32((r28 + 16), r3);
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_40 & -4);
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 1868), f0.d);
    r12 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80179F18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179F1C:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 2;
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r4 = fctiwzword2;
    ctr = r12;
    ctx->lr = 0x80179F34u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_80179F38:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_41 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 628));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80179F50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A6DC;
    }
}

loc_80179F54:
{
    r3 = MemoryInline::FlatRead32((r28 + 1036));
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r28 + 180));
    r4 = 19;
    r3 = (r3 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r30 + 792));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80179F74:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWrite32((r28 + 1040), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWrite8((r28 + 150), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r28 + 16), r4);
    MemoryInline::FlatWriteFloat32((r28 + 1868), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179F90:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80179F9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_80179FA0:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 3;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r4 = fctiwzword3;
    ctr = r12;
    ctx->lr = 0x80179FB8u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_80179FBC:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_42 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80179FD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A00C;
    }
}

loc_80179FD8:
{
    r0 = MemoryInline::FlatRead32((r28 + 180));
    r3 = 17;
    MemoryInline::FlatWrite32((r28 + 16), r3);
}

loc_80179FE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8017A6DC;
    }
}

loc_80179FEC:
{
    r0 = MemoryInline::FlatRead8((r28 + 147));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80179FF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A000;
    }
}

loc_80179FF8:
{
    r3 = 0;
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
}

loc_8017A000:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 744));
    ctx->lr = 0x8017A008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017728Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_8017A00C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r28 + 180));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1868));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8017A024:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_8017A02C:
{
    r0 = MemoryInline::FlatRead8((r28 + 147));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A054;
    }
}

loc_8017A038:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 816));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r3 = fctiwzword4;
    r3 = (r3 & 65535);
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
}

loc_8017A054:
{
    f1.d = f30.d;
    ctx->lr = 0x8017A05Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017728Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_8017A060:
{
    r0 = MemoryInline::FlatRead32((r28 + 180));
    r3 = 18;
    MemoryInline::FlatWrite32((r28 + 16), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8017A070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A0BC;
    }
}

loc_8017A074:
{
    ctx->lr = 0x8017A078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801770ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r28 + 147));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A0BC;
    }
}

loc_8017A084:
{
    r3 = (r28 + 1508);
    ctx->lr = 0x8017A08Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80128090u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 1860));
    r4 = MemoryInline::FlatRead32((r28 + 1864));
    ctx->lr = 0x8017A098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80125A44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 1500));
    r4 = MemoryInline::FlatRead32((r28 + 1504));
    // inline leaf 0x8012E544 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -29688), r3);
    MemoryInline::FlatWrite32((r13 + -29684), r4);
    // end of inlined leaf 0x8012E544
    r3 = MemoryInline::FlatRead16((r28 + 1492));
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
    r3 = MemoryInline::FlatRead16((r28 + 1494));
    // inline leaf 0x80126628 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26398), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126628
    r3 = MemoryInline::FlatRead16((r28 + 1496));
    // inline leaf 0x80126630 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26400), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126630
}

loc_8017A0BC:
{
    r0 = MemoryInline::FlatRead32((r28 + 128));
    f2.d = MemoryInline::FlatReadFloat64((r30 + 792));
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 820));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r3 = fctiwzword5;
    r3 = (r3 & 255);
    ctx->lr = 0x8017A0F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C2E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0;
    ctx->lr = 0x8017A0F8u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C11E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 624));
    // inline leaf 0x801762C0 (11 guest instruction(s))
    r4 = 0;
    r0 = -1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 80), 0, 324u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 80), r4);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 88), r0);
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 184), r4);
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 192), r0);
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r3 + 288), r4);
    MemoryInline::WriteResolved32(guest_range_1, 216u, (r3 + 296), r0);
    MemoryInline::WriteResolved32(guest_range_1, 312u, (r3 + 392), r4);
    MemoryInline::WriteResolved32(guest_range_1, 320u, (r3 + 400), r0);
    // end of inlined leaf 0x801762C0
    r3 = MemoryInline::FlatRead32((r28 + 624));
    ctx->lr = 0x8017A108u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80176520u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r25 = r28;
    r26 = 0;
}

loc_8017A110:
{
    r3 = MemoryInline::FlatRead32((r25 + 608));
    ctx->lr = 0x8017A118u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80175F3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r25 + 608));
    ctx->lr = 0x8017A120u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80175944u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_8017A12C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8017A110;
    }
}

loc_8017A130:
{
    r0 = MemoryInline::FlatRead32((r28 + 180));
}

loc_8017A138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8017A15C;
    }
}

loc_8017A13C:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017A148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A15C;
    }
}

loc_8017A14C:
{
    r3 = 4;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x8017A15Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017A15C:
{
    r3 = 0;
    r8 = 0;
    r4 = 37;
    r0 = 37;
    r5 = 37;
}

loc_8017A170:
{
    r10 = (r30 + 112);
    r7 = (r3 + 31);
    r9 = 0;
    ctr = r5;
}

loc_8017A180:
{
    r6 = MemoryInline::FlatRead32(r10);
}

loc_8017A188:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8017A19C;
    }
}

loc_8017A18C:
{
    r6 = MemoryInline::FlatRead32((r10 + 4));
}

loc_8017A194:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(17))) {
        goto loc_8017A19C;
    }
}

loc_8017A198:
{
    goto loc_8017A1CC;
}

loc_8017A19C:
{
    r6 = MemoryInline::FlatRead32((r10 + 8));
    r9 = (r9 + 1);
}

loc_8017A1A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8017A1BC;
    }
}

loc_8017A1AC:
{
    r6 = MemoryInline::FlatRead32((r10 + 12));
}

loc_8017A1B4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(17))) {
        goto loc_8017A1BC;
    }
}

loc_8017A1B8:
{
    goto loc_8017A1CC;
}

loc_8017A1BC:
{
    r10 = (r10 + 16);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A180;
    }
}

loc_8017A1C8:
{
    r9 = -1;
}

loc_8017A1CC:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r10 = (r30 + 112);
    r6 = (r28 + r6);
    r7 = (r3 + 31);
    r6 = MemoryInline::FlatRead32((r6 + 676));
    r9 = 0;
    MemoryInline::FlatWrite32((r6 + 20), r8);
    ctr = r4;
}

loc_8017A1EC:
{
    r6 = MemoryInline::FlatRead32(r10);
}

loc_8017A1F4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8017A208;
    }
}

loc_8017A1F8:
{
    r6 = MemoryInline::FlatRead32((r10 + 4));
}

loc_8017A200:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(18))) {
        goto loc_8017A208;
    }
}

loc_8017A204:
{
    goto loc_8017A238;
}

loc_8017A208:
{
    r6 = MemoryInline::FlatRead32((r10 + 8));
    r9 = (r9 + 1);
}

loc_8017A214:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8017A228;
    }
}

loc_8017A218:
{
    r6 = MemoryInline::FlatRead32((r10 + 12));
}

loc_8017A220:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(18))) {
        goto loc_8017A228;
    }
}

loc_8017A224:
{
    goto loc_8017A238;
}

loc_8017A228:
{
    r10 = (r10 + 16);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A1EC;
    }
}

loc_8017A234:
{
    r9 = -1;
}

loc_8017A238:
{
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & -4);
    r10 = (r30 + 112);
    r6 = (r28 + r6);
    r7 = (r3 + 31);
    r6 = MemoryInline::FlatRead32((r6 + 676));
    r9 = 0;
    MemoryInline::FlatWrite32((r6 + 20), r8);
    ctr = r0;
}

loc_8017A258:
{
    r6 = MemoryInline::FlatRead32(r10);
}

loc_8017A260:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8017A274;
    }
}

loc_8017A264:
{
    r6 = MemoryInline::FlatRead32((r10 + 4));
}

loc_8017A26C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(15))) {
        goto loc_8017A274;
    }
}

loc_8017A270:
{
    goto loc_8017A2A4;
}

loc_8017A274:
{
    r6 = MemoryInline::FlatRead32((r10 + 8));
    r9 = (r9 + 1);
}

loc_8017A280:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8017A294;
    }
}

loc_8017A284:
{
    r6 = MemoryInline::FlatRead32((r10 + 12));
}

loc_8017A28C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(15))) {
        goto loc_8017A294;
    }
}

loc_8017A290:
{
    goto loc_8017A2A4;
}

loc_8017A294:
{
    r10 = (r10 + 16);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A258;
    }
}

loc_8017A2A0:
{
    r9 = -1;
}

loc_8017A2A4:
{
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_4 & -4);
    r3 = (r3 + 1);
    r6 = (r28 + r6);
    r6 = MemoryInline::FlatRead32((r6 + 676));
}

loc_8017A2B8:
{
    MemoryInline::FlatWrite32((r6 + 20), r8);
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(4))) {
        goto loc_8017A170;
    }
}

loc_8017A2C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 144), static_cast<uint8_t>(r0));
    goto loc_8017A6DC;
}

loc_8017A2CC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    goto loc_8017A6DC;
}

loc_8017A2D8:
{
    r0 = MemoryInline::FlatRead8((r28 + 145));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A2E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A2F8;
    }
}

loc_8017A2E4:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x8017A2F0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80178A84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 145), static_cast<uint8_t>(r0));
}

loc_8017A2F8:
{
    r0 = MemoryInline::FlatRead8((r28 + 146));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A510;
    }
}

loc_8017A304:
{
    r3 = r28;
    ctx->lr = 0x8017A30Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80178754u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x8017A310u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0FC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_43 & 1);
}

loc_8017A31C:
{
    MemoryInline::FlatWrite8((r28 + 136), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A418;
    }
}

loc_8017A324:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017A334:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017A33C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8017A350;
    }
}

loc_8017A340:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017A348:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017A350;
    }
}

loc_8017A34C:
{
    goto loc_8017A380;
}

loc_8017A350:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017A35C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8017A370;
    }
}

loc_8017A360:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017A368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017A370;
    }
}

loc_8017A36C:
{
    goto loc_8017A380;
}

loc_8017A370:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A334;
    }
}

loc_8017A37C:
{
    r3 = -1;
}

loc_8017A380:
{
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_44 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl28_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl28_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl28_0x80173E54;
    }
}

loc_inl28_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl28_0x80173E58;
}

loc_inl28_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl28_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl28_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 37;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017A3AC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017A3B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8017A3C8;
    }
}

loc_8017A3B8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017A3C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017A3C8;
    }
}

loc_8017A3C4:
{
    goto loc_8017A3F8;
}

loc_8017A3C8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017A3D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8017A3E8;
    }
}

loc_8017A3D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017A3E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017A3E8;
    }
}

loc_8017A3E4:
{
    goto loc_8017A3F8;
}

loc_8017A3E8:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A3AC;
    }
}

loc_8017A3F4:
{
    r3 = -1;
}

loc_8017A3F8:
{
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_45 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl29_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl29_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl29_0x80173E54;
    }
}

loc_inl29_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl29_0x80173E58;
}

loc_inl29_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl29_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl29_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    goto loc_8017A508;
}

loc_8017A418:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017A428:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017A430:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8017A444;
    }
}

loc_8017A434:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017A43C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017A444;
    }
}

loc_8017A440:
{
    goto loc_8017A474;
}

loc_8017A444:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017A450:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8017A464;
    }
}

loc_8017A454:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017A45C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017A464;
    }
}

loc_8017A460:
{
    goto loc_8017A474;
}

loc_8017A464:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A428;
    }
}

loc_8017A470:
{
    r3 = -1;
}

loc_8017A474:
{
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_46 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl30_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl30_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl30_0x80173E54;
    }
}

loc_inl30_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl30_0x80173E58;
}

loc_inl30_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl30_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl30_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 37;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017A4A0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017A4A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8017A4BC;
    }
}

loc_8017A4AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017A4B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017A4BC;
    }
}

loc_8017A4B8:
{
    goto loc_8017A4EC;
}

loc_8017A4BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017A4C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8017A4DC;
    }
}

loc_8017A4CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017A4D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017A4DC;
    }
}

loc_8017A4D8:
{
    goto loc_8017A4EC;
}

loc_8017A4DC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A4A0;
    }
}

loc_8017A4E8:
{
    r3 = -1;
}

loc_8017A4EC:
{
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_47 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl31_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl31_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl31_0x80173E54;
    }
}

loc_inl31_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl31_0x80173E58;
}

loc_inl31_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl31_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl31_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
}

loc_8017A508:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 146), static_cast<uint8_t>(r0));
}

loc_8017A510:
{
    r4 = MemoryInline::FlatRead32((r28 + 1040));
}

loc_8017A518:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8017A534;
    }
}

loc_8017A51C:
{
    r3 = MemoryInline::FlatRead32((r28 + 1032));
    r0 = MemoryInline::FlatRead32((r28 + 1036));
}

loc_8017A528:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8017A534;
    }
}

loc_8017A52C:
{
    r0 = 1;
    goto loc_8017A554;
}

loc_8017A534:
{
}

loc_8017A538:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017A550;
    }
}

loc_8017A53C:
{
    r0 = MemoryInline::FlatRead32((r28 + 1032));
}

loc_8017A544:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8017A550;
    }
}

loc_8017A548:
{
    r0 = 1;
    goto loc_8017A554;
}

loc_8017A550:
{
    r0 = 0;
}

loc_8017A554:
{
}

loc_8017A558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A678;
    }
}

loc_8017A55C:
{
    r0 = MemoryInline::FlatRead8((r28 + 148));
}

loc_8017A564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A584;
    }
}

loc_8017A568:
{
    r0 = MemoryInline::FlatRead8((r28 + 142));
}

loc_8017A570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A6DC;
    }
}

loc_8017A574:
{
    r3 = MemoryInline::FlatRead32((r28 + 448));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF640u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 148), static_cast<uint8_t>(r0));
}

loc_8017A584:
{
    r0 = MemoryInline::FlatRead8((r28 + 149));
}

loc_8017A58C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A61C;
    }
}

loc_8017A590:
{
    r3 = MemoryInline::FlatRead32((r28 + 992));
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl32_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl32_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl32_0x80173E54;
    }
}

loc_inl32_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl32_0x80173E58;
}

loc_inl32_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl32_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl32_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = MemoryInline::FlatRead32((r28 + 992));
    r27 = 0;
    r5 = 1;
    MemoryInline::FlatWrite32((r3 + 20), r27);
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = MemoryInline::FlatRead32((r31 + 2612));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8017A5C4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2612);
    r5 = 1;
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8017A5F4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 1028));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017A60C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8017A61C;
    }
}

loc_8017A610:
{
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl33_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl33_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl33_0x80173E54;
    }
}

loc_inl33_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl33_0x80173E58;
}

loc_inl33_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl33_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl33_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = MemoryInline::FlatRead32((r28 + 1028));
    MemoryInline::FlatWrite32((r3 + 20), r27);
}

loc_8017A61C:
{
    r0 = MemoryInline::FlatRead32((r28 + 1480));
    r3 = 17;
    MemoryInline::FlatWrite32((r28 + 16), r3);
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A630:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017A640;
    }
}

loc_8017A634:
{
    r0 = MemoryInline::FlatRead8((r28 + 1044));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A63C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017A644;
    }
}

loc_8017A640:
{
    r3 = 1;
}

loc_8017A644:
{
    ctx->lr = 0x8017A648u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BAB2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x8017A64Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BA9A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 180));
}

loc_8017A654:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8017A6DC;
    }
}

loc_8017A658:
{
    r0 = MemoryInline::FlatRead8((r28 + 147));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A66C;
    }
}

loc_8017A664:
{
    r3 = 0;
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
}

loc_8017A66C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 744));
    ctx->lr = 0x8017A674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017728Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_8017A678:
{
    r4 = MemoryInline::FlatRead32((r28 + 1032));
    r3 = MemoryInline::FlatRead32((r28 + 1036));
    r0 = MemoryInline::FlatRead32((r28 + 180));
    r3 = (r3 - r4);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 792));
    r3 = (r3 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1868));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8017A69C:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_8017A6AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 147));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A6B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6D4;
    }
}

loc_8017A6B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 816));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r3 = fctiwzword6;
    r3 = (r3 & 65535);
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
}

loc_8017A6D4:
{
    f1.d = f30.d;
    ctx->lr = 0x8017A6DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017728Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8017A6DC:
{
    r5 = MemoryInline::FlatRead32((r28 + 104));
}

loc_8017A6E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8017A764;
    }
}

loc_8017A6E8:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
    r4 = 1;
}

loc_8017A6F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8017A718;
    }
}

loc_8017A6F8:
{
    r3 = MemoryInline::FlatRead32((r28 + 1020));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017A704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A718;
    }
}

loc_8017A708:
{
    r3 = MemoryInline::FlatRead32((r28 + 984));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017A714:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8017A71C;
    }
}

loc_8017A718:
{
    r4 = 0;
}

loc_8017A71C:
{
}

loc_8017A720:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8017A764;
    }
}

loc_8017A724:
{
}

loc_8017A728:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8017A75C;
    }
}

loc_8017A72C:
{
    r0 = MemoryInline::FlatRead32((r28 + 112));
}

loc_8017A734:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8017A75C;
    }
}

loc_8017A738:
{
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_51 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 972));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl36_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl36_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl36_0x80173E54;
    }
}

loc_inl36_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl36_0x80173E58;
}

loc_inl36_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl36_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl36_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 104));
    MemoryInline::FlatWrite32((r28 + 112), r0);
}

loc_8017A75C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 104), r0);
}

loc_8017A764:
{
    r3 = MemoryInline::FlatRead32((r28 + 108));
}

loc_8017A76C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8017A99C;
    }
}

loc_8017A770:
{
    r4 = 37;
    r5 = (r30 + 112);
    r0 = 1;
    r8 = 0;
    ctr = r4;
}

loc_8017A784:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_8017A78C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8017A7A0;
    }
}

loc_8017A790:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017A798:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017A7A0;
    }
}

loc_8017A79C:
{
    goto loc_8017A7D0;
}

loc_8017A7A0:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017A7AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8017A7C0;
    }
}

loc_8017A7B0:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017A7B8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017A7C0;
    }
}

loc_8017A7BC:
{
    goto loc_8017A7D0;
}

loc_8017A7C0:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A784;
    }
}

loc_8017A7CC:
{
    r8 = -1;
}

loc_8017A7D0:
{
    r4 = 37;
    r5 = (r30 + 112);
    r7 = 0;
    ctr = r4;
}

loc_8017A7E0:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_8017A7E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8017A7FC;
    }
}

loc_8017A7EC:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017A7F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_8017A7FC;
    }
}

loc_8017A7F8:
{
    goto loc_8017A82C;
}

loc_8017A7FC:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017A808:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8017A81C;
    }
}

loc_8017A80C:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017A814:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_8017A81C;
    }
}

loc_8017A818:
{
    goto loc_8017A82C;
}

loc_8017A81C:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A7E0;
    }
}

loc_8017A828:
{
    r7 = -1;
}

loc_8017A82C:
{
    r4 = 37;
    r5 = (r30 + 112);
    r6 = 0;
    ctr = r4;
}

loc_8017A83C:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_8017A844:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8017A858;
    }
}

loc_8017A848:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017A850:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(19))) {
        goto loc_8017A858;
    }
}

loc_8017A854:
{
    goto loc_8017A888;
}

loc_8017A858:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017A864:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8017A878;
    }
}

loc_8017A868:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017A870:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(19))) {
        goto loc_8017A878;
    }
}

loc_8017A874:
{
    goto loc_8017A888;
}

loc_8017A878:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A83C;
    }
}

loc_8017A884:
{
    r6 = -1;
}

loc_8017A888:
{
    r4 = 37;
    r9 = (r30 + 112);
    r5 = 0;
    ctr = r4;
}

loc_8017A898:
{
    r4 = MemoryInline::FlatRead32(r9);
}

loc_8017A8A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8017A8B4;
    }
}

loc_8017A8A4:
{
    r4 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017A8AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(20))) {
        goto loc_8017A8B4;
    }
}

loc_8017A8B0:
{
    goto loc_8017A8E4;
}

loc_8017A8B4:
{
    r4 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017A8C0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8017A8D4;
    }
}

loc_8017A8C4:
{
    r4 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017A8CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(20))) {
        goto loc_8017A8D4;
    }
}

loc_8017A8D0:
{
    goto loc_8017A8E4;
}

loc_8017A8D4:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A898;
    }
}

loc_8017A8E0:
{
    r5 = -1;
}

loc_8017A8E4:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
}

loc_8017A8EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017A950;
    }
}

loc_8017A8F0:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8017A904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8017A950;
    }
}

loc_8017A908:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8017A91C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8017A950;
    }
}

loc_8017A920:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8017A934:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8017A950;
    }
}

loc_8017A938:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8017A94C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8017A954;
    }
}

loc_8017A950:
{
    r0 = 0;
}

loc_8017A954:
{
}

loc_8017A958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A99C;
    }
}

loc_8017A95C:
{
}

loc_8017A960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8017A994;
    }
}

loc_8017A964:
{
    r0 = MemoryInline::FlatRead32((r28 + 116));
}

loc_8017A96C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8017A994;
    }
}

loc_8017A970:
{
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_54 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl37_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl37_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl37_0x80173E54;
    }
}

loc_inl37_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl37_0x80173E58;
}

loc_inl37_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl37_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl37_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 108));
    MemoryInline::FlatWrite32((r28 + 116), r0);
}

loc_8017A994:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 108), r0);
}

loc_8017A99C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8017A9A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A9B0;
    }
}

loc_8017A9A4:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x8017A9B0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017AE68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017A9B0:
{
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x8017A9C8u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = (r28 + 524);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8017A9E0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A9EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017AA20;
    }
}

loc_8017A9F0:
{
    r25 = r28;
    r26 = 0;
}

loc_8017A9F8:
{
    r3 = MemoryInline::FlatRead32((r25 + 496));
    r4 = (r28 + 524);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8017AA10u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_8017AA1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8017A9F8;
    }
}

loc_8017AA20:
{
    r3 = MemoryInline::FlatRead32((r28 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8017AA28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8017AA34;
    }
}

loc_8017AA2C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 100), r0);
}

loc_8017AA34:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 44u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 28u, (r1 + 80));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80178CEC func_80178CEC preserves=false fpr_mask=0xC0000000
