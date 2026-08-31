#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F0E94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r17_rot_3 = 0;
    uint32_t r17_rot_4 = 0;
    uint32_t r17_rot_5 = 0;
    uint32_t r17_rot_6 = 0;
    uint32_t r17_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F0E94;

loc_805F0E94:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 128);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r26 = 0x80890000u;
    r15 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F0ED8:
{
    r26 = (r26 + 23712);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1B88;
    }
}

loc_805F0EE0:
{
    f28.d = MemoryInline::FlatReadFloat32((r26 + 200));
    r23 = (r3 + 84);
    f30.d = MemoryInline::FlatReadFloat32(r26);
    r22 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r26 + 204));
    r14 = 0;
    r29 = 0x88890000u;
    r27 = -1;
    r28 = 1;
    r30 = 5;
    r31 = 5;
}

loc_805F0F0C:
{
    r0 = MemoryInline::FlatRead32((r15 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r22));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F1B74;
    }
}

loc_805F0F1C:
{
    r3 = 0x809C0000u;
    r4 = r22;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B398 (13 guest instruction(s))
}

loc_inl1_0x8061B398:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_inl1_0x8061B3A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8061B3C4;
    }
}

loc_inl1_0x8061B3AC:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_inl1_0x8061B3B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_inl1_0x8061B3C4;
    }
}

loc_inl1_0x8061B3BC:
{
    r3 = MemoryInline::FlatRead32((r4 + 16));
    goto loc_inl1_cont_8061B398;
}

loc_inl1_0x8061B3C4:
{
    r3 = 0;
}

loc_inl1_cont_8061B398:
{
    // end of inlined leaf 0x8061B398
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F0F34:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F1B74;
    }
}

loc_805F0F3C:
{
    r12 = MemoryInline::FlatRead32((r23 + 8));
    r3 = (r23 + 8);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805F0F50u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r23 + 80));
}

loc_805F0F58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1A9C;
    }
}

loc_805F0F5C:
{
    r21 = MemoryInline::FlatRead32((r23 + 84));
    r20 = 0;
    r0 = MemoryInline::FlatRead32((r23 + 88));
    r19 = -1;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r23 + 84), r0);
    MemoryInline::FlatWrite32((r23 + 88), r27);
    r0 = MemoryInline::FlatRead8((r23 + 68));
}

loc_805F0F84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F11E0;
    }
}

loc_805F0F88:
{
    r3 = (r15 + r14);
    r0 = MemoryInline::FlatRead32((r3 + 144));
}

loc_805F0F94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F0FA0;
    }
}

loc_805F0F98:
{
    r0 = 0;
    goto loc_805F0FA4;
}

loc_805F0FA0:
{
    r0 = MemoryInline::FlatRead32((r3 + 148));
}

loc_805F0FA4:
{
}

loc_805F0FA8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(60))) {
        goto loc_805F11E0;
    }
}

loc_805F0FAC:
{
    f31.d = MemoryInline::FlatReadFloat32((r26 + 196));
    r3 = (r1 + 24);
    r4 = (r15 + 16);
    // inline leaf 0x8022F7EC (6 guest instruction(s))
    r5 = 0x802A0000u;
    r5 = (r5 + 12720);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x8022F7EC
    r0 = MemoryInline::FlatRead32((r1 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F0FC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F153C;
    }
}

loc_805F0FC8:
{
    r16 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r22));
    goto loc_805F11D0;
}

loc_805F0FD0:
{
    r3 = (r1 + 24);
    // inline leaf 0x8022F804 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x8022F804
    r0 = MemoryInline::FlatRead8((r3 + 116));
    r18 = r3;
}

loc_805F0FE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1064;
    }
}

loc_805F0FE8:
{
    r9 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r9 & r16);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805F0FFC;
    }
}

loc_805F0FF4:
{
    r0 = 0;
    goto loc_805F1078;
}

loc_805F0FFC:
{
    r6 = 0;
    r7 = 0;
    r4 = 0;
    ctr = r30;
}

loc_805F100C:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r7));
    r0 = (r9 & r8);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F103C;
    }
}

loc_805F1018:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F103C;
    }
}

loc_805F1028:
{
    r5 = (r5 + r4);
    r0 = MemoryInline::FlatRead32((r5 + 84));
}

