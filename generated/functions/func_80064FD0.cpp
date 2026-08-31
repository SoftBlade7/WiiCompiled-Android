#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_80065604_loc_0 = 0;
    uint32_t addr_lfsux_80065484_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r16_addr_0 = 0;
    uint32_t r16_addr_1 = 0;
    uint32_t r16_addr_2 = 0;
    uint32_t r16_addr_3 = 0;
    uint32_t r16_addr_4 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r16_rot_3 = 0;
    uint32_t r16_rot_4 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r17_addr_3 = 0;
    uint32_t r17_addr_4 = 0;
    uint32_t r17_addr_5 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_addr_2 = 0;
    uint32_t r19_addr_3 = 0;
    uint32_t r19_addr_4 = 0;
    uint32_t r19_addr_5 = 0;
    uint32_t r19_addr_6 = 0;
    uint32_t r19_addr_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r21_addr_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
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

    goto loc_80064FD0;

loc_80064FD0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -608), 0, 616u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -608), r1);
    r1 = (r1 + -608);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 612u, (r1 + 612), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 592u, (r1 + 592), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 600);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 576u, (r1 + 576), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 584);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 560u, (r1 + 560), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 568);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 544u, (r1 + 544), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 552);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 528u, (r1 + 528), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 512u, (r1 + 512), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 496u, (r1 + 496), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 480u, (r1 + 480), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 464u, (r1 + 464), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    r11 = (r1 + 464);
    // inline leaf 0x80021570 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -68), r15);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -64), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -4), r31);
    // end of inlined leaf 0x80021570
    r0 = (r7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80065030:
{
    r18 = r3;
    r0 = 1127219200;
    r26 = r4;
    MemoryInline::FlatWriteRam32((r1 + 344), r0);
    r27 = r5;
    r28 = r6;
    r17 = r7;
    MemoryInline::FlatWriteRam32((r1 + 352), r0);
    r15 = r8;
    r20 = r9;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80065068;
    }
}

loc_8006505C:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1988u>(ctx);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8012E59Cu>(ctx);
}

loc_80065068:
{
    r16 = 0;
    MemoryInline::FlatWriteRam32((r1 + 116), r16);
    r19 = 0;
    r0 = MemoryInline::FlatRead32(r18);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006507C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800650A8;
    }
}

loc_80065080:
{
    r0 = (r17 & 16);
}

loc_80065084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006508C;
    }
}

loc_80065088:
{
    r16 = 1;
}

loc_8006508C:
{
    r3 = r18;
    // inline leaf 0x800521E0 (8 guest instruction(s))
}

loc_inl1_0x800521E0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_inl1_0x800521EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x800521F8;
    }
}

loc_inl1_0x800521F0:
{
    r3 = (r3 + r0);
    goto loc_inl1_cont_800521E0;
}

loc_inl1_0x800521F8:
{
    r3 = 0;
}

loc_inl1_cont_800521E0:
{
    // end of inlined leaf 0x800521E0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80065098:
{
    MemoryInline::FlatWriteRam32((r1 + 116), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800650AC;
    }
}

loc_800650A0:
{
    r19 = 1;
    goto loc_800650AC;
}

loc_800650A8:
{
    r16 = 1;
}

loc_800650AC:
{
    r0 = MemoryInline::FlatRead32(r18);
    r4 = r17;
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r5 = r15;
    r6 = r20;
    r7 = r16;
    r3 = (r1 + 64);
    ctx->lr = 0x800650CCu;
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
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
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
    InvokeDirectCpu<0x80064B30u>(ctx);
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
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
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
    r3 = MemoryInline::FlatRead32(r26);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800650D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80065814;
    }
}

loc_800650D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800650E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80065814;
    }
}

loc_800650E4:
{
}

loc_800650E8:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_8006570C;
    }
}

loc_800650EC:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r15));
    r6 = 0x80240000u;
    r6 = (r6 + 32408);
    r5 = MemoryInline::FlatRead32(r6);
    r16_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r16 = (r16_rot_1 & 134217727);
}

