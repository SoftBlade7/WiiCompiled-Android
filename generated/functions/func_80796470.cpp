#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80796470(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r19_addic_src_0 = 0;
    uint32_t r19_addic_src_1 = 0;
    uint32_t r19_addic_src_2 = 0;
    uint32_t r19_addic_src_3 = 0;
    uint32_t r19_addic_src_4 = 0;
    uint32_t r19_addic_src_5 = 0;
    uint32_t r19_addic_src_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80796470;

loc_80796470:
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
    r11 = (r1 + 96);
    // inline leaf 0x80021578 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -4), r31);
    // end of inlined leaf 0x80021578
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r18 = r3;
    r22 = MemoryInline::FlatRead32((r3 + 20));
}

loc_807964AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_807965C4;
    }
}

loc_807964B0:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r4 + 14521));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807964BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807964F0;
    }
}

loc_807964C0:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8440));
    r0 = (r0 * 12);
    r5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r5 + 212));
    r4 = MemoryInline::FlatRead32((r5 + 216));
    r0 = MemoryInline::FlatRead32((r5 + 208));
    r3 = (r22 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    goto loc_80796500;
}

loc_807964F0:
{
    r17 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x807964FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079A65Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + r17);
}

loc_80796500:
{
    r0 = MemoryInline::FlatRead32((r18 + 28));
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8079650C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80796524;
    }
}

loc_80796510:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = MemoryInline::FlatRead32((r3 + 1068));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-5));
}

loc_80796520:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807965C4;
    }
}

loc_80796524:
{
    r3 = r18;
    ctx->lr = 0x8079652Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80796348u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80796530:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807965C4;
    }
}

loc_80796534:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14521));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80796540:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80796578;
    }
}

loc_80796544:
{
    r0 = MemoryInline::FlatRead32(r18);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8440));
    r0 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r18 + 20));
    r5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r5 + 212));
    r4 = MemoryInline::FlatRead32((r5 + 216));
    r0 = MemoryInline::FlatRead32((r5 + 208));
    r3 = (r6 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    goto loc_80796588;
}

loc_80796578:
{
    r17 = MemoryInline::FlatRead32((r18 + 16));
    r3 = MemoryInline::FlatRead32(r18);
    ctx->lr = 0x80796584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079A65Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + r17);
}

loc_80796588:
{
    r0 = MemoryInline::FlatRead32((r18 + 28));
    r0 = (r0 - r3);
}

loc_80796594:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_807965AC;
    }
}

loc_80796598:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = MemoryInline::FlatRead32((r3 + 1068));
}

loc_807965A8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807965C4;
    }
}

loc_807965AC:
{
    r0 = MemoryInline::FlatRead32((r18 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807965B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807965C4;
    }
}

loc_807965B8:
{
    r3 = MemoryInline::FlatRead32((r18 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x807965C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079FE30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807965C4:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14521));
}

loc_807965D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80796610;
    }
}

loc_807965D4:
{
    r17 = 0;
    goto loc_80796604;
}

loc_807965DC:
{
    r3 = MemoryInline::FlatRead32((r18 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = 0;
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctx->lr = 0x807965F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079EFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807965F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80796600;
    }
}

loc_807965F8:
{
    r22 = MemoryInline::FlatRead32((r18 + 20));
    r17 = (r17 + -1);
}

loc_80796600:
{
    r17 = (r17 + 1);
}

loc_80796604:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(r22));
}

loc_80796608:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807965DC;
    }
}

loc_8079660C:
{
    goto loc_8079695C;
}

loc_80796610:
{
    r4 = 0x808A0000u;
    r3 = 0x808A0000u;
    f30.d = MemoryInline::FlatReadFloat64((r4 + 19944));
    r20 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r3 + 19936));
    r31 = 0x809C0000u;
    r26 = 0x809C0000u;
    r27 = 0x809C0000u;
    r25 = 16842752;
    r24 = 0x809C0000u;
    r28 = 0x808A0000u;
    r29 = 1127219200;
    r30 = 0x809C0000u;
    r17 = 20;
    goto loc_80796954;
}

