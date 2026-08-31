#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808574B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808574B8;

loc_808574B8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r4 = 0x809C0000u;
    r31 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r4 + -10456));
    r27 = r3;
    r31 = (r31 + -5048);
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r5 + 38));
}

loc_808574EC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_808574F4;
    }
}

loc_808574F0:
{
    r4 = r0;
}

loc_808574F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 468));
    r28 = (r4 & 255);
}

loc_80857500:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857530;
    }
}

loc_80857504:
{
    r29 = 0;
    goto loc_80857524;
}

loc_8085750C:
{
    r0 = (r29 & 255);
    r3 = MemoryInline::FlatRead32((r27 + 468));
    r0 = (r0 * 196);
    r3 = (r3 + r0);
    // inline leaf 0x807F1F24 (7 guest instruction(s))
    r4 = 0x808B0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -25032));
    MemoryInline::FlatWrite32((r3 + 188), r0);
    MemoryInline::FlatWrite32((r3 + 184), r0);
    MemoryInline::FlatWriteFloat32((r3 + 180), f0.d);
    // end of inlined leaf 0x807F1F24
    r29 = (r29 + 1);
}

loc_80857524:
{
    r0 = (r29 & 255);
}

loc_8085752C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r28))) {
        goto loc_8085750C;
    }
}

loc_80857530:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80857544:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(50))) {
        goto loc_80857550;
    }
}

loc_80857548:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(52));
}

loc_8085754C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808575F8;
    }
}

loc_80857550:
{
}

loc_80857554:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(106))) {
        goto loc_80857560;
    }
}

loc_80857558:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(107));
}

loc_8085755C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80857570;
    }
}

loc_80857560:
{
}

loc_80857564:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(110))) {
        goto loc_80857628;
    }
}

loc_80857568:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(111));
}

loc_8085756C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80857628;
    }
}

loc_80857570:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x80857584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80857588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857AB0;
    }
}

loc_8085758C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_808575A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(110))) {
        goto loc_808575E4;
    }
}

loc_808575A4:
{
}

loc_808575A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(111))) {
        goto loc_808575E4;
    }
}

loc_808575AC:
{
    r30 = 0;
    r29 = 0x809C0000u;
    r28 = 0x809C0000u;
    goto loc_808575D4;
}

loc_808575BC:
{
    r3 = MemoryInline::FlatRead32((r29 + 6392));
    r4 = r30;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    // inline leaf 0x805983DC (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 524288);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    // end of inlined leaf 0x805983DC
    r30 = (r30 + 1);
}

loc_808575D4:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
}

loc_808575E0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_808575BC;
    }
}

loc_808575E4:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r27;
    r4 = -1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl5_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl5_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_0x80602494;
    }
}

loc_inl5_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl5_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl5_cont_80602488:
{
    // end of inlined leaf 0x80602488
    goto loc_80857AB0;
}

loc_808575F8:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x8085760Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80857610:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80857628;
    }
}

loc_80857614:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r27;
    r4 = -1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl6_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl6_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl6_0x80602494;
    }
}

loc_inl6_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl6_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl6_cont_80602488:
{
    // end of inlined leaf 0x80602488
    goto loc_80857AB0;
}

loc_80857628:
{
    r0 = MemoryInline::FlatRead32((r27 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80857630:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808577F8;
    }
}

loc_80857634:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x80857648u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8085764C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808577F8;
    }
}

loc_80857650:
{
    r0 = MemoryInline::FlatRead8((r27 + 84));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80857658:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808577F8;
    }
}

loc_8085765C:
{
    r3 = 0x809C0000u;
    r4 = (r0 * 60);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r4 + 51);
}

loc_80857674:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80857720;
    }
}

loc_80857678:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead8((r3 + 38));
}

loc_8085768C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1))) {
        goto loc_80857694;
    }
}

loc_80857690:
{
    r0 = r3;
}

loc_80857694:
{
    r29 = (r0 & 255);
    r28 = 0;
    goto loc_80857714;
}