loc_800650FC:
{
    r8 = MemoryInline::FlatRead32((r1 + 116));
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = MemoryInline::FlatRead32((r6 + 8));
    r7 = r16;
    r0 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWriteRam32((r1 + 128), r5);
    f26.d = MemoryInline::FlatReadFloat32((r8 + 12));
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    f25.d = MemoryInline::FlatReadFloat32((r8 + 16));
    MemoryInline::FlatWriteRam32((r1 + 136), r3);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    if ((static_cast<int32_t>(r16) != static_cast<int32_t>(0))) {
        goto loc_80065138;
    }
}

loc_8006512C:
{
    r0 = MemoryInline::FlatRead32((r15 + 20));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r7 = (r7_rot_1 & 134217727);
}

loc_80065138:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8006513C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006516C;
    }
}

loc_80065140:
{
    r3 = MemoryInline::FlatRead32(r18);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006514C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80065158;
    }
}

loc_80065150:
{
    r3 = (r3 + r0);
    goto loc_8006515C;
}

loc_80065158:
{
    r3 = 0;
}

loc_8006515C:
{
    r0 = (r3 + 32);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = (r1 + 60);
    goto loc_80065170;
}

loc_8006516C:
{
    r3 = (r15 + 20);
}

loc_80065170:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 92);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r5 = (r1 + 112);
    r4 = 0;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80050F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r3 = (r1 + 92);
    r5 = (r1 + 108);
    r4 = 1;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80050F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r3 = (r1 + 92);
    r5 = (r1 + 104);
    r4 = 2;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80050F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
}

loc_800651AC:
{
    r31 = MemoryInline::FlatRead8((r1 + 105));
    r3 = 0;
    if ((static_cast<int32_t>(r16) != static_cast<int32_t>(0))) {
        goto loc_800651C4;
    }
}

loc_800651B8:
{
    r0 = MemoryInline::FlatRead32((r15 + 28));
}

loc_800651C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800651C8;
    }
}

loc_800651C4:
{
    r3 = 1;
}

loc_800651C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800651CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800651E4;
    }
}

loc_800651D0:
{
    r3 = MemoryInline::FlatRead32(r18);
    r4 = (r1 + 56);
    r0 = (r3 + 1008);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    goto loc_800651E8;
}

loc_800651E4:
{
    r4 = (r15 + 28);
}

loc_800651E8:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = (r1 + 88);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r5 = (r1 + 120);
    r4 = 0;
    // inline leaf 0x800516F0 (14 guest instruction(s))
    r0 = (r4 & 1);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r0 * 20);
    r3 = 1;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 4));
    MemoryInline::FlatWriteRam8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWriteRam8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::FlatWriteRam8((r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 7));
    MemoryInline::FlatWriteRam8((r5 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800516F0
    r3 = (r1 + 88);
    r5 = (r1 + 124);
    r4 = 1;
    // inline leaf 0x800516F0 (14 guest instruction(s))
    r0 = (r4 & 1);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r0 * 20);
    r3 = 1;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 4));
    MemoryInline::FlatWriteRam8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWriteRam8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::FlatWriteRam8((r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 7));
    MemoryInline::FlatWriteRam8((r5 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800516F0
    r19 = (r1 + 128);
    r20 = 0;
}

loc_80065218:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r7 = (r1 + 160);
    r10 = (r1 + 144);
    r19_addr_2 = (r19 + r0);
    r4 = MemoryInline::FlatRead32(r19_addr_2);
    r3 = (r1 + 88);
    r7 = (r7 + r0);
    r10 = (r10 + r0);
    r5 = 0;
    r6 = 0;
    r8 = 0;
    r9 = 0;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80051730u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r20 = (r20 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(4));
}

loc_80065250:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80065218;
    }
}

loc_80065254:
{
}

loc_80065258:
{
    r3 = 0;
    if ((static_cast<int32_t>(r16) != static_cast<int32_t>(0))) {
        goto loc_8006526C;
    }
}

loc_80065260:
{
    r0 = MemoryInline::FlatRead32((r15 + 36));
}

loc_80065268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80065270;
    }
}

loc_8006526C:
{
    r3 = 1;
}

loc_80065270:
{
}

loc_80065274:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006528C;
    }
}

loc_80065278:
{
    r3 = MemoryInline::FlatRead32(r18);
    r4 = (r1 + 52);
    r0 = (r3 + 28);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    goto loc_80065290;
}

loc_8006528C:
{
    r4 = (r15 + 36);
}

loc_80065290:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80065298:
{
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    if ((static_cast<int32_t>(r16) != static_cast<int32_t>(0))) {
        goto loc_800652AC;
    }
}

