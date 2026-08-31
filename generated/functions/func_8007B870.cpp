#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007B870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8007B870;

loc_8007B870:
{
    MemoryInline::FlatWriteRam32((r1 + -512), r1);
    r1 = (r1 + -512);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 516), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 496), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 480), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 464), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 448), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 448);
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
    r0 = MemoryInline::FlatRead32((r3 + 216));
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007B8B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007BF0C;
    }
}

loc_8007B8B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007B8BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007BF0C;
    }
}

loc_8007B8C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007B8C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007B8D0;
    }
}

loc_8007B8CC:
{
    goto loc_8007BF0C;
}

loc_8007B8D0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x8007B8E0u;
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
    r13 = ctx->gpr[13];
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
    r3 = (r1 + 204);
    ctx->lr = 0x8007B8E8u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B7F20u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r29;
    r3 = (r1 + 88);
    r5 = (r1 + 204);
    ctx->lr = 0x8007B8F8u;
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
    InvokeDirectCpu<0x8007C740u>(ctx);
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
    r13 = ctx->gpr[13];
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 185), 0, 43u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 35u, (r29 + 220));
    r3 = (r1 + 48);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    r4 = (r1 + 40);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 36u, (r29 + 221));
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 37u, (r29 + 222));
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 38u, (r29 + 223));
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r29 + 185));
    // inline leaf 0x80084680 (20 guest instruction(s))
}

loc_inl1_0x80084680:
{
    r8 = MemoryInline::FlatRead8(r4);
}

loc_inl1_0x80084688:
{
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800846A8:
{
    r0 = (r0 * r5);
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80084680;
}

loc_inl1_return:
{
}

loc_inl1_cont_80084680:
{
    // end of inlined leaf 0x80084680
    r0 = MemoryInline::ReadResolved8(guest_range_1, 39u, (r29 + 224));
    r3 = (r1 + 44);
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r4 = (r1 + 36);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 40u, (r29 + 225));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 41u, (r29 + 226));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 42u, (r29 + 227));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r29 + 185));
    // inline leaf 0x80084680 (20 guest instruction(s))
}

loc_inl2_0x80084680:
{
    r8 = MemoryInline::FlatRead8(r4);
}

loc_inl2_0x80084688:
{
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800846A8:
{
    r0 = (r0 * r5);
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_80084680;
}

loc_inl2_return:
{
}

loc_inl2_cont_80084680:
{
    // end of inlined leaf 0x80084680
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 44));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8007B968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007B970;
    }
}

loc_8007B96C:
{
    r4 = 2;
}

loc_8007B970:
{
    MemoryInline::FlatWriteRam32((r1 + 236), r4);
    r3 = (r1 + 204);
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B3EF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 48));
    r3 = (r1 + 204);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r10 = MemoryInline::FlatRead8((r1 + 32));
    r9 = MemoryInline::FlatRead8((r1 + 33));
    r8 = MemoryInline::FlatRead8((r1 + 34));
    r7 = MemoryInline::FlatRead8((r1 + 35));
    r6 = MemoryInline::FlatRead8((r1 + 28));
    r5 = MemoryInline::FlatRead8((r1 + 29));
    r4 = MemoryInline::FlatRead8((r1 + 30));
    r0 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWriteRam8((r1 + 228), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 229), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 230), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 231), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 232), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 233), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 234), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 235), static_cast<uint8_t>(r0));
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B3EF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r29 + 40));
    r6 = MemoryInline::FlatRead16((r7 + 16));
    r5 = MemoryInline::FlatRead16((r7 + 18));
    r4 = MemoryInline::FlatRead16((r7 + 20));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = MemoryInline::FlatRead16((r7 + 22));
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8007BA08;
    }
}

loc_8007BA00:
{
    r0 = 0;
    goto loc_8007BA18;
}

loc_8007BA08:
{
}

loc_8007BA0C:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(255))) {
        goto loc_8007BA18;
    }
}

loc_8007BA14:
{
    r0 = r3;
}

loc_8007BA18:
{
    r3 = MemoryInline::FlatRead16((r1 + 66));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
}

loc_8007BA24:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8007BA30;
    }
}

loc_8007BA28:
{
    r0 = 0;
    goto loc_8007BA40;
}

loc_8007BA30:
{
}

loc_8007BA34:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(255))) {
        goto loc_8007BA40;
    }
}