loc_805F1034:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_805F103C;
    }
}

loc_805F1038:
{
    r6 = (r6 | r8);
}

loc_805F103C:
{
    r7 = (r7 + 1);
    r4 = (r4 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F100C;
    }
}

loc_805F1048:
{
}

loc_805F104C:
{
    r0 = 0;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F105C;
    }
}

loc_805F1054:
{
}

loc_805F1058:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r16))) {
        goto loc_805F1078;
    }
}

loc_805F105C:
{
    r0 = 1;
    goto loc_805F1078;
}

loc_805F1064:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r3 = (r0 & r16);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_805F1078:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F107C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F11BC;
    }
}

loc_805F1080:
{
    r24 = 0;
    r17 = 0;
    goto loc_805F1128;
}

loc_805F108C:
{
    r0 = MemoryInline::FlatRead32((r18 + 52));
    r3 = (r0 + r17);
    ctx->lr = 0x805F1098u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F0618u>(ctx);
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
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r18 + 52));
    r0 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r23 + 72));
    r3 = (r3 + r17);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F10B8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1100;
    }
}

loc_805F10C0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F10C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1100;
    }
}

loc_805F10D0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r23 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F10E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1100;
    }
}

loc_805F10EC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F10F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1100;
    }
}

loc_805F10FC:
{
    r0 = 1;
}

loc_805F1100:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F1104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F1120;
    }
}

loc_805F1108:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_805F1110:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F1120;
    }
}

loc_805F1114:
{
    f31.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r20 = r18;
    r19 = r24;
}

loc_805F1120:
{
    r17 = (r17 + 40);
    r24 = (r24 + 1);
}

loc_805F1128:
{
    r0 = MemoryInline::FlatRead32((r18 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r0));
}

loc_805F1130:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F108C;
    }
}

loc_805F1134:
{
    r3 = (r18 + 12);
    ctx->lr = 0x805F113Cu;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F0618u>(ctx);
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
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r18 + 16));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r18 + 28));
    f3.d = MemoryInline::FlatReadFloat32((r23 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F1154:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F119C;
    }
}

loc_805F115C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F1164:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F119C;
    }
}

loc_805F116C:
{
    f2.d = MemoryInline::FlatReadFloat32((r18 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r18 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r23 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F1180:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F119C;
    }
}

loc_805F1188:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F1190:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F119C;
    }
}

loc_805F1198:
{
    r0 = 1;
}

loc_805F119C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F11A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F11BC;
    }
}

loc_805F11A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r18 + 24));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_805F11AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F11BC;
    }
}

loc_805F11B0:
{
    f31.d = f0.d;
    r20 = r18;
    r19 = -1;
}

loc_805F11BC:
{
    r3 = MemoryInline::FlatRead32((r1 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F11C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F11D0;
    }
}

loc_805F11C8:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
}

loc_805F11D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F11D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F0FD0;
    }
}

loc_805F11DC:
{
    goto loc_805F153C;
}

loc_805F11E0:
{
}

loc_805F11E4:
{
    r18 = MemoryInline::FlatRead32((r23 + 60));
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_805F11F4;
    }
}

loc_805F11EC:
{
    r24 = r21;
    goto loc_805F11F8;
}

loc_805F11F4:
{
    r24 = MemoryInline::FlatRead32(r23);
}

loc_805F11F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_805F11FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F153C;
    }
}

loc_805F1200:
{
    r4 = (r18 & 1);
}

loc_805F1204:
{
    r3 = MemoryInline::FlatRead32(r23);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805F1220;
    }
}

loc_805F120C:
{
    r0 = MemoryInline::FlatRead32((r3 + 76));
}

loc_805F1214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1220;
    }
}

loc_805F1218:
{
    r0 = 1;
    goto loc_805F1278;
}

loc_805F1220:
{
    r0 = (r18 & 2);
}

loc_805F1224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F123C;
    }
}

loc_805F1228:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_805F1230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F123C;
    }
}

loc_805F1234:
{
    r0 = 1;
    goto loc_805F1278;
}

loc_805F123C:
{
    r0 = (r18 & 8);
}

loc_805F1240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1258;
    }
}

loc_805F1244:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
}

loc_805F124C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1258;
    }
}

