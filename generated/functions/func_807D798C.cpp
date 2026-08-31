#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D798C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
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
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
    uint32_t r3_psq_tmp_17 = 0;
    uint32_t r3_psq_tmp_18 = 0;
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
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807D798C;

loc_807D798C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -240), 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 244u, (r1 + 244), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 224u, (r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 224);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 204u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 208u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 216u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 220u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead8((r3 + 574));
    r31 = 0x808A0000u;
    r28 = r3;
    r29 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D79BC:
{
    r31 = (r31 + 29696);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D7FE4;
    }
}

loc_807D79C4:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead8((r5 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D79D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7FE4;
    }
}

loc_807D79D4:
{
    r0 = (r3 + 72);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(72)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_807D79D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D79E8;
    }
}

loc_807D79DC:
{
    r3 = MemoryInline::FlatRead32(r4);
    r4 = r0;
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5, f5.d);
    // end of inlined leaf 0x80199D30
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
}

loc_807D79E8:
{
    r0 = MemoryInline::FlatRead8((r28 + 608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D79F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7A0C;
    }
}

loc_807D79F4:
{
    r3 = r28;
    r4 = (r28 + 72);
    r6 = (r28 + 616);
    r5 = 0;
    r7 = 0;
    ctx->lr = 0x807D7A0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807D7458u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_807D7A0C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1008));
}

loc_807D7A14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D7A2C;
    }
}

loc_807D7A18:
{
    r0 = MemoryInline::FlatRead8((r28 + 1009));
}

loc_807D7A20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D7A2C;
    }
}

loc_807D7A24:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_807D7AA8;
}

loc_807D7A2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 84));
    r4 = (r28 + 72);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 100));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    r0 = MemoryInline::FlatRead8((r28 + 1008));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D7A54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7A6C;
    }
}

loc_807D7A58:
{
    r3 = r28;
    r5 = (r1 + 56);
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807D77D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
}

loc_807D7A6C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1009));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D7A74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7A90;
    }
}

loc_807D7A78:
{
    r3 = r28;
    r4 = (r28 + 72);
    r5 = (r1 + 56);
    r6 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807D77D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
}

loc_807D7A90:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r28 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r28 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r28 + 116), f0.d);
}

loc_807D7AA8:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r5 = (r1 + 116);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 84));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 100));
    r3 = (r4 + 276);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 116));
    r4 = (r4 + 748);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
    r27 = MemoryInline::FlatRead32((r28 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f2.d);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 16), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r27 + 72));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r27 + 76));
        }
    }
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D7AE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D7B50;
    }
}

loc_807D7AE8:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 20));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r27 + 16));
        }
    }
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r27 + 76));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r27 + 72));
        }
    }
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_807D7B0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D7B18;
    }
}

loc_807D7B10:
{
    f1.d = f0.d;
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_807D7B2C;
}

loc_807D7B18:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f5.d) - PPC_PsToScalarInline(f0.d)));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f3.d)));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) + f1.d));
}

loc_807D7B2C:
{
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f0.d));
}

loc_807D7B30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D7B38;
    }
}

loc_807D7B34:
{
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_807D7BB4;
}

loc_807D7B38:
{
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f5.d));
}

loc_807D7B3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D7B44;
    }
}

loc_807D7B40:
{
    f5.d = PPC_PsToScalarInline(f5.d);
    goto loc_807D7B48;
}

loc_807D7B44:
{
    f5.d = f1.d;
}

loc_807D7B48:
{
    f0.d = f5.d;
    goto loc_807D7BB4;
}

loc_807D7B50:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r27 + 16));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 20));
        }
    }
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r27 + 72));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r27 + 76));
        }
    }
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_807D7B74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D7B80;
    }
}

loc_807D7B78:
{
    f1.d = f0.d;
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_807D7B94;
}

loc_807D7B80:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f5.d) - PPC_PsToScalarInline(f0.d)));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f3.d)));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) + f1.d));
}

loc_807D7B94:
{
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f0.d));
}

loc_807D7B98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D7BA0;
    }
}

loc_807D7B9C:
{
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_807D7BB4;
}

loc_807D7BA0:
{
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f5.d));
}

loc_807D7BA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D7BAC;
    }
}

loc_807D7BA8:
{
    f5.d = PPC_PsToScalarInline(f5.d);
    goto loc_807D7BB0;
}

loc_807D7BAC:
{
    f5.d = f1.d;
}

loc_807D7BB0:
{
    f0.d = f5.d;
}

