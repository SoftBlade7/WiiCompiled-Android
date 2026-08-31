#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B54F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_0 = 0;
    uint32_t r24_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_2 = 0;
    uint32_t r24_psq_tmp_3 = 0;
    uint32_t r24_psq_tmp_4 = 0;
    uint32_t r24_psq_tmp_5 = 0;
    uint32_t r24_psq_tmp_6 = 0;
    uint32_t r24_psq_tmp_7 = 0;
    uint32_t r24_psq_tmp_8 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_4 = 0;
    uint32_t r25_psq_tmp_5 = 0;
    uint32_t r25_psq_tmp_6 = 0;
    uint32_t r25_psq_tmp_7 = 0;
    uint32_t r25_psq_tmp_8 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_10 = 0;
    uint32_t r26_psq_tmp_11 = 0;
    uint32_t r26_psq_tmp_12 = 0;
    uint32_t r26_psq_tmp_13 = 0;
    uint32_t r26_psq_tmp_14 = 0;
    uint32_t r26_psq_tmp_15 = 0;
    uint32_t r26_psq_tmp_16 = 0;
    uint32_t r26_psq_tmp_17 = 0;
    uint32_t r26_psq_tmp_18 = 0;
    uint32_t r26_psq_tmp_19 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_20 = 0;
    uint32_t r26_psq_tmp_21 = 0;
    uint32_t r26_psq_tmp_22 = 0;
    uint32_t r26_psq_tmp_23 = 0;
    uint32_t r26_psq_tmp_24 = 0;
    uint32_t r26_psq_tmp_25 = 0;
    uint32_t r26_psq_tmp_26 = 0;
    uint32_t r26_psq_tmp_27 = 0;
    uint32_t r26_psq_tmp_28 = 0;
    uint32_t r26_psq_tmp_29 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_30 = 0;
    uint32_t r26_psq_tmp_31 = 0;
    uint32_t r26_psq_tmp_32 = 0;
    uint32_t r26_psq_tmp_33 = 0;
    uint32_t r26_psq_tmp_34 = 0;
    uint32_t r26_psq_tmp_35 = 0;
    uint32_t r26_psq_tmp_36 = 0;
    uint32_t r26_psq_tmp_37 = 0;
    uint32_t r26_psq_tmp_38 = 0;
    uint32_t r26_psq_tmp_39 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_40 = 0;
    uint32_t r26_psq_tmp_41 = 0;
    uint32_t r26_psq_tmp_42 = 0;
    uint32_t r26_psq_tmp_43 = 0;
    uint32_t r26_psq_tmp_44 = 0;
    uint32_t r26_psq_tmp_45 = 0;
    uint32_t r26_psq_tmp_46 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r26_psq_tmp_6 = 0;
    uint32_t r26_psq_tmp_7 = 0;
    uint32_t r26_psq_tmp_8 = 0;
    uint32_t r26_psq_tmp_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_12 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B54F4;

loc_807B54F4:
{
    MemoryInline::FlatWriteRam32((r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 304), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 288), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 288);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 68);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    r31 = 0x808A0000u;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 80);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    r4 = 1827405824;
    r0 = MemoryInline::FlatRead8((r3 + 460));
    f30.d = f1.d;
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 76);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 88);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5540:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f3.d, f2.d));
    r26 = r3;
    r31 = (r31 + 24856);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f0.d);
    r6 = (r4 + -8193);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5560;
    }
}

loc_807B555C:
{
    r6 = (r4 + -9217);
}

loc_807B5560:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 180));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r4 = (r26 + 68);
    r9 = MemoryInline::FlatRead16((r26 + 110));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (r26 + 188);
    r7 = (r26 + 216);
    r8 = (r26 + 212);
    ctx->lr = 0x807B5584u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[3].d = PPC_PsToScalarInline(ctx->fpr[3].d);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807B5588:
{
    r29 = r3;
    r28 = 0;
    r27 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807B5634;
    }
}