loc_805F1250:
{
    r0 = 1;
    goto loc_805F1278;
}

loc_805F1258:
{
    r0 = (r18 & 4);
}

loc_805F125C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1274;
    }
}

loc_805F1260:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
}

loc_805F1268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1274;
    }
}

loc_805F126C:
{
    r0 = 1;
    goto loc_805F1278;
}

loc_805F1274:
{
    r0 = 0;
}

loc_805F1278:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F127C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F153C;
    }
}

loc_805F1280:
{
}

loc_805F1284:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805F129C;
    }
}

loc_805F1288:
{
    r0 = MemoryInline::FlatRead32((r15 + 40));
}

loc_805F1290:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F129C;
    }
}

loc_805F1294:
{
    r0 = 1;
    goto loc_805F12F4;
}

loc_805F129C:
{
    r0 = (r18 & 2);
}

loc_805F12A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F12B8;
    }
}

loc_805F12A4:
{
    r0 = MemoryInline::FlatRead32((r15 + 44));
}

loc_805F12AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F12B8;
    }
}

loc_805F12B0:
{
    r0 = 1;
    goto loc_805F12F4;
}

loc_805F12B8:
{
    r0 = (r18 & 8);
}

loc_805F12BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F12D4;
    }
}

loc_805F12C0:
{
    r0 = MemoryInline::FlatRead32((r15 + 48));
}

loc_805F12C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F12D4;
    }
}

loc_805F12CC:
{
    r0 = 1;
    goto loc_805F12F4;
}

loc_805F12D4:
{
    r0 = (r18 & 4);
}

loc_805F12D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F12F0;
    }
}

loc_805F12DC:
{
    r0 = MemoryInline::FlatRead32((r15 + 52));
}

loc_805F12E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F12F0;
    }
}

loc_805F12E8:
{
    r0 = 1;
    goto loc_805F12F4;
}

loc_805F12F0:
{
    r0 = 0;
}

loc_805F12F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F12F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F153C;
    }
}

loc_805F12FC:
{
    r0 = MemoryInline::FlatRead32((r23 + 60));
}

loc_805F1304:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805F1310;
    }
}

loc_805F1308:
{
    r5 = 0;
    goto loc_805F1350;
}

loc_805F1310:
{
    r4 = MemoryInline::FlatRead32((r23 + 64));
}

loc_805F1318:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805F1324;
    }
}

loc_805F131C:
{
    r5 = 1;
    goto loc_805F1350;
}

loc_805F1324:
{
}

loc_805F1328:
{
    r5 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(15))) {
        goto loc_805F1350;
    }
}

loc_805F1330:
{
    r4 = (r4 + -15);
    r0 = (r29 + -30583);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
    r0 = (r0 * 15);
    r0 = (r4 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805F1350;
    }
}

loc_805F134C:
{
    r5 = 1;
}

loc_805F1350:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805F1354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F153C;
    }
}

loc_805F1358:
{
    r3 = (r3 + 12);
    ctx->lr = 0x805F1360u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F0618u>(ctx);
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
    cr = ctx->cr;
    r3 = (r1 + 16);
    r4 = (r15 + 16);
    r17 = -1;
    // inline leaf 0x8022F7EC (6 guest instruction(s))
    r5 = 0x802A0000u;
    r5 = (r5 + 12720);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x8022F7EC
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_805F1378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F149C;
    }
}

loc_805F137C:
{
    r25 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r22));
    goto loc_805F1490;
}

loc_805F1384:
{
    r3 = (r1 + 16);
    // inline leaf 0x8022F804 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x8022F804
    r0 = MemoryInline::FlatRead8((r3 + 116));
    r16 = r3;
}

loc_805F1398:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1418;
    }
}

loc_805F139C:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r4 = (r0 & r25);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805F13B0;
    }
}

loc_805F13A8:
{
    r0 = 0;
    goto loc_805F142C;
}

loc_805F13B0:
{
    r6 = 0;
    r7 = 0;
    r4 = 0;
    ctr = r31;
}

loc_805F13C0:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r7));
    r5 = (r0 & r8);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805F13F0;
    }
}

loc_805F13CC:
{
    r9 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r9 + 4));
    r5 = (r8 & r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805F13F0;
    }
}

