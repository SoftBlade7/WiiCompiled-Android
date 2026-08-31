#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059A278(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059A278;

loc_8059A278:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    f31.d = f1.d;
    MemoryInline::WriteResolved32(guest_range_2, 156u, (r1 + 156), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 8040);
    MemoryInline::WriteResolved32(guest_range_2, 152u, (r1 + 152), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_2, 148u, (r1 + 148), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 144u, (r1 + 144), r28);
    r28 = r3;
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    r4 = MemoryInline::FlatRead32((r28 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    r3 = r28;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 48), f0.d);
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    r4 = MemoryInline::FlatRead32((r28 + 16));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r1 + 80), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r1 + 84), f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r1 + 68), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r1 + 88), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r1 + 72), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r1 + 76), f1.d);
    }
    r0 = MemoryInline::FlatRead32((r28 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8059A32C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059A338;
    }
}

loc_8059A330:
{
    f0.d = (-(f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
}

loc_8059A338:
{
    r4 = r30;
    r3 = (r1 + 56);
    r5 = (r1 + 80);
    ctx->gpr[0] = r0;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    r5 = MemoryInline::FlatRead32((r28 + 16));
    r3 = (r1 + 96);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 28));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->lr = 0x8059A374u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 20);
    r4 = (r1 + 96);
    r5 = (r1 + 68);
    // inline leaf 0x8059A4F8 (31 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f9.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8059A4F8
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r5 = (r1 + 68);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    // inline leaf 0x8059A4F8 (31 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r4 + 32));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r4 + 36));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r4 + 40));
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f9.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 24));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8059A4F8
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r28 + 60), f0.d);
    r30 = MemoryInline::FlatRead32((r28 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 64), f0.d);
    r3 = r30;
    f30.d = MemoryInline::FlatReadFloat32((r28 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 68), f0.d);
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    f2.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8059A3F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8059A3F8;
    }
}

loc_8059A3F4:
{
    MemoryInline::FlatWriteFloat32((r30 + 68), f30.d);
}

loc_8059A3F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8059A404:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059A40C;
    }
}

loc_8059A408:
{
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
}

loc_8059A40C:
{
    r3 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 26252));
    r4 = (r28 + 60);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f3.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 72), f2.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    r3 = MemoryInline::FlatRead32((r28 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 60));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 64));
    f5.d = PpcFmulsInline(f6.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 68));
    f3.d = PpcFmulsInline(f6.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r3 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059A4A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059A4C8;
    }
}

loc_8059A4A4:
{
    r3 = MemoryInline::FlatRead32((r28 + 20));
    r5 = (r1 + 56);
    ctx->lr = 0x8059A4B0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80599690u>(ctx);
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r28 + 44), f0.d);
}

loc_8059A4C8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r29 = MemoryInline::FlatRead32((r1 + 148));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    r28 = MemoryInline::FlatRead32((r1 + 144));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8059A278 func_8059A278 preserves=false fpr_mask=0xC0000000