loc_808576A0:
{
    r3 = MemoryInline::FlatRead8((r27 + 84));
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r30 = (r30_rot_2 & 510);
    // inline leaf 0x8083376C (2 guest instruction(s))
    r3 = (r3 + 1201);
    // end of inlined leaf 0x8083376C
    r0 = MemoryInline::FlatRead8((r27 + 84));
    r4 = r3;
    r6 = MemoryInline::FlatRead32((r27 + 88));
    r5 = 0;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    r0 = (r0 + r30);
    r0 = (r0 * 408);
    r3 = (r6 + r0);
    ctx->lr = 0x808576DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 84));
    r4 = MemoryInline::FlatRead32((r27 + 88));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    r0 = (r0 + r30);
    r0 = (r0 * 408);
    r4_addr_2 = (r4 + r0);
    r12 = MemoryInline::FlatRead32(r4_addr_2);
    r3 = (r4 + r0);
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x80857710u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_80857714:
{
    r0 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_8085771C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808576A0;
    }
}

loc_80857720:
{
    r3 = 0x809C0000u;
    r28 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10448));
    r4 = 60;
    r3 = MemoryInline::FlatRead32((r28 + 10424));
    r29 = MemoryInline::FlatRead32((r5 + 32));
    ctx->lr = 0x8085773Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8071E984u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
}

loc_80857740:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085774C;
    }
}

loc_80857744:
{
    r3 = MemoryInline::FlatRead32((r28 + 10424));
    ctx->lr = 0x8085774Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071E8A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8085774C:
{
    r4 = MemoryInline::FlatRead8((r27 + 84));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = (r4 + 1);
    r5 = (r0 * 60);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80857768:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808577F8;
    }
}

loc_8085776C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10424));
    ctx->lr = 0x80857778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8071E90Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 84));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80857780:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808577DC;
    }
}

loc_80857784:
{
    r3 = r27;
    r4 = 215;
    r5 = -1;
    ctx->lr = 0x80857794u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80602CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_808577A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808577EC;
    }
}

loc_808577A8:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r5 = 827;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x808577D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A2E80u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_808577EC;
}

loc_808577DC:
{
    r3 = r27;
    r4 = 214;
    r5 = -1;
    ctx->lr = 0x808577ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80602CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808577EC:
{
    r3 = MemoryInline::FlatRead8((r27 + 84));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 84), static_cast<uint8_t>(r0));
}

loc_808577F8:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x8085780Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80857810:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80857830;
    }
}

loc_80857814:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 124));
    ctr = r12;
    ctx->lr = 0x80857828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8085782C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80857A14;
    }
}

loc_80857830:
{
    r29 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80857840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808578F4;
    }
}

loc_80857844:
{
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80857854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808578F4;
    }
}

loc_80857858:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9000));
    ctx->lr = 0x80857864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806F9728u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8085786C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808578AC;
    }
}

loc_80857870:
{
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = r27;
    MemoryInline::FlatWrite32((r4 + 5988), r0);
    r5 = 0;
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r4 = MemoryInline::FlatRead32((r28 + 7736));
    r12 = MemoryInline::FlatRead32(r27);
    r4 = MemoryInline::FlatRead32(r4);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    r4 = MemoryInline::FlatRead32(r4);
    ctr = r12;
    ctx->lr = 0x808578A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80857AB0;
}

loc_808578AC:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 124));
    ctr = r12;
    ctx->lr = 0x808578C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808578C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857AB0;
    }
}

loc_808578C8:
{
    r4 = MemoryInline::FlatRead32((r28 + 7736));
    r3 = r27;
    r12 = MemoryInline::FlatRead32(r27);
    r5 = 0;
    r4 = MemoryInline::FlatRead32(r4);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    r4 = MemoryInline::FlatRead32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r31);
    ctr = r12;
    ctx->lr = 0x808578F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80857AB0;
}

loc_808578F4:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80857908u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8085790C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857AB0;
    }
}

loc_80857910:
{
    r3 = 0x809C0000u;
    r28 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 1;
    r3 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80857928:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1))) {
        goto loc_80857930;
    }
}