loc_800652A0:
{
    r0 = MemoryInline::FlatRead32((r15 + 24));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r16_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r16 = (r16_rot_2 & 134217727);
}

loc_800652AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(0));
}

loc_800652B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800652E0;
    }
}

loc_800652B4:
{
    r3 = MemoryInline::FlatRead32(r18);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800652C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800652CC;
    }
}

loc_800652C4:
{
    r3 = (r3 + r0);
    goto loc_800652D0;
}

loc_800652CC:
{
    r3 = 0;
}

loc_800652D0:
{
    r0 = (r3 + 160);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r3 = (r1 + 48);
    goto loc_800652E4;
}

loc_800652E0:
{
    r3 = (r15 + 24);
}

loc_800652E4:
{
    r0 = MemoryInline::FlatRead32(r3);
    r18 = (r1 + 100);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r19 = (r1 + 96);
    r20 = (r1 + 200);
    r21 = 0;
    r16 = 1;
    r15 = 0;
}

loc_80065304:
{
    r22 = (r21 + 1);
    r3 = (r1 + 84);
    r4 = r22;
    r5 = (r1 + 76);
    r6 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050C20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80065324:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80065344;
    }
}

loc_80065328:
{
    MemoryInline::FlatWrite8(r18, static_cast<uint8_t>(r16));
    r4 = r22;
    r5 = r20;
    r6 = r19;
    r3 = (r1 + 80);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80051390u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80065348;
}

loc_80065344:
{
    MemoryInline::FlatWrite8(r18, static_cast<uint8_t>(r15));
}

loc_80065348:
{
    r21 = (r21 + 1);
    r19 = (r19 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(3));
}

loc_80065354:
{
    r20 = (r20 + 48);
    r18 = (r18 + 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80065304;
    }
}

loc_80065360:
{
    r0 = MemoryInline::FlatRead32(r26);
    r3 = (r1 + 44);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    ctx->lr = 0x80065370u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800636C0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r17 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80065374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80065388;
    }
}

loc_80065378:
{
    r3 = 1;
    // inline leaf 0x80060640 (12 guest instruction(s))
    r5 = -872349696;
    r6 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r4 = -33488896;
    r0 = (r4 + -16384);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r4 = (r2 + -29560);
    r4_addr_1 = (r4 + r3);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_3 & -16384);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    // end of inlined leaf 0x80060640
    r3 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80064450u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_80065388:
{
    r3 = r26;
    ctx->lr = 0x80065390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004F4F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 72), r3);
    r18 = (r1 + 160);
    f31.d = MemoryInline::FlatReadFloat64((r2 + -29464));
    r19 = (r1 + 144);
    r30 = MemoryInline::FlatRead32((r3 + 32));
    r20 = (r1 + 120);
    f29.d = MemoryInline::FlatReadFloat32((r2 + -29488));
    r21 = (r1 + 128);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29472));
    r17 = (r1 + 96);
    r16 = (r1 + 100);
    r29 = 0;
    r22 = 16;
    r23 = -872349696;
    r24 = 0;
    r25 = 2;
    goto loc_800656FC;
}

loc_800653D4:
{
    r3 = (r1 + 116);
    r4 = (r29 & 65535);
    ctx->lr = 0x800653E0u;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050CE0u>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f24.d = f1.d;
    f2.d = f26.d;
    f23.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f1.d));
    ctx->lr = 0x800653F0u;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = f24.d;
    f2.d = f25.d;
    ctx->lr = 0x80065400u;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29480));
    f1.d = f24.d;
    ctx->lr = 0x80065410u;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r1 + 348), r31);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = PpcFmulsInline(f30.d, f24.d);
    r4 = (r1 + 40);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    r3 = 2;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PPC_Fctiwz(f2.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 360), f1.d);
    r0 = fctiwzword0;
    f0.d = PPC_Fctiwz(f0.d);
    MemoryInline::FlatWriteRam8((r1 + 104), static_cast<uint8_t>(r0));
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 368), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 105), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r15 = 0;
}

loc_80065460:
{
    r3 = (r15 & 255);
    r16_addr_3 = (r16 + r3);
    r0 = MemoryInline::FlatRead8(r16_addr_3);
}

loc_8006546C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800654CC;
    }
}

