#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A40D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
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
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A40D0;

loc_805A40D0:
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
    f31.d = f1.d;
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r1 + 172), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 8728);
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r1 + 168), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r1 + 160), r28);
    r28 = r3;
    r3 = (r1 + 88);
    r4 = (r28 + 112);
    r5 = (r28 + 100);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 4), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, r3, f0.d);
    }
    // end of inlined leaf 0x8051486C
    r3 = (r1 + 88);
    ctx->lr = 0x805A4124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_805A4128:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_805A4308;
    }
}

loc_805A412C:
{
    r0 = MemoryInline::FlatRead16((r28 + 820));
    r5 = 0x802A0000u;
    r5 = (r5 + 16688);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A413C:
{
    MemoryInline::FlatWriteRam32((r1 + 64), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A41C8;
    }
}

loc_805A4154:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 & 1024);
}

loc_805A4164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A4194;
    }
}

loc_805A4168:
{
    r3 = r29;
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f0.d = MemoryInline::FlatReadFloat32((r31 + 412));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_805A426C;
}

loc_805A4194:
{
    r0 = (r3 & 512);
}

loc_805A4198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A426C;
    }
}

loc_805A419C:
{
    r3 = r29;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r31 + 412));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_805A426C;
}

loc_805A41C8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
}

loc_805A41D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A426C;
    }
}

loc_805A41DC:
{
    r3 = r29;
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 416));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A41F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A426C;
    }
}

loc_805A41F4:
{
    r3 = r29;
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 408));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A4208:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A426C;
    }
}

loc_805A420C:
{
    r3 = r29;
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A4220:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A4248;
    }
}

loc_805A4224:
{
    r3 = r29;
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_805A426C;
}

loc_805A4248:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 420));
    r3 = r29;
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f2.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
}

loc_805A426C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f6.d = MemoryInline::FlatReadFloat32((r28 + 336));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r28 + 340));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 344));
    f3.d = PpcFmulsInline(f5.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 20), f5.d);
    f10.d = PpcFmulsInline(f2.d, f31.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 24), f2.d);
    f9.d = PpcFmulsInline(f0.d, f31.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f10.d));
    MemoryInline::FlatWriteFloat32((r28 + 336), f8.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f9.d));
    MemoryInline::FlatWriteFloat32((r28 + 340), f7.d);
    MemoryInline::FlatWriteFloat32((r28 + 344), f6.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 20), f3.d);
    f4.d = PpcFmulsInline(f8.d, f5.d);
    f1.d = PpcFmulsInline(f7.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f3.d = PpcFmulsInline(f6.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 24), f10.d);
    f2.d = PpcFmulsInline(f8.d, f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f1.d = PpcFmulsInline(f7.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 28), f9.d);
    f0.d = PpcFmulsInline(f6.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r1 + 84), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r1 + 80), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r1 + 76), f0.d);
    }
    goto loc_805A4358;
}

loc_805A4308:
{
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r3 = (r4 + 16688);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
}

loc_805A4358:
{
    r0 = MemoryInline::FlatRead16((r28 + 820));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A4360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A43A0;
    }
}

loc_805A4364:
{
    r3 = MemoryInline::FlatRead32((r28 + 396));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = std::fabs(f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A4378:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A43A0;
    }
}

loc_805A437C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 360));
    r3 = (r1 + 104);
    r4 = (r1 + 88);
    f1.d = PpcFmulsInline(f0.d, f2.d);
    ctx->lr = 0x805A4390u;
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 76);
    r3 = (r1 + 104);
    r5 = r4;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_5));
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
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
}