loc_807B5598:
{
    r3 = 552075264;
    r0 = MemoryInline::FlatRead32((r26 + 212));
    r4 = (r3 + 4095);
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B55B8;
    }
}

loc_807B55AC:
{
    r3 = (r26 + 212);
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
    goto loc_807B55BC;
}

loc_807B55B8:
{
    r3 = 0;
}

loc_807B55BC:
{
}

loc_807B55C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807B5634;
    }
}

loc_807B55C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 256));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B55D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807B55E0;
    }
}

loc_807B55D4:
{
    r0 = MemoryInline::FlatRead32((r26 + 212));
    r0 = (r0 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B55DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B561C;
    }
}

loc_807B55E0:
{
    r0 = MemoryInline::FlatRead32((r26 + 352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(300));
}

loc_807B55E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5610;
    }
}

loc_807B55EC:
{
    r0 = MemoryInline::FlatRead8((r26 + 461));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B55F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5610;
    }
}

loc_807B55F8:
{
    r0 = MemoryInline::FlatRead32((r26 + 472));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5600:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B5610;
    }
}

loc_807B5604:
{
    r3 = MemoryInline::FlatRead32((r26 + 456));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 456), r0);
}

loc_807B5610:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r26 + 472), r0);
    r28 = 1;
}

loc_807B561C:
{
    r4 = 0x809C0000u;
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 7);
    ctx->lr = 0x807B5634u;
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
    InvokeDirectCpu<0x8079DC60u>(ctx);
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
}

loc_807B5634:
{
}

loc_807B5638:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_807B5650;
    }
}

loc_807B563C:
{
    r0 = MemoryInline::FlatRead32((r26 + 212));
    r0 = (r0 & 65536);
}

loc_807B5644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5650;
    }
}

loc_807B5648:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 463), static_cast<uint8_t>(r0));
}

loc_807B5650:
{
    r0 = MemoryInline::FlatRead32((r26 + 472));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5658:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5A1C;
    }
}

loc_807B565C:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 228u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 136u, (r1 + 144), f0.d);
    r3 = 0x809C0000u;
    r6 = -804192256;
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 140u, (r1 + 148), f0.d);
    r4 = (r26 + 68);
    r5 = (r26 + 188);
    r6 = (r6 + -4096);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 144u, (r1 + 152), f0.d);
    r7 = (r1 + 144);
    r8 = (r1 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 148u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 148u, (r1 + 156), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 152u, (r1 + 160), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 156u, (r1 + 164), f0.d);
    MemoryInline::WriteResolved32(guest_range_3, 224u, (r1 + 232), r0);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r26 + 180));
    r9 = MemoryInline::FlatRead16((r26 + 110));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    ctx->lr = 0x807B56B0u;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807B56B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807B56BC;
    }
}

loc_807B56B8:
{
    r27 = 1;
}

loc_807B56BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_807B56C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5A1C;
    }
}

loc_807B56C4:
{
    r6 = MemoryInline::FlatRead32((r1 + 168));
    r30 = (r1 + 168);
    r5 = MemoryInline::FlatRead32((r1 + 172));
    r3 = (r1 + 132);
    r0 = MemoryInline::FlatRead32((r1 + 176));
    r4 = (r1 + 108);
    MemoryInline::FlatWriteRam32((r1 + 108), r6);
    r29 = 1;
    MemoryInline::FlatWriteRam32((r1 + 112), r5);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    ctx->lr = 0x807B56F0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80793F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f31.d = f1.d;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r31 + 36));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B5700:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B58B8;
    }
}

loc_807B5704:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 436));
    r27 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5714:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5720;
    }
}

loc_807B5718:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 436), f0.d);
}

