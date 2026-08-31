#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80538170_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8086F8EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
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
    uint32_t r22_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
    uint32_t r3_psq_tmp_17 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
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
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8086F8EC;

loc_8086F8EC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -1680), 0, 1688u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -1680), r1);
    r1 = (r1 + -1680);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 1684u, (r1 + 1684), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1664u, (r1 + 1664), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 1672);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1648u, (r1 + 1648), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 1656);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1632u, (r1 + 1632), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 1640);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1616u, (r1 + 1616), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 1624);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1600u, (r1 + 1600), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 1608);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1584u, (r1 + 1584), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 1592);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1568u, (r1 + 1568), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 1576);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1552u, (r1 + 1552), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 1560);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1536u, (r1 + 1536), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 1544);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1520u, (r1 + 1520), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 1528);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 1504u, (r1 + 1504), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 1512);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    r11 = (r1 + 1504);
    // inline leaf 0x80021580 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -4), r31);
    // end of inlined leaf 0x80021580
    r7 = 0x809C0000u;
    r24 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r7 + 6392));
    r25 = 0x808E0000u;
    r26 = 0x808B0000u;
    r19 = r3;
    r0 = MemoryInline::FlatRead8((r7 + 36));
    r22 = r4;
    r21 = r5;
    r20 = r6;
}

loc_8086F984:
{
    r24 = (r24 + 18288);
    r25 = (r25 + -15536);
    r26 = (r26 + 8728);
    r23 = 0;
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8086F9A4;
    }
}

loc_8086F998:
{
    r3 = r7;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    r23 = r3;
}

loc_8086F9A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_8086F9A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086FA0C;
    }
}

loc_8086F9AC:
{
    r3 = MemoryInline::FlatRead32(r23);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 8192);
}

loc_8086F9BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8086F9E4;
    }
}

loc_8086F9C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 16384);
}

loc_8086F9C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8086F9E4;
    }
}

loc_8086F9CC:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 18248));
    r3 = (r0 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 1260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086F9E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086FA0C;
    }
}

loc_8086F9E4:
{
    r0 = MemoryInline::FlatRead8((r19 + 356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086F9EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086FA14;
    }
}

loc_8086F9F0:
{
    r3 = r19;
    r4 = r22;
    r5 = r21;
    ctx->lr = 0x8086FA00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    InvokeDirectCpu<0x8086F70Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r0 = 1;
    MemoryInline::FlatWrite8((r19 + 356), static_cast<uint8_t>(r0));
    goto loc_8086FA14;
}

loc_8086FA0C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r19 + 356), static_cast<uint8_t>(r0));
}

loc_8086FA14:
{
    r3 = MemoryInline::FlatRead32((r25 + 120));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 1444), r3);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r23));
    r7 = MemoryInline::FlatRead32((r19 + 188));
    r22_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r22 = (r22_rot_0 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 1440), r0);
    r4 = r19;
    f2.d = MemoryInline::FlatReadFloat64((r26 + 40));
    r5 = r23;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 1440));
    r3 = (r1 + 1268);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r6 = MemoryInline::FlatRead32((r19 + 192));
    r0 = MemoryInline::FlatRead32((r19 + 196));
    MemoryInline::FlatWriteRam32((r1 + 1280), r7);
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteRam32((r1 + 1284), r6);
    MemoryInline::FlatWriteRam32((r1 + 1288), r0);
    ctx->lr = 0x8086FA68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8086F23Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    r4 = r19;
    r5 = r23;
    r6 = r21;
    r3 = (r1 + 1256);
    ctx->lr = 0x8086FA7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    InvokeDirectCpu<0x8086F410u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8086FA80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086FCB8;
    }
}

loc_8086FA84:
{
    r3 = r23;
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    r28 = r3;
    r3 = r23;
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    r27 = 0x802A0000u;
    r5 = r3;
    r3 = (r1 + 1244);
    r4 = (r27 + 16688);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1244));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1248));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1252));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8086FAD4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086FAE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086FCB8;
    }
}

loc_8086FAE4:
{
    r3 = (r1 + 1244);
    ctx->lr = 0x8086FAECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r7 = MemoryInline::FlatRead32((r1 + 1244));
    r4 = r28;
    r6 = MemoryInline::FlatRead32((r1 + 1248));
    r3 = (r1 + 752);
    r0 = MemoryInline::FlatRead32((r1 + 1252));
    r5 = (r1 + 764);
    MemoryInline::FlatWriteRam32((r1 + 764), r7);
    MemoryInline::FlatWriteRam32((r1 + 768), r6);
    MemoryInline::FlatWriteRam32((r1 + 772), r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80538170u) && KnownTranslatedCpuCall<0x80538170u>::kAvailable && !KnownTranslatedCpuCall<0x80538170u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80538170u>()) {
        func_80538170_statefree(r3, r4, r5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
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
        InvokeDirectCpu<0x80538170u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
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
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r25 + 92));
    r3 = (r1 + 740);
    r4 = (r1 + 752);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r7 = MemoryInline::FlatRead32((r1 + 1244));
    r4 = r28;
    r6 = MemoryInline::FlatRead32((r1 + 1248));
    r3 = (r1 + 716);
    r0 = MemoryInline::FlatRead32((r1 + 1252));
    r5 = (r1 + 728);
    MemoryInline::FlatWriteRam32((r1 + 728), r7);
    MemoryInline::FlatWriteRam32((r1 + 732), r6);
    MemoryInline::FlatWriteRam32((r1 + 736), r0);
    ctx->lr = 0x8086FB4Cu;
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
    InvokeDirectCpu<0x805381A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r25 + 96));
    r3 = (r1 + 704);
    r4 = (r1 + 716);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 1232);
    r4 = (r1 + 740);
    r5 = (r1 + 704);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 1220);
    r4 = (r27 + 16688);
    r5 = (r1 + 1232);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 1208);
    r4 = (r27 + 16688);
    r5 = (r1 + 1232);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1220));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1224));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1228));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8086FBB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086FBC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086FCB8;
    }
}