loc_8007BA3C:
{
    r0 = r3;
}

loc_8007BA40:
{
    r3 = MemoryInline::FlatRead16((r1 + 68));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
}

loc_8007BA4C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8007BA58;
    }
}

loc_8007BA50:
{
    r0 = 0;
    goto loc_8007BA68;
}

loc_8007BA58:
{
}

loc_8007BA5C:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(255))) {
        goto loc_8007BA68;
    }
}

loc_8007BA64:
{
    r0 = r3;
}

loc_8007BA68:
{
    r3 = MemoryInline::FlatRead16((r1 + 70));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
}

loc_8007BA74:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8007BA80;
    }
}

loc_8007BA78:
{
    r0 = 0;
    goto loc_8007BA90;
}

loc_8007BA80:
{
}

loc_8007BA84:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(255))) {
        goto loc_8007BA90;
    }
}

loc_8007BA8C:
{
    r0 = r3;
}

loc_8007BA90:
{
    r3 = MemoryInline::FlatRead32((r29 + 40));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r6 = MemoryInline::FlatRead16((r3 + 26));
    r5 = MemoryInline::FlatRead16((r3 + 28));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::FlatRead16((r3 + 30));
    MemoryInline::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 62), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8007BACC;
    }
}

loc_8007BAC4:
{
    r3 = 0;
    goto loc_8007BADC;
}

loc_8007BACC:
{
}

loc_8007BAD0:
{
    r3 = 255;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(255))) {
        goto loc_8007BADC;
    }
}

loc_8007BAD8:
{
    r3 = r4;
}

loc_8007BADC:
{
    r4 = MemoryInline::FlatRead16((r1 + 58));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
}

loc_8007BAE8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8007BAF4;
    }
}

loc_8007BAEC:
{
    r3 = 0;
    goto loc_8007BB04;
}

loc_8007BAF4:
{
}

loc_8007BAF8:
{
    r3 = 255;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(255))) {
        goto loc_8007BB04;
    }
}

loc_8007BB00:
{
    r3 = r4;
}

loc_8007BB04:
{
    r4 = MemoryInline::FlatRead16((r1 + 60));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r3));
}

loc_8007BB10:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8007BB1C;
    }
}

loc_8007BB14:
{
    r3 = 0;
    goto loc_8007BB2C;
}

loc_8007BB1C:
{
}

loc_8007BB20:
{
    r3 = 255;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(255))) {
        goto loc_8007BB2C;
    }
}

loc_8007BB28:
{
    r3 = r4;
}

loc_8007BB2C:
{
    r4 = MemoryInline::FlatRead16((r1 + 62));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8007BB38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007BB44;
    }
}

loc_8007BB3C:
{
    r3 = 0;
    goto loc_8007BB54;
}

loc_8007BB44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_8007BB48:
{
    r3 = 255;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8007BB54;
    }
}

loc_8007BB50:
{
    r3 = r4;
}

loc_8007BB54:
{
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r3));
    r3 = (r1 + 204);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r10 = MemoryInline::FlatRead8((r1 + 24));
    r9 = MemoryInline::FlatRead8((r1 + 25));
    r8 = MemoryInline::FlatRead8((r1 + 26));
    r7 = MemoryInline::FlatRead8((r1 + 27));
    r6 = MemoryInline::FlatRead8((r1 + 20));
    r5 = MemoryInline::FlatRead8((r1 + 21));
    r4 = MemoryInline::FlatRead8((r1 + 22));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWriteRam8((r1 + 204), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 205), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 206), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 207), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 208), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 209), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 210), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 211), static_cast<uint8_t>(r0));
    ctx->lr = 0x8007BBACu;
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
    InvokeDirectCpu<0x800B2EF0u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r3 = 7;
    r4 = 0;
    r5 = 0;
    r6 = 7;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80172088u>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 257));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 3);
}

loc_8007BBD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8007BC30;
    }
}

loc_8007BBD4:
{
}

loc_8007BBD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8007BC38;
    }
}

loc_8007BBDC:
{
}

loc_8007BBE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8007BC40;
    }
}

loc_8007BBE4:
{
    r3 = 1431633920;
    r4 = MemoryInline::FlatRead8((r29 + 256));
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
}

loc_8007BC0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8007BC20;
    }
}

loc_8007BC10:
{
}

loc_8007BC14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8007BC28;
    }
}