loc_805A43A0:
{
    r3 = (r1 + 76);
    ctx->lr = 0x805A43A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f9.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r3 = (r1 + 48);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f8.d = PpcFmulsInline(f9.d, f0.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = PpcFmulsInline(f1.d, f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f6.d = PpcFmulsInline(f7.d, f4.d);
    f4.d = PpcFmulsInline(f9.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f7.d, f3.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 248));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 132), f6.d);
    f3.d = f2.d;
    f4.d = f2.d;
    MemoryInline::FlatWriteFloat32((r28 + 124), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 128), f5.d);
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r3 = (r1 + 32);
    r4 = (r28 + 348);
    r5 = (r28 + 124);
    ctx->lr = 0x805A4418u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8023A788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r28 + 124));
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r28 + 132));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 424));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A4454:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A4484;
    }
}

loc_805A4458:
{
    f1.d = f31.d;
    r3 = (r1 + 48);
    r4 = (r1 + 32);
    r5 = (r28 + 376);
    ctx->lr = 0x805A446Cu;
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A5C4u>(ctx);
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 376);
    r4 = (r28 + 348);
    r5 = (r28 + 360);
    ctx->lr = 0x805A447Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    MemoryInline::FlatWriteFloat32((r28 + 372), f31.d);
    goto loc_805A450C;
}

loc_805A4484:
{
    r3 = (r28 + 376);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 372));
    r5 = r3;
    r4 = (r1 + 48);
    ctx->lr = 0x805A4498u;
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A5C4u>(ctx);
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f4.d = MemoryInline::FlatReadFloat32((r28 + 360));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 128));
    f9.d = MemoryInline::FlatReadFloat32((r28 + 364));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f5.d = MemoryInline::FlatReadFloat32((r28 + 372));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 132));
    f7.d = PpcFmulsInline(f1.d, f5.d);
    f8.d = MemoryInline::FlatReadFloat32((r28 + 368));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 412));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 248));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f7.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f7.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f6.d));
    f5.d = PpcFmulsInline(f2.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f6.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A44EC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f5.d));
    MemoryInline::FlatWriteFloat32((r28 + 360), f4.d);
    MemoryInline::FlatWriteFloat32((r28 + 364), f3.d);
    MemoryInline::FlatWriteFloat32((r28 + 368), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 372), f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A450C;
    }
}

loc_805A4508:
{
    MemoryInline::FlatWriteFloat32((r28 + 372), f0.d);
}

loc_805A450C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805A4510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A452C;
    }
}

loc_805A4514:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 360));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 364));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 368));
    MemoryInline::FlatWriteFloat32((r28 + 124), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 128), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 132), f0.d);
}

loc_805A452C:
{
    r3 = (r28 + 124);
    ctx->lr = 0x805A4534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r28 + 124));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805A453C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 128));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 132));
    MemoryInline::FlatWriteFloat32((r28 + 348), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 352), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 356), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A4588;
    }
}

loc_805A4554:
{
    f6.d = MemoryInline::FlatReadFloat32((r28 + 272));
    f4.d = MemoryInline::FlatReadFloat32((r28 + 112));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 116));
    f3.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 120));
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 112), f4.d);
    MemoryInline::FlatWriteFloat32((r28 + 116), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 120), f0.d);
}

loc_805A4588:
{
    r29 = MemoryInline::FlatRead32((r28 + 824));
    r3 = r29;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x805A9A40u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r29 + 28);
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
    ctx->cr = cr;
    InvokeDirectCpu<0x805A9A40u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 824));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 76), 0, 124u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 76));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 112));
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r28 + 116));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 120));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 132));
    MemoryInline::FlatWriteFloat32((r28 + 112), f6.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 80));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    MemoryInline::FlatWriteFloat32((r28 + 116), f5.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 84));
    f4.d = PpcFmulsInline(f7.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteFloat32((r28 + 120), f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 112), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 120), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 100u, (r1 + 176));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 92u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r1 + 172));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 92u, (r1 + 168));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 84u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r1 + 164));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r1 + 160));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r1 + 196));
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0003FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0xE0001FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805A40D0 func_805A40D0 preserves=false fpr_mask=0x80000000
