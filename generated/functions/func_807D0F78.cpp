#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019B114_statefree(uint32_t, uint32_t, uint32_t, PPC_FPR);

extern "C" void func_807D0F78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_10 = 0;
    uint32_t r25_psq_tmp_11 = 0;
    uint32_t r25_psq_tmp_12 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_4 = 0;
    uint32_t r25_psq_tmp_5 = 0;
    uint32_t r25_psq_tmp_6 = 0;
    uint32_t r25_psq_tmp_7 = 0;
    uint32_t r25_psq_tmp_8 = 0;
    uint32_t r25_psq_tmp_9 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_10 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r26_psq_tmp_6 = 0;
    uint32_t r26_psq_tmp_7 = 0;
    uint32_t r26_psq_tmp_8 = 0;
    uint32_t r26_psq_tmp_9 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r27_psq_tmp_6 = 0;
    uint32_t r27_psq_tmp_7 = 0;
    uint32_t r27_psq_tmp_8 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
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
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807D0F78;

loc_807D0F78:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 160);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r31 = 0x808A0000u;
    r28 = r3;
    r25 = r4;
    r31 = (r31 + 26416);
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D0FBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D0FC8;
    }
}

loc_807D0FC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_807D0FC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0FF0;
    }
}

loc_807D0FC8:
{
    r3 = r28;
    // inline leaf 0x8059069C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8059069C
    r29 = r3;
    r3 = (r3 + 264);
    r4 = (r28 + 1344);
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_8 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8, f5.d);
    // end of inlined leaf 0x80199D30
    r3 = (r29 + 312);
    r4 = (r28 + 1392);
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_9 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_10 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_11 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_11, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_12 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_12, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_13 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_13, f5.d);
    // end of inlined leaf 0x80199D30
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    goto loc_807D148C;
}

loc_807D0FF0:
{
    r0 = MemoryInline::FlatRead8((r28 + 77));
}

loc_807D0FF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D100C;
    }
}

loc_807D0FFC:
{
    r30 = MemoryInline::FlatRead32((r28 + 1264));
    r3 = 0;
    r29 = MemoryInline::FlatRead32((r28 + 1268));
    goto loc_807D1034;
}

loc_807D100C:
{
    r0 = MemoryInline::FlatRead8((r28 + 78));
}

loc_807D1014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D1028;
    }
}

loc_807D1018:
{
    r30 = MemoryInline::FlatRead32((r28 + 1272));
    r3 = 1;
    r29 = MemoryInline::FlatRead32((r28 + 1276));
    goto loc_807D1034;
}

loc_807D1028:
{
    r30 = MemoryInline::FlatRead32((r28 + 1256));
    r3 = 2;
    r29 = MemoryInline::FlatRead32((r28 + 1260));
}

loc_807D1034:
{
    r0 = MemoryInline::FlatRead32((r28 + 1340));
}

loc_807D103C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_807D104C;
    }
}

loc_807D1040:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2644));
    MemoryInline::FlatWriteFloat32((r28 + 1336), f0.d);
    MemoryInline::FlatWrite32((r28 + 1340), r3);
}

loc_807D104C:
{
    r3 = MemoryInline::FlatRead16((r28 + 250));
    r0 = 1;
}

loc_807D1058:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(7))) {
        goto loc_807D1060;
    }
}

loc_807D105C:
{
    r0 = 0;
}

loc_807D1060:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D1064:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D1070;
    }
}

loc_807D1068:
{
    f3.d = MemoryInline::FlatReadFloat32((r28 + 88));
    goto loc_807D1074;
}

loc_807D1070:
{
    f3.d = MemoryInline::FlatReadFloat32(r31);
}

loc_807D1074:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r5 = (r1 + 12);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2828));
    r6 = (r1 + 8);
    r3 = 0;
    r4 = 15;
    ctx->gpr[0] = r0;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x807DF260u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r28 + 1336));
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807D10A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D1218;
    }
}