loc_8086FBC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1208));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1212));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1216));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8086FBE8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086FBF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086FCB8;
    }
}

loc_8086FBF8:
{
    r3 = (r1 + 1220);
    ctx->lr = 0x8086FC00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 1208);
    ctx->lr = 0x8086FC08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1220));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1228));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f22.d = MemoryInline::FlatReadFloat32((r1 + 1224));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_8086FC28:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086FC4C;
    }
}

loc_8086FC30:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8086FC4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8086FC4C:
{
    f1.d = MemoryInline::FlatReadFloat32(r26);
    SetCRFloatResident(cr, 0, f21.d, f1.d);
}

loc_8086FC54:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086FC60;
    }
}

loc_8086FC5C:
{
    goto loc_8086FC6C;
}

loc_8086FC60:
{
    f1.d = f21.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f1.d = PpcFmulsInline(f21.d, f1.d);
}

loc_8086FC6C:
{
    f2.d = f22.d;
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
    InvokeDirectCpu<0x800853C0u>(ctx);
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
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r26 + 32));
    r3 = (r4 + 16640);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r1 + 1392);
    MemoryInline::FlatWriteRamFloat32((r1 + 1404), f3.d);
    r4 = (r1 + 1208);
    MemoryInline::FlatWriteRamFloat32((r1 + 1420), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1436), f0.d);
    ctx->lr = 0x8086FCA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 1256);
    r3 = (r1 + 1392);
    r5 = r4;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_5));
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
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
}

loc_8086FCB8:
{
    r5 = 0x802A0000u;
    r5 = (r5 + 16712);
    r4 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8086FCC4:
{
    MemoryInline::FlatWriteRam32((r1 + 1196), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 1200), r3);
    MemoryInline::FlatWriteRam32((r1 + 1204), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086FEB8;
    }
}

loc_8086FCDC:
{
    r3 = r23;
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 1188), r0);
    f4.d = MemoryInline::FlatReadFloat32(r26);
    MemoryInline::FlatWriteRam32((r1 + 1184), r4);
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1184));
    MemoryInline::FlatWriteRam32((r1 + 1192), r0);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1192));
    MemoryInline::FlatWriteRamFloat32((r1 + 1188), f4.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8086FD28:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086FD34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086FEB8;
    }
}

loc_8086FD38:
{
    r3 = (r1 + 1184);
    ctx->lr = 0x8086FD40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r19 + 200));
    r29 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1184));
    r3 = (r1 + 692);
    f1.d = MemoryInline::FlatReadFloat32((r19 + 204));
    r4 = (r29 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1188));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r19 + 208));
    r5 = (r19 + 200);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1192));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f4.d = MemoryInline::FlatReadFloat32((r1 + 692));
    f2.d = f21.d;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1184));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 696));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1188));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 700));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1192));
    f21.d = MemoryInline::FlatReadFloat32((r25 + 16));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    InvokeDirectCpu<0x800853C0u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r26 + 32));
    r28 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r28 + 16640));
    r27 = (r28 + 16640);
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r3 = (r1 + 1344);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    r4 = (r29 + 16688);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1372), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1356), f2.d);
    f1.d = PpcFmulsInline(f21.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1388), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    ctx->lr = 0x8086FDFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 1344);
    r4 = (r19 + 200);
    r5 = (r1 + 1196);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_7));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_8));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_9));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_10));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_11));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_4, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_5, f6.d);
    // end of inlined leaf 0x8019A91C
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1184));
    r3 = (r1 + 680);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1196));
    r4 = (r29 + 16688);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1188));
    r5 = (r1 + 1184);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1200));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1192));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1204));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f4.d = MemoryInline::FlatReadFloat32((r1 + 680));
    f2.d = f21.d;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1196));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 684));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1200));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 688));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1204));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    InvokeDirectCpu<0x800853C0u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r26 + 32));
    r3 = (r1 + 1344);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 16640));
    r4 = (r29 + 16688);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 1356), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1372), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1388), f0.d);
    ctx->lr = 0x8086FEA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 1256);
    r3 = (r1 + 1344);
    r5 = r4;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_4));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_12));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_13));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_14 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_14));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_15 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_15));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, f12.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_16 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_16));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_6 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_6, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_7 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_7, f6.d);
    // end of inlined leaf 0x8019A91C
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
}