loc_805F13DC:
{
    r5 = (r9 + r4);
    r5 = MemoryInline::FlatRead32((r5 + 84));
}

loc_805F13E8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r3))) {
        goto loc_805F13F0;
    }
}

loc_805F13EC:
{
    r6 = (r6 | r8);
}

loc_805F13F0:
{
    r7 = (r7 + 1);
    r4 = (r4 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F13C0;
    }
}

loc_805F13FC:
{
}

loc_805F1400:
{
    r0 = 0;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F1410;
    }
}

loc_805F1408:
{
}

loc_805F140C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r25))) {
        goto loc_805F142C;
    }
}

loc_805F1410:
{
    r0 = 1;
    goto loc_805F142C;
}

loc_805F1418:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r4 = (r0 & r25);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 1);
}

loc_805F142C:
{
}

loc_805F1430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1478;
    }
}

loc_805F1434:
{
    r0 = MemoryInline::FlatRead8((r3 + 117));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F143C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1478;
    }
}

loc_805F1440:
{
    r3 = (r3 + 12);
    ctx->lr = 0x805F1448u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F0618u>(ctx);
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
    cr = ctx->cr;
    r12 = MemoryInline::FlatRead32((r15 + 544));
    r3 = r24;
    r4 = r16;
    r5 = r18;
    ctr = r12;
    ctx->lr = 0x805F1460u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F1464:
{
    MemoryInline::FlatWrite32((r16 + 128), r3);
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r17))) {
        goto loc_805F147C;
    }
}

loc_805F146C:
{
    r17 = r3;
    r20 = r16;
    goto loc_805F147C;
}

loc_805F1478:
{
    MemoryInline::FlatWrite32((r3 + 128), r27);
}

loc_805F147C:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
}

loc_805F1484:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805F1490;
    }
}

loc_805F1488:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_805F1490:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_805F1498:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805F1384;
    }
}

loc_805F149C:
{
    r3 = (r1 + 8);
    r4 = (r15 + 16);
    // inline leaf 0x8022F7EC (6 guest instruction(s))
    r5 = 0x802A0000u;
    r5 = (r5 + 12720);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x8022F7EC
    r16 = (r17 + 3);
    goto loc_805F1530;
}

loc_805F14B0:
{
    r3 = (r1 + 8);
    // inline leaf 0x8022F804 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x8022F804
    r0 = MemoryInline::FlatRead32((r3 + 128));
    r17 = r3;
}

loc_805F14C4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r16))) {
        goto loc_805F151C;
    }
}

loc_805F14C8:
{
    r3 = (r1 + 32);
    r4 = (r17 + 16);
    r5 = (r20 + 16);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRFloatResident(cr, 0, f1.d, f28.d);
}

loc_805F14E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F14EC;
    }
}

loc_805F14E4:
{
    r20 = r17;
    goto loc_805F151C;
}

loc_805F14EC:
{
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_805F14F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F151C;
    }
}

loc_805F14F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_805F14FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F1508;
    }
}

loc_805F1500:
{
    r20 = r17;
    goto loc_805F151C;
}

loc_805F1508:
{
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_805F150C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F151C;
    }
}

loc_805F1510:
{
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_805F1514:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F151C;
    }
}

loc_805F1518:
{
    r20 = r17;
}

loc_805F151C:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_805F1524:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805F1530;
    }
}

loc_805F1528:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_805F1530:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F1538:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F14B0;
    }
}

loc_805F153C:
{
}

loc_805F1540:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_805F1554;
    }
}

loc_805F1544:
{
}

loc_805F1548:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_805F1554;
    }
}

loc_805F154C:
{
    r20 = r21;
    r19 = MemoryInline::FlatRead32((r1 + 44));
}

loc_805F1554:
{
}

loc_805F1558:
{
    r16 = 0;
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_805F1704;
    }
}

loc_805F1560:
{
    r3 = MemoryInline::FlatRead32(r23);
}

loc_805F1568:
{
    if ((static_cast<uint32_t>(r20) == static_cast<uint32_t>(r3))) {
        goto loc_805F1704;
    }
}

loc_805F156C:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
}

loc_805F1574:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805F15A8;
    }
}