loc_807D10A4:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r1 + 40);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 * 28);
    r27 = (r30 + r3);
    r0 = (r0 * 28);
    r4 = r27;
    r30 = (r30 + r0);
    r3 = r30;
    // inline leaf 0x8019B114 (25 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f8.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f7.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f5.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32(r5, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r5 + 4), f5.d);
    MemoryInline::FlatWriteRamFloat32((r5 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r5 + 12), f0.d);
    // end of inlined leaf 0x8019B114
    r3 = (r1 + 40);
    r4 = r3;
    // inline leaf 0x8019AEA0 (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26344));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f0.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_0));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -26332));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(PPC_PsFromScalarInline(f4.d), PPC_PsFromScalarInline(f4.d)));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -26328));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f1.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f2.d, f2.d));
    f3.d = PPC_Frsqrte(PPC_PsToScalarInline(f2.d));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, PPC_PsFromScalarInline(f4.d)));
    f6.d = (f3.d * f3.d);
    f3.d = (f3.d * f7.d);
    f6.d = PpcFnmsubInline(f6.d, PPC_PsToScalarInline(f2.d), f8.d);
    f3.d = (f6.d * f3.d);
    PpcSetPairedFprInline(f3, PPC_PsSel(PPC_PsFromScalarInline(f3.d), f4.d, f5.d));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r4_psq_tmp_0, f1.d);
    // end of inlined leaf 0x8019AEA0
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_0 = (r30 + 16);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_0));
    r25 = (r28 + 1280);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_0 = (r27 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_0));
    r26 = (r1 + 56);
    r3 = r25;
    r5 = r25;
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f0.d));
    r4 = (r1 + 40);
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f31.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r26, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_1 = (r27 + 24);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f31.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_0 = (r26 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r26_psq_tmp_0, f1.d);
    f30.d = MemoryInline::FlatReadFloat32((r28 + 1336));
    f1.d = f30.d;
    // inline leaf 0x8019B114 (25 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f8.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f7.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f5.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteFloat32(r5, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f5.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    // end of inlined leaf 0x8019B114
    r3 = r25;
    r4 = r25;
    // inline leaf 0x8019AEA0 (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26344));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f0.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -26332));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(PPC_PsFromScalarInline(f4.d), PPC_PsFromScalarInline(f4.d)));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -26328));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f1.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f2.d, f2.d));
    f3.d = PPC_Frsqrte(PPC_PsToScalarInline(f2.d));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, PPC_PsFromScalarInline(f4.d)));
    f6.d = (f3.d * f3.d);
    f3.d = (f3.d * f7.d);
    f6.d = PpcFnmsubInline(f6.d, PPC_PsToScalarInline(f2.d), f8.d);
    f3.d = (f6.d * f3.d);
    PpcSetPairedFprInline(f3, PPC_PsSel(PPC_PsFromScalarInline(f3.d), f4.d, f5.d));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f1.d);
    // end of inlined leaf 0x8019AEA0
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_0 = (r25 + 16);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_0));
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    r5 = (r1 + 40);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f30.d), f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_1 = (r25 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r25_psq_tmp_2 = (r25 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_2, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_1));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f30.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r25_psq_tmp_3 = (r25 + 24);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_3, f2.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 * 28);
    r0 = (r0 * 28);
    r27 = (r29 + r3);
    r25 = (r29 + r0);
    r4 = r27;
    r3 = r25;
    // inline leaf 0x8019B114 (25 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f8.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f7.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f5.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32(r5, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r5 + 4), f5.d);
    MemoryInline::FlatWriteRamFloat32((r5 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r5 + 12), f0.d);
    // end of inlined leaf 0x8019B114
    r3 = (r1 + 40);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8019AEA0u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_4 = (r25 + 16);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_4));
    r29 = (r28 + 1308);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_2));
    r3 = r29;
    r5 = r29;
    r4 = (r1 + 40);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f31.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r26, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_5 = (r25 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_3 = (r27 + 24);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f31.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_2 = (r26 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r26_psq_tmp_2, f1.d);
    f30.d = MemoryInline::FlatReadFloat32((r28 + 1336));
    f1.d = f30.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8019B114u) && KnownTranslatedCpuCall<0x8019B114u>::kAvailable && !KnownTranslatedCpuCall<0x8019B114u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8019B114u>()) {
        func_8019B114_statefree(r3, r4, r5, f1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8019B114u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r29;
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8019AEA0u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_0 = (r29 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 1336));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f3.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2644));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMadds0Inline(f3.d, PPC_PsFromScalarInline(f30.d), f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2, f3.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f3.d, f2.d));
    MemoryInline::FlatWriteFloat32((r28 + 1336), f0.d);
    PpcSetPairedFprInline(f3, PPC_PsMadds0Inline(f3.d, PPC_PsFromScalarInline(f30.d), f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_3 = (r29 + 24);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3, f3.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_807D12DC;
}

loc_807D1218:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r25 = (r28 + 1280);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r5 = r25;
    r3 = (r3 * 28);
    r0 = (r0 * 28);
    r27 = (r30 + r3);
    r26 = (r30 + r0);
    r4 = r27;
    r3 = r26;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8019B114u) && KnownTranslatedCpuCall<0x8019B114u>::kAvailable && !KnownTranslatedCpuCall<0x8019B114u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8019B114u>()) {
        func_8019B114_statefree(r3, r4, r5, f1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8019B114u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r25;
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8019AEA0u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_4 = (r26 + 16);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_4));
    r30 = (r28 + 1308);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_4 = (r27 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_4));
    f1.d = f31.d;
    r5 = r30;
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f31.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r25_psq_tmp_6 = (r25 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_6, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_5 = (r26 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_5 = (r27 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f31.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r25_psq_tmp_7 = (r25 + 24);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_7, f2.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 * 28);
    r0 = (r0 * 28);
    r26 = (r29 + r3);
    r25 = (r29 + r0);
    r4 = r26;
    r3 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8019B114u) && KnownTranslatedCpuCall<0x8019B114u>::kAvailable && !KnownTranslatedCpuCall<0x8019B114u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8019B114u>()) {
        func_8019B114_statefree(r3, r4, r5, f1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8019B114u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8019AEA0u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_8 = (r25 + 16);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_6 = (r26 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_6));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f31.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_2 = (r30 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_9 = (r25 + 24);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_9));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_7 = (r26 + 24);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_7));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f31.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_3 = (r30 + 24);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3, f1.d);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_807D12DC:
{
    r3 = (r1 + 72);
    r4 = (r28 + 1280);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8019A4E0u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1296));
    r3 = r28;
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1300));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1304));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D1314:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D1344;
    }
}