loc_8086FEB8:
{
    r6 = MemoryInline::FlatRead32((r19 + 212));
    r3 = (r1 + 644);
    r0 = MemoryInline::FlatRead32((r19 + 216));
    r4 = (r1 + 668);
    MemoryInline::FlatWriteRam32((r1 + 672), r0);
    r5 = (r1 + 656);
    r7 = MemoryInline::FlatRead32((r1 + 1256));
    MemoryInline::FlatWriteRam32((r1 + 668), r6);
    r6 = MemoryInline::FlatRead32((r1 + 1260));
    r8 = MemoryInline::FlatRead32((r19 + 220));
    r0 = MemoryInline::FlatRead32((r1 + 1264));
    MemoryInline::FlatWriteRam32((r1 + 676), r8);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 12));
    MemoryInline::FlatWriteRam32((r1 + 656), r7);
    MemoryInline::FlatWriteRam32((r1 + 660), r6);
    MemoryInline::FlatWriteRam32((r1 + 664), r0);
    ctx->lr = 0x8086FEFCu;
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f6.d = MemoryInline::FlatReadFloat32((r1 + 644));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 648));
    f2.d = PpcFmulsInline(f6.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 652));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f3.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1256), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1260), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1264), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8086FF30:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086FF3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086FF64;
    }
}

loc_8086FF40:
{
    r4 = 0x802A0000u;
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 1256), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1260), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1264), f0.d);
    goto loc_8086FF6C;
}

loc_8086FF64:
{
    r3 = (r1 + 1256);
    ctx->lr = 0x8086FF6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8086FF6C:
{
    f2.d = MemoryInline::FlatReadFloat32((r19 + 184));
    f1.d = f23.d;
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    r3 = (r1 + 632);
    r4 = (r24 + 36);
    f22.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = f23.d;
    r3 = (r1 + 1172);
    r4 = (r1 + 632);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = f22.d;
    r3 = (r1 + 620);
    r4 = (r24 + 12);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = f23.d;
    r3 = (r1 + 608);
    r4 = (r1 + 620);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = f23.d;
    r3 = (r1 + 1160);
    r4 = (r1 + 608);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r5 = 0x802A0000u;
    r5 = (r5 + 16640);
    r4 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r1 + 1148), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 1152), r3);
    f4.d = MemoryInline::FlatReadFloat32((r25 + 4));
    MemoryInline::FlatWriteRam32((r1 + 1156), r0);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 56));
    f5.d = MemoryInline::FlatReadFloat32((r19 + 180));
    f3.d = MemoryInline::FlatReadFloat32((r26 + 28));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r19 + 184));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f24.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f0.d, f24.d);
}

loc_80870018:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80870124;
    }
}

loc_8087001C:
{
    r27 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r27 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80555628u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r26 + 24));
    r3 = MemoryInline::FlatRead32((r27 + -10448));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80555628u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r26 + 24));
    r3 = MemoryInline::FlatRead32((r27 + -10448));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80555628u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r26 + 24));
    r3 = (r1 + 572);
    r7 = MemoryInline::FlatRead32((r1 + 1256));
    r4 = (r1 + 596);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r6 = MemoryInline::FlatRead32((r1 + 1260));
    r0 = MemoryInline::FlatRead32((r1 + 1264));
    r5 = (r1 + 584);
    MemoryInline::FlatWriteRamFloat32((r1 + 596), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 600), f21.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 604), f25.d);
    MemoryInline::FlatWriteRam32((r1 + 584), r7);
    MemoryInline::FlatWriteRam32((r1 + 588), r6);
    MemoryInline::FlatWriteRam32((r1 + 592), r0);
    ctx->lr = 0x80870090u;
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
    InvokeDirectCpu<0x805381A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 1136);
    r4 = (r1 + 1256);
    r5 = (r1 + 572);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1136));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1140));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1144));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808700C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808700D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80870124;
    }
}

loc_808700D8:
{
    r3 = (r1 + 1136);
    ctx->lr = 0x808700E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = f24.d;
    r3 = (r1 + 560);
    r4 = (r1 + 1136);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r25 + 52));
    r3 = (r1 + 548);
    r4 = (r1 + 560);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 548));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 552));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 556));
    f2.d = PpcFmulsInline(f2.d, f23.d);
    f1.d = PpcFmulsInline(f1.d, f23.d);
    f0.d = PpcFmulsInline(f0.d, f23.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1148), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1152), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1156), f0.d);
}

loc_80870124:
{
    r5 = 0x802A0000u;
    r5 = (r5 + 16640);
    r4 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80870130:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 1116u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 20), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1104u, (r1 + 1124), r4);
        MemoryInline::WriteResolved32(guest_range_2, 1108u, (r1 + 1128), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 1112u, (r1 + 1132), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1092u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1092u, (r1 + 1112), r4);
        MemoryInline::WriteResolved32(guest_range_2, 1096u, (r1 + 1116), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 1100u, (r1 + 1120), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808703EC;
    }
}

