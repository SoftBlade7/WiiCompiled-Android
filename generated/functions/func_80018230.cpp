#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80018230(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfdx_800182B8_loc_0 = 0;
    uint32_t addr_lfdx_80018450_loc_0 = 0;
    uint32_t addr_lfdx_800184A4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80018230;

loc_80018230:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r6 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 & 2147483647);
    r4 = (r7 & -2147483648);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r0 | r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    r8 = (r7 ^ r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018284;
    }
}

loc_80018260:
{
    r7 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r7));
}

loc_80018268:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80018284;
    }
}

loc_8001826C:
{
    r3 = (0 - r6);
    r3 = (r6 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r3 = (r0 | r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
}

loc_80018280:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80018290;
    }
}

loc_80018284:
{
    f0.d = (f1.d * f2.d);
    f1.d = (f0.d / f0.d);
    goto loc_80018558;
}

loc_80018290:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_80018294:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800182C0;
    }
}

loc_80018298:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80018558;
    }
}

loc_8001829C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_800182A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800182A8;
    }
}

loc_800182A4:
{
    goto loc_80018558;
}

loc_800182A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800182C0;
    }
}

loc_800182AC:
{
    r3 = 0x80240000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 8);
    r3 = (r3 + 27792);
    addr_lfdx_800182B8_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_800182B8_loc_0);
    goto loc_80018558;
}

loc_800182C0:
{
    r3 = 1048576;
}

loc_800182C8:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r3))) {
        goto loc_80018314;
    }
}

loc_800182CC:
{
}

loc_800182D0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800182F4;
    }
}

loc_800182D4:
{
    r3 = r5;
    r11 = -1043;
    goto loc_800182E8;
}

loc_800182E0:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r11 = (r11 + -1);
}

loc_800182E8:
{
}

loc_800182EC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_800182E0;
    }
}

loc_800182F0:
{
    goto loc_8001831C;
}

loc_800182F4:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(11));
    r3 = (r3_rot_4 & -2048);
    r11 = -1022;
    goto loc_80018308;
}

loc_80018300:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & -2);
    r11 = (r11 + -1);
}

loc_80018308:
{
}

loc_8001830C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_80018300;
    }
}

loc_80018310:
{
    goto loc_8001831C;
}

loc_80018314:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r8) >> 20);
    r11 = (r3 + -1023);
}

loc_8001831C:
{
    r3 = 1048576;
}

loc_80018324:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80018370;
    }
}

loc_80018328:
{
}

loc_8001832C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80018350;
    }
}

loc_80018330:
{
    r7 = r6;
    r3 = -1043;
    goto loc_80018344;
}

loc_8001833C:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & -2);
    r3 = (r3 + -1);
}

loc_80018344:
{
}

loc_80018348:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_8001833C;
    }
}

loc_8001834C:
{
    goto loc_80018378;
}

loc_80018350:
{
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r7 = (r7_rot_3 & -2048);
    r3 = -1022;
    goto loc_80018364;
}

loc_8001835C:
{
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_5 & -2);
    r3 = (r3 + -1);
}

loc_80018364:
{
}

loc_80018368:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_8001835C;
    }
}

loc_8001836C:
{
    goto loc_80018378;
}

loc_80018370:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 20);
    r3 = (r3 + -1023);
}

loc_80018378:
{
}

loc_8001837C:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(-1022))) {
        goto loc_8001838C;
    }
}

loc_80018380:
{
    r7 = (r8 & 1048575);
    r9 = (r7 | 1048576);
    goto loc_800183BC;
}

loc_8001838C:
{
    r9 = (-1022 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1022) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
}

loc_80018394:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(31))) {
        goto loc_800183B0;
    }
}

loc_80018398:
{
    r7 = (32 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r8 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r9));
    r7 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r9 = (r8 | r7);
    goto loc_800183BC;
}