loc_8085792C:
{
    r0 = r3;
}

loc_80857930:
{
    r29 = (r0 & 255);
    r30 = 0;
    goto loc_80857988;
}

loc_8085793C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80857940:
{
    r28 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857984;
    }
}

loc_80857948:
{
    r0 = (r30 & 255);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80857958:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80857984;
    }
}

loc_8085795C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 510);
    r3 = MemoryInline::FlatRead32((r27 + 88));
    r0 = (r0 * 408);
    r3_addr_5 = (r3 + r0);
    r12 = MemoryInline::FlatRead32(r3_addr_5);
    r3 = r3_addr_5;
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80857978u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8085797C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80857984;
    }
}

loc_80857980:
{
    r28 = 1;
}

loc_80857984:
{
    r30 = (r30 + 1);
}

loc_80857988:
{
    r0 = (r30 & 255);
}

loc_80857990:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r29))) {
        goto loc_8085793C;
    }
}

loc_80857994:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80857998:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857AB0;
    }
}

loc_8085799C:
{
    r3 = MemoryInline::FlatRead32((r27 + 120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(120));
}

loc_808579A4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 120), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80857AB0;
    }
}

loc_808579B0:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = MemoryInline::FlatRead32((r3 + 12008));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808579C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808579E8;
    }
}

loc_808579CC:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r6 + r0);
    r4 = (r4 + 56);
    goto loc_808579EC;
}

loc_808579E8:
{
    r4 = 0;
}

loc_808579EC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80783A08u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl8_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl8_0x80621418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl8_0x80621424:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl8_cont_80621410;
}

loc_inl8_return:
{
}

loc_inl8_cont_80621410:
{
    // end of inlined leaf 0x80621410
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r27;
    r4 = -1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl9_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl9_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl9_0x80602494;
    }
}

loc_inl9_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl9_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl9_cont_80602488:
{
    // end of inlined leaf 0x80602488
    goto loc_80857AB0;
}

loc_80857A14:
{
    r3 = MemoryInline::FlatRead32((r27 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80857A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857AB0;
    }
}

loc_80857A20:
{
    r0 = MemoryInline::FlatRead8((r3 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80857A28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857AB0;
    }
}

loc_80857A2C:
{
    r0 = MemoryInline::FlatRead32((r27 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80857A34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80857AB0;
    }
}

loc_80857A38:
{
    r5 = 0x809C0000u;
    r4 = 0x808B0000u;
    r0 = 0;
    r3 = 0x809C0000u;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r28 = MemoryInline::FlatRead32((r5 + -10484));
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    // inline leaf 0x80535CA0 (29 guest instruction(s))
}

loc_inl10_0x80535CA0:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl10_0x80535CA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x80535CF8;
    }
}

loc_inl10_0x80535CAC:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 22));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 24));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 26));
    MemoryInline::FlatWriteRam8((r4 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 64));
}

loc_inl10_0x80535CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x80535CDC:
{
    r3 = 65536;
    r0 = 0;
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl10_cont_80535CA0;
}

loc_inl10_0x80535CF8:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWriteRam8((r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl10_cont_80535CA0;
}

loc_inl10_return:
{
}

loc_inl10_cont_80535CA0:
{
    // end of inlined leaf 0x80535CA0
    r3 = MemoryInline::FlatRead32((r28 + 236));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80857A80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857AA8;
    }
}

loc_80857A84:
{
    r3 = MemoryInline::FlatRead16((r1 + 16));
    r0 = 99;
}

loc_80857A90:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(99))) {
        goto loc_80857A98;
    }
}

loc_80857A94:
{
    r0 = r3;
}

loc_80857A98:
{
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_80857AA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80857AA8;
    }
}

loc_80857AA4:
{
    r4 = 1;
}

loc_80857AA8:
{
    r3 = MemoryInline::FlatRead32((r27 + 92));
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r4));
}

loc_80857AB0:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x808574B8 func_808574B8 preserves=true fpr_mask=0x00000000