loc_80870160:
{
    r3 = 0x809C0000u;
    f25.d = MemoryInline::FlatReadFloat32((r26 + 4));
    r27 = MemoryInline::FlatRead32((r3 + 18248));
    r28 = 0;
    f26.d = MemoryInline::FlatReadFloat32(r26);
    goto loc_8087035C;
}

loc_80870178:
{
    r0 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r21));
}

loc_80870180:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80870358;
    }
}

loc_80870184:
{
    r3 = r23;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r0 = (r3 & 255);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r0 = (r0 * 24);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 104));
    r3 = (r1 + 1100);
    r4 = (r19 + 284);
    r0 = (r27 + r0);
    r5 = (r5 + r0);
    r29 = MemoryInline::FlatRead32((r5 + 968));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 184));
    r5 = (r29 + 284);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f1.d));
    f21.d = PpcFmulsInline(f0.d, f1.d);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r6 = MemoryInline::FlatRead32((r1 + 1100));
    f1.d = f21.d;
    r5 = MemoryInline::FlatRead32((r1 + 1104));
    r3 = (r1 + 1088);
    r0 = MemoryInline::FlatRead32((r1 + 1108));
    r4 = (r1 + 536);
    MemoryInline::FlatWriteRam32((r1 + 536), r6);
    MemoryInline::FlatWriteRam32((r1 + 540), r5);
    MemoryInline::FlatWriteRam32((r1 + 544), r0);
    ctx->lr = 0x808701F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80537F98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r26 + 24));
    r3 = (r1 + 524);
    r4 = (r1 + 1088);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r25 + 48));
    r3 = (r1 + 512);
    r4 = (r1 + 524);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1088));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1092));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1096));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 1124));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 512));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 1128));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 516));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1132));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 520));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1124), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1128), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1132), f0.d);
    ctx->lr = 0x80870268u;
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
    SetCRFloatResident(cr, 0, f26.d, f1.d);
}

loc_8087026C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80870358;
    }
}

loc_80870270:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1100));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1104));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1108));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f25.d);
}

loc_80870294:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808702A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80870358;
    }
}

loc_808702A4:
{
    r5 = MemoryInline::FlatRead32((r1 + 1100));
    r3 = (r1 + 1076);
    r4 = MemoryInline::FlatRead32((r1 + 1104));
    r0 = MemoryInline::FlatRead32((r1 + 1108));
    MemoryInline::FlatWriteRam32((r1 + 1076), r5);
    MemoryInline::FlatWriteRam32((r1 + 1080), r4);
    MemoryInline::FlatWriteRam32((r1 + 1084), r0);
    ctx->lr = 0x808702C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 500);
    r4 = (r29 + 260);
    r5 = (r19 + 260);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1076));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 500));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1080));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 504));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 1084));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 508));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 48));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80870308:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80870358;
    }
}

loc_8087030C:
{
    r3 = (r1 + 488);
    r4 = (r1 + 1076);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r25 + 40));
    r3 = (r1 + 476);
    r4 = (r1 + 488);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1112));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 476));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1116));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 480));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 484));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1112), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1120), f0.d);
}

loc_80870358:
{
    r28 = (r28 + 1);
}

loc_8087035C:
{
    r3 = r23;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r0 = (r3 & 255);
    r4 = (r28 & 255);
    r0 = (r0 * 24);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 964));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8087037C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80870178;
    }
}

loc_80870380:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1112));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1116));
    f3.d = PpcFmulsInline(f2.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1120));
    f2.d = PpcFmulsInline(f1.d, f23.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 1124));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1112), f3.d);
    f6.d = PpcFmulsInline(f5.d, f23.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 1128));
    MemoryInline::FlatWriteRamFloat32((r1 + 1116), f2.d);
    f5.d = PpcFmulsInline(f4.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1132));
    MemoryInline::FlatWriteRamFloat32((r1 + 1120), f1.d);
    f4.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r19 + 344));
    MemoryInline::FlatWriteRamFloat32((r1 + 1124), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1128), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r19 + 348));
    MemoryInline::FlatWriteRamFloat32((r1 + 1132), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r19 + 352));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1120), f0.d);
}

loc_808703EC:
{
    r5 = 0x802A0000u;
    r5 = (r5 + 16640);
    r4 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r1 + 1064), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 1068), r3);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    MemoryInline::FlatWriteRam32((r1 + 1072), r0);
    f2.d = MemoryInline::FlatReadFloat32((r19 + 260));
    f1.d = MemoryInline::FlatReadFloat32((r19 + 264));
    f3.d = MemoryInline::FlatReadFloat32((r19 + 268));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80870430:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087043C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808705C8;
    }
}

