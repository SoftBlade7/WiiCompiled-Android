#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A7820(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A7820;

loc_805A7820:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -368), 0, 376u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 372u, (r1 + 372), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 352u, (r1 + 352), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 352);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    r11 = 0x802A0000u;
    r11 = (r11 + 16640);
    r0 = MemoryInline::FlatRead32(r11);
    r31 = 0x80890000u;
    r30 = 0;
    r10 = MemoryInline::FlatRead32((r11 + 4));
    r31 = (r31 + 8728);
    r9 = MemoryInline::FlatRead32((r11 + 8));
    r22 = r3;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r25 = r6;
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r30));
    r26 = r7;
    f31.d = MemoryInline::FlatReadFloat32((r31 + 436));
    r23 = r4;
    MemoryInline::WriteResolvedFloat32(guest_range_4, 208u, (r1 + 208), f0.d);
    r24 = r5;
    r8 = MemoryInline::FlatRead32(r11);
    r29 = 0;
    MemoryInline::WriteResolvedFloat32(guest_range_4, 212u, (r1 + 212), f0.d);
    r28 = 0;
    r7 = MemoryInline::FlatRead32((r11 + 4));
    r27 = 0;
    r6 = MemoryInline::FlatRead32((r11 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 216u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 216u, (r1 + 216), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 220u, (r1 + 220), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 224u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 224u, (r1 + 224), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 228u, (r1 + 228), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_4, 296u, (r1 + 296), r30);
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 8), r30);
    r3 = MemoryInline::FlatRead16((r4 + 100));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::WriteResolved32(guest_range_4, 156u, (r1 + 156), r0);
    r3 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_4, 160u, (r1 + 160), r10);
        MemoryInline::WriteResolved32(guest_range_4, 164u, (r1 + 164), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_4, 132u, (r1 + 132), r8);
        MemoryInline::WriteResolved32(guest_range_4, 136u, (r1 + 136), r7);
    }
    MemoryInline::WriteResolved32(guest_range_4, 140u, (r1 + 140), r6);
    MemoryInline::FlatWrite16((r4 + 100), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805A78E4;
    }
}

loc_805A78DC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 100), static_cast<uint16_t>(r0));
}

loc_805A78E4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 108), r0);
    r3 = MemoryInline::FlatRead32(r5);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A78FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A7CD4;
    }
}

loc_805A7900:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A7908:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A7CD4;
    }
}

loc_805A790C:
{
    r3 = 0x809C0000u;
    f1.d = f31.d;
    r6 = 1660485632;
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r4 = r23;
    r5 = (r23 + 56);
    r6 = (r6 + -16897);
    r7 = (r1 + 208);
    r8 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x805A7938u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F784u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A793C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A7CD4;
    }
}

loc_805A7940:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 232));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 236));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 240));
    f6.d = MemoryInline::FlatReadFloat32(r23);
    f5.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    MemoryInline::FlatWriteFloat32((r23 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r23 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 64), f3.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f7.d);
    r0 = (r3 & 65536);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0_mrot_0 = (r3 & 1024);
    r0_mdest_0 = (r0 & -1025);
    r0 = (r0_mdest_0 | r0_mrot_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A7988:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A7CEC;
    }
}

loc_805A7990:
{
    r3 = MemoryInline::FlatRead32(r24);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A79A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A79E8;
    }
}

loc_805A79A4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 240));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    MemoryInline::FlatWriteFloat32(r23, f2.d);
    MemoryInline::FlatWriteFloat32((r23 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r23 + 8), f0.d);
    goto loc_805A7CEC;
}

loc_805A79E8:
{
    r3 = 0x809C0000u;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_805A79FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(34))) {
        goto loc_805A7A18;
    }
}

loc_805A7A00:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_805A7A10:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(345))) {
        goto loc_805A7A18;
    }
}

loc_805A7A14:
{
    r5 = 1;
}

loc_805A7A18:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A7BF0;
    }
}

loc_805A7A28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805A7A2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A7BF0;
    }
}

loc_805A7A30:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 256));
    r6 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 260));
    r3 = (r1 + 120);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 264));
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f2.d);
    r5 = MemoryInline::FlatRead32((r1 + 156));
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f1.d);
    r4 = MemoryInline::FlatRead32((r1 + 160));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    MemoryInline::FlatWrite8((r23 + 40), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 120), r5);
    MemoryInline::FlatWriteRam32((r1 + 124), r4);
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    ctx->lr = 0x805A7A70u;
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
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7A78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A7BF0;
    }
}