loc_805F1578:
{
    r0 = (r0 * 40);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r5 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F158C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F15A8;
    }
}

loc_805F1590:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r5 + 32));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F15A8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F15A8:
{
    r5 = MemoryInline::FlatRead32(r23);
    r3 = MemoryInline::FlatRead32((r5 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F15B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F15D0;
    }
}

loc_805F15B8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r5 + 44));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F15D0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F15D0:
{
    MemoryInline::FlatWrite32(r23, r20);
    MemoryInline::FlatWrite32((r23 + 4), r19);
    r3 = MemoryInline::FlatRead32((r20 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F15E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F15FC;
    }
}

loc_805F15E4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r20 + 44));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F15FCu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F15FC:
{
    r5 = MemoryInline::FlatRead32(r23);
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r3 = MemoryInline::FlatRead8((r5 + 48));
}

loc_805F160C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r17_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r17 = (r17_rot_2 & 1);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_805F1660;
    }
}

loc_805F161C:
{
    r0 = (r4 * 40);
    r3 = MemoryInline::FlatRead32((r5 + 52));
    r16 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r16 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F1630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F164C;
    }
}

loc_805F1634:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r16 + 32));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F164Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F164C:
{
    r0 = MemoryInline::FlatRead8((r16 + 36));
    r3 = (r17 | r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r17_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r17 = (r17_rot_3 & 1);
}

loc_805F1660:
{
}

loc_805F1664:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_805F1684;
    }
}

loc_805F1668:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(4));
}

loc_805F166C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F1684;
    }
}

loc_805F1670:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    r3 = (r22 & 255);
    r4 = 3;
    r5 = 1;
    ctx->lr = 0x805F1684u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805249B0u>(ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F1684:
{
    r0 = 3;
    r5 = r23;
    r4 = 0;
    ctr = r0;
}

loc_805F1694:
{
}

loc_805F1698:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F16A4;
    }
}

loc_805F169C:
{
}

loc_805F16A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F16B0;
    }
}

loc_805F16A4:
{
    MemoryInline::FlatWrite32((r5 + 12), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F16B0:
{
    r4 = (r4 + 1);
}

loc_805F16B8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F16C4;
    }
}

loc_805F16BC:
{
}

loc_805F16C0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F16D0;
    }
}

loc_805F16C4:
{
    MemoryInline::FlatWrite32((r5 + 16), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F16D0:
{
    r4 = (r4 + 1);
}

loc_805F16D8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F16E4;
    }
}

loc_805F16DC:
{
}

loc_805F16E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F16F0;
    }
}

loc_805F16E4:
{
    MemoryInline::FlatWrite32((r5 + 20), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F16F0:
{
    r5 = (r5 + 12);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F1694;
    }
}

loc_805F16FC:
{
    r16 = 1;
    goto loc_805F1904;
}

loc_805F1704:
{
}

loc_805F1708:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_805F1840;
    }
}

loc_805F170C:
{
    r3 = MemoryInline::FlatRead32(r23);
}

loc_805F1714:
{
    if ((static_cast<uint32_t>(r20) != static_cast<uint32_t>(r3))) {
        goto loc_805F1840;
    }
}

loc_805F1718:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
}

loc_805F1720:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(r0))) {
        goto loc_805F1840;
    }
}

loc_805F1724:
{
}

loc_805F1728:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805F175C;
    }
}

loc_805F172C:
{
    r0 = (r0 * 40);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r5 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F1740:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F175C;
    }
}

loc_805F1744:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r5 + 32));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F175Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F175C:
{
}

loc_805F1760:
{
    MemoryInline::FlatWrite32((r23 + 4), r19);
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(0))) {
        goto loc_805F17C4;
    }
}

loc_805F1768:
{
    r3 = MemoryInline::FlatRead32(r23);
    r0 = (r19 * 40);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r17 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r17 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F1780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F179C;
    }
}

loc_805F1784:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r17 + 32));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F179Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F179C:
{
    r0 = MemoryInline::FlatRead8((r17 + 36));
}

loc_805F17A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F17C4;
    }
}

loc_805F17A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(4));
}

loc_805F17AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F17C4;
    }
}

