#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801552A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801552A0;

loc_801552A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80280000u;
    r31 = (r31 + 30296);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r8 = MemoryInline::FlatRead16((r5 + 2));
    r6 = (r5 + r0);
    r7 = (r6 + 8);
}

loc_801552DC:
{
    r0 = r7;
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(3))) {
        goto loc_80155310;
    }
}

loc_801552E4:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801552F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80155308;
    }
}

loc_801552F8:
{
    r5 = r8;
    r4 = (r31 + 0);
    r3 = 589824;
    ctx->lr = 0x80155308u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131758u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80155308:
{
    r3 = 50;
    goto loc_801557F8;
}

loc_80155310:
{
    r8 = MemoryInline::FlatRead8(r7);
    r6 = (r8 & 2);
    r9 = (r8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_8015531C:
{
    r6 = (static_cast<int32_t>(r6) >> 1);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    r8 = (static_cast<int32_t>(r6) >> 2);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r8));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80155350;
    }
}

loc_80155338:
{
    r6 = MemoryInline::FlatRead8(r7);
    r8 = (r8 & 255);
    r7 = (r7 + 1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r6 = (r6_rot_1 & -64);
    r6 = (r8 + r6);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
}

loc_80155350:
{
    r6 = MemoryInline::FlatRead8(r7);
    r6 = (r6 & -17);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8(r7);
    r6 = (r6 & 16);
    r6 = (static_cast<int32_t>(r6) >> 4);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r7 = (r7 + 2);
    r10 = (r6 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_80155378:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r6) >> 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80155394;
    }
}

loc_80155380:
{
    r6 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r6 = (r6_rot_3 & -128);
    r6 = (r8 + r6);
    r8 = (r6 & 65535);
}

loc_80155394:
{
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r10));
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r9));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r11 = (r11_rot_1 & 134217727);
    r6 = MemoryInline::FlatRead16((r5 + 4));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r10 = (r10_rot_1 & 134217727);
    r9 = MemoryInline::FlatRead16((r5 + 2));
    r11 = (r10 + r11);
    r10 = (r11 + 4);
    r6 = (r11 + r6);
    r9 = (r9 - r10);
    r6 = (r6 + 3);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    r6 = MemoryInline::FlatRead8((r3 + 114));
}

loc_801553D0:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(2))) {
        goto loc_80155420;
    }
}

loc_801553D4:
{
    r6 = MemoryInline::FlatRead8((r4 + 1));
}

loc_801553DC:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(239))) {
        goto loc_80155420;
    }
}

loc_801553E0:
{
    r6 = MemoryInline::FlatRead8(r4);
}

loc_801553E8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80155420;
    }
}

loc_801553EC:
{
    r6 = MemoryInline::FlatRead8((r4 + 4));
}

loc_801553F4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_80155420;
    }
}

loc_801553F8:
{
    r6 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    r9 = MemoryInline::FlatRead16((r5 + 2));
    r6 = MemoryInline::FlatRead16((r5 + 4));
    r9 = (r9 + -1);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    goto loc_80155428;
}

loc_80155420:
{
    r6 = 0;
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
}

loc_80155428:
{
    r5 = MemoryInline::FlatRead16((r5 + 2));
    r6 = (r8 & 65535);
}

loc_80155434:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r6))) {
        goto loc_80155460;
    }
}

loc_80155438:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80155448:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80155458;
    }
}

loc_8015544C:
{
    r4 = (r31 + 16);
    r3 = 589824;
    ctx->lr = 0x80155458u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131770u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80155458:
{
    r3 = 50;
    goto loc_801557F8;
}

loc_80155460:
{
    r9 = MemoryInline::FlatRead8((r4 + 1));
    r7_addr_1 = (r7 + r6);
    r5 = MemoryInline::FlatRead8(r7_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(67));
}

loc_8015546C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80155678;
    }
}

loc_80155470:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015548C;
    }
}

loc_80155474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(47));
}

loc_80155478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801554A4;
    }
}

loc_8015547C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801557F4;
    }
}

loc_80155480:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(15));
}

loc_80155484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801555E4;
    }
}

loc_80155488:
{
    goto loc_801557F4;
}

loc_8015548C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(239));
}

loc_80155490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80155718;
    }
}

loc_80155494:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801557F4;
    }
}

loc_80155498:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(99));
}

loc_8015549C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80155544;
    }
}

loc_801554A0:
{
    goto loc_801557F4;
}

loc_801554A4:
{
    r6 = MemoryInline::FlatRead8((r3 + 109));
}

loc_801554AC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801554BC;
    }
}

loc_801554B0:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801554B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80155514;
    }
}

loc_801554BC:
{
}

loc_801554C0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801554D0;
    }
}

loc_801554C4:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801554CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80155514;
    }
}

loc_801554D0:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
}

loc_801554D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80155514;
    }
}

loc_801554DC:
{
    r3 = (r8 & 65535);
}

loc_801554E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80155514;
    }
}

loc_801554E4:
{
    r3 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801554EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80155500;
    }
}

loc_801554F0:
{
}

loc_801554F4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_80155514;
    }
}

loc_801554F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(61));
}

loc_801554FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80155514;
    }
}

loc_80155500:
{
    r4 = r0;
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80155E70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80155510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015553C;
    }
}

loc_80155514:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80155524:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80155534;
    }
}

