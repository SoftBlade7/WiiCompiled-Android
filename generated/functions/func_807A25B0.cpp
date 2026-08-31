#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A25B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_10 = 0;
    uint32_t r28_psq_tmp_11 = 0;
    uint32_t r28_psq_tmp_12 = 0;
    uint32_t r28_psq_tmp_13 = 0;
    uint32_t r28_psq_tmp_14 = 0;
    uint32_t r28_psq_tmp_15 = 0;
    uint32_t r28_psq_tmp_16 = 0;
    uint32_t r28_psq_tmp_17 = 0;
    uint32_t r28_psq_tmp_18 = 0;
    uint32_t r28_psq_tmp_19 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_20 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_7 = 0;
    uint32_t r28_psq_tmp_8 = 0;
    uint32_t r28_psq_tmp_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807A25B0;

loc_807A25B0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = MemoryInline::FlatRead32((r3 + 120));
    r4 = 0x809C0000u;
    r31 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r4 + 12088));
    r0 = (r5 & 32768);
}

loc_807A25D8:
{
    r28 = r3;
    r31 = (r31 + 20992);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A25EC;
    }
}

loc_807A25E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    goto loc_807A25F0;
}

loc_807A25EC:
{
    r0 = 12;
}

loc_807A25F0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r27 = MemoryInline::FlatRead32((r3 + 352));
    r3 = (r4 + r0);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r29 = (r29_rot_0 & 1);
    r30 = MemoryInline::FlatRead32((r3 + 16));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 1);
    // inline leaf 0x807D2DDC (2 guest instruction(s))
    r3 = 4;
    // end of inlined leaf 0x807D2DDC
    r3 = (r27 - r3);
    r26 = (r3 + 2);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_807A2618:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_807A2758;
    }
}

loc_807A261C:
{
    r3 = (r27 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 152));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807A2648:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A2650;
    }
}

loc_807A264C:
{
    goto loc_807A2654;
}

loc_807A2650:
{
    f3.d = f0.d;
}

loc_807A2654:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r7 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    r7 = (r7 + 12104);
    r5 = (r0 * 116);
    r3 = MemoryInline::FlatRead32((r28 + 116));
    f0.d = PpcFmulsInline(f3.d, f1.d);
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (r3 | 64);
    r3 = MemoryInline::FlatRead32((r28 + 164));
    r5 = (r7 + r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 68));
    r0 = (r0 * 116);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807A2690:
{
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWrite32((r28 + 116), r4);
    r4 = (r7 + r0);
    MemoryInline::FlatWriteFloat32((r28 + 104), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 100), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 96), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 92), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 180), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2704;
    }
}

loc_807A26D4:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = r30;
    r5 = (r28 + 68);
    r6 = (r28 + 188);
    r0 = (r0 * 116);
    r4 = 1;
    r7 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 72));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x807A2700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807D171Cu>(ctx);
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
    cr = ctx->cr;
    goto loc_807A273C;
}

loc_807A2704:
{
    r0 = MemoryInline::FlatRead8((r28 + 108));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = (r0 * 584);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 68);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 52);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 76);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_3 = (r28 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 60);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_4 = (r28 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_4, f0.d);
}

loc_807A273C:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 76));
    MemoryInline::FlatWriteFloat32((r28 + 140), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 144), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 148), f0.d);
    goto loc_807A2A90;
}

loc_807A2758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807A275C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A2798;
    }
}

loc_807A2760:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_807A2798;
    }
}

loc_807A2764:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r7 = 0x809C0000u;
    r7 = (r7 + 12104);
    r3 = r30;
    r0 = (r0 * 116);
    r5 = (r28 + 68);
    r6 = (r28 + 188);
    r4 = 0;
    r7 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 72));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x807A2798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807D171Cu>(ctx);
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
    cr = ctx->cr;
}

loc_807A2798:
{
    r3 = (r28 + 360);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl2_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl2_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl2_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl2_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8002140C:
{
    r3 = 0;
    goto loc_inl2_cont_800213E4;
}

loc_inl2_return:
{
}

loc_inl2_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807A27A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A27B8;
    }
}

loc_807A27A8:
{
    r3 = r28;
    r12 = (r28 + 360);
    ctx->lr = 0x807A27B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
}

