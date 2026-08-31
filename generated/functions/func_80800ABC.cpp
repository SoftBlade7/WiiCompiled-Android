#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80800ABC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword12 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80800ABC;

loc_80800ABC:
{
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r7 = 1127219200;
    r5 = 0x808B0000u;
    r6 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r5 = (r5 + -21040);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 124u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 72));
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 368), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 368));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 20216));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
}

loc_80800B30:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80800B38;
    }
}

loc_80800B34:
{
    r0 = r4;
}

loc_80800B38:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 368));
    r7 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    r7 = 0x808D0000u;
    r6 = (r6 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat32((r7 + 20216));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 72));
    f3.d = PPC_Fctiwz(f4.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    fctiwzword1 = PPC_FprLowWordInline(f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r6 = fctiwzword1;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r7 = fctiwzword2;
}

loc_80800B8C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r6))) {
        goto loc_80800B94;
    }
}

loc_80800B90:
{
    r6 = r7;
}

loc_80800B94:
{
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 368));
    r7 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    r9 = 0x808D0000u;
    r8 = (r8 ^ -2147483648);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 72));
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    r7 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r9 + 20216));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 20220));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PPC_Fctiwz(f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    r7 = fctiwzword3;
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r8 = fctiwzword4;
}

loc_80800BF0:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r7))) {
        goto loc_80800BF8;
    }
}

loc_80800BF4:
{
    r7 = r8;
}

loc_80800BF8:
{
    r10 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 368));
    r9 = 0x808D0000u;
    r8 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 372));
    r11 = 0x808D0000u;
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    r12 = (r8 ^ -2147483648);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 72));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r8 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r12);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f3.d = MemoryInline::FlatReadFloat32((r9 + 20220));
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f5.d = MemoryInline::FlatReadFloat32((r11 + 20216));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PPC_Fctiwz(f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f1.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    r31 = fctiwzword5;
    r8 = fctiwzword6;
}

loc_80800C88:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r31))) {
        goto loc_80800C90;
    }
}

loc_80800C8C:
{
    r31 = r8;
}

loc_80800C90:
{
    r8 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 372));
    r9 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    r9 = 0x808D0000u;
    r8 = (r8 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat32((r9 + 20216));
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 72));
    f3.d = PPC_Fctiwz(f4.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    fctiwzword7 = PPC_FprLowWordInline(f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r30 = fctiwzword7;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    r8 = fctiwzword8;
}

loc_80800CE4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r30))) {
        goto loc_80800CEC;
    }
}

loc_80800CE8:
{
    r30 = r8;
}

loc_80800CEC:
{
    r9 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 372));
    r8 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    r10 = 0x808D0000u;
    r9 = (r9 ^ -2147483648);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 72));
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r8 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r10 + 20216));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 20220));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PPC_Fctiwz(f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    fctiwzword9 = PPC_FprLowWordInline(f1.d);
    r10 = fctiwzword9;
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword10 = PPC_FprLowWordInline(f0.d);
    r8 = fctiwzword10;
}

loc_80800D48:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r10))) {
        goto loc_80800D50;
    }
}

loc_80800D4C:
{
    r10 = r8;
}

loc_80800D50:
{
    r9 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 372));
    r8 = 0x808D0000u;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r9 = (r9 ^ -2147483648);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 72));
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r4 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80800D78:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 20220));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20216));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword11 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword11;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80800DAC;
    }
}

loc_80800DA8:
{
    r0 = 0;
}

loc_80800DAC:
{
}

loc_80800DB0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_80800DB8;
    }
}

loc_80800DB4:
{
    r6 = 0;
}

loc_80800DB8:
{
}

loc_80800DBC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_80800DC4;
    }
}

loc_80800DC0:
{
    r7 = 0;
}

loc_80800DC4:
{
}

loc_80800DC8:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_80800DD0;
    }
}

loc_80800DCC:
{
    r31 = 0;
}

loc_80800DD0:
{
}

loc_80800DD4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_80800DDC;
    }
}

loc_80800DD8:
{
    r30 = 0;
}

loc_80800DDC:
{
}

loc_80800DE0:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_80800DE8;
    }
}

loc_80800DE4:
{
    r10 = 0;
}

loc_80800DE8:
{
}

loc_80800DEC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80800DF4;
    }
}

loc_80800DF0:
{
    r4 = 0;
}

loc_80800DF4:
{
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r12 = (r10 ^ -2147483648);
    r8 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r12);
    r11 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r10 = (r30 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r9 = (r31 ^ -2147483648);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 72));
    r7 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r12);
    r4 = 1374420992;
    f28.d = (f1.d - f5.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 112u, (r5 + 112));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    r6 = (r6 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f8.d = (f1.d - f5.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r10);
    r0 = (r4 + -31457);
    f0.d = (f0.d - f5.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 384));
    f7.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    f8.d = (f2.d * f8.d);
    f29.d = MemoryInline::FlatReadFloat32((r11 + 20216));
    f6.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    f1.d = (f2.d * f0.d);
    f7.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f8.d = (f8.d * f3.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    f13.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r3 + 380));
    f6.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f12.d = (f7.d - f5.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f6.d = (f6.d - f5.d);
    f28.d = (f28.d * f8.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r5 + 88));
    f11.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f6.d = (f2.d * f6.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 376));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f29.d));
    f9.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f8.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r5 + 56));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f5.d));
    f6.d = (f6.d * f0.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f29.d));
    f12.d = (f12.d * f6.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f8.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f9.d = (f9.d - f5.d);
    f12.d = (f12.d / f29.d);
    f31.d = PpcFmulsInline(f0.d, f31.d);
    f30.d = (f28.d / f29.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f8.d = PpcFmulsInline(f10.d, f8.d);
    f9.d = (f2.d * f9.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f1.d = (f1.d * f31.d);
    f8.d = PpcFmulsInline(f11.d, f10.d);
    f10.d = PpcFmulsInline(f13.d, f0.d);
    f0.d = (f9.d * f2.d);
    f2.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = (f8.d + f0.d);
    f0.d = (f12.d + f0.d);
    f0.d = (f10.d + f0.d);
    f0.d = (f1.d + f0.d);
    f0.d = (f30.d + f0.d);
    f0.d = (f2.d + f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = PpcFmulsInline(f7.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword12 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword12;
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 200);
    r0 = (r4 - r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    SetCRFloatResident(cr, 0, f1.d, f6.d);
}

loc_80800F78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80800F84;
    }
}

loc_80800F7C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r5 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_80800F84:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r5 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r1 = (r1 + 192);
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00005FB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xF000001B fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80800ABC func_80800ABC preserves=true fpr_mask=0x00000000