loc_80155528:
{
    r4 = (r31 + 36);
    r3 = 589824;
    ctx->lr = 0x80155534u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131740u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80155534:
{
    r3 = 50;
    goto loc_801557F8;
}

loc_8015553C:
{
    r3 = 0;
    goto loc_801557F8;
}

loc_80155544:
{
    r6 = MemoryInline::FlatRead8((r3 + 109));
}

loc_8015554C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8015555C;
    }
}

loc_80155550:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80155558:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801555B4;
    }
}

loc_8015555C:
{
}

loc_80155560:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80155570;
    }
}

loc_80155564:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8015556C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801555B4;
    }
}

loc_80155570:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
}

loc_80155578:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801555B4;
    }
}

loc_8015557C:
{
    r3 = (r8 & 65535);
}

loc_80155580:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801555B4;
    }
}

loc_80155584:
{
    r3 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015558C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801555A0;
    }
}

loc_80155590:
{
}

loc_80155594:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_801555B4;
    }
}

loc_80155598:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(61));
}

loc_8015559C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801555B4;
    }
}

loc_801555A0:
{
    r4 = r0;
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80155E70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801555B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801555DC;
    }
}

loc_801555B4:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801555C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801555D4;
    }
}

loc_801555C8:
{
    r3 = 589824;
    r4 = (r13 + -29536);
    ctx->lr = 0x801555D4u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131740u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801555D4:
{
    r3 = 50;
    goto loc_801557F8;
}

loc_801555DC:
{
    r3 = 1;
    goto loc_801557F8;
}

loc_801555E4:
{
    r6 = MemoryInline::FlatRead8((r3 + 109));
}

loc_801555EC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801555FC;
    }
}

loc_801555F0:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801555F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80155648;
    }
}

loc_801555FC:
{
}

loc_80155600:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80155610;
    }
}

loc_80155604:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8015560C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80155648;
    }
}

loc_80155610:
{
    r3 = (r8 & 65535);
}

loc_80155614:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80155648;
    }
}

loc_80155618:
{
    r3 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80155620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80155634;
    }
}

loc_80155624:
{
}

loc_80155628:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_80155648;
    }
}

loc_8015562C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(61));
}

loc_80155630:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80155648;
    }
}

loc_80155634:
{
    r4 = r0;
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80155E70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80155644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80155670;
    }
}

loc_80155648:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80155658:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80155668;
    }
}

loc_8015565C:
{
    r3 = 589824;
    r4 = (r13 + -29528);
    ctx->lr = 0x80155668u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131740u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80155668:
{
    r3 = 50;
    goto loc_801557F8;
}

loc_80155670:
{
    r3 = 2;
    goto loc_801557F8;
}

loc_80155678:
{
    r6 = MemoryInline::FlatRead8((r3 + 109));
}

loc_80155680:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80155690;
    }
}

loc_80155684:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8015568C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801556E8;
    }
}

loc_80155690:
{
}

loc_80155694:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801556A4;
    }
}

loc_80155698:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801556A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801556E8;
    }
}

loc_801556A4:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
}

loc_801556AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801556E8;
    }
}

loc_801556B0:
{
    r3 = (r8 & 65535);
}

loc_801556B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801556E8;
    }
}

loc_801556B8:
{
    r3 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801556C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801556D4;
    }
}

loc_801556C4:
{
}

loc_801556C8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_801556E8;
    }
}

loc_801556CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(61));
}

loc_801556D0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801556E8;
    }
}

loc_801556D4:
{
    r4 = r0;
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80155E70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801556E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80155710;
    }
}

loc_801556E8:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801556F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80155708;
    }
}

loc_801556FC:
{
    r4 = (r31 + 48);
    r3 = 589824;
    ctx->lr = 0x80155708u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131740u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80155708:
{
    r3 = 50;
    goto loc_801557F8;
}

loc_80155710:
{
    r3 = 3;
    goto loc_801557F8;
}

loc_80155718:
{
    r3 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80155720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015575C;
    }
}

loc_80155724:
{
}

loc_80155728:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_80155734;
    }
}

loc_8015572C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(61));
}

loc_80155730:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8015575C;
    }
}

loc_80155734:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80155744:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80155754;
    }
}

loc_80155748:
{
    r4 = (r31 + 60);
    r3 = 589824;
    ctx->lr = 0x80155754u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131740u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80155754:
{
    r3 = 50;
    goto loc_801557F8;
}

loc_8015575C:
{
    r4 = r0;
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80155E70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = (r3 & 255);
}

loc_8015576C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80155798;
    }
}

loc_80155770:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80155780:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80155790;
    }
}

loc_80155784:
{
    r4 = (r31 + 84);
    r3 = 589824;
    ctx->lr = 0x80155790u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131740u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80155790:
{
    r3 = 50;
    goto loc_801557F8;
}

loc_80155798:
{
    r3 = MemoryInline::FlatRead8((r29 + 109));
}

loc_801557A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801557B0;
    }
}

loc_801557A4:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_801557AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801557C4;
    }
}

loc_801557B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801557B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801557EC;
    }
}

loc_801557B8:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801557C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801557EC;
    }
}

loc_801557C4:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801557D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801557E4;
    }
}

loc_801557D8:
{
    r4 = (r31 + 100);
    r3 = 589824;
    ctx->lr = 0x801557E4u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131740u>(ctx);
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801557E4:
{
    r3 = 4;
    goto loc_801557F8;
}

loc_801557EC:
{
    r3 = 4;
    goto loc_801557F8;
}

loc_801557F4:
{
    r3 = 50;
}

loc_801557F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801552A0 func_801552A0 preserves=true fpr_mask=0x00000000
