#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80045040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r10_psq_tmp_2 = 0;
    uint32_t r10_psq_tmp_3 = 0;
    uint32_t r10_psq_tmp_4 = 0;
    uint32_t r10_psq_tmp_5 = 0;
    uint32_t r11_psq_tmp_0 = 0;
    uint32_t r11_psq_tmp_1 = 0;
    uint32_t r11_psq_tmp_2 = 0;
    uint32_t r11_psq_tmp_3 = 0;
    uint32_t r11_psq_tmp_4 = 0;
    uint32_t r11_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_10 = 0;
    uint32_t r28_psq_tmp_11 = 0;
    uint32_t r28_psq_tmp_12 = 0;
    uint32_t r28_psq_tmp_13 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_7 = 0;
    uint32_t r28_psq_tmp_8 = 0;
    uint32_t r28_psq_tmp_9 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_10 = 0;
    uint32_t r29_psq_tmp_11 = 0;
    uint32_t r29_psq_tmp_12 = 0;
    uint32_t r29_psq_tmp_13 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_7 = 0;
    uint32_t r29_psq_tmp_8 = 0;
    uint32_t r29_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
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
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_5 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint32_t r7_psq_tmp_4 = 0;
    uint32_t r7_psq_tmp_5 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r8_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_4 = 0;
    uint32_t r8_psq_tmp_5 = 0;
    uint32_t r9_psq_tmp_0 = 0;
    uint32_t r9_psq_tmp_1 = 0;
    uint32_t r9_psq_tmp_2 = 0;
    uint32_t r9_psq_tmp_3 = 0;
    uint32_t r9_psq_tmp_4 = 0;
    uint32_t r9_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80045040;

loc_80045040:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 240);
    // inline leaf 0x8002159C (7 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -24), r26);
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x8002159C
    r9 = 1127219200;
    r0 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 200), r9);
    r28 = r4;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30016));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    r0 = (r3 + 2);
    r29 = r5;
    r30 = r6;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    r26 = r7;
    MemoryInline::FlatWriteRam32((r1 + 208), r9);
    r31 = r8;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r5 = (r0 & 65535);
    r3 = 152;
    r4 = 0;
    PpcSetPairedFprInline(f31, PPC_Fres(PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f31.d, f31.d));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f31.d, f31.d));
    PpcSetPairedFprInline(f31, PPC_PsNmsubInline(PPC_PsFromScalarInline(f0.d), f1.d, f2.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r0 = (r30 & 4);
}

loc_800450BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80045260;
    }
}

loc_800450C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_800450C4:
{
    r27 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800453FC;
    }
}

loc_800450CC:
{
    r0 = (r26 + 1);
    r4 = (r1 + 164);
    r5 = (r1 + 152);
    r6 = (r1 + 176);
    r7 = (r1 + 188);
    r8 = (r1 + 116);
    r9 = (r1 + 104);
    r10 = (r1 + 128);
    r11 = (r1 + 140);
    r12 = (r30 & 1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30016));
    r3 = -872349696;
    ctr = r0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800453FC;
    }
}

loc_80045104:
{
    f6.d = MemoryInline::FlatReadFloat32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8004510C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2));
    f7.d = MemoryInline::FlatReadFloat32((r31 + 4));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_3 = (r28 + 12);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_4 = (r28 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_4));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f7.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_5 = (r28 + 20);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_5));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f4.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f7.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f4.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f0.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_6 = (r28 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_6));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r6_psq_tmp_2 = (r6 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r6_psq_tmp_2, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r7, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f2.d, f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 188));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 192));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r7_psq_tmp_2 = (r7 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r7_psq_tmp_2, f3.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_2, f4.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800451AC;
    }
}

loc_8004518C:
{
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 36));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f31.d), f0.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
}

loc_800451AC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 12);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800451B4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f7.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_4 = (r29 + 20);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_4));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_5 = (r29 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f7.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r9));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_2 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_2, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r10, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r10));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_2 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_2, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f2.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_6 = (r29 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_6));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_2 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_2, f4.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r11, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r11_psq_tmp_2 = (r11 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r11_psq_tmp_2, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 144));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80045250;
    }
}

loc_80045230:
{
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f31.d), f0.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
}

loc_80045250:
{
    r31 = (r31 + 8);
    r27 = (r27 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80045104;
    }
}

loc_8004525C:
{
    goto loc_800453FC;
}

loc_80045260:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80045264:
{
    r27 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800453FC;
    }
}

loc_8004526C:
{
    r0 = (r26 + 1);
    r4 = (r1 + 68);
    r5 = (r1 + 56);
    r6 = (r1 + 80);
    r7 = (r1 + 92);
    r8 = (r1 + 20);
    r9 = (r1 + 8);
    r10 = (r1 + 32);
    r11 = (r1 + 44);
    r12 = (r30 & 1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30016));
    r3 = -872349696;
    ctr = r0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800453FC;
    }
}

loc_800452A4:
{
    f6.d = MemoryInline::FlatReadFloat32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800452AC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_8 = (r29 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_8));
    f7.d = MemoryInline::FlatReadFloat32((r31 + 4));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_9 = (r29 + 12);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_9));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_10 = (r29 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_10));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f7.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_11 = (r29 + 20);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_11));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f4.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f7.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r6, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f4.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_4, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f0.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_12 = (r29 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_12));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r6_psq_tmp_4 = (r6 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r6_psq_tmp_4, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r7, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f2.d, f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 96));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r7_psq_tmp_4 = (r7 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r7_psq_tmp_4, f3.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_4, f4.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004534C;
    }
}

loc_8004532C:
{
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f31.d), f0.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
}

loc_8004534C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_8 = (r28 + 12);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80045354:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_9 = (r28 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_9));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f7.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_10 = (r28 + 20);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_10));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_11 = (r28 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_11));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f7.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r9));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_4 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_4, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r10, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r10));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_4 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_4, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f2.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_12 = (r28 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_12));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_4 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_4, f4.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r11, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r11_psq_tmp_4 = (r11 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r11_psq_tmp_4, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800453F0;
    }
}

loc_800453D0:
{
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 36));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f31.d), f0.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
}

loc_800453F0:
{
    r31 = (r31 + 8);
    r27 = (r27 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800452A4;
    }
}

loc_800453FC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 240);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 216), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r1 + 240));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC001FFF gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x800000FF fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80045040 func_80045040 preserves=false fpr_mask=0x80000000