loc_80065470:
{
    r5 = (r3 * 48);
    r6 = (r1 + 200);
    r17_addr_3 = (r17 + r3);
    r0 = MemoryInline::FlatRead8(r17_addr_3);
    r3 = (r3 + 1);
    r4 = (r1 + 176);
    addr_lfsux_80065484_loc_0 = (r6 + r5);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80065484_loc_0);
    r6 = addr_lfsux_80065484_loc_0;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f5.d = PpcFmulsInline(f24.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f4.d = PpcFmulsInline(f24.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 20));
    f2.d = PpcFmulsInline(f24.d, f1.d);
    f1.d = PpcFmulsInline(f24.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171814u>(ctx);
}

loc_800654CC:
{
    r15 = (r15 + 1);
}

loc_800654D4:
{
    if ((static_cast<uint32_t>(r15) < static_cast<uint32_t>(3))) {
        goto loc_80065460;
    }
}

loc_800654D8:
{
    r3 = MemoryInline::FlatRead8((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f28.d));
    MemoryInline::FlatWriteRam32((r1 + 356), r3);
    r7 = 0;
    r0 = MemoryInline::FlatRead8((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 352));
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r3 = MemoryInline::FlatRead8((r1 + 113));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    MemoryInline::FlatWriteRam32((r1 + 356), r3);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r0 = MemoryInline::FlatRead8((r1 + 109));
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    f5.d = PpcFmulsInline(f3.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 352));
    r3 = MemoryInline::FlatRead8((r1 + 114));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteRam32((r1 + 356), r3);
    f4.d = PpcFmulsInline(f2.d, f24.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    r0 = MemoryInline::FlatRead8((r1 + 110));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 352));
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    f5.d = PpcFmulsInline(f3.d, f23.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    r3 = MemoryInline::FlatRead8((r1 + 115));
    f2.d = PpcFmulsInline(f2.d, f24.d);
    r0 = MemoryInline::FlatRead8((r1 + 111));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    f4.d = PpcFmulsInline(f4.d, f23.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    MemoryInline::FlatWriteRam32((r1 + 356), r3);
    f3.d = PpcFmulsInline(f3.d, f24.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    f6.d = PPC_Fctiwz(f6.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 352));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    fctiwzword2 = PPC_FprLowWordInline(f6.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 368), f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f31.d));
    f5.d = PPC_Fctiwz(f5.d);
    r0 = fctiwzword2;
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    fctiwzword3 = PPC_FprLowWordInline(f5.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 360), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    r3 = fctiwzword3;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PPC_Fctiwz(f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 376), f1.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 384), f0.d);
    r4 = fctiwzword4;
    r5 = fctiwzword5;
    ctr = r25;
    // nop
}

loc_800655C8:
{
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & 1016);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 254);
    r18_addr_3 = (r18 + r6);
    r9 = MemoryInline::FlatRead32(r18_addr_3);
}

loc_800655D8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_800655F0;
    }
}

loc_800655DC:
{
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r9 = (r9_rot_3 & 1020);
    r9 = (r18 + r9);
    r9 = MemoryInline::FlatRead32((r9 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_800655EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800656CC;
    }
}

loc_800655F0:
{
    r19_addr_5 = (r19 + r6);
    r9 = MemoryInline::FlatRead32(r19_addr_5);
}

loc_800655F8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80065674;
    }
}

loc_800655FC:
{
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r9 = (r9_rot_5 & 1020);
    r11 = (r1 + 120);
    addr_lbzux_80065604_loc_0 = (r11 + r9);
    r9 = MemoryInline::FlatRead8(addr_lbzux_80065604_loc_0);
    r11 = addr_lbzux_80065604_loc_0;
    MemoryInline::FlatWriteRam32((r1 + 356), r9);
    r10 = MemoryInline::FlatRead8((r11 + 1));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 352));
    r9 = MemoryInline::FlatRead8((r11 + 2));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteRam32((r1 + 348), r10);
    MemoryInline::FlatWriteRam32((r1 + 356), r9);
    f2.d = PpcFmulsInline(f27.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 344));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 352));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f2.d = PPC_Fctiwz(f2.d);
    f1.d = PpcFmulsInline(f27.d, f1.d);
    f0.d = PpcFmulsInline(f27.d, f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 384), f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    r9 = fctiwzword6;
    f0.d = PPC_Fctiwz(f0.d);
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r9));
    fctiwzword7 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 376), f1.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 368), f0.d);
    r10 = fctiwzword7;
    r9 = fctiwzword8;
    MemoryInline::FlatWriteRam8((r1 + 69), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 70), static_cast<uint8_t>(r9));
    goto loc_80065680;
}

