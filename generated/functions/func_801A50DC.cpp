#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A50DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A50DC;

loc_801A50DC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 84), r0);
    r0 = 1127219200;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 76), r31);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r29);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r28);
    }
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 32), r0);
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65C0u>(ctx);
    r3 = ctx->gpr[3];
    r29 = 0x80340000u;
    r29 = (r29 + 29736);
    r28 = MemoryInline::FlatRead32((r29 + 8));
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r30 = (r3 + 1);
    r4 = 32;
    r3 = r30;
    // inline leaf 0x801A1104 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -29024));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -29024), r0);
    // end of inlined leaf 0x801A1104
    r4 = r28;
    r5 = r30;
    ctx->lr = 0x801A5138u;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F1F0u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r29 + 8), r3);
    r3 = 655360;
    r3 = (r3 + 4100);
    r4 = 32;
    // inline leaf 0x801A1104 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -29024));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -29024), r0);
    // end of inlined leaf 0x801A1104
    r31 = r3;
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r4 = r3;
    r3 = r31;
    ctx->lr = 0x801A5160u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A5D34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 589824;
    r4 = 32;
    r3 = (r3 + 24576);
    // inline leaf 0x801A1104 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -29024));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -29024), r0);
    // end of inlined leaf 0x801A1104
    r4 = MemoryInline::FlatRead8((r29 + 6));
    r30 = r3;
    r5 = MemoryInline::FlatRead8((r29 + 4));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    r3 = MemoryInline::FlatRead8((r29 + 5));
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -26312), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -26256));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -26300));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f6.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -26296));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -26304));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f13.d = PpcFmulsInline(f5.d, f7.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -26288));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -26284));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f10.d = PpcFmulsInline(f11.d, f3.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -26280));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f6.d = PpcFmulsInline(f6.d, f7.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -26276));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f5.d = PpcFmulsInline(f11.d, f5.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -26272));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = PpcFmulsInline(f3.d, f4.d);
    r0 = MemoryInline::FlatRead8((r29 + 7));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f12.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f6.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -26308));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -26312));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f4.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -26292));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -26268));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r5));
    SetCRFloatResident(cr, 0, f4.d, f7.d);
}

loc_801A5278:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A5294;
    }
}

loc_801A5290:
{
    goto loc_801A52A8;
}

loc_801A5294:
{
    SetCRFloatResident(cr, 0, f4.d, f9.d);
}

loc_801A5298:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A52A0;
    }
}

loc_801A529C:
{
    goto loc_801A52A4;
}

loc_801A52A0:
{
    f9.d = f4.d;
}

loc_801A52A4:
{
    f7.d = f9.d;
}

loc_801A52A8:
{
    f0.d = PPC_Fctiwz(f7.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -26264));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_801A52B4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A52C8;
    }
}

loc_801A52C4:
{
    goto loc_801A52DC;
}

loc_801A52C8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -26308));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_801A52D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A52D8;
    }
}

loc_801A52D4:
{
    goto loc_801A52DC;
}

loc_801A52D8:
{
    f3.d = f2.d;
}

loc_801A52DC:
{
    f0.d = PPC_Fctiwz(f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -26264));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_801A52E8:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A52FC;
    }
}

loc_801A52F8:
{
    goto loc_801A5310;
}

loc_801A52FC:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -26308));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_801A5304:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A530C;
    }
}

loc_801A5308:
{
    goto loc_801A5310;
}

loc_801A530C:
{
    f2.d = f1.d;
}

loc_801A5310:
{
    f0.d = PPC_Fctiwz(f2.d);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r4 = r30;
    r5 = 0;
    r0 = 20;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r3 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r6 = MemoryInline::FlatRead8((r1 + 29));
    r7 = MemoryInline::FlatRead8((r1 + 30));
    r3 = MemoryInline::FlatRead8((r1 + 28));
}

loc_801A5348:
{
    ctr = r0;
}