loc_807D7BB4:
{
    r27 = (r1 + 116);
    r30 = (r1 + 128);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    r3 = (r1 + 144);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    r4 = (r28 + 964);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 176));
    PpcSetPairedFprInline(f7, PPC_PsSubInline(f4.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_1 = (r27 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_1));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f7.d);
    PpcSetPairedFprInline(f7, PPC_PsSubInline(f4.d, f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 132));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    f6.d = PpcFmulsInline(f1.d, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_2 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_2, f7.d);
    f4.d = PpcFmulsInline(f2.d, f3.d);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f8.d, PPC_PsFromScalarInline(f0.d)));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 136));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f8.d);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f7.d, PPC_PsFromScalarInline(f0.d)));
    f2.d = PpcFmulsInline(f1.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_3 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_3, f8.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 352));
    MemoryInline::FlatWriteFloat32((r28 + 84), f3.d);
    r5 = MemoryInline::FlatRead32((r28 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 100), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 116), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 284));
    MemoryInline::FlatWriteFloat32((r28 + 964), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 300));
    MemoryInline::FlatWriteFloat32((r28 + 968), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 316));
    MemoryInline::FlatWriteFloat32((r28 + 972), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 780));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 980));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x807D7C8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r28 + 72);
    r3 = (r1 + 144);
    r5 = r4;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    r5 = MemoryInline::FlatRead32((r28 + 16));
    r3 = (r1 + 144);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 84));
    r4 = (r28 + 976);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 276));
    MemoryInline::FlatWriteFloat32((r28 + 976), f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r28 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 292));
    MemoryInline::FlatWriteFloat32((r28 + 980), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r28 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 308));
    MemoryInline::FlatWriteFloat32((r28 + 984), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 352));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 776));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 976));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f4.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f5.d);
    ctx->lr = 0x807D7CF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r28 + 72);
    r3 = (r1 + 144);
    r5 = r4;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r3 = (r28 + 72);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 356));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 1204));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x807D7D18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807DED14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    r4 = MemoryInline::FlatRead32((r28 + 16));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f2.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_4 = (r30 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f2.d, f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 128));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_5 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_5, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r28 + 84), f4.d);
    r30 = MemoryInline::FlatRead32((r28 + 20));
    MemoryInline::FlatWriteFloat32((r28 + 100), f3.d);
    MemoryInline::FlatWriteFloat32((r28 + 116), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 864));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f4.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D7D68:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D7D7C;
    }
}

loc_807D7D74:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 152));
    goto loc_807D7D80;
}

loc_807D7D7C:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 156));
}

loc_807D7D80:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 860));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D7D8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D7D98;
    }
}

loc_807D7D90:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 160));
    goto loc_807D7D9C;
}

loc_807D7D98:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 164));
}

loc_807D7D9C:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 148));
    r3 = (r1 + 92);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 12u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 92), f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    r5 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 100), f2.d);
    }
    f2.d = MemoryInline::FlatReadFloat32((r4 + 864));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 860));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 856));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 100), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 96), f1.d);
    }
    r6 = MemoryInline::FlatRead32((r28 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 196));
    r4 = (r6 + 276);
    f4.d = MemoryInline::FlatReadFloat32((r6 + 192));
    f5.d = MemoryInline::FlatReadFloat32((r6 + 188));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 100), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 96), f1.d);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
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
    r6 = (r1 + 92);
    r5 = (r1 + 104);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    r3 = (r1 + 80);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    r4 = (r1 + 44);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 76));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r5_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r6_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_4, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteFloat32((r28 + 84), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 100), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 116), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    r6 = MemoryInline::FlatRead32((r1 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    r5 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    ctx->lr = 0x807D7E8Cu;
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
    ctx->xer = xer;
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
    r5 = MemoryInline::FlatRead32((r28 + 16));
    r3 = (r1 + 68);
    r4 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 284));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 300));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    r6 = MemoryInline::FlatRead32((r1 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 316));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    r5 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->lr = 0x807D7ECCu;
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
    ctx->xer = xer;
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
    r3 = (r1 + 80);
    r4 = (r1 + 68);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_8 = (r4 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_8));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f2.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807D7EF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D7F04;
    }
}

loc_807D7EFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 172));
    goto loc_807D7F08;
}

loc_807D7F04:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 176));
}

loc_807D7F08:
{
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    r5 = MemoryInline::FlatRead32((r28 + 16));
    r3 = (r1 + 80);
    r4 = (r1 + 20);
    MemoryInline::FlatWriteFloat32((r5 + 952), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    r6 = MemoryInline::FlatRead32((r1 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 112));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    r5 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x807D7F50u;
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
    ctx->xer = xer;
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
    r5 = MemoryInline::FlatRead32((r28 + 16));
    r3 = (r1 + 68);
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 292));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    r6 = MemoryInline::FlatRead32((r1 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 308));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    r5 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807D7F90u;
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
    ctx->xer = xer;
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
    r4 = (r1 + 80);
    r5 = (r1 + 68);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_9 = (r4 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_9));
    r3 = (r28 + 72);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r5_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r5));
    r4 = MemoryInline::FlatRead32((r28 + 16));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f1.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    MemoryInline::FlatWriteFloat32((r4 + 964), PPC_PsToScalarInline(f0.d));
    r4 = MemoryInline::FlatRead32((r28 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 168));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 964));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 964), f0.d);
    r4 = MemoryInline::FlatRead32(r29);
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_10 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_14 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_14));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_11 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_11, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_15 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_15));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_12 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_12, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_16 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_16));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_13 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_13, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_17 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_17));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_14 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_14, f5.d);
    // end of inlined leaf 0x80199D30
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 121), static_cast<uint8_t>(r0));
}

loc_807D7FE4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 224);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 224));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF80DFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807D798C func_807D798C preserves=false fpr_mask=0x80000000
