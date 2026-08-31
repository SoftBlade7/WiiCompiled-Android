#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80187A24(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80187A24;

loc_80187A24:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 212u, (r1 + 212), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 128);
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
    r0 = 0;
    f30.d = f1.d;
    r25 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r0);
    r24 = r3;
    r26 = r5;
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
    r27 = r6;
    r28 = r7;
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r0);
    r3 = r25;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 60), r5);
    }
    // inline leaf 0x8018B0AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x8018B0AC
    r23 = 0x80250000u;
    r4 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r23 + 11136));
    r3 = (r1 + 40);
    r31 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x80187E50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0.d = f31.d;
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r3 = r25;
    MemoryInline::FlatWriteFloat32(r24, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 8), f0.d);
    ctx->lr = 0x80187AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8018DE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = f31.d;
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80187AD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80187AD8;
    }
}

loc_80187AD4:
{
    goto loc_80187ADC;
}

loc_80187AD8:
{
    f1.d = f0.d;
}

loc_80187ADC:
{
    MemoryInline::FlatWriteFloat32((r24 + 4), f1.d);
    r3 = r25;
    ctx->lr = 0x80187AE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8018DE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11136));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80187AF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80187AFC;
    }
}

loc_80187AF8:
{
    goto loc_80187B00;
}

loc_80187AFC:
{
    f1.d = f0.d;
}

loc_80187B00:
{
    MemoryInline::FlatWriteFloat32((r24 + 12), f1.d);
    r0 = 0;
    r3 = (r1 + 40);
    r12 = (r1 + 44);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 40), r26);
    f3.d = MemoryInline::FlatReadFloat32(r24);
    f2.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    ctx->lr = 0x80187B3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
    r5 = 0x80250000u;
    r4 = 0x80250000u;
    f27.d = MemoryInline::FlatReadFloat32((r5 + 11136));
    r29 = r3;
    f29.d = MemoryInline::FlatReadFloat64((r4 + 11144));
    r23 = 1127219200;
    goto loc_80187D98;
}

loc_80187B5C:
{
    r0 = (r29 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_80187B64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80187C9C;
    }
}

loc_80187B68:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    f1.d = f31.d;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    r3 = r25;
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f27.d);
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    // inline leaf 0x8018C304 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x8018C304
    r3 = r25;
    // inline leaf 0x8018DEC8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 92));
    // end of inlined leaf 0x8018DEC8
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 8);
    r5 = (r29 & 65535);
    r6 = (r1 + 56);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80187BB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 60));
    r29 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f0.d = MemoryInline::FlatReadFloat32(r24);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80187BD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80187BD8;
    }
}

loc_80187BD4:
{
    goto loc_80187BDC;
}

loc_80187BD8:
{
    f1.d = f0.d;
}

loc_80187BDC:
{
    MemoryInline::FlatWriteFloat32(r24, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80187BEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80187BF4;
    }
}

loc_80187BF0:
{
    goto loc_80187BF8;
}

loc_80187BF4:
{
    f1.d = f0.d;
}

loc_80187BF8:
{
    MemoryInline::FlatWriteFloat32((r24 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80187C08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80187C10;
    }
}

loc_80187C0C:
{
    goto loc_80187C14;
}

loc_80187C10:
{
    f1.d = f0.d;
}

loc_80187C14:
{
    MemoryInline::FlatWriteFloat32((r24 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80187C24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80187C2C;
    }
}

loc_80187C28:
{
    goto loc_80187C30;
}

loc_80187C2C:
{
    f1.d = f0.d;
}

loc_80187C30:
{
    MemoryInline::FlatWriteFloat32((r24 + 12), f1.d);
    r3 = r25;
    // inline leaf 0x8018C334 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x8018C334
    f2.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32(r24);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80187C50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80187C60;
    }
}

loc_80187C54:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    goto loc_80187DB4;
}

loc_80187C60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_80187C64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80187C70;
    }
}

loc_80187C68:
{
    r3 = r27;
    goto loc_80187E10;
}

loc_80187C70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_80187C74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80187C80;
    }
}

loc_80187C78:
{
    r31 = 0;
    goto loc_80187D60;
}

loc_80187C80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_80187C84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80187C90;
    }
}

loc_80187C88:
{
    r31 = 1;
    goto loc_80187D60;
}

loc_80187C90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(3));
}

loc_80187C94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80187DB4;
    }
}

loc_80187C98:
{
    goto loc_80187D60;
}

loc_80187C9C:
{
}

loc_80187CA0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80187CB0;
    }
}

loc_80187CA4:
{
    r3 = r25;
    // inline leaf 0x8018DEB0 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    // end of inlined leaf 0x8018DEB0
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
}

loc_80187CB0:
{
    r3 = r25;
    r31 = 1;
    // inline leaf 0x8018C1AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 67));
    // end of inlined leaf 0x8018C1AC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80187CC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80187CD4;
    }
}

loc_80187CC4:
{
    r3 = r25;
    // inline leaf 0x8018C1B4 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    // end of inlined leaf 0x8018C1B4
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    goto loc_80187D18;
}

loc_80187CD4:
{
    r3 = r25;
    // inline leaf 0x8018BFA0 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    // end of inlined leaf 0x8018BFA0
    f28.d = f1.d;
    r3 = r25;
    // inline leaf 0x8018B0AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x8018B0AC
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r29 & 65535);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80187CFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 80), r23);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_80187D18:
{
    f0.d = MemoryInline::FlatReadFloat32(r24);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80187D20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80187D28;
    }
}

loc_80187D24:
{
    f0.d = f31.d;
}

loc_80187D28:
{
    f2.d = MemoryInline::FlatReadFloat32((r24 + 8));
    MemoryInline::FlatWriteFloat32(r24, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f31.d);
}

loc_80187D34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80187D3C;
    }
}

loc_80187D38:
{
    f2.d = f31.d;
}

loc_80187D3C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f0.d = MemoryInline::FlatReadFloat32(r24);
    MemoryInline::FlatWriteFloat32((r24 + 8), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80187D50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80187D60;
    }
}

loc_80187D54:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    goto loc_80187DB4;
}

loc_80187D60:
{
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r1 + 40);
    r12 = (r1 + 44);
    ctx->lr = 0x80187D70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
    f3.d = MemoryInline::FlatReadFloat32(r24);
    r29 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_80187D98:
{
    r4 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r4 - r26);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_80187DB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r27))) {
        goto loc_80187B5C;
    }
}

loc_80187DB4:
{
    r0 = MemoryInline::FlatRead8(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80187DBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80187DFC;
    }
}

loc_80187DC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80187DC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80187DFC;
    }
}

loc_80187DC8:
{
    r3 = (r30 - r26);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r0 = (r0 + r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWriteFloat32(r24, f3.d);
    MemoryInline::FlatWriteFloat32((r24 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r24 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 12), f0.d);
    goto loc_80187E10;
}

loc_80187DFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r0 - r26);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r0 = (r0 + r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
}

loc_80187E10:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
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
// RECOMP_REGISTRATION base 0x80187A24 func_80187A24 preserves=false fpr_mask=0xF8000000