loc_80065674:
{
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 69), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 70), static_cast<uint8_t>(r4));
}

loc_80065680:
{
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_4 & 1020);
    r8 = (r19 + r8);
    r8 = MemoryInline::FlatRead32((r8 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80065690:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800656A4;
    }
}

loc_80065694:
{
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_5 & 1020);
    r8 = (r20 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 3));
    goto loc_800656A8;
}

loc_800656A4:
{
    r8 = r5;
}

loc_800656A8:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r22));
    r21_addr_3 = (r21 + r6);
    r6 = MemoryInline::FlatRead32(r21_addr_3);
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r24));
    r6 = (r6 & 1);
    r6 = (r6 + 4108);
    MemoryInline::FlatWriteRam8((r1 + 71), static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r6));
    r6 = MemoryInline::FlatRead32((r1 + 68));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
}

loc_800656CC:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800655C8;
    }
}

loc_800656D4:
{
    r3 = (r1 + 72);
    r4 = (r29 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800527A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32(r26);
    r4 = r27;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = r28;
    r3 = (r1 + 36);
    ctx->lr = 0x800656F8u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80063870u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
}

loc_800656FC:
{
    r0 = (r29 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80065704:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800653D4;
    }
}

loc_80065708:
{
    goto loc_80065814;
}

loc_8006570C:
{
    r0 = (r17 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80065710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800657E4;
    }
}

loc_80065714:
{
    r0 = MemoryInline::FlatRead32(r26);
    r3 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    ctx->lr = 0x80065724u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800636C0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80065728:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_800657E4;
    }
}

loc_8006572C:
{
    r5 = MemoryInline::FlatRead32((r15 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80065734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80065754;
    }
}

loc_80065738:
{
    r4 = MemoryInline::FlatRead32(r26);
    r3 = (r1 + 28);
    r0 = MemoryInline::FlatRead16((r4 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_1);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800524C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_80065754:
{
    r4 = MemoryInline::FlatRead32((r15 + 48));
}

loc_8006575C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80065784;
    }
}

loc_80065760:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead16((r3 + 74));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006576C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80065784;
    }
}

loc_80065770:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r1 + 24);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_3);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800525A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_80065784:
{
    r4 = MemoryInline::FlatRead32((r15 + 52));
}

loc_8006578C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800657E4;
    }
}

loc_80065790:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead16((r3 + 76));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006579C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800657B8;
    }
}

loc_800657A0:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r1 + 20);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_5);
    r4 = 11;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052680u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_800657B8:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead16((r3 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800657C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800657E4;
    }
}

loc_800657C8:
{
    r5 = MemoryInline::FlatRead32((r15 + 52));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r1 + 16);
    r4 = 12;
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052680u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_800657E4:
{
    r0 = (r17 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800657E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800657FC;
    }
}

loc_800657EC:
{
    r3 = 1;
    // inline leaf 0x80060640 (12 guest instruction(s))
    r5 = -872349696;
    r6 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r4 = -33488896;
    r0 = (r4 + -16384);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r4 = (r2 + -29560);
    r4_addr_8 = (r4 + r3);
    r0 = MemoryInline::FlatRead8(r4_addr_8);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_13 & -16384);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    // end of inlined leaf 0x80060640
    r3 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80064450u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_800657FC:
{
    r0 = MemoryInline::FlatRead32(r26);
    r4 = r27;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = r28;
    r3 = (r1 + 12);
    ctx->lr = 0x80065814u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80063870u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80065814:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 464), 0, 152u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 128u, (r1 + 592));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 112u, (r1 + 576));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 560));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 544));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 464);
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 464));
    // inline leaf 0x800215BC (18 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -68));
            r16 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -4));
    // end of inlined leaf 0x800215BC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 148u, (r1 + 612));
    ctx->lr = r0;
    r1 = (r1 + 608);
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
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
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
// RECOMP_REGISTRATION base 0x80064FD0 func_80064FD0 preserves=false fpr_mask=0xFF800000