loc_80870440:
{
    r4 = MemoryInline::FlatRead32((r19 + 260));
    r3 = (r1 + 1052);
    r0 = MemoryInline::FlatRead32((r19 + 264));
    MemoryInline::FlatWriteRam32((r1 + 1056), r0);
    MemoryInline::FlatWriteRam32((r1 + 1052), r4);
    r0 = MemoryInline::FlatRead32((r19 + 268));
    MemoryInline::FlatWriteRam32((r1 + 1060), r0);
    ctx->lr = 0x80870460u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r21 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r21 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80555628u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r26 + 24));
    r3 = MemoryInline::FlatRead32((r21 + -10448));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80555628u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r26 + 24));
    r3 = MemoryInline::FlatRead32((r21 + -10448));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80555628u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r26 + 24));
    r3 = (r1 + 452);
    r7 = MemoryInline::FlatRead32((r1 + 1052));
    r4 = (r1 + 1040);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r6 = MemoryInline::FlatRead32((r1 + 1056));
    r0 = MemoryInline::FlatRead32((r1 + 1060));
    r5 = (r1 + 464);
    MemoryInline::FlatWriteRamFloat32((r1 + 1040), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1044), f21.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1048), f24.d);
    MemoryInline::FlatWriteRam32((r1 + 464), r7);
    MemoryInline::FlatWriteRam32((r1 + 468), r6);
    MemoryInline::FlatWriteRam32((r1 + 472), r0);
    ctx->lr = 0x808704D4u;
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
    InvokeDirectCpu<0x805381A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f6.d = MemoryInline::FlatReadFloat32((r1 + 452));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 456));
    f2.d = PpcFmulsInline(f6.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 460));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f3.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1040), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1044), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1048), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80870508:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80870514:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80870544;
    }
}

loc_80870518:
{
    r4 = 0x802A0000u;
    r3 = (r1 + 440);
    r4 = (r4 + 16688);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    f2.d = MemoryInline::FlatReadFloat32((r1 + 440));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 444));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 448));
    MemoryInline::FlatWriteRamFloat32((r1 + 1040), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1044), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1048), f0.d);
    goto loc_8087054C;
}

loc_80870544:
{
    r3 = (r1 + 1040);
    ctx->lr = 0x8087054Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8087054C:
{
    f1.d = MemoryInline::FlatReadFloat32((r19 + 260));
    f0.d = MemoryInline::FlatReadFloat32((r19 + 264));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r19 + 268));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80870570u;
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
    f2.d = MemoryInline::FlatReadFloat32((r26 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 60));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 104));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8087058C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80870594;
    }
}

loc_80870590:
{
    goto loc_80870598;
}

loc_80870594:
{
    f1.d = f0.d;
}

loc_80870598:
{
    r3 = (r1 + 428);
    r4 = (r1 + 1040);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 428));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 432));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 436));
    f2.d = PpcFmulsInline(f2.d, f23.d);
    f1.d = PpcFmulsInline(f1.d, f23.d);
    f0.d = PpcFmulsInline(f0.d, f23.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1064), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1068), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1072), f0.d);
}

loc_808705C8:
{
    r3 = 0x802A0000u;
    f29.d = MemoryInline::FlatReadFloat32(r26);
    f28.d = MemoryInline::FlatReadFloat32((r26 + 4));
    r27 = (r3 + 16640);
    f25.d = MemoryInline::FlatReadFloat32((r1 + 1124));
    r21 = 0;
    f26.d = MemoryInline::FlatReadFloat32((r1 + 1128));
    r31 = 1127219200;
    f27.d = MemoryInline::FlatReadFloat32((r1 + 1132));
    r28 = MemoryInline::FlatRead32((r1 + 1280));
    r29 = MemoryInline::FlatRead32((r1 + 1284));
    r30 = MemoryInline::FlatRead32((r1 + 1288));
    f30.d = MemoryInline::FlatReadFloat64((r26 + 40));
    f31.d = MemoryInline::FlatReadFloat32((r26 + 28));
    goto loc_80870F94;
}

loc_80870604:
{
    r4 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8087060C:
{
    MemoryInline::FlatWriteRam32((r1 + 1016), r4);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead32((r27 + 8));
    MemoryInline::FlatWriteRam32((r1 + 1020), r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1016));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1020));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f25.d));
    MemoryInline::FlatWriteRam32((r1 + 1024), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f26.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1024));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f27.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 1028), r4);
    MemoryInline::FlatWriteRam32((r1 + 1032), r3);
    MemoryInline::FlatWriteRam32((r1 + 1036), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 1016), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1020), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1024), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 1004), r4);
    MemoryInline::FlatWriteRam32((r1 + 1008), r3);
    MemoryInline::FlatWriteRam32((r1 + 1012), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80870748;
    }
}

loc_8087066C:
{
    r3 = (r1 + 992);
    r4 = (r19 + 188);
    r5 = (r19 + 236);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 992));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 996));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1000));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_808706A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_20 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808706AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80870748;
    }
}