loc_807A27B8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_6 = (r28 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_6));
    r30 = (r1 + 56);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_7 = (r28 + 188);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_7));
    r5 = r30;
    r3 = (r28 + 80);
    r4 = (r28 + 200);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f0.d);
    PpcSetPairedFprInline(f3, f0.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_8 = (r28 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_8));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_9 = (r28 + 196);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_9));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_1 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_1, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_10 = (r28 + 140);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_10));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_11 = (r28 + 148);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_11));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_12 = (r28 + 140);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_12, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_13 = (r28 + 148);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_13, f0.d);
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
    r6 = MemoryInline::FlatRead32((r1 + 56));
    r3 = r30;
    r5 = MemoryInline::FlatRead32((r1 + 60));
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807A2830u;
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
    r7 = MemoryInline::FlatRead32((r28 + 152));
    r27 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_14 = (r28 + 140);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_14));
    r3 = r27;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r6 = r27;
    r4 = (r28 + 200);
    r5 = (r1 + 44);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r27, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_1 = (r7 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_15 = (r28 + 148);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_15));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_1 = (r27 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_1, f0.d);
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
    InvokeDirectCpu<0x807DE8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = r27;
    r4 = r30;
    r6 = r27;
    r5 = (r1 + 32);
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
    InvokeDirectCpu<0x807DE8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_16 = (r28 + 140);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_16));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 160u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r31 + 140));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_17 = (r28 + 148);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_17));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_18 = (r28 + 140);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_18, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_4));
    SetCRFloatResident(cr, 0, f4.d, f5.d);
}

loc_807A28AC:
{
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_19 = (r28 + 148);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_19, f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A28C0;
    }
}

loc_807A28B8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_807A28F4;
}

loc_807A28C0:
{
    r3 = (r26 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 152u, (r31 + 152));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807A28F4:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807A28FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A2904;
    }
}

loc_807A2900:
{
    goto loc_807A2918;
}

loc_807A2904:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807A290C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A2914;
    }
}

loc_807A2910:
{
    goto loc_807A2918;
}

loc_807A2914:
{
    f4.d = f0.d;
}

loc_807A2918:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807A2920:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 140));
    f3.d = PpcFmulsInline(f0.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 148));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 140), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r28 + 144), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 148), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2964;
    }
}

loc_807A295C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r31 + 144));
    goto loc_807A2968;
}

loc_807A2964:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r31 + 148));
}

loc_807A2968:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807A2970:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 140));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 140), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A298C;
    }
}

loc_807A2984:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r31 + 144));
    goto loc_807A2990;
}

loc_807A298C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r31 + 148));
}

loc_807A2990:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807A2998:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 144));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 144), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A29B4;
    }
}

loc_807A29AC:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r31 + 144));
    goto loc_807A29B8;
}

loc_807A29B4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r31 + 148));
}

loc_807A29B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(44));
}

loc_807A29C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 148));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 148), f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807A2A90;
    }
}

loc_807A29D4:
{
    r0 = MemoryInline::FlatRead32((r28 + 124));
    r27 = 0;
    r26 = 0;
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r28 + 124), r0);
}

loc_807A29E8:
{
    r0 = MemoryInline::FlatRead32((r28 + 156));
}

loc_807A29F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A2A34;
    }
}

loc_807A29F4:
{
    r3 = (r0 + r26);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807A2A08:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807A2A18;
    }
}

loc_807A2A0C:
{
}

loc_807A2A10:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_807A2A18;
    }
}

loc_807A2A14:
{
    r0 = 0;
}

loc_807A2A18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A2A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2A28;
    }
}

loc_807A2A20:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_807A2A2C;
}

loc_807A2A28:
{
    r3 = 0;
}

loc_807A2A2C:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072930u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_807A2A34:
{
    r0 = MemoryInline::FlatRead32((r28 + 168));
}

loc_807A2A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A2A80;
    }
}

loc_807A2A40:
{
    r3 = (r0 + r26);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807A2A54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807A2A64;
    }
}

loc_807A2A58:
{
}

loc_807A2A5C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_807A2A64;
    }
}

loc_807A2A60:
{
    r0 = 0;
}

loc_807A2A64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A2A68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2A74;
    }
}

loc_807A2A6C:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_807A2A78;
}

loc_807A2A74:
{
    r3 = 0;
}

loc_807A2A78:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072930u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_807A2A80:
{
    r27 = (r27 + 1);
    r26 = (r26 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(2));
}

loc_807A2A8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807A29E8;
    }
}

loc_807A2A90:
{
    r11 = (r1 + 112);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A25B0 func_807A25B0 preserves=true fpr_mask=0x00000000
