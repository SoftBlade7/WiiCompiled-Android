#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054F41C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054F41C;

loc_8054F41C:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 128);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = MemoryInline::FlatRead8((r3 + 25));
    r30 = 0x808B0000u;
    r31 = 0x80890000u;
    r22 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8054F44C:
{
    r29 = r3;
    r30 = (r30 + 15552);
    r31 = (r31 + 3448);
    r24 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054F470;
    }
}

loc_8054F460:
{
    r0 = MemoryInline::FlatRead8((r30 + 179));
}

loc_8054F468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054F470;
    }
}

loc_8054F46C:
{
    r24 = 1;
}

loc_8054F470:
{
}

loc_8054F474:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8054F48C;
    }
}

loc_8054F478:
{
}

loc_8054F47C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_8054F48C;
    }
}

loc_8054F480:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8054F488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054F4C4;
    }
}

loc_8054F48C:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F3B8u>(ctx);
    r3 = 1;
    r4 = 4;
    r5 = 1;
    r6 = 5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017277Cu>(ctx);
    r3 = (r1 + 24);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_5, f2.d);
    // end of inlined leaf 0x80199D04
    r3 = (r1 + 24);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80173214u>(ctx);
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_8054F4C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8054F4C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054F530;
    }
}

loc_8054F4CC:
{
    r28 = MemoryInline::FlatRead32((r29 + 8));
    r3 = r28;
    ctx->lr = 0x8054F4D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054C660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r25 = 0;
    r23 = 0;
    goto loc_8054F524;
}

loc_8054F4E4:
{
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r27 = 0;
    r3_addr_2 = (r3 + r23);
    r26 = MemoryInline::FlatRead32(r3_addr_2);
    r22 = r26;
}

loc_8054F4F4:
{
    r3 = MemoryInline::FlatRead32((r22 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8054F4FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054F50C;
    }
}

loc_8054F500:
{
    r0 = MemoryInline::FlatRead16((r26 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r0 & 255);
    ctx->lr = 0x8054F50Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054ADF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8054F50C:
{
    r27 = (r27 + 1);
    r22 = (r22 + 4);
}

loc_8054F518:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(21))) {
        goto loc_8054F4F4;
    }
}

loc_8054F51C:
{
    r23 = (r23 + 4);
    r25 = (r25 + 1);
}

loc_8054F524:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
}

loc_8054F52C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_8054F4E4;
    }
}

loc_8054F530:
{
}

loc_8054F534:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8054F638;
    }
}

loc_8054F538:
{
    r0 = MemoryInline::FlatRead8((r30 + 179));
    r25 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054F544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054F638;
    }
}

loc_8054F548:
{
    r3 = r25;
    ctx->lr = 0x8054F550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054DAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f31.d = MemoryInline::FlatReadFloat32((r31 + 300));
    r27 = 0;
    r24 = 0;
    r28 = -872349696;
    goto loc_8054F62C;
}

loc_8054F564:
{
    r3 = MemoryInline::FlatRead32((r25 + 4));
    r3_addr_5 = (r3 + r24);
    r26 = MemoryInline::FlatRead32(r3_addr_5);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 32));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8054F574:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054F624;
    }
}

loc_8054F578:
{
    f0.d = PPC_Fctiwz(f0.d);
    r7 = MemoryInline::FlatRead8((r30 + 176));
    r6 = MemoryInline::FlatRead8((r30 + 177));
    r4 = (r1 + 16);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r30 + 178));
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 300), 0, 164u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 160u, (r31 + 460));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 40));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 160u, (r31 + 460));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 40));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 160u, (r31 + 460));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 300));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 44));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 160u, (r31 + 460));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8054F624:
{
    r24 = (r24 + 4);
    r27 = (r27 + 1);
}

loc_8054F62C:
{
    r0 = MemoryInline::FlatRead32((r25 + 8));
}

loc_8054F634:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8054F564;
    }
}

loc_8054F638:
{
    r22 = MemoryInline::FlatRead32((r29 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8054F640:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054F784;
    }
}

loc_8054F644:
{
    r0 = MemoryInline::FlatRead8((r22 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054F64C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054F784;
    }
}

loc_8054F650:
{
    r6 = (r31 + 496);
    r8 = MemoryInline::FlatRead8((r31 + 496));
    r7 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r3 = 4;
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r29 = -872349696;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 300), 0, 196u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r3 = 128;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 300));
    r4 = 0;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r5 = 4;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 192u, (r31 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 192u, (r31 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r6 = MemoryInline::FlatRead32((r22 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r6);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 192u, (r31 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 300));
    r6 = MemoryInline::FlatRead32((r22 + 12));
    f1.d = MemoryInline::FlatReadFloat32(r6);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 192u, (r31 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    guest_range_3 = MemoryInline::ResolveRangeHost((r22 + 4), 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 4u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r22 + 12));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r22 + 8));
        }
    }
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 4u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r22 + 12));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r22 + 8));
        }
    }
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r22 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r22 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r22 + 4));
        }
    }
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 300));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r22 + 8));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8054F784:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8054F41C func_8054F41C preserves=false fpr_mask=0x80000000
