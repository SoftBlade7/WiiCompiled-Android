#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80585AF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80585AF8;

loc_80585AF8:
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
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolved32(guest_range_2, 140u, (r1 + 140), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::WriteResolved32(guest_range_2, 136u, (r1 + 136), r30);
    r30 = r3;
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r1 + 132), r29);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80585B44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80586088;
    }
}

loc_80585B48:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80585B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80586088;
    }
}

loc_80585B54:
{
    r0 = (r5 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80585B58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80585E84;
    }
}

loc_80585B5C:
{
    r4 = 0x802A0000u;
    r3 = (r1 + 104);
    r4 = (r4 + 16688);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r5 = r3;
    r3 = (r1 + 104);
    r4 = r3;
    r6 = 1;
    r5 = (r5 + 68);
    ctx->lr = 0x80585B8Cu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r5 = (r3 + 104);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    r4 = (r1 + 104);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80585BF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = f31.d;
    ctx->lr = 0x80585BFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80585C04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80585C0C;
    }
}

loc_80585C08:
{
    goto loc_80585C10;
}

loc_80585C0C:
{
    f1.d = (-(f1.d));
}

loc_80585C10:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r31 + 88));
    r3 = 0x808B0000u;
    f29.d = MemoryInline::FlatReadFloat32((r3 + 23040));
    r3 = r30;
    f30.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r5 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 68));
    r4 = (r5 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 228u, (r31 + 228));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80585C68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80585C7C;
    }
}

loc_80585C6C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r31 + 116));
    f29.d = PpcFmulsInline(f29.d, f1.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_80585C7C:
{
    SetCRFloatResident(cr, 0, f30.d, f29.d);
}

loc_80585C80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80585E04;
    }
}

loc_80585C84:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_80585C94:
{
    r4 = 0x808B0000u;
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 23040));
    r29 = (r4 + 23040);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f29.d = PpcFmulsInline(f0.d, f1.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    r3 = (r1 + 88);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f5.d = PpcFmulsInline(f29.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r31 + 84));
    f3.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f4.d = PpcFmulsInline(f4.d, f31.d);
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    ctx->lr = 0x80585CE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = r3;
    f10.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    r3 = (r1 + 72);
    f31.d = MemoryInline::FlatReadFloat32((r4 + 240));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::FlatReadFloat32((r4 + 244));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    f11.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f9.d = MemoryInline::FlatReadFloat32((r4 + 248));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f6.d = PpcFmulsInline(f31.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f31.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f31.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r3 = (r1 + 72);
    ctx->lr = 0x80585D94u;
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
    InvokeDirectCpu<0x8023A168u>(ctx);
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
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    r4 = (r4 + 16640);
    MemoryInline::FlatWriteFloat32((r3 + 164), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 168), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 172), f0.d);
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 240), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 256), f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 260), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 264), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 268), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 240), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 244), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 248), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 252), f0.d);
    }
}

loc_80585E04:
{
    r4 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -524289);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    ctx->lr = 0x80585E20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[13] = f13;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805860BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f13 = ctx->fpr[13];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80585E30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80586088;
    }
}

loc_80585E34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80585E38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80586088;
    }
}

loc_80585E3C:
{
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -268435457);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -2049);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -67108865);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_80586088;
}

loc_80585E84:
{
    r0 = (r5 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80585E88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80586088;
    }
}

loc_80585E8C:
{
    r0 = (r5 & 5632);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80585E90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80586088;
    }
}

loc_80585E94:
{
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = MemoryInline::FlatRead32((r3 + 104));
    r0 = MemoryInline::FlatRead32((r3 + 108));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    MemoryInline::FlatWriteRam32((r1 + 56), r4);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r3 = r30;
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = MemoryInline::FlatRead32((r3 + 68));
    r0 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f3.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f0.d = PpcFmulsInline(f3.d, f3.d);
    r0 = MemoryInline::FlatRead32((r3 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80585EF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80585F00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80586088;
    }
}

loc_80585F04:
{
    r3 = r30;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80585F14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80586088;
    }
}

loc_80585F18:
{
    r3 = (r1 + 44);
    ctx->lr = 0x80585F20u;
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
    r3 = (r1 + 56);
    r5 = (r1 + 44);
    r4 = r3;
    r6 = 1;
    ctx->lr = 0x80585F34u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80585F40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80586088;
    }
}

loc_80585F44:
{
    r3 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r4 = (r3 + 16688);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r5 = (r1 + 56);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80585FA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = f31.d;
    ctx->lr = 0x80585FB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r31);
}

loc_80585FB8:
{
    r3 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r4 = (r3 + 16688);
    f7.d = MemoryInline::FlatReadFloat32((r3 + 16688));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = r30;
    f4.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80586044:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80586050;
    }
}

loc_80586048:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    goto loc_80586054;
}

loc_80586050:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
}

loc_80586054:
{
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    r0 = 0;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = (r3 & -524289);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 | 268435456);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_80586088:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    r29 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[13] = f13;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80585AF8 func_80585AF8 preserves=false fpr_mask=0xE0000000
