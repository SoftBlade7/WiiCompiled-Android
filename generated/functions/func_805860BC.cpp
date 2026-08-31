#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805860BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
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
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805860BC;

loc_805860BC:
{
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 320), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 320);
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
    r25 = 0x80890000u;
    r0 = 0;
    r25 = (r25 + 6656);
    r5 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32(r25);
    r21 = r3;
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f0.d);
    r4 = (r1 + 132);
    f31.d = MemoryInline::FlatReadFloat32((r5 + 23284));
    r24 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
    f30.d = f31.d;
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 256), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -2049);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -67108865);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    // inline leaf 0x80590C6C (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 176));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 192));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C6C
    r3 = r21;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f5.d = MemoryInline::FlatReadFloat32((r25 + 204));
    r29 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    r29 = (r29 + 16640);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 136));
    r23 = 0;
    f4.d = PpcFmulsInline(f5.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f2.d = PpcFmulsInline(f5.d, f1.d);
    r20 = 552075264;
    r30 = 0x80000000u;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    r31 = 0x809C0000u;
    f1.d = PpcFmulsInline(f5.d, f0.d);
    r26 = 0x802A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f3.d);
    r27 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r28 = -1326972928;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
}

loc_805861C0:
{
    r3 = r21;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r22 = r3;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 112));
    r3 = r22;
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r3 = (r3 + 240);
    r4 = (r26 + 16688);
    r5 = (r1 + 144);
    ctx->lr = 0x80586200u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f3.d = (-(f30.d));
    f2.d = MemoryInline::FlatReadFloat32((r22 + 360));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f1.d = f31.d;
    f4.d = MemoryInline::FlatReadFloat32((r1 + 148));
    r4 = (r1 + 156);
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 156));
    r5 = (r1 + 120);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 160));
    r6 = (r28 + 11775);
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f4.d = PpcFmulsInline(f7.d, f4.d);
    r3 = MemoryInline::FlatRead32((r27 + 12100));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    r7 = (r1 + 168);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    r8 = (r1 + 8);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    r9 = 0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    ctx->lr = 0x8058626Cu;
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
    ctx->fpr[30] = f30;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80586270:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80586738;
    }
}

loc_80586274:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r22 = 0;
    r5 = MemoryInline::FlatRead32(r29);
    r0 = (r3 & -2147483648);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0_mrot_2 = (r3 & 8192);
    r0_mdest_2 = (r0 & -8193);
    r0 = (r0_mdest_2 | r0_mrot_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058628C:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::FlatWriteRam32((r1 + 108), r5);
    MemoryInline::FlatWriteRam32((r1 + 112), r4);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805862B0;
    }
}

loc_805862A0:
{
    r3 = (r1 + 8);
    r4 = (r30 + 8192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_805862B4;
}

loc_805862B0:
{
    r3 = 0;
}

loc_805862B4:
{
}

loc_805862B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805862D0;
    }
}

loc_805862BC:
{
    r3 = MemoryInline::FlatRead32((r31 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 7);
}

loc_805862CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_805862F8;
    }
}

loc_805862D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805862D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805862EC;
    }
}

loc_805862DC:
{
    r3 = (r1 + 8);
    r4 = 268435456;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_805862F0;
}

loc_805862EC:
{
    r3 = 0;
}

loc_805862F0:
{
}

loc_805862F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8058632C;
    }
}

loc_805862F8:
{
    r3 = MemoryInline::FlatRead32(r21);
    r22 = 1;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 216));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 220));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 224));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f2.d);
    r0 = (r0 | 2048);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_80586380;
}

loc_8058632C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r20 + 3583);
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80586348;
    }
}

loc_8058633C:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8058634C;
}

loc_80586348:
{
    r3 = 0;
}

loc_8058634C:
{
}

loc_80586350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80586380;
    }
}

loc_80586354:
{
    r3 = MemoryInline::FlatRead32((r31 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 & 16384);
}

loc_80586360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80586380;
    }
}

loc_80586364:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 204));
    r22 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 212));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
}

loc_80586380:
{
}

