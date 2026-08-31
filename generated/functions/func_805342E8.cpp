#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805342E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805342E8;

loc_805342E8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r6 = 0x808B0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805342F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 100), r0);
    r5 = 1127219200;
    r0 = 0;
    r6 = (r6 + 11588);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 92), r31);
    r31 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 88), r30);
    r30 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 84), r29);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 56), r5);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 64), r5);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 44), r6);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 54), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 48), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 50), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 52), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534578;
    }
}

loc_8053433C:
{
    r4 = 0x809C0000u;
    r5 = 3;
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r6 + 2960));
    r0 = (r0 & 4);
}

loc_80534350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053436C;
    }
}

loc_80534354:
{
    r5 = MemoryInline::FlatRead8((r6 + 2957));
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_80534364:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8053436C;
    }
}

loc_80534368:
{
    r5 = 3;
}

loc_8053436C:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + 368));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 380));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80534394:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805343DC;
    }
}

loc_8053439C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r4 = (r4 + 4);
    ctx->lr = 0x805343B8u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80534684u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead16((r1 + 24));
    r4 = MemoryInline::FlatRead8((r1 + 26));
    r3 = MemoryInline::FlatRead16((r1 + 28));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r0));
    goto loc_805344B8;
}

loc_805343DC:
{
    r5 = 0x808B0000u;
    r4 = 0;
    r5 = (r5 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead32((r6 + 2928));
}

loc_80534404:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80534414;
    }
}

loc_80534408:
{
}

loc_8053440C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80534414;
    }
}

loc_80534410:
{
    r4 = 1;
}

loc_80534414:
{
}

loc_80534418:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8053443C;
    }
}

loc_8053441C:
{
    r0 = 0;
    r5 = 1;
    r4 = 5;
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r0));
    goto loc_80534458;
}

loc_8053443C:
{
    r0 = 0;
    r5 = 1;
    r4 = 100;
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r0));
}

loc_80534458:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 380));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80534470:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80534478;
    }
}

loc_80534474:
{
    f1.d = f2.d;
}

loc_80534478:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 384));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80534484:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053448C;
    }
}

loc_80534488:
{
    f1.d = f0.d;
}

loc_8053448C:
{
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    ctx->lr = 0x80534498u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80534684u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r4 = MemoryInline::FlatRead8((r1 + 14));
    r3 = MemoryInline::FlatRead16((r1 + 16));
    r0 = MemoryInline::FlatRead8((r1 + 18));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r0));
}

loc_805344B8:
{
    r0 = MemoryInline::FlatRead16((r1 + 52));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 368));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 388));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r5 = fctiwzword0;
    r0 = (r5 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(999));
}

loc_805344F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80534558;
    }
}

loc_805344F8:
{
    r3 = MemoryInline::FlatRead8((r1 + 50));
    r0 = (r5 + -1000);
    r5 = (r0 & 65535);
    r3 = (r3 + 1);
    r0 = (r3 & 255);
}

loc_80534510:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(59))) {
        goto loc_80534520;
    }
}

loc_80534514:
{
    r0 = (r3 + -60);
    r4 = 1;
    r3 = (r0 & 255);
}

loc_80534520:
{
    r0 = MemoryInline::FlatRead16((r1 + 48));
    r4 = (r4 + r0);
    r0 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(999));
}

loc_80534530:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80534540;
    }
}

loc_80534534:
{
    r4 = 999;
    r3 = 59;
    r5 = 999;
}

loc_80534540:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r5));
    goto loc_80534654;
}

loc_80534558:
{
    r4 = MemoryInline::FlatRead8((r1 + 50));
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r1 + 48));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r5));
    goto loc_80534654;
}

loc_80534578:
{
    r29 = 0x809C0000u;
    r4 = 16;
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_1 = r0;
    r0 = (r8 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r6);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r5 = MemoryInline::FlatRead32((r29 + -10448));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r7 = 0;
    r5 = MemoryInline::FlatRead32((r5 + 20));
    f2.d = MemoryInline::FlatReadFloat64((r4 + 368));
    r0 = MemoryInline::FlatRead16((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r6 = fctiwzword1;
    r0 = (r6 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(999));
}

loc_805345D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80534638;
    }
}

loc_805345D8:
{
    r3 = MemoryInline::FlatRead8((r5 + 10));
    r0 = (r6 + -1000);
    r6 = (r0 & 65535);
    r3 = (r3 + 1);
    r0 = (r3 & 255);
}

loc_805345F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(59))) {
        goto loc_80534600;
    }
}

loc_805345F4:
{
    r0 = (r3 + -60);
    r7 = 1;
    r3 = (r0 & 255);
}

loc_80534600:
{
    r0 = MemoryInline::FlatRead16((r5 + 8));
    r7 = (r7 + r0);
    r0 = (r7 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(999));
}

loc_80534610:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80534620;
    }
}

loc_80534614:
{
    r7 = 999;
    r3 = 59;
    r6 = 999;
}

loc_80534620:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r6));
    goto loc_80534654;
}

loc_80534638:
{
    r4 = MemoryInline::FlatRead8((r5 + 10));
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r5 + 8));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r6));
}

loc_80534654:
{
    r3 = r30;
    r6 = r31;
    r4 = (r1 + 44);
    r5 = 1;
    ctx->lr = 0x80534668u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805347F4u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805342E8 func_805342E8 preserves=true fpr_mask=0x00000000