loc_807B5720:
{
    r0 = MemoryInline::FlatRead8((r26 + 461));
    r3 = MemoryInline::FlatRead32((r26 + 120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B572C:
{
    r0 = (r3 & -131073);
    MemoryInline::FlatWrite32((r26 + 120), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5750;
    }
}

loc_807B5738:
{
    r0 = MemoryInline::FlatRead32((r26 + 116));
    r3 = MemoryInline::FlatRead32((r26 + 456));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r26 + 116), r0);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 456), r0);
}

loc_807B5750:
{
    r25 = (r26 + 216);
    r6 = 12;
    r0 = 1;
    r5 = r30;
    r3 = r25;
    r4 = r25;
    r24 = (r1 + 132);
    r23 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    // inline leaf 0x800855C0 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x800855C0
    r3 = (r25 + 12);
    r5 = r30;
    r4 = r3;
    // inline leaf 0x80085580 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80085580
    r3 = 552075264;
    r0 = (r3 + 4095);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B57D4;
    }
}

loc_807B5794:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 72));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807B579C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B57AC;
    }
}

loc_807B57A0:
{
    MemoryInline::FlatWriteFloat32((r25 + 72), f31.d);
    r0 = 1;
    goto loc_807B57B0;
}

loc_807B57AC:
{
    r0 = 0;
}

loc_807B57B0:
{
}

loc_807B57B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5894;
    }
}

loc_807B57B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r25 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r25 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteFloat32((r25 + 44), f0.d);
    goto loc_807B5894;
}

loc_807B57D4:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5894;
    }
}

loc_807B57E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r31 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B57F0:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
}

loc_807B57F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5858;
    }
}

loc_807B57FC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_1 = (r25 + 52);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r24_psq_tmp_1 = (r24 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r24_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_2 = (r25 + 48);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_2));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r24));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 84));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f2.d, f3.d, f4.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5828:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5838;
    }
}

loc_807B582C:
{
    MemoryInline::FlatWriteFloat32((r25 + 84), f1.d);
    r0 = 1;
    goto loc_807B583C;
}

loc_807B5838:
{
    r0 = 0;
}

loc_807B583C:
{
}

loc_807B5840:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_807B5858;
    }
}

loc_807B5844:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 84));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5850:
{
    if (((cr & 0x40000000u) == 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_807B5858;
    }
}

loc_807B5854:
{
    MemoryInline::FlatWriteFloat32((r25 + 84), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
}

loc_807B5858:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 76));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807B5860:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5870;
    }
}

loc_807B5864:
{
    MemoryInline::FlatWriteFloat32((r25 + 76), f31.d);
    r0 = 1;
    goto loc_807B5874;
}

loc_807B5870:
{
    r0 = 0;
}

loc_807B5874:
{
}

loc_807B5878:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5894;
    }
}

loc_807B587C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r25 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r25 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteFloat32((r25 + 56), f0.d);
}

loc_807B5894:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 216);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_2 = (r26 + 228);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_2));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 224);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_4 = (r26 + 236);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_5 = (r26 + 240);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_5, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_6 = (r26 + 248);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_6, f2.d);
    goto loc_807B5A1C;
}

loc_807B58B8:
{
    r24 = (r26 + 216);
    r6 = 0;
    r0 = 1;
    r5 = r30;
    r3 = r24;
    r4 = r24;
    r25 = (r1 + 132);
    r23 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    // inline leaf 0x800855C0 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x800855C0
    r3 = (r24 + 12);
    r5 = r30;
    r4 = r3;
    // inline leaf 0x80085580 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80085580
    r3 = 552075264;
    r0 = (r3 + 4095);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B593C;
    }
}

loc_807B58FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 72));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807B5904:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5914;
    }
}

loc_807B5908:
{
    MemoryInline::FlatWriteFloat32((r24 + 72), f31.d);
    r0 = 1;
    goto loc_807B5918;
}

loc_807B5914:
{
    r0 = 0;
}

loc_807B5918:
{
}

loc_807B591C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B59FC;
    }
}