loc_808706B0:
{
    r6 = MemoryInline::FlatRead32((r1 + 992));
    r3 = (r1 + 980);
    r5 = MemoryInline::FlatRead32((r1 + 996));
    r4 = (r1 + 416);
    r0 = MemoryInline::FlatRead32((r1 + 1000));
    MemoryInline::FlatWriteRam32((r1 + 416), r6);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 80));
    MemoryInline::FlatWriteRam32((r1 + 420), r5);
    MemoryInline::FlatWriteRam32((r1 + 424), r0);
    ctx->lr = 0x808706D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80538084u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1028));
    r3 = (r1 + 404);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 980));
    r4 = (r1 + 980);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1032));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 984));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1036));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 988));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1028), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 1032), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1036), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1004));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 404));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1008));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 408));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1012));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 412));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1004), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1008), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1012), f0.d);
}

loc_80870748:
{
    r7 = MemoryInline::FlatRead32(r27);
    r3 = (r1 + 956);
    r6 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r19 + 236);
    r0 = MemoryInline::FlatRead32((r27 + 8));
    r5 = (r19 + 272);
    MemoryInline::FlatWriteRam32((r1 + 968), r7);
    MemoryInline::FlatWriteRam32((r1 + 972), r6);
    MemoryInline::FlatWriteRam32((r1 + 976), r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 956));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 960));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 964));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80870794:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_22 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808707A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80870988;
    }
}

loc_808707A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 84));
    r3 = (r1 + 944);
    r6 = MemoryInline::FlatRead32((r1 + 956));
    r4 = (r1 + 392);
    r5 = MemoryInline::FlatRead32((r1 + 960));
    f1.d = PpcFmulsInline(f0.d, f22.d);
    r0 = MemoryInline::FlatRead32((r1 + 964));
    MemoryInline::FlatWriteRam32((r1 + 392), r6);
    MemoryInline::FlatWriteRam32((r1 + 396), r5);
    MemoryInline::FlatWriteRam32((r1 + 400), r0);
    ctx->lr = 0x808707D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80538084u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r25 + 84));
    r3 = (r1 + 368);
    r6 = MemoryInline::FlatRead32((r1 + 956));
    r4 = (r1 + 380);
    r5 = MemoryInline::FlatRead32((r1 + 960));
    f1.d = PpcFmulsInline(f0.d, f22.d);
    r0 = MemoryInline::FlatRead32((r1 + 964));
    MemoryInline::FlatWriteRam32((r1 + 380), r6);
    MemoryInline::FlatWriteRam32((r1 + 384), r5);
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    ctx->lr = 0x808707FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80537F98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 932);
    r4 = (r1 + 368);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    r3 = (r1 + 920);
    r4 = (r1 + 944);
    r5 = (r1 + 932);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1016));
    r3 = (r1 + 356);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 920));
    r4 = (r1 + 920);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1020));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 924));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1024));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 928));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1016), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 1020), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1024), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f0.d = MemoryInline::FlatReadFloat32((r25 + 36));
    r3 = (r1 + 344);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 920));
    r4 = (r1 + 920);
    f4.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 924));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 968));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 356));
    f6.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 928));
    f5.d = PpcFmulsInline(f1.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1028));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1032));
    f4.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1036));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f6.d));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 972));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 360));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 976));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 364));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 968), f9.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 972), f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 976), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 920), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 924), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 928), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1028), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1032), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1036), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1004));
    r3 = (r1 + 332);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 344));
    r4 = (r1 + 920);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1008));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 348));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1012));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 352));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1016));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 920));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1020));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 924));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1024));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 928));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1004), f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 1008), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1012), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1016), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1020), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1024), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 968));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 332));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 972));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 336));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 976));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 340));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 968), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 972), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 976), f0.d);
}

loc_80870988:
{
    r4 = MemoryInline::FlatRead32(r27);
}

loc_80870990:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead32((r27 + 8));
    MemoryInline::FlatWriteRam32((r1 + 908), r4);
    MemoryInline::FlatWriteRam32((r1 + 912), r3);
    MemoryInline::FlatWriteRam32((r1 + 916), r0);
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80870A5C;
    }
}

loc_808709A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 80));
    r3 = (r1 + 320);
    r4 = (r19 + 212);
    // inline leaf 0x80514810 (10 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + -24), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 28u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r4 + 8));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r4 + 4));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 896);
    r4 = (r19 + 188);
    r5 = (r1 + 320);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r7 = MemoryInline::FlatRead32(r27);
    r3 = (r1 + 296);
    r6 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r1 + 896);
    r0 = MemoryInline::FlatRead32((r27 + 8));
    r5 = (r19 + 236);
    MemoryInline::FlatWriteRam32((r1 + 308), r7);
    MemoryInline::FlatWriteRam32((r1 + 312), r6);
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 56u, (r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r24 + 52));
    r3 = (r1 + 884);
    r4 = (r1 + 308);
    r5 = (r1 + 296);
    ctx->lr = 0x80870A04u;
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1028));
    r3 = (r1 + 284);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 884));
    r4 = (r1 + 884);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 1032));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 888));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1036));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 892));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 1028), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 1032), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1036), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 284));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 288));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 292));
    MemoryInline::FlatWriteRamFloat32((r1 + 908), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 912), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 916), f0.d);
}