loc_8007BC18:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29144));
    goto loc_8007BC44;
}

loc_8007BC20:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29128));
    goto loc_8007BC44;
}

loc_8007BC28:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29124));
    goto loc_8007BC44;
}

loc_8007BC30:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29144));
    goto loc_8007BC44;
}

loc_8007BC38:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29128));
    goto loc_8007BC44;
}

loc_8007BC40:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29124));
}

loc_8007BC44:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r31 = MemoryInline::FlatRead32((r29 + 216));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 248), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 252), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r30 = MemoryInline::FlatRead16((r29 + 254));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8007BC70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8007BF00;
    }
}

loc_8007BC74:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29144));
    goto loc_8007BEF8;
}

loc_8007BC7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 76));
    r15 = MemoryInline::FlatRead8((r1 + 235));
    r0 = MemoryInline::FlatRead32((r1 + 248));
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r0 = MemoryInline::FlatRead8((r1 + 233));
    MemoryInline::FlatWriteRam32((r1 + 360), r15);
    r15 = MemoryInline::FlatRead32((r1 + 236));
    MemoryInline::FlatWriteRam32((r1 + 304), r15);
    r15 = MemoryInline::FlatRead32((r1 + 240));
    MemoryInline::FlatWriteRam32((r1 + 308), r15);
    r15 = MemoryInline::FlatRead32((r1 + 244));
    MemoryInline::FlatWriteRam8((r1 + 133), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 360));
    MemoryInline::FlatWriteRam32((r1 + 312), r15);
    r15 = MemoryInline::FlatRead32((r1 + 252));
    MemoryInline::FlatWriteRam8((r1 + 135), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 304));
    MemoryInline::FlatWriteRam32((r1 + 316), r15);
    r15 = MemoryInline::FlatRead32((r1 + 256));
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r0 = MemoryInline::FlatRead32((r1 + 308));
    MemoryInline::FlatWriteRam32((r1 + 320), r15);
    r15 = MemoryInline::FlatRead32((r1 + 260));
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r0 = MemoryInline::FlatRead32((r1 + 312));
    MemoryInline::FlatWriteRam32((r1 + 324), r15);
    r15 = MemoryInline::FlatRead32((r1 + 264));
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    r0 = MemoryInline::FlatRead32((r1 + 316));
    MemoryInline::FlatWriteRam32((r1 + 328), r15);
    r15 = MemoryInline::FlatRead16((r1 + 268));
    MemoryInline::FlatWriteRam32((r1 + 152), r0);
    r0 = MemoryInline::FlatRead32((r1 + 320));
    MemoryInline::FlatWriteRam32((r1 + 332), r15);
    r15 = MemoryInline::FlatRead8((r1 + 270));
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    r0 = MemoryInline::FlatRead32((r1 + 324));
    MemoryInline::FlatWriteRam32((r1 + 336), r15);
    r15 = MemoryInline::FlatRead8((r1 + 271));
    MemoryInline::FlatWriteRam32((r1 + 160), r0);
    r0 = MemoryInline::FlatRead32((r1 + 328));
    MemoryInline::FlatWriteRam32((r1 + 340), r15);
    r15 = MemoryInline::FlatRead32((r1 + 276));
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r0 = MemoryInline::FlatRead32((r1 + 332));
    MemoryInline::FlatWriteRam32((r1 + 344), r15);
    r15 = MemoryInline::FlatRead32((r1 + 292));
    MemoryInline::FlatWriteRam16((r1 + 168), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 336));
    MemoryInline::FlatWriteRam32((r1 + 348), r15);
    r15 = MemoryInline::FlatRead32((r1 + 296));
    MemoryInline::FlatWriteRam8((r1 + 170), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 340));
    MemoryInline::FlatWriteRam32((r1 + 352), r15);
    r15 = MemoryInline::FlatRead32((r1 + 300));
    MemoryInline::FlatWriteRam8((r1 + 171), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 344));
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
    r0 = MemoryInline::FlatRead32((r1 + 348));
    r16 = MemoryInline::FlatRead32((r1 + 204));
    r17 = MemoryInline::FlatRead32((r1 + 208));
    r18 = MemoryInline::FlatRead8((r1 + 212));
    r19 = MemoryInline::FlatRead8((r1 + 213));
    r20 = MemoryInline::FlatRead8((r1 + 214));
    r21 = MemoryInline::FlatRead8((r1 + 215));
    r22 = MemoryInline::FlatRead8((r1 + 216));
    r23 = MemoryInline::FlatRead8((r1 + 217));
    r24 = MemoryInline::FlatRead8((r1 + 218));
    r25 = MemoryInline::FlatRead8((r1 + 219));
    r26 = MemoryInline::FlatRead8((r1 + 220));
    r27 = MemoryInline::FlatRead8((r1 + 221));
    r28 = MemoryInline::FlatRead8((r1 + 222));
    r12 = MemoryInline::FlatRead8((r1 + 223));
    r11 = MemoryInline::FlatRead8((r1 + 224));
    r10 = MemoryInline::FlatRead8((r1 + 225));
    r9 = MemoryInline::FlatRead8((r1 + 226));
    r8 = MemoryInline::FlatRead8((r1 + 227));
    r7 = MemoryInline::FlatRead8((r1 + 228));
    r6 = MemoryInline::FlatRead8((r1 + 229));
    r5 = MemoryInline::FlatRead8((r1 + 230));
    r4 = MemoryInline::FlatRead8((r1 + 231));
    r3 = MemoryInline::FlatRead8((r1 + 232));
    r14 = MemoryInline::FlatRead8((r1 + 234));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 272));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 280));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 284));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 288));
    MemoryInline::FlatWriteRam32((r1 + 192), r0);
    r0 = MemoryInline::FlatRead32((r1 + 352));
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r0 = r15;
    MemoryInline::FlatWriteRam32((r1 + 356), r15);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f31.d);
    MemoryInline::FlatWriteRam32((r1 + 104), r16);
    MemoryInline::FlatWriteRam32((r1 + 108), r17);
    MemoryInline::FlatWriteRam8((r1 + 112), static_cast<uint8_t>(r18));
    MemoryInline::FlatWriteRam8((r1 + 113), static_cast<uint8_t>(r19));
    MemoryInline::FlatWriteRam8((r1 + 114), static_cast<uint8_t>(r20));
    MemoryInline::FlatWriteRam8((r1 + 115), static_cast<uint8_t>(r21));
    MemoryInline::FlatWriteRam8((r1 + 116), static_cast<uint8_t>(r22));
    MemoryInline::FlatWriteRam8((r1 + 117), static_cast<uint8_t>(r23));
    MemoryInline::FlatWriteRam8((r1 + 118), static_cast<uint8_t>(r24));
    MemoryInline::FlatWriteRam8((r1 + 119), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r1 + 120), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 121), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 122), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 123), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 124), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 125), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 126), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 127), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 128), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 129), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 130), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 131), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 132), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 134), static_cast<uint8_t>(r14));
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f31.d);
    r5 = r31;
    r6 = r30;
    r3 = (r1 + 72);
    r4 = (r1 + 104);
    r7 = (r1 + 8);
    ctx->lr = 0x8007BE90u;
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
    InvokeDirectCpu<0x8007BF50u>(ctx);
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
    r13 = ctx->gpr[13];
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r14 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    r3 = (r1 + 104);
    r4 = -1;
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8007BEACu;
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
    InvokeDirectCpu<0x800B7F80u>(ctx);
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
    r13 = ctx->gpr[13];
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
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f28.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r4 = r31;
    r5 = r14;
    r3 = (r1 + 204);
    f1.d = PpcFmulsInline(f30.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 248), f0.d);
    ctx->lr = 0x8007BED0u;
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
    InvokeDirectCpu<0x800B9F50u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007BED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007BEEC;
    }
}

loc_8007BEDC:
{
    r3 = (r1 + 204);
    r4 = (r13 + -32360);
    r5 = 1;
    ctx->lr = 0x8007BEECu;
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
    InvokeDirectCpu<0x800B9F50u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_8007BEEC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r30 = (r30 - r14);
    r31 = (r31 + r0);
}

loc_8007BEF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8007BEFC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8007BC7C;
    }
}

loc_8007BF00:
{
    r3 = (r1 + 204);
    r4 = -1;
    ctx->lr = 0x8007BF0Cu;
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
    InvokeDirectCpu<0x800B7F80u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_8007BF0C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 448);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 448));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 516));
    ctx->lr = r0;
    r1 = (r1 + 512);
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
// RECOMP_REGISTRATION base 0x8007B870 func_8007B870 preserves=false fpr_mask=0xF0000000