loc_8079664C:
{
    r3 = MemoryInline::FlatRead32((r18 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r21 = MemoryInline::FlatRead32(r3_addr_4);
    r3 = MemoryInline::FlatRead32((r21 + 124));
    r0 = (r3 & 1);
}

loc_80796660:
{
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r23 = (r23_rot_2 & 1);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807966D4;
    }
}

loc_80796668:
{
    r0 = MemoryInline::FlatRead8((r21 + 108));
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r24 + 12088));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 1756));
}

loc_80796688:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807966A4;
    }
}

loc_8079668C:
{
}

loc_80796690:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_807966A0;
    }
}

loc_80796694:
{
    r0 = MemoryInline::FlatRead32((r4 + 1760));
}

loc_8079669C:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(r0))) {
        goto loc_807966A4;
    }
}

loc_807966A0:
{
    r3 = 1;
}

loc_807966A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807966A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807966D4;
    }
}

loc_807966AC:
{
    r5 = MemoryInline::FlatRead16((r21 + 110));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = r21;
    r4 = 0;
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r21 + 110), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r21 + 112));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r21 + 112), static_cast<uint16_t>(r0));
    ctx->lr = 0x807966D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807A2AA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80796950;
}

loc_807966D4:
{
}

loc_807966D8:
{
    r4 = MemoryInline::FlatRead16((r21 + 112));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_807967BC;
    }
}

loc_807966E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807966E4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807967BC;
    }
}

loc_807966E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079677C;
    }
}

loc_807966EC:
{
    r0 = MemoryInline::FlatRead32((r21 + 352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_807966F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079677C;
    }
}

loc_807966F8:
{
    r3 = MemoryInline::FlatRead32((r21 + 164));
    r4 = (r25 + 257);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 & ~r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079677C;
    }
}

loc_8079670C:
{
    r0 = MemoryInline::FlatRead32((r26 + 14528));
    r4 = 0;
    r3 = MemoryInline::FlatRead16((r21 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8079671C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80796730;
    }
}

loc_80796720:
{
    r0 = MemoryInline::FlatRead32((r27 + 14536));
    r3 = (r3 & 3);
}

loc_8079672C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80796734;
    }
}

loc_80796730:
{
    r4 = 1;
}

loc_80796734:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80796738:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079677C;
    }
}

loc_8079673C:
{
    r3 = MemoryInline::FlatRead16((r21 + 110));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r21 + 110), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r21 + 112));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r21 + 112), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r21 + 124));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079675C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079676C;
    }
}

loc_80796760:
{
    r3 = r21;
    r4 = 0;
    ctx->lr = 0x8079676Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807A2AA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8079676C:
{
    r0 = MemoryInline::FlatRead32((r21 + 116));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r21 + 116), r0);
    goto loc_80796950;
}

loc_8079677C:
{
    r3 = r21;
    r4 = 0;
    ctx->lr = 0x80796788u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079EFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8079678C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80796798;
    }
}

loc_80796790:
{
    r22 = MemoryInline::FlatRead32((r18 + 20));
    r20 = (r20 + -1);
}

loc_80796798:
{
    r3 = MemoryInline::FlatRead32((r21 + 124));
    r0 = (r3 & 1);
}

loc_807967A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80796950;
    }
}

loc_807967A4:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807967A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80796950;
    }
}

loc_807967AC:
{
    r3 = r21;
    r4 = 0;
    ctx->lr = 0x807967B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807A2AA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80796950;
}

loc_807967BC:
{
    r0 = MemoryInline::FlatRead32((r21 + 176));
    r19 = 1;
    f29.d = MemoryInline::FlatReadFloat32((r28 + 19932));
}

loc_807967CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807967DC;
    }
}

loc_807967D0:
{
    r0 = MemoryInline::FlatRead32(r18);
}

loc_807967D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80796830;
    }
}

loc_807967DC:
{
}

loc_807967E0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80796808;
    }
}

loc_807967E4:
{
}

loc_807967E8:
{
    r3 = 60;
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(60))) {
        goto loc_807967F4;
    }
}