loc_80870A5C:
{
}

loc_80870A60:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80870AB8;
    }
}

loc_80870A64:
{
    f1.d = MemoryInline::FlatReadFloat32((r19 + 240));
    f0.d = MemoryInline::FlatReadFloat32((r19 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80870A74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80870AB8;
    }
}

loc_80870A78:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f3.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 1016));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1024));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 1020));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f29.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 872), f29.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f29.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 880), f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 876), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1016), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1020), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1024), f0.d);
}

loc_80870AB8:
{
    r0 = (r21 + 1);
    MemoryInline::FlatWriteRam32((r1 + 1444), r0);
    r7 = MemoryInline::FlatRead32((r1 + 1268));
    r3 = (r1 + 860);
    MemoryInline::FlatWriteRam32((r1 + 1440), r31);
    r4 = (r1 + 272);
    r6 = MemoryInline::FlatRead32((r1 + 1272));
    r5 = (r1 + 260);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 1440));
    r0 = MemoryInline::FlatRead32((r1 + 1276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    MemoryInline::FlatWriteRam32((r1 + 272), r28);
    MemoryInline::FlatWriteRam32((r1 + 276), r29);
    f1.d = PpcFmulsInline(f0.d, f23.d);
    MemoryInline::FlatWriteRam32((r1 + 280), r30);
    MemoryInline::FlatWriteRam32((r1 + 260), r7);
    MemoryInline::FlatWriteRam32((r1 + 264), r6);
    MemoryInline::FlatWriteRam32((r1 + 268), r0);
    ctx->lr = 0x80870B04u;
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r25 + 80));
    r3 = (r1 + 248);
    r4 = (r1 + 1256);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 236);
    r4 = (r1 + 860);
    r5 = (r1 + 248);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 848);
    r4 = (r1 + 236);
    r5 = (r1 + 1028);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 224);
    r4 = (r1 + 848);
    r5 = (r19 + 236);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r3 = (r1 + 836);
    r4 = (r1 + 224);
    r5 = (r1 + 1028);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r3 = (r1 + 824);
    r4 = (r1 + 836);
    r5 = (r19 + 224);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
}

loc_80870B68:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80870C04;
    }
}

loc_80870B6C:
{
    r3 = (r1 + 212);
    r4 = (r1 + 1172);
    r5 = (r1 + 1004);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f1.d = MemoryInline::FlatReadFloat32((r1 + 212));
    r3 = (r1 + 200);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 216));
    r4 = (r19 + 224);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 220));
    MemoryInline::FlatWriteRamFloat32((r1 + 824), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 828), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 832), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 188);
    r4 = (r1 + 200);
    r5 = (r1 + 824);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 188));
    r3 = (r1 + 176);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 192));
    r4 = (r19 + 236);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    r5 = (r1 + 836);
    MemoryInline::FlatWriteRamFloat32((r1 + 836), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 840), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 844), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 164);
    r4 = (r1 + 176);
    r5 = (r1 + 1028);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteRamFloat32((r1 + 848), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 852), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 856), f0.d);
}

loc_80870C04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_80870C08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80870D44;
    }
}

loc_80870C0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_80870C10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80870D44;
    }
}

loc_80870C14:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 836));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 840));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 844));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f28.d);
}

loc_80870C38:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80870C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80870D44;
    }
}

loc_80870C48:
{
    ctx->lr = 0x80870C4Cu;
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
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    f3.d = MemoryInline::FlatReadFloat32((r25 + 72));
    f21.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r25 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 64));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f24.d = PpcFmulsInline(f1.d, f23.d);
    f0.d = PpcFmulsInline(f0.d, f23.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f24.d);
}

loc_80870C74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80870C7C;
    }
}

loc_80870C78:
{
    goto loc_80870C90;
}

loc_80870C7C:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80870C80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80870C88;
    }
}

loc_80870C84:
{
    goto loc_80870C8C;
}

loc_80870C88:
{
    f0.d = f1.d;
}

loc_80870C8C:
{
    f24.d = f0.d;
}

loc_80870C90:
{
    r3 = r23;
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f1.d = f21.d;
    r26 = r3;
    r3 = (r1 + 152);
    r4 = (r1 + 836);
    // inline leaf 0x806A62A4 (13 guest instruction(s))
    r5 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -10588));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x806A62A4
    f3.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f2.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80870CDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80870CE4;
    }
}

loc_80870CE0:
{
    goto loc_80870CE8;
}

loc_80870CE4:
{
    f0.d = f29.d;
}

loc_80870CE8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f21.d);
}

loc_80870CF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80870D44;
    }
}

loc_80870CF4:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f21.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 836));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 840));
    r3 = (r1 + 140);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 844));
    r4 = (r19 + 236);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    r5 = (r1 + 836);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 836), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 840), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 844), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    MemoryInline::FlatWriteRamFloat32((r1 + 848), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 852), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 856), f0.d);
}

