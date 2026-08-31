#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802004CC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_802004CC;

loc_802004CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r28 = r3;
    r0 = 5;
    r29 = r4;
    r7 = (r3 + 64);
    r6 = r28;
    r31 = 0;
    r30 = 0;
    r8 = 0;
    ctr = r0;
}

loc_80200504:
{
    r0 = MemoryInline::FlatRead32((r6 + 64));
    r5 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8020050C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200520;
    }
}

loc_80200510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200534;
    }
}

loc_80200514:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 2);
}

loc_8020051C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80200534;
    }
}

loc_80200520:
{
}

loc_80200524:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80200580;
    }
}

loc_80200528:
{
    r30 = r7;
    r31 = r8;
    goto loc_80200580;
}

loc_80200534:
{
    r5 = MemoryInline::FlatRead32((r4 + 556));
    r0 = MemoryInline::FlatRead32((r6 + 676));
}

loc_80200540:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80200580;
    }
}

loc_80200544:
{
    r5 = MemoryInline::FlatRead32((r4 + 568));
    r0 = MemoryInline::FlatRead32((r6 + 688));
}

loc_80200550:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80200580;
    }
}

loc_80200554:
{
    r5 = MemoryInline::FlatRead16((r4 + 572));
    r0 = MemoryInline::FlatRead16((r6 + 692));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80200560:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200580;
    }
}

loc_80200564:
{
    r0 = (r8 * 652);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead16((r5 + 712));
    r3 = (r5 + 64);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r5 + 712), static_cast<uint16_t>(r0));
    goto loc_80200688;
}

loc_80200580:
{
    r6 = (r6 + 652);
    r7 = (r7 + 652);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80200504;
    }
}

loc_80200590:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80200594:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802005A0;
    }
}

loc_80200598:
{
    r3 = 0;
    goto loc_80200688;
}

loc_802005A0:
{
    r5 = 268435456;
    r3 = 1;
    r5 = (r5 + 3);
    r0 = 72;
    MemoryInline::FlatWrite32(r30, r5);
    r5 = (r30 + 52);
    r4 = (r4 + -4);
    MemoryInline::FlatWrite16((r30 + 648), static_cast<uint16_t>(r3));
    ctr = r0;
}

loc_802005C4:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802005C4;
    }
}

loc_802005D8:
{
    r27 = 0;
    r3 = (r30 + 4);
    MemoryInline::FlatWrite16((r30 + 632), static_cast<uint16_t>(r27));
    r6 = (r30 + 620);
    r4 = 0;
    MemoryInline::FlatWrite16((r30 + 634), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite32((r30 + 636), r27);
    MemoryInline::FlatWrite32((r30 + 640), r27);
    MemoryInline::FlatWrite32((r30 + 644), r27);
    r5 = MemoryInline::FlatRead32((r29 + 556));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FD6A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r28 + 6248));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020060C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200684;
    }
}

loc_80200610:
{
    r0 = MemoryInline::FlatRead32((r28 + 6256));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r28 + 6252));
    r0 = (r31 * r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r30 + 28), r3);
    r0 = MemoryInline::FlatRead32((r28 + 6256));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r28 + 6256));
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r0 = MemoryInline::FlatRead16((r28 + 6250));
    MemoryInline::FlatWrite16((r30 + 32), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 34), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite32((r30 + 36), r27);
    MemoryInline::FlatWrite32((r30 + 44), r27);
    r0 = MemoryInline::FlatRead32((r29 + 552));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020065C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200684;
    }
}

loc_80200660:
{
    r0 = MemoryInline::FlatRead32((r30 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200668:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200684;
    }
}

loc_8020066C:
{
    r0 = MemoryInline::FlatRead32((r29 + 564));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 36), r0);
}

loc_80200684:
{
    r3 = r30;
}

loc_80200688:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80003FB gpr_write=0xF8000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802004CC func_802004CC preserves=true fpr_mask=0x00000000