loc_807B5920:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r24 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r24 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteFloat32((r24 + 44), f0.d);
    goto loc_807B59FC;
}

loc_807B593C:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r23 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B59FC;
    }
}

loc_807B594C:
{
    f1.d = MemoryInline::FlatReadFloat32((r24 + 76));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r31 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5958:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1);
}

loc_807B5960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B59C0;
    }
}

loc_807B5964:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r24_psq_tmp_4 = (r24 + 52);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_5 = (r25 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r25_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_5 = (r24 + 48);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r25));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 84));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f2.d, f3.d, f4.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5990:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B59A0;
    }
}

loc_807B5994:
{
    MemoryInline::FlatWriteFloat32((r24 + 84), f1.d);
    r0 = 1;
    goto loc_807B59A4;
}

loc_807B59A0:
{
    r0 = 0;
}

loc_807B59A4:
{
}

loc_807B59A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_807B59C0;
    }
}

loc_807B59AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r24 + 84));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B59B8:
{
    if (((cr & 0x40000000u) == 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_807B59C0;
    }
}

loc_807B59BC:
{
    MemoryInline::FlatWriteFloat32((r24 + 84), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
}

loc_807B59C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 76));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807B59C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B59D8;
    }
}

loc_807B59CC:
{
    MemoryInline::FlatWriteFloat32((r24 + 76), f31.d);
    r0 = 1;
    goto loc_807B59DC;
}

loc_807B59D8:
{
    r0 = 0;
}

loc_807B59DC:
{
}

loc_807B59E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B59FC;
    }
}

loc_807B59E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r24 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r24 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteFloat32((r24 + 56), f0.d);
}

loc_807B59FC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_7 = (r26 + 216);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_8 = (r26 + 228);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_8));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_9 = (r26 + 224);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_9));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_10 = (r26 + 236);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_10));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_11 = (r26 + 240);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_11, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_12 = (r26 + 248);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_12, f2.d);
}

loc_807B5A1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807B5A20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5F50;
    }
}

loc_807B5A24:
{
    r0 = MemoryInline::FlatRead8((r26 + 460));
}

loc_807B5A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5A50;
    }
}

loc_807B5A30:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 244));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5A3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5A70;
    }
}

loc_807B5A40:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 72), f0.d);
    goto loc_807B5A70;
}

loc_807B5A50:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_14 = (r26 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_14));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_15 = (r26 + 240);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_15));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_16 = (r26 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_16));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_17 = (r26 + 248);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_17));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_18 = (r26 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_18, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_19 = (r26 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_19, f0.d);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_807B5A70:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r26 + 212));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B5A8C;
    }
}

loc_807B5A84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_807B5A88:
{
    if (((cr & 0x20000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_807B5CA0;
    }
}

loc_807B5A8C:
{
    r0 = MemoryInline::FlatRead32((r26 + 472));
    r30 = (r26 + 252);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5A98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5C1C;
    }
}

loc_807B5A9C:
{
    r0 = MemoryInline::FlatRead8((r26 + 461));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5BB0;
    }
}

loc_807B5AA8:
{
    r0 = MemoryInline::FlatRead32((r26 + 456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5AB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B5BB0;
    }
}

loc_807B5AB4:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r3 = (r26 + 420);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r6 = r3;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r1 + 96);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    r5 = (r1 + 72);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f2.d);
    f31.d = MemoryInline::FlatReadFloat32((r26 + 424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807DE8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead8((r26 + 462));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5AEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5B24;
    }
}

loc_807B5AF0:
{
    r5 = (r1 + 72);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_21 = (r26 + 420);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_21));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    r3 = r26;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 249;
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_22 = (r26 + 428);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_22));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_23 = (r26 + 420);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_23, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r5_psq_tmp_1));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_24 = (r26 + 428);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_24, f2.d);
    ctx->lr = 0x807B5B24u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A2F18u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807B5B24:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 424));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B5B30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5B54;
    }
}