loc_801A534C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 64u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r4, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r4 + 1), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r4 + 3), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r4 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r4 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r4 + 8), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r4 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r4 + 11), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r4 + 12), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r4 + 13), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r4 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r4 + 15), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r4 + 16), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 17u, (r4 + 17), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 18u, (r4 + 18), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 19u, (r4 + 19), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 20u, (r4 + 20), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 21u, (r4 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 22u, (r4 + 22), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 23u, (r4 + 23), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 24u, (r4 + 24), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 25u, (r4 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 26u, (r4 + 26), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 27u, (r4 + 27), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 28u, (r4 + 28), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 29u, (r4 + 29), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 30u, (r4 + 30), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 31u, (r4 + 31), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 32u, (r4 + 32), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 33u, (r4 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 34u, (r4 + 34), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 35u, (r4 + 35), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 36u, (r4 + 36), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 37u, (r4 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 38u, (r4 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 39u, (r4 + 39), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 40u, (r4 + 40), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 41u, (r4 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 42u, (r4 + 42), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 43u, (r4 + 43), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 44u, (r4 + 44), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 45u, (r4 + 45), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 46u, (r4 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 47u, (r4 + 47), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 48u, (r4 + 48), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 49u, (r4 + 49), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 50u, (r4 + 50), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 51u, (r4 + 51), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 52u, (r4 + 52), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 53u, (r4 + 53), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 54u, (r4 + 54), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 55u, (r4 + 55), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 56u, (r4 + 56), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 57u, (r4 + 57), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 58u, (r4 + 58), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 59u, (r4 + 59), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 60u, (r4 + 60), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 61u, (r4 + 61), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 62u, (r4 + 62), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 63u, (r4 + 63), static_cast<uint8_t>(r7));
    r4 = (r4 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A534C;
    }
}

loc_801A5454:
{
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(480));
}

loc_801A545C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A5348;
    }
}

loc_801A5460:
{
    r3 = r30;
    ctx->lr = 0x801A5468u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BAAB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 640;
    r4 = 480;
    ctx->lr = 0x801A5474u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A4DC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x801A5478u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BA9A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x801A547Cu;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BABA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r3;
}

loc_801A5480:
{
    ctx->lr = 0x801A5484u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BABA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 - r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801A548C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A5480;
    }
}

loc_801A5490:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r5 = MemoryInline::FlatRead8(r29);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r4 = MemoryInline::FlatRead8((r29 + 1));
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -26312), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -26256));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -26300));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f6.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -26296));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -26304));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f13.d = PpcFmulsInline(f5.d, f7.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -26288));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -26284));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f10.d = PpcFmulsInline(f11.d, f3.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r2 + -26280));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f6.d = PpcFmulsInline(f6.d, f7.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -26276));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f5.d = PpcFmulsInline(f11.d, f5.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -26272));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = PpcFmulsInline(f3.d, f4.d);
    r0 = MemoryInline::FlatRead8((r29 + 3));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f12.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f6.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -26308));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -26312));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f4.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -26292));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r2 + -26268));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    SetCRFloatResident(cr, 0, f4.d, f7.d);
}

loc_801A5594:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A55B0;
    }
}

loc_801A55AC:
{
    goto loc_801A55C4;
}

loc_801A55B0:
{
    SetCRFloatResident(cr, 0, f4.d, f9.d);
}

loc_801A55B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A55BC;
    }
}

loc_801A55B8:
{
    goto loc_801A55C0;
}

loc_801A55BC:
{
    f9.d = f4.d;
}

loc_801A55C0:
{
    f7.d = f9.d;
}

loc_801A55C4:
{
    f0.d = PPC_Fctiwz(f7.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -26264));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_801A55D0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A55E4;
    }
}

loc_801A55E0:
{
    goto loc_801A55F8;
}

loc_801A55E4:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -26308));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_801A55EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A55F4;
    }
}

loc_801A55F0:
{
    goto loc_801A55F8;
}

loc_801A55F4:
{
    f3.d = f2.d;
}

loc_801A55F8:
{
    f0.d = PPC_Fctiwz(f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -26264));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_801A5604:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A5618;
    }
}

loc_801A5614:
{
    goto loc_801A562C;
}

loc_801A5618:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -26308));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_801A5620:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A5628;
    }
}

loc_801A5624:
{
    goto loc_801A562C;
}

loc_801A5628:
{
    f2.d = f1.d;
}

loc_801A562C:
{
    f0.d = PPC_Fctiwz(f2.d);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = r30;
    r10 = MemoryInline::FlatRead32((r29 + 8));
    r6 = (r1 + 20);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r4 = 640;
    r5 = 480;
    r7 = 48;
    r0 = fctiwzword1;
    r8 = 100;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r9 = MemoryInline::FlatRead16((r31 + 14));
    ctx->lr = 0x801A5670u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A4AA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 589824;
    r3 = r30;
    r4 = (r4 + 24576);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r3 = 0;
    ctx->lr = 0x801A5688u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BAB2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x801A568Cu;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BA9A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x801A5690u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BABA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
}

loc_801A5694:
{
    ctx->lr = 0x801A5698u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BABA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 - r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801A56A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A5694;
    }
}

loc_801A56A4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r13 + -28984);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801A56B8u;
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
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
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8012E5A4u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A50DC func_801A50DC preserves=true fpr_mask=0x00000000
