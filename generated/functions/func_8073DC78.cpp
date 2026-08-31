#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073DC78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8073DC78;

loc_8073DC78:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 144);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = 0x808A0000u;
    r31 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10400));
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    r30 = r3;
    r31 = (r31 + -20416);
    r6 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    r7 = MemoryInline::FlatRead32((r5 + -10520));
    r5 = MemoryInline::FlatRead32((r7 + 12));
}

loc_8073DCCC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8073DCE0;
    }
}

loc_8073DCD0:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_8073DCD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8073DCE0;
    }
}

loc_8073DCDC:
{
    r6 = 1;
}

loc_8073DCE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8073DCE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073DFC4;
    }
}

loc_8073DCE8:
{
    r5 = 0x808A0000u;
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10400));
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 9), 0, 91u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r1 + 48), static_cast<uint8_t>(r4));
    r4 = (r1 + 9);
    r28 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r1 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r1 + 29), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 23u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 23u, (r1 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_1, 27u, (r1 + 36), r6);
    }
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r1 + 40), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r1 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r1 + 42), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 35u, (r1 + 44), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 11u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 15u, (r1 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 11u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 7u, (r1 + 16), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 43u, (r1 + 52), f0.d);
    r29 = MemoryInline::FlatRead8((r3 + 8));
    r3 = r7;
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r1 + 28), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r1 + 56), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r1 + 73), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 67u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 67u, (r1 + 76), r6);
        MemoryInline::WriteResolved32(guest_range_1, 71u, (r1 + 80), r6);
    }
    MemoryInline::WriteResolved8(guest_range_1, 75u, (r1 + 84), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 76u, (r1 + 85), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 77u, (r1 + 86), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 79u, (r1 + 88), r6);
    MemoryInline::WriteResolved8(guest_range_1, 83u, (r1 + 92), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 87u, (r1 + 96), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 55u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 59u, (r1 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 55u, (r1 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 51u, (r1 + 60), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 63u, (r1 + 72), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 9), static_cast<uint8_t>(r29));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051760Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8073DD90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073DDBC;
    }
}

loc_8073DD94:
{
    r0 = MemoryInline::FlatRead8((r1 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073DD9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073DDBC;
    }
}

loc_8073DDA0:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = (r1 + 56);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8073DDB8u;
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
    ctx->fpr[30] = f30;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r3;
}

loc_8073DDBC:
{
    r3 = 0x809C0000u;
    r4 = (r1 + 9);
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r5 = (r28 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80517590u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 9), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWrite32((r30 + 16), r0);
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 11), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 12), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 13), static_cast<uint8_t>(r29));
}

loc_8073DE8C:
{
    r4 = 0x808A0000u;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 10404));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r28 = MemoryInline::FlatRead8((r1 + 48));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f30.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r29 = MemoryInline::FlatRead8((r30 + 11));
    r27 = MemoryInline::FlatRead8((r30 + 10));
    r26 = MemoryInline::FlatRead8((r30 + 9));
    r3 = MemoryInline::FlatRead32((r3 + 11240));
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8073996Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 108), r3);
    r5 = 0x808A0000u;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r4 = r27;
    f2.d = MemoryInline::FlatReadFloat64((r5 + 10408));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B7Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8073DF18:
{
    f1.d = (-(f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073DF28;
    }
}

loc_8073DF20:
{
    f2.d = f0.d;
    goto loc_8073DF34;
}

loc_8073DF28:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8073DF2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8073DF34;
    }
}

loc_8073DF30:
{
    f2.d = f1.d;
}

loc_8073DF34:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 40), f2.d);
}

loc_8073DF40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8073DF64;
    }
}

loc_8073DF44:
{
}

loc_8073DF48:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8073DF64;
    }
}

loc_8073DF4C:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073DF54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073DF64;
    }
}

loc_8073DF58:
{
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8073C394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
}

loc_8073DF64:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f1.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8073DF74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073DF80;
    }
}

loc_8073DF78:
{
    f0.d = f2.d;
    goto loc_8073DF8C;
}

loc_8073DF80:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8073DF84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8073DF8C;
    }
}

loc_8073DF88:
{
    f0.d = f1.d;
}

loc_8073DF8C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r27));
}

loc_8073DF90:
{
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073DFA0;
    }
}

loc_8073DF98:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r27));
}

loc_8073DF9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073DFB0;
    }
}

loc_8073DFA0:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10400));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_8073DFB8;
}

loc_8073DFB0:
{
    r3 = r30;
    ctx->lr = 0x8073DFB8u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8073D6ECu>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8073DFB8:
{
    f1.d = f30.d;
    r3 = r30;
    ctx->lr = 0x8073DFC4u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073D98Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8073DFC4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    r3 = MemoryInline::FlatRead32((r3 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073DFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073DFE0;
    }
}

loc_8073DFD8:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    MemoryInline::FlatWrite32((r30 + 52), r0);
}

loc_8073DFE0:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10400));
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 64u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8073DC78 func_8073DC78 preserves=false fpr_mask=0xC0000000