loc_807D1318:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D1320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D1344;
    }
}

loc_807D1324:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D132C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D1344;
    }
}

loc_807D1330:
{
    r3 = (r28 + 276);
    r4 = (r1 + 72);
    r5 = (r28 + 1344);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_807D13B4;
}

loc_807D1344:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    r4 = (r1 + 72);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r5 = (r28 + 1344);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r28 + 276);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
}

loc_807D13B4:
{
    r3 = (r1 + 72);
    r4 = (r28 + 1308);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8019A4E0u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1324));
    r3 = r28;
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1328));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1332));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D13EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D141C;
    }
}

loc_807D13F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D13F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D141C;
    }
}

loc_807D13FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D1404:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D141C;
    }
}

loc_807D1408:
{
    r3 = (r28 + 276);
    r4 = (r1 + 72);
    r5 = (r28 + 1392);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    goto loc_807D148C;
}

loc_807D141C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    r4 = (r1 + 72);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r5 = (r28 + 1392);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r28 + 276);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
}

loc_807D148C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 160);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -28), 0, 28u, true, false);
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0001FF gpr_write=0xFE0009FB gpr_return=0x00000018 fpr_read=0xC000C1F3 fpr_write=0xC000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D0F78 func_807D0F78 preserves=false fpr_mask=0xC0000000
