#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80201F48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80201F48;

loc_80201F48:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80360000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = (r6 + -20912);
}

loc_80201F60:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_80201FA8;
    }
}

loc_80201F84:
{
    r4 = (r6 + 131072);
    r0 = (r4 + 32072);
}

loc_80201F90:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80201FA8;
    }
}

loc_80201F94:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = (r0 & 536870912);
    r0 = (r4 + -536870912);
}

loc_80201FA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80201FAC;
    }
}

loc_80201FA8:
{
    r5 = 0;
}

loc_80201FAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80201FB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201FCC;
    }
}

loc_80201FB4:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_802022C0;
}

loc_80201FCC:
{
}

loc_80201FD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80201FDC;
    }
}

loc_80201FD4:
{
    r28 = 0;
    goto loc_80201FE4;
}

loc_80201FDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r28 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80201FE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80201FE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202004;
    }
}

loc_80201FEC:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_802022C0;
}

loc_80202004:
{
    r3 = r28;
    ctx->lr = 0x8020200Cu;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80205CF8u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80202010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202028;
    }
}

loc_80202014:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r28 + 6228), r3);
    goto loc_802022C0;
}

loc_80202028:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8020202C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202060;
    }
}

loc_80202030:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80202038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202060;
    }
}

loc_8020203C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80202044:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202060;
    }
}

loc_80202048:
{
    r0 = MemoryInline::FlatRead32(r4);
    r5 = (r0 & 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80202054:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80202060;
    }
}

loc_80202058:
{
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020205C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020207C;
    }
}

loc_80202060:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r28 + 6228), r0);
    goto loc_802022C0;
}

loc_8020207C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80202084;
    }
}

loc_80202080:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802020A0;
    }
}

loc_80202084:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r28 + 6228), r0);
    goto loc_802022C0;
}

loc_802020A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_802020A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802020C4;
    }
}

loc_802020A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802020B8;
    }
}

loc_802020AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_802020B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802020CC;
    }
}

loc_802020B4:
{
    goto loc_802020DC;
}

loc_802020B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_802020BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802020DC;
    }
}

loc_802020C0:
{
    goto loc_802020D4;
}

loc_802020C4:
{
    r0 = MemoryInline::FlatRead32((r29 + 32));
    goto loc_80202104;
}

loc_802020CC:
{
    r0 = 0;
    goto loc_80202104;
}

loc_802020D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 608));
    goto loc_80202104;
}

loc_802020DC:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r0);
    MemoryInline::FlatWrite32((r29 + 28), r0);
    goto loc_802022C0;
}

loc_80202104:
{
    r4 = (r30 & -2147483648);
}

loc_80202108:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80202150;
    }
}

loc_8020210C:
{
    r4 = ~(r30 | r30);
    r4 = (r4 & 2147483647);
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8020211C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80202148;
    }
}

loc_80202120:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r0);
    MemoryInline::FlatWrite32((r29 + 28), r0);
    goto loc_802022C0;
}

loc_80202148:
{
    r0 = (r0 - r4);
    goto loc_80202188;
}

loc_80202150:
{
    r4 = (-1 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
}

loc_80202158:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80202184;
    }
}

loc_8020215C:
{
    r4 = 0x80360000u;
    r0 = 37;
    r4 = (r4 + -20912);
    r3 = 37;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r0);
    MemoryInline::FlatWrite32((r29 + 28), r0);
    goto loc_802022C0;
}

loc_80202184:
{
    r0 = (r0 + r30);
}

loc_80202188:
{
    r4 = -1;
}

loc_80202190:
{
    MemoryInline::FlatWrite32((r29 + 36), r4);
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_802021A0;
    }
}

loc_80202198:
{
    r5 = 0;
    goto loc_802021A8;
}

loc_802021A0:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r5 = MemoryInline::FlatRead32((r4 + 612));
}

loc_802021A8:
{
    r4 = MemoryInline::FlatRead16(r5);
    r7 = MemoryInline::FlatRead32((r29 + 32));
    r4 = (r4 + -1);
    r6 = MemoryInline::FlatRead8((r5 + 32));
    r5 = (r7 & r4);
    r4 = (0 - r5);
    r6 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
    r4 = (r4 | r5);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r4 = (r6 + r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802021DC;
    }
}

loc_802021D4:
{
    r4 = -1;
    MemoryInline::FlatWrite32((r29 + 36), r4);
}

loc_802021DC:
{
    r4 = 0;
}

loc_802021E4:
{
    MemoryInline::FlatWrite32((r29 + 32), r4);
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_802021F4;
    }
}

loc_802021EC:
{
    r6 = 0;
    goto loc_802021FC;
}

loc_802021F4:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r6 = MemoryInline::FlatRead32((r4 + 612));
}

loc_802021FC:
{
    r5 = MemoryInline::FlatRead32((r29 + 32));
}

loc_80202204:
{
    r4 = MemoryInline::FlatRead8((r6 + 32));
    r4 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    MemoryInline::FlatWrite32((r29 + 40), r4);
    r4 = MemoryInline::FlatRead16(r6);
    r4 = (r4 + -1);
    r4 = (r5 & r4);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r4));
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8020222C;
    }
}

loc_80202224:
{
    r5 = 0;
    goto loc_80202234;
}

loc_8020222C:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r5 = MemoryInline::FlatRead32((r4 + 612));
}

loc_80202234:
{
    r4 = MemoryInline::FlatRead16(r5);
    r6 = MemoryInline::FlatRead32((r29 + 32));
    r4 = (r4 + -1);
    r10 = MemoryInline::FlatRead8((r5 + 32));
    r9 = (r6 & r4);
    r5 = (r0 & r4);
    r7 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r8 = (0 - r9);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
    r4 = (0 - r5);
    r4 = (r4 | r5);
    r8 = (r8 | r9);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r5 = (r7 + r5);
    r4 = (r6 + r4);
}

loc_80202278:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80202284;
    }
}

loc_8020227C:
{
    r4 = -1;
    MemoryInline::FlatWrite32((r29 + 36), r4);
}

loc_80202284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80202288:
{
    MemoryInline::FlatWrite32((r29 + 32), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202298;
    }
}

loc_80202290:
{
    r4 = 0;
    goto loc_802022A0;
}

loc_80202298:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 612));
}

loc_802022A0:
{
    r5 = MemoryInline::FlatRead32((r29 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
}

loc_802022C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80201F48 func_80201F48 preserves=true fpr_mask=0x00000000