loc_805F17B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    r3 = (r22 & 255);
    r4 = 3;
    r5 = 1;
    ctx->lr = 0x805F17C4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805249B0u>(ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F17C4:
{
    r0 = 3;
    r5 = r23;
    r4 = 0;
    ctr = r0;
}

loc_805F17D4:
{
}

loc_805F17D8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F17E4;
    }
}

loc_805F17DC:
{
}

loc_805F17E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F17F0;
    }
}

loc_805F17E4:
{
    MemoryInline::FlatWrite32((r5 + 12), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F17F0:
{
    r4 = (r4 + 1);
}

loc_805F17F8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F1804;
    }
}

loc_805F17FC:
{
}

loc_805F1800:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F1810;
    }
}

loc_805F1804:
{
    MemoryInline::FlatWrite32((r5 + 16), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F1810:
{
    r4 = (r4 + 1);
}

loc_805F1818:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F1824;
    }
}

loc_805F181C:
{
}

loc_805F1820:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F1830;
    }
}

loc_805F1824:
{
    MemoryInline::FlatWrite32((r5 + 20), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F1830:
{
    r5 = (r5 + 12);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F17D4;
    }
}

loc_805F183C:
{
    goto loc_805F1904;
}

loc_805F1840:
{
}

loc_805F1844:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_805F1904;
    }
}

loc_805F1848:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
}

loc_805F1850:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805F1904;
    }
}

loc_805F1854:
{
    r3 = MemoryInline::FlatRead32(r23);
    r0 = (r0 * 40);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r5 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F186C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F1888;
    }
}

loc_805F1870:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r5 + 32));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F1888u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F1888:
{
    r0 = 3;
    r5 = r23;
    MemoryInline::FlatWrite32((r23 + 4), r27);
    r4 = 0;
    ctr = r0;
}

loc_805F189C:
{
}

loc_805F18A0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F18AC;
    }
}

loc_805F18A4:
{
}

loc_805F18A8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F18B8;
    }
}

loc_805F18AC:
{
    MemoryInline::FlatWrite32((r5 + 12), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F18B8:
{
    r4 = (r4 + 1);
}

loc_805F18C0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F18CC;
    }
}

loc_805F18C4:
{
}

loc_805F18C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F18D8;
    }
}

loc_805F18CC:
{
    MemoryInline::FlatWrite32((r5 + 16), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F18D8:
{
    r4 = (r4 + 1);
}

loc_805F18E0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_805F18EC;
    }
}

loc_805F18E4:
{
}

loc_805F18E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_805F18F8;
    }
}

loc_805F18EC:
{
    MemoryInline::FlatWrite32((r5 + 20), r27);
    r3 = (r23 + r4);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r28));
}

loc_805F18F8:
{
    r5 = (r5 + 12);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F189C;
    }
}

loc_805F1904:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(0));
}

loc_805F1908:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1B74;
    }
}

loc_805F190C:
{
    r17 = 0;
    r18 = 0;
}

loc_805F1914:
{
    r16 = (r23 + r17);
    r0 = MemoryInline::FlatRead32(r23);
    r3 = MemoryInline::FlatRead8((r16 + 48));
    r4 = (r0 + r17);
}

loc_805F1928:
{
    r4 = MemoryInline::FlatRead8((r4 + 100));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805F1938;
    }
}

loc_805F1930:
{
    r6 = 0;
    goto loc_805F1998;
}

loc_805F1938:
{
    r3 = (r23 + r18);
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805F1944:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805F1950;
    }
}

loc_805F1948:
{
    r6 = 1;
    goto loc_805F1998;
}

loc_805F1950:
{
}

loc_805F1954:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805F1994;
    }
}

loc_805F1958:
{
}

loc_805F195C:
{
    r6 = 0;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(15))) {
        goto loc_805F1998;
    }
}

loc_805F1964:
{
    r5 = (r3 + -15);
    r3 = (r29 + -30583);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r3 = (r3 + r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 15);
    r3 = (r5 - r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805F1998;
    }
}

loc_805F198C:
{
    r6 = 1;
    goto loc_805F1998;
}

loc_805F1994:
{
    r6 = 0;
}

loc_805F1998:
{
}

loc_805F199C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F19DC;
    }
}

loc_805F19A0:
{
    r3 = (r0 + r18);
    r5 = MemoryInline::FlatRead32((r23 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F19B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F19D0;
    }
}

loc_805F19B4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F19C8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    goto loc_805F19D4;
}