loc_807967F0:
{
    r3 = r4;
}

loc_807967F4:
{
    r0 = MemoryInline::FlatRead32((r21 + 124));
    r19 = (r3 + 1);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r21 + 124), r0);
    goto loc_80796830;
}

loc_80796808:
{
    r0 = MemoryInline::FlatRead32(r18);
}

loc_80796810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80796830;
    }
}

loc_80796814:
{
}

loc_80796818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80796830;
    }
}

loc_8079681C:
{
    r19 = 2;
    goto loc_80796828;
}

loc_80796824:
{
    r19 = (r19 + 1);
}

loc_80796828:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 3);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80796824;
    }
}

loc_80796830:
{
    r3 = r21;
    r4 = 0;
    // inline leaf 0x8079EC44 (21 guest instruction(s))
}

loc_inl1_0x8079EC44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x8079EC48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x8079EC68;
    }
}

loc_inl1_0x8079EC4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    goto loc_inl1_0x8079EC80;
}

loc_inl1_0x8079EC68:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
}

loc_inl1_0x8079EC80:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl1_cont_8079EC44:
{
    // end of inlined leaf 0x8079EC44
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r30 + 12016));
    r4 = (r21 + 68);
    MemoryInline::FlatWriteRam32((r1 + 24), r29);
    r5 = 14;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->lr = 0x80796868u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80786B14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r21 + 110));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r21 + 110), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r21 + 112));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r21 + 112), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r21 + 188));
    r0 = MemoryInline::FlatRead32((r21 + 192));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = MemoryInline::FlatRead32((r21 + 196));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_80796898:
{
    r5 = MemoryInline::FlatRead16((r21 + 110));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = r21;
    r4 = 1;
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r21 + 110), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r21 + 112));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r21 + 112), static_cast<uint16_t>(r0));
    ctx->lr = 0x807968BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079EFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807968C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807968D0;
    }
}

loc_807968C4:
{
    r22 = MemoryInline::FlatRead32((r18 + 20));
    r20 = (r20 + -1);
    goto loc_80796918;
}

loc_807968D0:
{
}

loc_807968D4:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80796910;
    }
}

loc_807968D8:
{
    r3 = MemoryInline::FlatRead32((r31 + 6392));
    r4 = MemoryInline::FlatRead8((r21 + 108));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = (r21 + 68);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f29.d);
}

loc_807968F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80796904;
    }
}

loc_807968F8:
{
    f29.d = f1.d;
    r0 = 1;
    f29.d = PPC_PsToScalarInline(f29.d);
    goto loc_80796908;
}

loc_80796904:
{
    r0 = 0;
}

loc_80796908:
{
}

loc_8079690C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_80796918;
    } else {
        f0.d = PPC_PsToScalarInline(f0.d);
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
    }
}

loc_80796910:
{
    r19_addic_src_3 = r19;
    r19 = (r19_addic_src_3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r19_addic_src_3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_80796914:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80796898;
    }
}

loc_80796918:
{
}

loc_8079691C:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80796930;
    }
}

loc_80796920:
{
    r0 = MemoryInline::FlatRead16((r21 + 112));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80796928:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_80796930;
    }
}

loc_8079692C:
{
    MemoryInline::FlatWrite16((r21 + 112), static_cast<uint16_t>(r17));
}

loc_80796930:
{
    r3 = MemoryInline::FlatRead32((r21 + 124));
    r0 = (r3 & 1);
}

loc_80796938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80796950;
    }
}

loc_8079693C:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80796940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80796950;
    }
}

loc_80796944:
{
    r3 = r21;
    r4 = (r1 + 8);
    ctx->lr = 0x80796950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807A2AA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80796950:
{
    r20 = (r20 + 1);
}

loc_80796954:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r22));
}

loc_80796958:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079664C;
    }
}

loc_8079695C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // inline leaf 0x800215C4 (16 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -4));
    // end of inlined leaf 0x800215C4
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80796470 func_80796470 preserves=false fpr_mask=0xE0000000