loc_805A7A7C:
{
    r4 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 144));
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 512));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7AB8:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_805A7AC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A7AC8;
    }
}

loc_805A7AC4:
{
    r29 = 1;
}

loc_805A7AC8:
{
}

loc_805A7ACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A7AD4;
    }
}

loc_805A7AD0:
{
    r30 = 1;
}

loc_805A7AD4:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f2.d = MemoryInline::FlatReadFloat32(r25);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 400));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7B08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A7BF0;
    }
}

loc_805A7B0C:
{
    r3 = r24;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f0.d = MemoryInline::FlatReadFloat32((r31 + 492));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7B1C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805A7B34;
    }
}

loc_805A7B20:
{
    r3 = MemoryInline::FlatRead32(r24);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A7B30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A7B40;
    }
}

loc_805A7B34:
{
    r0 = 5;
    MemoryInline::FlatWrite16((r23 + 100), static_cast<uint16_t>(r0));
    goto loc_805A7BF0;
}

loc_805A7B40:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 33554432);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A7B48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A7BF0;
    }
}

loc_805A7B4C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 136));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7B60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A7BF0;
    }
}

loc_805A7B64:
{
    r5 = MemoryInline::FlatRead32((r23 + 56));
    f2.d = (-(f31.d));
    r0 = MemoryInline::FlatRead32((r23 + 60));
    r3 = (r1 + 188);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    r4 = (r1 + 108);
    MemoryInline::FlatWriteRam32((r1 + 108), r5);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f5.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r5 = (r1 + 144);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    r0 = MemoryInline::FlatRead32((r23 + 64));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    ctx->lr = 0x805A7BCCu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AEF6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r24;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = r3;
    r3 = (r1 + 188);
    // inline leaf 0x805AF0F0 (22 guest instruction(s))
}

loc_inl3_0x805AF0F0:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r5 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 9532));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl3_0x805AF134:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x805AF140;
    }
}

loc_inl3_0x805AF13C:
{
    r0 = 1;
}

loc_inl3_0x805AF140:
{
    r3 = r0;
}

loc_inl3_cont_805AF0F0:
{
    // end of inlined leaf 0x805AF0F0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A7BE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A7BF0;
    }
}

loc_805A7BE8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r23 + 108), r0);
}

loc_805A7BF0:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A7CEC;
    }
}

loc_805A7C04:
{
    r3 = 0x809C0000u;
    r21 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_805A7C18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(33))) {
        goto loc_805A7C94;
    }
}

loc_805A7C1C:
{
    r3 = r24;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f2.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 516));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7C38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A7C94;
    }
}

loc_805A7C3C:
{
    r4 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r23 + 136));
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 140));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r23 + 144));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 520));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7C78:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_805A7C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A7C88;
    }
}

loc_805A7C84:
{
    r21 = 1;
}

loc_805A7C88:
{
}

loc_805A7C8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A7C94;
    }
}

loc_805A7C90:
{
    r27 = 1;
}

loc_805A7C94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_805A7C98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A7CCC;
    }
}

loc_805A7C9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r23);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f3.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32(r23, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r23 + 8), f0.d);
}

loc_805A7CCC:
{
    r28 = 1;
    goto loc_805A7CEC;
}

loc_805A7CD4:
{
    f2.d = MemoryInline::FlatReadFloat32(r23);
    f1.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    MemoryInline::FlatWriteFloat32((r23 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r23 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r23 + 64), f0.d);
}

loc_805A7CEC:
{
    r3 = r24;
    r20 = 0;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f1.d = std::fabs(f1.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 528u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 408u, (r31 + 408));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7D04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A7D9C;
    }
}

loc_805A7D08:
{
    r3 = r24;
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    r21 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32(r3);
    r25 = (r21 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r21 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 524u, (r31 + 524));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7D50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A7D9C;
    }
}

loc_805A7D54:
{
    r3 = r24;
    // inline leaf 0x80590CBC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 204);
    // end of inlined leaf 0x80590CBC
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r21 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 524u, (r31 + 524));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7D94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A7D9C;
    }
}

loc_805A7D98:
{
    r20 = 1;
}

