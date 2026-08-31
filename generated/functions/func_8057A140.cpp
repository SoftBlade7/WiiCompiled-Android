#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057A140(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057A140;

loc_8057A140:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r1 + 292), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 272u, (r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 256u, (r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r6 = 0x802A0000u;
    MemoryInline::WriteResolved32(guest_range_0, 252u, (r1 + 252), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r1 + 248), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 22768);
    MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r29);
    r29 = r3;
    r6 = (r6 + 16664);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r1 + 176), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r4);
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r1 + 184), r0);
    }
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = (r1 + 176);
    r3 = (r3 + 240);
    r5 = r4;
    ctx->lr = 0x8057A1ACu;
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    r4 = MemoryInline::FlatRead32((r29 + 56));
    r3 = (r1 + 152);
    r0 = MemoryInline::FlatRead32((r29 + 60));
    MemoryInline::FlatWriteRam32((r1 + 168), r0);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 176));
    MemoryInline::FlatWriteRam32((r1 + 164), r4);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    r0 = MemoryInline::FlatRead32((r29 + 64));
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 184));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 180));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f2.d);
    ctx->lr = 0x8057A214u;
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
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead16((r29 + 596));
    r4 = MemoryInline::FlatRead32(r29);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite16((r29 + 596), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r7 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r7 & 1088);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A244:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057A60C;
    }
}

loc_8057A248:
{
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r6 & 262144);
}

loc_8057A250:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A26C;
    }
}

loc_8057A254:
{
    r0 = (r6 & -2147483648);
}

loc_8057A258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057A26C;
    }
}

loc_8057A25C:
{
    r3 = MemoryInline::FlatRead32((r29 + 600));
    r0 = MemoryInline::FlatRead8((r3 + 58));
}

loc_8057A268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A288;
    }
}

loc_8057A26C:
{
    r0 = (r6 & 1073741824);
}

loc_8057A270:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A288;
    }
}

loc_8057A274:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 120));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r3 + 28));
}

loc_8057A284:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_8057A2A4;
    }
}

loc_8057A288:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r3 & 134217728);
}

loc_8057A290:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A2A4;
    }
}

loc_8057A294:
{
    r0 = (r7 & 2048);
}

loc_8057A298:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A2A4;
    }
}

loc_8057A29C:
{
    r0 = (r3 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A2A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057A60C;
    }
}

loc_8057A2A4:
{
    r3 = MemoryInline::FlatRead32(r29);
    r5 = MemoryInline::FlatRead32((r1 + 152));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r1 + 156));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r1 + 160));
    r0 = (r0 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A2C0:
{
    MemoryInline::FlatWriteRam32((r1 + 140), r5);
    MemoryInline::FlatWriteRam32((r1 + 144), r4);
    MemoryInline::FlatWriteRam32((r1 + 148), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057A2E8;
    }
}

loc_8057A2D0:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 232));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
}

loc_8057A2E8:
{
    r4 = MemoryInline::FlatRead32((r1 + 164));
    r7 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r1 + 168));
    r3 = (r1 + 192);
    r0 = MemoryInline::FlatRead32((r1 + 172));
    MemoryInline::FlatWriteRam32((r1 + 128), r4);
    r4 = (r1 + 128);
    r7 = (r7 + 16664);
    r6 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWriteRam32((r1 + 132), r5);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 160));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 456));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    MemoryInline::FlatWriteRam32((r1 + 116), r6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteRam32((r1 + 120), r5);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8057A344u;
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
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
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
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 140), 0, 96u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r1 + 224));
    r3 = (r1 + 104);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 140));
    r4 = r3;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r1 + 208));
    r5 = (r1 + 164);
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r1 + 192));
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r1 + 228));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 144));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r1 + 196));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r1 + 212));
    r6 = 1;
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 92u, (r1 + 232));
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 148));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r1 + 216));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r1 + 200));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    ctx->lr = 0x8057A3D0u;
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
    r7 = ctx->gpr[7];
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
    f30.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f31.d = MemoryInline::FlatReadFloat32((r29 + 92));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f31.d));
    f12.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f12.d));
    f9.d = MemoryInline::FlatReadFloat32((r29 + 100));
    f2.d = PpcFmulsInline(f5.d, f5.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f9.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = PpcFmulsInline(f11.d, f11.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f5.d);
    f3.d = PpcFmulsInline(f8.d, f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f11.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057A41C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
}

loc_8057A428:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A590;
    }
}

loc_8057A42C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A43C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057A590;
    }
}