loc_807B5B34:
{
    f0.d = (-(f31.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B5B3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5B54;
    }
}

loc_807B5B40:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 424), f0.d);
}

loc_807B5B54:
{
    r5 = MemoryInline::FlatRead32((r26 + 420));
    r3 = (r26 + 420);
    r0 = MemoryInline::FlatRead32((r26 + 424));
    r4 = (r1 + 84);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    MemoryInline::FlatWriteRam32((r1 + 84), r5);
    r0 = MemoryInline::FlatRead32((r26 + 428));
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    ctx->lr = 0x807B5B78u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r26 + 420);
    r4 = (r26 + 200);
    r5 = (r26 + 444);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_3 = (r5 + 4);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3, f10.d);
    // end of inlined leaf 0x8019ACCC
    r0 = MemoryInline::FlatRead32((r26 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 420));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 424));
    r0 = (r0 | 32);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 428));
    MemoryInline::FlatWriteFloat32((r26 + 432), f2.d);
    MemoryInline::FlatWriteFloat32((r26 + 436), f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 440), f0.d);
    MemoryInline::FlatWrite32((r26 + 116), r0);
    goto loc_807B5C68;
}

loc_807B5BB0:
{
    r4 = r30;
    r3 = (r26 + 80);
    r5 = (r26 + 432);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807DE858u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r5 = MemoryInline::FlatRead32((r26 + 432));
    r3 = (r26 + 432);
    r0 = MemoryInline::FlatRead32((r26 + 436));
    r4 = (r1 + 60);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r5);
    r0 = MemoryInline::FlatRead32((r26 + 440));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    ctx->lr = 0x807B5BE4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f4.d = MemoryInline::FlatReadFloat32((r26 + 432));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 440));
    f3.d = PpcFmulsInline(f4.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5C00:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B5C68;
    }
}

loc_807B5C08:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 436));
    MemoryInline::FlatWriteFloat32((r26 + 420), f4.d);
    MemoryInline::FlatWriteFloat32((r26 + 424), f0.d);
    MemoryInline::FlatWriteFloat32((r26 + 428), f2.d);
    goto loc_807B5C68;
}

loc_807B5C1C:
{
    r4 = r30;
    r3 = (r26 + 420);
    r5 = (r26 + 432);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807DE858u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r5 = MemoryInline::FlatRead32((r26 + 432));
    r3 = (r26 + 432);
    r0 = MemoryInline::FlatRead32((r26 + 436));
    r4 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    r0 = MemoryInline::FlatRead32((r26 + 440));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    ctx->lr = 0x807B5C50u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r26 + 432));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 436));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 440));
    MemoryInline::FlatWriteFloat32((r26 + 420), f2.d);
    MemoryInline::FlatWriteFloat32((r26 + 424), f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 428), f0.d);
}

loc_807B5C68:
{
    r4 = r30;
    r3 = (r26 + 432);
    r5 = (r26 + 444);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 4);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5, f10.d);
    // end of inlined leaf 0x8019ACCC
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B5C84:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        f5.d = PPC_PsToScalarInline(f5.d);
        f6.d = PPC_PsToScalarInline(f6.d);
        f7.d = PPC_PsToScalarInline(f7.d);
        f8.d = PPC_PsToScalarInline(f8.d);
        f9.d = PPC_PsToScalarInline(f9.d);
        f10.d = PPC_PsToScalarInline(f10.d);
        goto loc_807B5CA0;
    }
}

loc_807B5C8C:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteFloat32((r26 + 200), f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 204), f2.d);
    MemoryInline::FlatWriteFloat32((r26 + 208), f0.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f7.d = PPC_PsToScalarInline(f7.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
}

loc_807B5CA0:
{
    r0 = MemoryInline::FlatRead32((r26 + 472));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5CA8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B5E70;
    }
}