loc_805A7D9C:
{
    r3 = MemoryInline::FlatRead32(r24);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 33554432);
}

loc_805A7DAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A7DB8;
    }
}

loc_805A7DB0:
{
    MemoryInline::FlatWrite8((r23 + 201), static_cast<uint8_t>(r20));
    goto loc_805A7DBC;
}

loc_805A7DB8:
{
    r20 = MemoryInline::FlatRead8((r23 + 201));
}

loc_805A7DBC:
{
}

loc_805A7DC0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805A7FCC;
    }
}

loc_805A7DC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_805A7DC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A7FCC;
    }
}

loc_805A7DCC:
{
    f1.d = MemoryInline::FlatReadFloat32((r22 + 172));
    r3 = (r1 + 96);
    f0.d = MemoryInline::FlatReadFloat32(r23);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    ctx->lr = 0x805A7E04u;
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
    r4 = MemoryInline::FlatRead32((r1 + 156));
    MemoryInline::FlatWriteRam32((r1 + 84), r4);
    r3 = MemoryInline::FlatRead32((r1 + 160));
    f1.d = MemoryInline::FlatReadFloat32(r23);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 88), r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f3.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 484));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f4.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A7E84:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A7E90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A7F14;
    }
}

loc_805A7E94:
{
    r3 = (r1 + 60);
    ctx->lr = 0x805A7E9Cu;
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
    r3 = (r1 + 168);
    r4 = (r1 + 72);
    r5 = (r1 + 60);
    ctx->lr = 0x805A7EACu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AEF6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r6 = r23;
    r3 = (r1 + 168);
    r4 = (r1 + 48);
    r5 = (r22 + 172);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AF228u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A7EC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A7F14;
    }
}

loc_805A7EC8:
{
    f2.d = MemoryInline::FlatReadFloat32(r23);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f5.d);
    f0.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x805A7F10u;
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
    f31.d = f1.d;
}

loc_805A7F14:
{
    f3.d = MemoryInline::FlatReadFloat32((r23 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 280));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 276));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r23 + 76), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A7F38:
{
    r3 = MemoryInline::FlatRead32((r22 + 392));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A7F4C;
    }
}

loc_805A7F44:
{
    MemoryInline::FlatWriteFloat32((r23 + 76), f0.d);
    goto loc_805A7F58;
}

loc_805A7F4C:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_805A7F50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A7F58;
    }
}

loc_805A7F54:
{
    MemoryInline::FlatWriteFloat32((r23 + 76), f2.d);
}

loc_805A7F58:
{
    f5.d = MemoryInline::FlatReadFloat32((r23 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f6.d = (-(f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r22 + 172));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 92));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 300));
    f4.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 500));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteFloat32(r23, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 176));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r23 + 4), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 180));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r23 + 8), f1.d);
    r3 = MemoryInline::FlatRead32((r22 + 392));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    MemoryInline::FlatWriteFloat32((r23 + 92), f0.d);
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 76), f0.d);
    goto loc_805A81BC;
}

loc_805A7FCC:
{
}

loc_805A7FD0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805A7FF8;
    }
}

loc_805A7FD4:
{
    f2.d = MemoryInline::FlatReadFloat32((r23 + 76));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 336u, (r31 + 336));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 276u, (r31 + 276));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r23 + 76), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A7FEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A8018;
    }
}

loc_805A7FF0:
{
    MemoryInline::FlatWriteFloat32((r23 + 76), f0.d);
    goto loc_805A8018;
}

loc_805A7FF8:
{
    r3 = MemoryInline::FlatRead32((r22 + 392));
    f2.d = MemoryInline::FlatReadFloat32((r23 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 300u, (r31 + 300));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 76), f0.d);
}

loc_805A8018:
{
}

loc_805A801C:
{
    r3 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805A8030;
    }
}

loc_805A8024:
{
}

loc_805A8028:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_805A8030;
    }
}

loc_805A802C:
{
    r3 = 1;
}

loc_805A8030:
{
}

loc_805A8034:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_805A80A4;
    }
}

loc_805A8038:
{
    r0 = MemoryInline::FlatRead16((r23 + 152));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A8040:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_805A80A4;
    }
}

loc_805A8044:
{
}

loc_805A8048:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805A8074;
    }
}

loc_805A804C:
{
    r0 = MemoryInline::FlatRead8((r23 + 168));
}