loc_80870D44:
{
    r3 = (r1 + 128);
    r4 = (r1 + 1172);
    r5 = (r1 + 1160);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 116);
    r4 = (r1 + 128);
    r5 = (r1 + 1148);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 104);
    r4 = (r1 + 116);
    r5 = (r1 + 1064);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 92);
    r4 = (r1 + 104);
    r5 = (r1 + 968);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f1.d = MemoryInline::FlatReadFloat32((r25 + 44));
    r3 = (r1 + 80);
    r4 = (r1 + 1112);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 812);
    r4 = (r1 + 92);
    r5 = (r1 + 80);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f1.d = MemoryInline::FlatReadFloat32((r25 + 24));
    r3 = (r1 + 68);
    r4 = (r19 + 248);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 800);
    r4 = (r1 + 68);
    r5 = (r1 + 812);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 56);
    r4 = (r19 + 272);
    r5 = (r1 + 800);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 788);
    r4 = (r1 + 56);
    r5 = (r1 + 1016);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 836), 0, 432u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 24u, (r1 + 860));
    r3 = (r1 + 44);
    guest_range_5 = MemoryInline::ResolveRangeHost((r19 + 188), 0, 60u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r19 + 188), f0.d);
    r4 = (r1 + 1112);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 28u, (r1 + 864));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r19 + 192), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 32u, (r1 + 868));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r19 + 196), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 360u, (r1 + 1196));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r19 + 200), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 364u, (r1 + 1200));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r19 + 204), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 368u, (r1 + 1204));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r19 + 208), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 420u, (r1 + 1256));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r19 + 212), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 424u, (r1 + 1260));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r19 + 216), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 428u, (r1 + 1264));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r19 + 220), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r1 + 836));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r19 + 224), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r1 + 840));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r19 + 228), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r1 + 844));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r19 + 232), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 12u, (r1 + 848));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 48u, (r19 + 236), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 16u, (r1 + 852));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 52u, (r19 + 240), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 20u, (r1 + 856));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 56u, (r19 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 768u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 0u, (r1 + 44));
    r3 = (r1 + 776);
    guest_range_7 = MemoryInline::ResolveRangeHost((r19 + 248), 0, 108u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 96u, (r19 + 344), f0.d);
    r4 = (r19 + 272);
    r5 = (r19 + 236);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 4u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 100u, (r19 + 348), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 8u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 104u, (r19 + 352), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 756u, (r1 + 800));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 0u, (r19 + 248), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 760u, (r1 + 804));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 4u, (r19 + 252), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 764u, (r1 + 808));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 8u, (r19 + 256), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 744u, (r1 + 788));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 24u, (r19 + 272), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 748u, (r1 + 792));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r19 + 276), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 752u, (r1 + 796));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 32u, (r19 + 280), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8051486Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 776));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 780));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 784));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80870EEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_25 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80870EF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80870F90;
    }
}

loc_80870EFC:
{
    r5 = MemoryInline::FlatRead32((r1 + 776));
    r3 = r19;
    r4 = MemoryInline::FlatRead32((r1 + 780));
    r0 = MemoryInline::FlatRead32((r1 + 784));
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->lr = 0x80870F1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 1296);
    r4 = (r19 + 88);
    r6 = (r1 + 32);
    r5 = 1;
    ctx->lr = 0x80870F30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8053787Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 1296), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 0u, (r1 + 1296));
    guest_range_9 = MemoryInline::ResolveRangeHost((r19 + 296), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_9, 0u, (r19 + 296), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 4u, (r1 + 1300));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 4u, (r19 + 300), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 8u, (r1 + 1304));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 8u, (r19 + 304), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 12u, (r1 + 1308));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 12u, (r19 + 308), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 16u, (r1 + 1312));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 16u, (r19 + 312), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 20u, (r1 + 1316));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 20u, (r19 + 316), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 24u, (r1 + 1320));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 24u, (r19 + 320), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 28u, (r1 + 1324));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 28u, (r19 + 324), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 32u, (r1 + 1328));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 32u, (r19 + 328), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 36u, (r1 + 1332));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 36u, (r19 + 332), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 40u, (r1 + 1336));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 40u, (r19 + 336), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 44u, (r1 + 1340));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 44u, (r19 + 340), f0.d);
}

loc_80870F90:
{
    r21 = (r21 + 1);
}

loc_80870F94:
{
    r0 = MemoryInline::FlatRead32((r25 + 120));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(r0));
}

loc_80870F9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80870604;
    }
}

loc_80870FA0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 1504), 0, 168u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 160u, (r1 + 1664));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 144u, (r1 + 1648));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 128u, (r1 + 1632));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 112u, (r1 + 1616));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 96u, (r1 + 1600));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 80u, (r1 + 1584));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 64u, (r1 + 1568));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 48u, (r1 + 1552));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 32u, (r1 + 1536));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 16u, (r1 + 1520));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 1504);
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, (r1 + 1504));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
        r19 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -52));
        r20 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -48));
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 44u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 48u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 1684));
    ctx->lr = r0;
    r1 = (r1 + 1680);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8086F8EC func_8086F8EC preserves=false fpr_mask=0xFFE00000