loc_8057A440:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 188));
    f7.d = PpcFmulsInline(f31.d, f13.d);
    f6.d = PpcFmulsInline(f12.d, f30.d);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 140));
    f5.d = PpcFmulsInline(f0.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 144));
    f3.d = PpcFmulsInline(f0.d, f11.d);
    f1.d = PpcFmulsInline(f0.d, f8.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 148));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 92));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 100));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    MemoryInline::FlatWriteFloat32((r29 + 140), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    r3 = (r29 + 92);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f6.d = PpcFmulsInline(f9.d, f30.d);
    MemoryInline::FlatWriteFloat32((r29 + 144), f4.d);
    f5.d = PpcFmulsInline(f31.d, f10.d);
    f4.d = PpcFmulsInline(f12.d, f10.d);
    MemoryInline::FlatWriteFloat32((r29 + 148), f3.d);
    f3.d = PpcFmulsInline(f9.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    MemoryInline::FlatWriteFloat32((r29 + 92), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 96), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 100), f0.d);
    ctx->lr = 0x8057A4D0u;
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
    f4.d = MemoryInline::FlatReadFloat32((r30 + 552));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 140));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 144));
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 148));
    f2.d = PpcFmulsInline(f1.d, f4.d);
    f10.d = MemoryInline::FlatReadFloat32((r29 + 92));
    f1.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 140), f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 144), f2.d);
    f8.d = MemoryInline::FlatReadFloat32((r29 + 96));
    MemoryInline::FlatWriteFloat32((r29 + 148), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 100));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f4.d = PpcFmulsInline(f0.d, f9.d);
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f1.d = PpcFmulsInline(f10.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f5.d = PpcFmulsInline(f8.d, f5.d);
    f9.d = PpcFmulsInline(f10.d, f9.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = PpcFmulsInline(f0.d, f6.d);
    f2.d = PpcFmulsInline(f2.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f2.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057A568:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057A5B8;
    }
}

loc_8057A56C:
{
    MemoryInline::FlatWriteFloat32((r29 + 92), f7.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteFloat32((r29 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteFloat32((r29 + 100), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 148), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 144), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 140), f1.d);
    goto loc_8057A5B8;
}

loc_8057A590:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    MemoryInline::FlatWriteFloat32((r29 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteFloat32((r29 + 96), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 148), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 144), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 140), f0.d);
}

loc_8057A5B8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A5C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057A5E8;
    }
}

loc_8057A5CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A5D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057A5E8;
    }
}

loc_8057A5D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 536870912);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8057A5E8:
{
    r3 = (r29 + 116);
    r4 = (r29 + 92);
    r5 = (r1 + 164);
    r6 = 1;
    ctx->lr = 0x8057A5FCu;
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
    r7 = ctx->gpr[7];
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
    r0 = MemoryInline::FlatRead16((r29 + 596));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite16((r29 + 596), static_cast<uint16_t>(r0));
    goto loc_8057A624;
}

loc_8057A60C:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 100));
    MemoryInline::FlatWriteFloat32((r29 + 116), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 120), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 124), f0.d);
}

loc_8057A624:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A634:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057A68C;
    }
}

loc_8057A638:
{
    f7.d = MemoryInline::FlatReadFloat32((r1 + 164));
    r4 = (r1 + 56);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 92));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 100));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    r3 = MemoryInline::FlatRead32((r29 + 600));
    ctx->lr = 0x8057A68Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80575D7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8057A68C:
{
    r5 = MemoryInline::FlatRead32((r1 + 152));
    r3 = (r29 + 128);
    r0 = MemoryInline::FlatRead32((r1 + 160));
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    r4 = MemoryInline::FlatRead32((r1 + 156));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f8.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = PpcFmulsInline(f8.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f6.d = MemoryInline::FlatReadFloat32((r29 + 76));
    f3.d = PpcFmulsInline(f5.d, f2.d);
    f4.d = PpcFmulsInline(f8.d, f7.d);
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f6.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f9.d);
    f3.d = PpcFmulsInline(f9.d, f8.d);
    f4.d = PpcFmulsInline(f2.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f6.d);
    f0.d = PpcFmulsInline(f9.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f7.d);
    f2.d = PpcFmulsInline(f7.d, f6.d);
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 128), f6.d);
    MemoryInline::FlatWriteFloat32((r29 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 136), f0.d);
    ctx->lr = 0x8057A724u;
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
    r0 = MemoryInline::FlatRead8((r29 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A72C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057A840;
    }
}

loc_8057A730:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 80), 0, 24u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r29 + 92));
    r3 = (r1 + 8);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r29 + 80));
    r4 = (r29 + 92);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r29 + 96));
    r5 = (r29 + 80);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r29 + 84));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r29 + 100));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r29 + 88));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r4 + 4));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r5 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r5);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, r4);
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
    ctx->lr = 0x8057A790u;
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
    f2.d = f30.d;
    ctx->lr = 0x8057A798u;
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
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057A7A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057A7A8;
    }
}

loc_8057A7A4:
{
    goto loc_8057A7AC;
}

loc_8057A7A8:
{
    f1.d = (-(f1.d));
}

loc_8057A7AC:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 56), 0, 48u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r29 + 92));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r29 + 84));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r29 + 100));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r29 + 80));
    f9.d = PpcFmulsInline(f5.d, f0.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r29 + 96));
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r29 + 88));
    f6.d = PpcFmulsInline(f3.d, f4.d);
    f7.d = PpcFmulsInline(f8.d, f4.d);
    f5.d = PpcFmulsInline(f5.d, f0.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r29 + 56));
    f4.d = PpcFmulsInline(f8.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r29 + 60));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f7.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r29 + 64));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f2.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f8.d, f3.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f8.d);
    f4.d = PpcFmulsInline(f7.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f6.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057A828:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057A830;
    }
}

loc_8057A82C:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 12));
}

loc_8057A830:
{
    f5.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    MemoryInline::FlatWriteFloat32((r29 + 160), f0.d);
}

loc_8057A840:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 160));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8057A84C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057A86C;
    }
}

loc_8057A850:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 160), f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057A860:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057A888;
    }
}

loc_8057A864:
{
    MemoryInline::FlatWriteFloat32((r29 + 160), f1.d);
    goto loc_8057A888;
}

loc_8057A86C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057A888;
    }
}

loc_8057A870:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 160), f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057A880:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057A888;
    }
}

loc_8057A884:
{
    MemoryInline::FlatWriteFloat32((r29 + 160), f1.d);
}

loc_8057A888:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 256));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r0 = MemoryInline::FlatRead32((r1 + 292));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057A140 func_8057A140 preserves=false fpr_mask=0xC0000000