loc_807B5CAC:
{
    r3 = -804192256;
    r4 = MemoryInline::FlatRead32((r26 + 212));
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5E70;
    }
}

loc_807B5CC0:
{
    r3 = MemoryInline::FlatRead32((r26 + 264));
    r0 = MemoryInline::FlatRead32((r26 + 268));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 120), r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5CDC:
{
    r0 = MemoryInline::FlatRead32((r26 + 272));
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B5CFC;
    }
}

loc_807B5CEC:
{
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x807B5CF8u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6C14u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807B6078;
}

loc_807B5CFC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    r0 = MemoryInline::FlatRead8((r26 + 460));
}

loc_807B5D0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5D30;
    }
}

loc_807B5D10:
{
    f3.d = MemoryInline::FlatReadFloat32((r26 + 68));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 240));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 248));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r26 + 76), f0.d);
}

loc_807B5D30:
{
    r3 = (r26 + 420);
    r4 = (r1 + 120);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f2.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807B5D5C:
{
    if (((cr & 0x80000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807B5E70;
    }
}

loc_807B5D60:
{
    f31.d = MemoryInline::FlatReadFloat32((r26 + 424));
    r6 = r3;
    r5 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807DE8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead8((r26 + 462));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5D78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5DB0;
    }
}

loc_807B5D7C:
{
    r5 = (r1 + 24);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_28 = (r26 + 420);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    r3 = r26;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 249;
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_29 = (r26 + 428);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_29));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_30 = (r26 + 420);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_30, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_7 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r5_psq_tmp_7));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_31 = (r26 + 428);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_31, f2.d);
    ctx->lr = 0x807B5DB0u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A2F18u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807B5DB0:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 424));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B5DBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5DE0;
    }
}

loc_807B5DC0:
{
    f0.d = (-(f31.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B5DC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5DE0;
    }
}

loc_807B5DCC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 424), f0.d);
}

loc_807B5DE0:
{
    r5 = MemoryInline::FlatRead32((r26 + 420));
    r3 = (r26 + 420);
    r0 = MemoryInline::FlatRead32((r26 + 424));
    r4 = (r1 + 36);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    r0 = MemoryInline::FlatRead32((r26 + 428));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    ctx->lr = 0x807B5E04u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r26 + 420);
    r4 = (r26 + 200);
    r5 = (r26 + 444);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_9 = (r5 + 4);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_9, f10.d);
    // end of inlined leaf 0x8019ACCC
    r0 = MemoryInline::FlatRead8((r26 + 461));
    r3 = MemoryInline::FlatRead32((r26 + 120));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5E24:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 424));
    r0 = (r3 & -131073);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 428));
    MemoryInline::FlatWriteFloat32((r26 + 432), f2.d);
    MemoryInline::FlatWriteFloat32((r26 + 436), f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 440), f0.d);
    MemoryInline::FlatWrite32((r26 + 120), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5E5C;
    }
}

loc_807B5E44:
{
    r0 = MemoryInline::FlatRead32((r26 + 116));
    r3 = MemoryInline::FlatRead32((r26 + 456));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r26 + 116), r0);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 456), r0);
}

loc_807B5E5C:
{
    r0 = MemoryInline::FlatRead16((r26 + 350));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5E64:
{
    if (((cr & 0x20000000u) != 0)) {
        f4.d = PPC_PsToScalarInline(f4.d);
        f5.d = PPC_PsToScalarInline(f5.d);
        f6.d = PPC_PsToScalarInline(f6.d);
        f7.d = PPC_PsToScalarInline(f7.d);
        f8.d = PPC_PsToScalarInline(f8.d);
        f9.d = PPC_PsToScalarInline(f9.d);
        f10.d = PPC_PsToScalarInline(f10.d);
        goto loc_807B5E70;
    }
}

loc_807B5E68:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + 456), r0);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f7.d = PPC_PsToScalarInline(f7.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
}