loc_805A8054:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A80A4;
    }
}

loc_805A8058:
{
}

loc_805A805C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_805A8068;
    }
}

loc_805A8060:
{
}

loc_805A8064:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805A80A4;
    }
}

loc_805A8068:
{
    r0 = MemoryInline::FlatRead16((r23 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A8070:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A80A4;
    }
}

loc_805A8074:
{
    f1.d = MemoryInline::FlatReadFloat32(r23);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f3.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32(r23, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r23 + 8), f0.d);
}

loc_805A80A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805A80A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A81AC;
    }
}

loc_805A80AC:
{
    r0 = MemoryInline::FlatRead16((r23 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A80B4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805A81AC;
    }
}

loc_805A80B8:
{
    f4.d = MemoryInline::FlatReadFloat32((r22 + 312));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f2.d = MemoryInline::FlatReadFloat32((r22 + 320));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f8.d = PpcFmulsInline(f4.d, f0.d);
    f7.d = MemoryInline::FlatReadFloat32((r22 + 316));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f5.d = PpcFmulsInline(f2.d, f3.d);
    f6.d = PpcFmulsInline(f7.d, f3.d);
    f4.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r22 + 300));
    f3.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 304));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r22 + 308));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f6.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 248u, (r31 + 248));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A812C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A8134;
    }
}

loc_805A8130:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 332u, (r31 + 332));
}

loc_805A8134:
{
    r3 = r24;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f3.d = MemoryInline::FlatReadFloat32((r1 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_805A8144:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f4.d = std::fabs(f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A817C;
    }
}

loc_805A8174:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 332u, (r31 + 332));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_805A817C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 496u, (r31 + 496));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 400u, (r31 + 400));
    f3.d = PpcFmulsInline(f1.d, f31.d);
    f2.d = MemoryInline::FlatReadFloat32((r23 + 92));
    f1.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 368u, (r31 + 368));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 92), f0.d);
    goto loc_805A81BC;
}

loc_805A81AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 92));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 500u, (r31 + 500));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 92), f0.d);
}

loc_805A81BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 76));
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 532u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 244u, (r31 + 244));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A81C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A82E8;
    }
}

loc_805A81CC:
{
    r4 = MemoryInline::FlatRead32((r22 + 392));
    r3 = r24;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r22 = (r0 - r3);
    r3 = r24;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 0x808B0000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 528u, (r31 + 528));
    r3 = (r3 + 27512);
    r0 = (r0 + r22);
    r0 = (r0 & 255);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_805A820C:
{
    r0 = (r0 * 12);
    r4 = (r3 + r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A8270;
    }
}

loc_805A8218:
{
    r3 = MemoryInline::FlatRead32(r24);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 32768);
}

loc_805A8228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A8250;
    }
}

loc_805A822C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r23 + 164));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 400u, (r31 + 400));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 164), f0.d);
    goto loc_805A828C;
}

loc_805A8250:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r31);
    f2.d = MemoryInline::FlatReadFloat32((r23 + 164));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 296u, (r31 + 296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 164), f0.d);
    goto loc_805A828C;
}

loc_805A8270:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r31);
    f2.d = MemoryInline::FlatReadFloat32((r23 + 164));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 296u, (r31 + 296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 164), f0.d);
}

loc_805A828C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 392u, (r31 + 392));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_805A8294:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A82B4;
    }
}

loc_805A8298:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 156), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 160), f0.d);
    goto loc_805A832C;
}

loc_805A82B4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r31);
    f4.d = MemoryInline::FlatReadFloat32((r23 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 160));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 296u, (r31 + 296));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 156), f2.d);
    MemoryInline::FlatWriteFloat32((r23 + 160), f0.d);
    goto loc_805A832C;
}

loc_805A82E8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r31);
    f6.d = MemoryInline::FlatReadFloat32((r23 + 156));
    f3.d = MemoryInline::FlatReadFloat32((r23 + 160));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 164));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 296u, (r31 + 296));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 156), f4.d);
    MemoryInline::FlatWriteFloat32((r23 + 160), f2.d);
    MemoryInline::FlatWriteFloat32((r23 + 164), f0.d);
}

loc_805A832C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 352);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 352));
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 368);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A7820 func_805A7820 preserves=false fpr_mask=0x80000000
