#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80791910(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80791910;

loc_80791910:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80791930:
{
    r27 = r3;
    r28 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80791954;
    }
}

loc_8079193C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r27 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 8440));
    ctx->lr = 0x8079194Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8065D2B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = r3;
    goto loc_8079195C;
}

loc_80791954:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r31 = MemoryInline::FlatRead32((r3 + 140));
}

loc_8079195C:
{
    r4 = (r31 * 28);
    r3 = 0x809C0000u;
    r3 = (r3 + 13984);
    r3_addr_0 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r6 = (r3 + r4);
    r30 = MemoryInline::FlatRead32((r6 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80791978:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079198C;
    }
}

loc_8079197C:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r3 = (r3 + 136);
    // inline leaf 0x807BC9C0 (13 guest instruction(s))
    r0 = 0;
    r4 = 20;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r0);
    }
    // end of inlined leaf 0x807BC9C0
    goto loc_80791BE8;
}

loc_8079198C:
{
    r0 = (r30 * 12);
    r3 = 0x808D0000u;
}

loc_80791998:
{
    r29 = MemoryInline::FlatRead32((r6 + 24));
    r3 = (r3 + 6352);
    r5 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_807919DC;
    }
}

loc_807919C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807919C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80791BE8;
    }
}

loc_807919C8:
{
    r12 = r29;
    r3 = MemoryInline::FlatRead32((r27 + 12));
    ctr = r12;
    ctx->lr = 0x807919D8u;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80791BE8;
}

loc_807919DC:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807919E4:
{
    MemoryInline::FlatWrite32((r27 + 20), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80791A00;
    }
}

loc_807919EC:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r27 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 8440));
    ctx->lr = 0x807919FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8065CEC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80791A08;
}

loc_80791A00:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 144));
}

loc_80791A08:
{
    r0 = MemoryInline::FlatRead32((r27 + 20));
    r10 = 0;
    MemoryInline::FlatWrite32((r27 + 80), r3);
    r9 = 0x809C0000u;
    r0 = (r0 * 36);
    r4 = r3;
    MemoryInline::FlatWrite32((r27 + 28), r30);
    r5 = (r27 + 32);
    r6 = MemoryInline::FlatRead8((r27 + 16));
    r7 = (r27 + 124);
    MemoryInline::FlatWrite32((r27 + 24), r31);
    r8 = 1;
    MemoryInline::FlatWrite8((r27 + 340), static_cast<uint8_t>(r10));
    r3 = MemoryInline::FlatRead32((r9 + 13848));
    r3 = (r3 + r0);
    r3 = (r3 + 72);
    ctx->lr = 0x80791A4Cu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80795E04u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80791A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80791A84;
    }
}

loc_80791A54:
{
    r4 = r27;
    r5 = 0;
    goto loc_80791A78;
}

loc_80791A60:
{
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 124), r0);
}

loc_80791A78:
{
    r0 = MemoryInline::FlatRead32((r27 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80791A80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80791A60;
    }
}

loc_80791A84:
{
    r30 = 0x808A0000u;
    r3 = r27;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 19672));
    guest_range_4 = MemoryInline::ResolveRangeHost((r27 + 88), 0, 120u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 116u, (r27 + 204), f0.d);
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r3 + 32));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 16));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r27 + 88), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r27 + 92), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r27 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r3 + 36));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r3 + 20));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r3 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r27 + 100), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r27 + 104), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r27 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r3 + 40));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 24));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r27 + 112), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r27 + 116), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r27 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r3 + 44));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r3 + 28));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r3 + 12));
    r3 = r27;
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r27 + 124), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r27 + 128), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r27 + 132), f0.d);
    ctx->lr = 0x80791B00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80791E5Cu>(ctx);
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
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 19672));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r27 + 156), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 160), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 164), f0.d);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl3_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl3_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl3_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl3_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8002140C:
{
    r3 = 0;
    goto loc_inl3_cont_800213E4;
}

loc_inl3_return:
{
}

loc_inl3_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80791B1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80791B30;
    }
}

loc_80791B20:
{
    r3 = r27;
    r12 = (r1 + 8);
    ctx->lr = 0x80791B2Cu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80021450u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
}

loc_80791B30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80791B34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80791B48;
    }
}

loc_80791B38:
{
    r12 = r29;
    r3 = MemoryInline::FlatRead32((r27 + 12));
    ctr = r12;
    ctx->lr = 0x80791B48u;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80791B48:
{
}

loc_80791B4C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80791B78;
    }
}

loc_80791B50:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r3 = (r3 + 136);
    // inline leaf 0x807BC9C0 (13 guest instruction(s))
    r0 = 0;
    r4 = 20;
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_2, 37u, (r3 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 24), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r3 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 36), r0);
    }
    // end of inlined leaf 0x807BC9C0
    r0 = MemoryInline::FlatRead8((r27 + 340));
}

loc_80791B64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80791B78;
    }
}

loc_80791B68:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r4 = MemoryInline::FlatRead32((r27 + 24));
    r3 = (r3 + 84);
    // inline leaf 0x807BA5D0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 36), r4);
    // end of inlined leaf 0x807BA5D0
}

loc_80791B78:
{
    r3 = 0x808A0000u;
    r29 = r27;
    f31.d = MemoryInline::FlatReadFloat32((r3 + 19672));
    r30 = r27;
    r28 = 0;
    goto loc_80791BB4;
}

loc_80791B90:
{
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r4 = r27;
    ctx->lr = 0x80791B9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079EA58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r30 + 44), f31.d);
    r29 = (r29 + 4);
    r28 = (r28 + 1);
    MemoryInline::FlatWriteFloat32((r30 + 48), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 52), f31.d);
    r30 = (r30 + 12);
}

loc_80791BB4:
{
    r0 = MemoryInline::FlatRead32((r27 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_80791BBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80791B90;
    }
}

loc_80791BC0:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r27 + 184));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 19684));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_1 = (r27 + 100);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_1));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 108);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_3 = (r27 + 44);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_4 = (r27 + 52);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_4, f0.d);
}

loc_80791BE8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80791910 func_80791910 preserves=false fpr_mask=0x80000000