loc_807B5E70:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r26 + 212));
    r0 = (r3 + 4095);
    r5 = (r4 & r0);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_807B5E94;
    }
}

loc_807B5E84:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5EB0;
    }
}

loc_807B5E94:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_34 = (r26 + 432);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_34));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_35 = (r26 + 440);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_35));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_36 = (r26 + 80);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_36, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_37 = (r26 + 88);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_37, f1.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_807B5EB0:
{
    r0 = MemoryInline::FlatRead32((r26 + 352));
}

loc_807B5EB8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_807B5F0C;
    }
}

loc_807B5EBC:
{
}

loc_807B5EC0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807B5F0C;
    }
}

loc_807B5EC4:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B5F0C;
    }
}

loc_807B5ED4:
{
    r0 = MemoryInline::FlatRead32((r26 + 472));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5EE4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B5EFC;
    }
}

loc_807B5EEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B5EF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B5EFC;
    }
}

loc_807B5EF8:
{
    f1.d = f0.d;
}

loc_807B5EFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 84));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807B5F04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B5F0C;
    }
}

loc_807B5F08:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f1.d);
}

loc_807B5F0C:
{
    r0 = MemoryInline::FlatRead32((r26 + 456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5F14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B5F28;
    }
}

loc_807B5F18:
{
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x807B5F24u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6560u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807B6078;
}

loc_807B5F28:
{
    r0 = MemoryInline::FlatRead32((r26 + 212));
    r0 = (r0 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5F30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5F50;
    }
}

loc_807B5F34:
{
    r0 = MemoryInline::FlatRead32((r26 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807B5F3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5F50;
    }
}

loc_807B5F40:
{
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x807B5F4Cu;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6C14u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807B6078;
}

loc_807B5F50:
{
    r0 = MemoryInline::FlatRead32((r26 + 472));
}

loc_807B5F58:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_807B5F74;
    }
}

loc_807B5F5C:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 416));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 416), f0.d);
}

loc_807B5F74:
{
}

loc_807B5F78:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_807B5FA0;
    }
}

loc_807B5F7C:
{
}

loc_807B5F80:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_807B5FA0;
    }
}

loc_807B5F84:
{
}

loc_807B5F88:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_807B5FA0;
    }
}

loc_807B5F8C:
{
    r3 = MemoryInline::FlatRead32((r26 + 472));
}

loc_807B5F94:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_807B5FA0;
    }
}

loc_807B5F98:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 472), r0);
}

loc_807B5FA0:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r26 + 212));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B6000;
    }
}

loc_807B5FB4:
{
    r0 = MemoryInline::FlatRead32((r26 + 472));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5FBC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B6000;
    }
}

loc_807B5FC0:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 60));
    r3 = (r1 + 12);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_40 = (r26 + 200);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_40));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_41 = (r26 + 80);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_41));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f3.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_42 = (r26 + 208);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_42));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f3.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_9, f2.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_43 = (r26 + 88);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_43));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_44 = (r26 + 80);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_44, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_45 = (r26 + 88);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_45, f1.d);
    goto loc_807B6078;
}

loc_807B6000:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 84));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B600C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B6050;
    }
}

loc_807B6010:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    r0 = MemoryInline::FlatRead32((r26 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6020:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6078;
    }
}

loc_807B6028:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6030:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B603C;
    }
}

loc_807B6034:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    goto loc_807B6040;
}

loc_807B603C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
}

loc_807B6040:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 84));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 84), f0.d);
    goto loc_807B6078;
}

loc_807B6050:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    r0 = MemoryInline::FlatRead32((r26 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6060:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6078;
    }
}

loc_807B6068:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6070:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B6078;
    }
}

loc_807B6074:
{
    MemoryInline::FlatWriteFloat32((r26 + 84), f0.d);
}

loc_807B6078:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 288);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 288));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B54F4 func_807B54F4 preserves=false fpr_mask=0xC0000000