loc_800183B0:
{
    r7 = (r9 + -32);
    r9 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r5 = 0;
}

loc_800183BC:
{
}

loc_800183C0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(-1022))) {
        goto loc_800183D0;
    }
}

loc_800183C4:
{
    r0 = (r0 & 1048575);
    r8 = (r0 | 1048576);
    goto loc_80018400;
}

loc_800183D0:
{
    r10 = (-1022 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1022) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
}

loc_800183D8:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(31))) {
        goto loc_800183F4;
    }
}

loc_800183DC:
{
    r7 = (32 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
    r6 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r8 = (r8 | r0);
    goto loc_80018400;
}

loc_800183F4:
{
    r0 = (r10 + -32);
    r8 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r6 = 0;
}

loc_80018400:
{
    r0 = (r11 - r3);
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001846C;
    }
}

loc_8001840C:
{
}

loc_80018410:
{
    r7 = (r9 - r8);
    r10 = (r5 - r6);
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_80018420;
    }
}

loc_8001841C:
{
    r7 = (r7 + -1);
}

loc_80018420:
{
}

loc_80018424:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_8001843C;
    }
}

loc_80018428:
{
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r7 = (r7_rot_8 & 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r9 = (r7 + r0);
    r5 = (r5 + r5);
    goto loc_80018468;
}

loc_8001843C:
{
    r0 = (r7 | r10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018458;
    }
}

loc_80018444:
{
    r3 = 0x80240000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 8);
    r3 = (r3 + 27792);
    addr_lfdx_80018450_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80018450_loc_0);
    goto loc_80018558;
}

loc_80018458:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r9 = (r5 + r0);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
}

loc_80018468:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001840C;
    }
}

loc_8001846C:
{
}

loc_80018470:
{
    r7 = (r9 - r8);
    r0 = (r5 - r6);
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_80018480;
    }
}

loc_8001847C:
{
    r7 = (r7 + -1);
}

loc_80018480:
{
}

loc_80018484:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_80018490;
    }
}

loc_80018488:
{
    r9 = r7;
    r5 = r0;
}

loc_80018490:
{
    r0 = (r9 | r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800184AC;
    }
}

loc_80018498:
{
    r3 = 0x80240000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & 8);
    r3 = (r3 + 27792);
    addr_lfdx_800184A4_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_800184A4_loc_0);
    goto loc_80018558;
}

loc_800184AC:
{
    r0 = 1048576;
    goto loc_800184C8;
}

loc_800184B4:
{
    r7_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r7 = (r7_rot_12 & 1);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r9 = (r7 + r6);
    r5 = (r5 + r5);
    r3 = (r3 + -1);
}

loc_800184C8:
{
}

loc_800184CC:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_800184B4;
    }
}

loc_800184D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1022));
}

loc_800184D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800184F8;
    }
}

loc_800184D8:
{
    r0 = (r3 + 1023);
    r3 = (r9 + -1048576);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_9 & -1048576);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r0 = (r3 | r0);
    r0 = (r0 | r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_80018554;
}

loc_800184F8:
{
    r6 = (-1022 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(20));
}

loc_80018500:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001851C;
    }
}

loc_80018504:
{
    r0 = (32 - r6);
    r3 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r0 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = PPC_Sraw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r6));
    r3 = (r3 | r0);
    goto loc_80018548;
}

loc_8001851C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(31));
}

loc_80018520:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001853C;
    }
}

loc_80018524:
{
    r3 = (32 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r3 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r3));
    r9 = r4;
    r3 = (r3 | r0);
    goto loc_80018548;
}

loc_8001853C:
{
    r0 = (r6 + -32);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r0) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = PPC_Sraw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
    r9 = r4;
}

loc_80018548:
{
    r0 = (r9 | r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
}

loc_80018554:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
}

loc_80018558:
{
    r1 = (r1 + 32);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80018230 func_80018230 preserves=true fpr_mask=0x00000000
