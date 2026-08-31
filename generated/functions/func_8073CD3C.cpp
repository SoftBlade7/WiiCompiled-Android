#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073CD3C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8073CD3C;

loc_8073CD3C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 96);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead8(r4);
    r31 = 0x808D0000u;
    r29 = r3;
    r30 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073CD74:
{
    r31 = (r31 + -20416);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073CE54;
    }
}

loc_8073CD7C:
{
    r26 = MemoryInline::FlatRead8((r4 + 16));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10400));
    r3 = 0x809C0000u;
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 9), 0, 47u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r4 = (r1 + 9);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r1 + 29), static_cast<uint8_t>(r0));
    r28 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 23u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 23u, (r1 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_1, 27u, (r1 + 36), r0);
    }
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r1 + 40), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r1 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r1 + 42), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 35u, (r1 + 44), r0);
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r1 + 48), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 43u, (r1 + 52), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 11u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 15u, (r1 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 11u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 7u, (r1 + 16), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r1 + 28), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 9), static_cast<uint8_t>(r26));
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
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8073CDE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073CE14;
    }
}

loc_8073CDEC:
{
    r0 = MemoryInline::FlatRead8((r1 + 42));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073CDF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073CE14;
    }
}

loc_8073CDF8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = (r1 + 12);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8073CE10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

loc_8073CE14:
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
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWrite32((r29 + 16), r0);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r29 + 11), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r29 + 12), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r29 + 13), static_cast<uint8_t>(r26));
    goto loc_8073CF00;
}

loc_8073CE54:
{
    r6 = MemoryInline::FlatRead8((r3 + 9));
    r5 = 0x809C0000u;
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r6));
    r28 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 10));
    MemoryInline::FlatWrite8((r4 + 17), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    r3 = MemoryInline::FlatRead32((r5 + -10520));
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
    MemoryInline::FlatWrite32((r30 + 20), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8073CE88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073CEB4;
    }
}

loc_8073CE8C:
{
    r0 = MemoryInline::FlatRead8((r30 + 30));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073CE94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073CEB4;
    }
}

loc_8073CE98:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8073CEB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

loc_8073CEB4:
{
    r3 = 0x809C0000u;
    r4 = (r1 + 8);
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
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r0 = (r28 & 255);
    MemoryInline::FlatWrite32((r30 + 24), r0);
    r6 = MemoryInline::FlatRead8((r29 + 12));
    r5 = MemoryInline::FlatRead8((r29 + 11));
    r4 = MemoryInline::FlatRead8((r29 + 10));
    r0 = MemoryInline::FlatRead8((r29 + 9));
    MemoryInline::FlatWrite8((r29 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r29 + 12), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r29 + 11), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r30 + 24));
    MemoryInline::FlatWrite32((r29 + 16), r0);
}

loc_8073CF00:
{
    r4 = 0x808A0000u;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 10404));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r28 = MemoryInline::FlatRead8((r30 + 36));
    f30.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r30 = MemoryInline::FlatRead8((r29 + 11));
    r27 = MemoryInline::FlatRead8((r29 + 10));
    r26 = MemoryInline::FlatRead8((r29 + 9));
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r5 = 0x808A0000u;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r4 = r27;
    f2.d = MemoryInline::FlatReadFloat64((r5 + 10408));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
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
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 40), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 36), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8073CF8C:
{
    f1.d = (-(f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073CF9C;
    }
}

loc_8073CF94:
{
    f2.d = f0.d;
    goto loc_8073CFA8;
}

loc_8073CF9C:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8073CFA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8073CFA8;
    }
}

loc_8073CFA4:
{
    f2.d = f1.d;
}

loc_8073CFA8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 40), f2.d);
}

loc_8073CFB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8073CFD8;
    }
}

loc_8073CFB8:
{
}

loc_8073CFBC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8073CFD8;
    }
}

loc_8073CFC0:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073CFC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073CFD8;
    }
}

loc_8073CFCC:
{
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    MemoryInline::FlatWriteFloat32((r29 + 40), f1.d);
}

loc_8073CFD8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f1.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8073CFE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073CFF4;
    }
}

loc_8073CFEC:
{
    f0.d = f2.d;
    goto loc_8073D000;
}

loc_8073CFF4:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8073CFF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8073D000;
    }
}

loc_8073CFFC:
{
    f0.d = f1.d;
}

loc_8073D000:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8073D004:
{
    MemoryInline::FlatWriteFloat32((r29 + 40), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073D014;
    }
}

loc_8073D00C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r27));
}

loc_8073D010:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073D024;
    }
}

loc_8073D014:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10400));
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
    goto loc_8073D02C;
}

loc_8073D024:
{
    r3 = r29;
    ctx->lr = 0x8073D02Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

loc_8073D02C:
{
    f1.d = f30.d;
    r3 = r29;
    ctx->lr = 0x8073D038u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073D98Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 64u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 96));
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
    r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
// RECOMP_REGISTRATION base 0x8073CD3C func_8073CD3C preserves=false fpr_mask=0xC0000000