loc_805F19D0:
{
    r0 = 0;
}

loc_805F19D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F19D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1B74;
    }
}

loc_805F19DC:
{
    r3 = (r15 + r18);
    r3 = MemoryInline::FlatRead32((r3 + 28));
}

loc_805F19E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805F1A88;
    }
}

loc_805F19EC:
{
    r0 = MemoryInline::FlatRead8((r16 + 48));
    r4 = (r15 + r17);
    r5 = MemoryInline::FlatRead8((r4 + 64));
}

loc_805F19FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1A08;
    }
}

loc_805F1A00:
{
    r6 = 0;
    goto loc_805F1A68;
}

loc_805F1A08:
{
    r4 = (r23 + r18);
    r4 = MemoryInline::FlatRead32((r4 + 12));
}

loc_805F1A14:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805F1A20;
    }
}

loc_805F1A18:
{
    r6 = 1;
    goto loc_805F1A68;
}

loc_805F1A20:
{
}

loc_805F1A24:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805F1A64;
    }
}

loc_805F1A28:
{
}

loc_805F1A2C:
{
    r6 = 0;
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(15))) {
        goto loc_805F1A68;
    }
}

loc_805F1A34:
{
    r5 = (r4 + -15);
    r0 = (r29 + -30583);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0 = (r0 + r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 15);
    r0 = (r5 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805F1A68;
    }
}

loc_805F1A5C:
{
    r6 = 1;
    goto loc_805F1A68;
}

loc_805F1A64:
{
    r6 = 0;
}

loc_805F1A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805F1A6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F1A88;
    }
}

loc_805F1A70:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F1A84u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F1B74;
}

loc_805F1A88:
{
    r17 = (r17 + 1);
    r18 = (r18 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(9));
}

loc_805F1A94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F1914;
    }
}

loc_805F1A98:
{
    goto loc_805F1B74;
}

loc_805F1A9C:
{
    r0 = 9;
    r4 = 0;
    r5 = 0;
    ctr = r0;
}

loc_805F1AAC:
{
    r3 = (r15 + r5);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F1AB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F1B68;
    }
}

loc_805F1ABC:
{
    r7 = (r15 + r4);
    r0 = MemoryInline::FlatRead8((r7 + 73));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F1AC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1B68;
    }
}

loc_805F1ACC:
{
    r6 = (r23 + r4);
    r7 = MemoryInline::FlatRead8((r7 + 64));
    r0 = MemoryInline::FlatRead8((r6 + 48));
}

loc_805F1ADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1AE8;
    }
}

loc_805F1AE0:
{
    r8 = 0;
    goto loc_805F1B48;
}

loc_805F1AE8:
{
    r6 = (r23 + r5);
    r6 = MemoryInline::FlatRead32((r6 + 12));
}

loc_805F1AF4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_805F1B00;
    }
}

loc_805F1AF8:
{
    r8 = 1;
    goto loc_805F1B48;
}

loc_805F1B00:
{
}

loc_805F1B04:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805F1B44;
    }
}

loc_805F1B08:
{
}

loc_805F1B0C:
{
    r8 = 0;
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(15))) {
        goto loc_805F1B48;
    }
}

loc_805F1B14:
{
    r7 = (r6 + -15);
    r0 = (r29 + -30583);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r0 = (r0 + r7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & 1);
    r0 = (r0 + r6);
    r0 = (r0 * 15);
    r0 = (r7 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805F1B48;
    }
}

loc_805F1B3C:
{
    r8 = 1;
    goto loc_805F1B48;
}

loc_805F1B44:
{
    r8 = 0;
}

loc_805F1B48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_805F1B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F1B68;
    }
}

loc_805F1B50:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r22;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805F1B64u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F1B74;
}

loc_805F1B68:
{
    r4 = (r4 + 1);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F1AAC;
    }
}

loc_805F1B74:
{
    r22 = (r22 + 1);
    r14 = (r14 + 92);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(5));
}

loc_805F1B80:
{
    r23 = (r23 + 92);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F0F0C;
    }
}

loc_805F1B88:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805F0E94 func_805F0E94 preserves=false fpr_mask=0xF0000000