loc_80586384:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80586744;
    }
}

loc_80586388:
{
    r3 = r21;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 68));
    guest_range_1 = MemoryInline::ResolveRangeHost(r25, 0, 248u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r25 + 4));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f3.d = PpcFmulsInline(f6.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 84u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 24), f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f3.d));
    f2.d = PpcFmulsInline(f5.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 28), f5.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 24), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 28), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 32), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 76), f0.d);
    r3 = r21;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r22 = r3;
    r3 = r21;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r22 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 72));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 76));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    r3 = r21;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r5 = 0x802A0000u;
    r7 = MemoryInline::FlatRead32((r3 + 116));
    r4 = (r5 + 16688);
    r6 = MemoryInline::FlatRead32((r3 + 120));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 124));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 232u, (r25 + 232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 96), r7);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 100), r6);
        MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 104), r0);
    }
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80586480:
{
    r20 = cr;
    r20_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(1));
    r20 = (r20_rot_0 & 1);
}

loc_80586488:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_805864B0;
    }
}

loc_8058648C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r25);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80586498:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805864B0;
    }
}

loc_8058649C:
{
    r3 = MemoryInline::FlatRead32(r21);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805864AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805866AC;
    }
}

loc_805864B0:
{
    r5 = MemoryInline::FlatRead32((r1 + 192));
    f3.d = (-(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 84), r5);
    r3 = r21;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    r4 = MemoryInline::FlatRead32((r1 + 196));
    r0 = MemoryInline::FlatRead32((r1 + 200));
    f2.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 88), r4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f4.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r5 = MemoryInline::FlatRead32((r3 + 104));
    r4 = MemoryInline::FlatRead32((r3 + 108));
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r3 = r21;
    MemoryInline::FlatWriteRam32((r1 + 60), r5);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 64), r4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    f30.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r3 = r21;
    // inline leaf 0x80590888 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590888
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r3 = r21;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f6.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f3.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f1.d = MemoryInline::FlatReadFloat32((r3 + 556));
    r3 = r21;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r5 = MemoryInline::FlatRead32((r3 + 104));
    r4 = MemoryInline::FlatRead32((r3 + 108));
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r3 = r21;
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f2.d = std::fabs(f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 92u, (r25 + 92));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 240u, (r25 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_80586600:
{
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f7.d = (f1.d - f0.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80586614;
    }
}

loc_80586610:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r25 + 4));
}

loc_80586614:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r25);
    SetCRFloatResident(cr, 0, f0.d, f7.d);
}

loc_8058661C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80586628;
    }
}

loc_80586620:
{
    f7.d = f0.d;
    goto loc_80586638;
}

loc_80586628:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r25 + 4));
    SetCRFloatResident(cr, 0, f0.d, f7.d);
}

loc_80586630:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80586638;
    }
}

loc_80586634:
{
    f7.d = f0.d;
}

loc_80586638:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r3 = r21;
    f6.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = PpcFmulsInline(f3.d, f7.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PpcFmulsInline(f2.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f0.d = PpcFmulsInline(f3.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
}

loc_805866AC:
{
    r3 = r21;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r22 = r3;
    r3 = r21;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r5 = r3;
    r3 = (r1 + 36);
    r4 = (r22 + 104);
    r6 = 1;
    r5 = (r5 + 56);
    ctx->lr = 0x805866D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
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
    r3 = r21;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r22 = r3;
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    r3 = r21;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r22 + 92));
    r24 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 96));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    r3 = MemoryInline::FlatRead32(r21);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_80586750;
}

loc_80586738:
{
    r0 = (r23 & 255);
}

loc_8058673C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80586744;
    }
}

loc_80586740:
{
    f30.d = MemoryInline::FlatReadFloat32(r25);
}

loc_80586744:
{
    r23 = (r23 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
}

loc_8058674C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805861C0;
    }
}

loc_80586750:
{
    r3 = r24;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 320));
    r11 = (r1 + 320);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 356));
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
    ctx->gpr[9] = r9;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFC3FF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805860BC func_805860BC preserves=false fpr_mask=0xC0000000
