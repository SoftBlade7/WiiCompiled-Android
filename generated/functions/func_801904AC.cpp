#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801904AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_14 = 0;
    uint32_t r8_rot_15 = 0;
    uint32_t r8_rot_16 = 0;
    uint32_t r8_rot_17 = 0;
    uint32_t r8_rot_18 = 0;
    uint32_t r8_rot_19 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_20 = 0;
    uint32_t r8_rot_21 = 0;
    uint32_t r8_rot_22 = 0;
    uint32_t r8_rot_23 = 0;
    uint32_t r8_rot_24 = 0;
    uint32_t r8_rot_25 = 0;
    uint32_t r8_rot_26 = 0;
    uint32_t r8_rot_27 = 0;
    uint32_t r8_rot_28 = 0;
    uint32_t r8_rot_29 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_30 = 0;
    uint32_t r8_rot_31 = 0;
    uint32_t r8_rot_32 = 0;
    uint32_t r8_rot_33 = 0;
    uint32_t r8_rot_34 = 0;
    uint32_t r8_rot_35 = 0;
    uint32_t r8_rot_36 = 0;
    uint32_t r8_rot_37 = 0;
    uint32_t r8_rot_38 = 0;
    uint32_t r8_rot_39 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_40 = 0;
    uint32_t r8_rot_41 = 0;
    uint32_t r8_rot_42 = 0;
    uint32_t r8_rot_43 = 0;
    uint32_t r8_rot_44 = 0;
    uint32_t r8_rot_45 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_15 = 0;
    uint32_t r9_rot_16 = 0;
    uint32_t r9_rot_17 = 0;
    uint32_t r9_rot_18 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801904AC;

loc_801904AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r6 = 0x80340000u;
    r6 = (r6 + 18968);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r6 + 1720));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801904CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80190F94;
    }
}

loc_801904D0:
{
    r3 = 0x80290000u;
    r8 = 16;
    r4 = (r3 + -11256);
    r7 = 0;
    r5 = 65536;
    r0 = 0;
    r3 = 715849728;
    ctr = r8;
}

loc_801904F0:
{
    r10 = MemoryInline::FlatRead32((r6 + 116));
    r9 = 0;
    r10_addr_2 = (r10 + r7);
    r11 = MemoryInline::FlatRead32(r10_addr_2);
    r10 = r10_addr_2;
    r8 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_80190504:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80190F8C;
    }
}

loc_80190508:
{
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r12 = 0;
    r29 = (r29 & 536870912);
}

loc_80190514:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80190530;
    }
}

loc_80190518:
{
    r29 = MemoryInline::FlatRead16((r10 + 50));
    r9 = 1;
    MemoryInline::FlatWrite16((r10 + 48), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & -536870913);
    MemoryInline::FlatWrite32((r10 + 4), r29);
}

loc_80190530:
{
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & 268435456);
}

loc_80190538:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80190584;
    }
}

loc_8019053C:
{
    r9 = MemoryInline::FlatRead32((r10 + 8));
}

loc_80190544:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(-904))) {
        goto loc_80190550;
    }
}

loc_80190548:
{
    r9 = 0;
    goto loc_8019056C;
}

loc_80190550:
{
}

loc_80190554:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(60))) {
        goto loc_80190560;
    }
}

loc_80190558:
{
    r9 = (r5 + -156);
    goto loc_8019056C;
}

loc_80190560:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    r9 = (r4 + r9);
    r9 = MemoryInline::FlatRead16((r9 + 1808));
}

loc_8019056C:
{
    MemoryInline::FlatWrite16((r10 + 50), static_cast<uint16_t>(r9));
    r9 = 1;
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & -268435457);
    r29 = (r29 | 536870912);
    MemoryInline::FlatWrite32((r10 + 4), r29);
}

loc_80190584:
{
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & -2147483648);
}

loc_8019058C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80190600;
    }
}

loc_80190590:
{
    r29 = MemoryInline::FlatRead16((r10 + 54));
    r8 = 1;
    MemoryInline::FlatWrite16((r10 + 52), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 58));
    MemoryInline::FlatWrite16((r10 + 56), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 62));
    MemoryInline::FlatWrite16((r10 + 60), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 66));
    MemoryInline::FlatWrite16((r10 + 64), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 70));
    MemoryInline::FlatWrite16((r10 + 68), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 74));
    MemoryInline::FlatWrite16((r10 + 72), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 78));
    MemoryInline::FlatWrite16((r10 + 76), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 82));
    MemoryInline::FlatWrite16((r10 + 80), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 86));
    MemoryInline::FlatWrite16((r10 + 84), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 90));
    MemoryInline::FlatWrite16((r10 + 88), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 94));
    MemoryInline::FlatWrite16((r10 + 92), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 98));
    MemoryInline::FlatWrite16((r10 + 96), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & 2147483647);
    MemoryInline::FlatWrite32((r10 + 4), r29);
}

loc_80190600:
{
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & 1073741824);
}

loc_80190608:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80190C04;
    }
}

loc_8019060C:
{
    r8 = MemoryInline::FlatRead32((r6 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(1));
}

loc_80190614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801907D8;
    }
}

loc_80190618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80190628;
    }
}

loc_8019061C:
{
}

loc_80190620:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80190634;
    }
}

loc_80190624:
{
    goto loc_80190BF0;
}

loc_80190628:
{
}

loc_8019062C:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(3))) {
        goto loc_80190BF0;
    }
}

loc_80190630:
{
    goto loc_8019099C;
}

loc_80190634:
{
    r29 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 32));
    r8 = (r29 + r8);
}

loc_80190644:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190650;
    }
}

loc_80190648:
{
    r8 = 0;
    goto loc_8019066C;
}

loc_80190650:
{
}

loc_80190654:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190660;
    }
}

loc_80190658:
{
    r8 = (r5 + -156);
    goto loc_8019066C;
}

loc_80190660:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_8019066C:
{
    MemoryInline::FlatWrite16((r10 + 54), static_cast<uint16_t>(r8));
    r29 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 32));
    r8 = (r29 + r8);
}

loc_80190680:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_8019068C;
    }
}

loc_80190684:
{
    r8 = 0;
    goto loc_801906A8;
}

loc_8019068C:
{
}

loc_80190690:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_8019069C;
    }
}

loc_80190694:
{
    r8 = (r5 + -156);
    goto loc_801906A8;
}

loc_8019069C:
{
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_801906A8:
{
    MemoryInline::FlatWrite16((r10 + 58), static_cast<uint16_t>(r8));
    r29 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 36));
    r8 = (r29 + r8);
    r8 = (r8 + -30);
}

loc_801906C0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_801906CC;
    }
}

loc_801906C4:
{
    r8 = 0;
    goto loc_801906E8;
}

loc_801906CC:
{
}

loc_801906D0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_801906DC;
    }
}

loc_801906D4:
{
    r8 = (r5 + -156);
    goto loc_801906E8;
}

loc_801906DC:
{
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_6 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_801906E8:
{
    MemoryInline::FlatWrite16((r10 + 62), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 12));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80190704:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190710;
    }
}

loc_80190708:
{
    r8 = 0;
    goto loc_8019072C;
}

loc_80190710:
{
}

loc_80190714:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190720;
    }
}

loc_80190718:
{
    r8 = (r5 + -156);
    goto loc_8019072C;
}

loc_80190720:
{
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_8 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_8019072C:
{
    MemoryInline::FlatWrite16((r10 + 66), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 12));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80190748:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190754;
    }
}

loc_8019074C:
{
    r8 = 0;
    goto loc_80190770;
}

loc_80190754:
{
}

loc_80190758:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190764;
    }
}

loc_8019075C:
{
    r8 = (r5 + -156);
    goto loc_80190770;
}

loc_80190764:
{
    r8_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_10 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190770:
{
    MemoryInline::FlatWrite16((r10 + 70), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = MemoryInline::FlatRead32((r10 + 36));
    r8 = (r30 + r8);
    r8 = (r8 + r29);
    r8 = (r8 + -30);
}

loc_80190790:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_8019079C;
    }
}

loc_80190794:
{
    r8 = 0;
    goto loc_801907B8;
}

loc_8019079C:
{
}

loc_801907A0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_801907AC;
    }
}

loc_801907A4:
{
    r8 = (r5 + -156);
    goto loc_801907B8;
}

loc_801907AC:
{
    r8_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_12 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_801907B8:
{
    MemoryInline::FlatWrite16((r10 + 74), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r10 + 78), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 82), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 90), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 94), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 98), static_cast<uint16_t>(r0));
    goto loc_80190BF0;
}

loc_801907D8:
{
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 24));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_801907F0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_801907FC;
    }
}

loc_801907F4:
{
    r8 = 0;
    goto loc_80190818;
}

loc_801907FC:
{
}

loc_80190800:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_8019080C;
    }
}

loc_80190804:
{
    r8 = (r5 + -156);
    goto loc_80190818;
}

loc_8019080C:
{
    r8_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_30 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190818:
{
    MemoryInline::FlatWrite16((r10 + 54), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 28));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80190834:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190840;
    }
}

loc_80190838:
{
    r8 = 0;
    goto loc_8019085C;
}

loc_80190840:
{
}

loc_80190844:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190850;
    }
}

loc_80190848:
{
    r8 = (r5 + -156);
    goto loc_8019085C;
}

loc_80190850:
{
    r8_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_32 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_8019085C:
{
    MemoryInline::FlatWrite16((r10 + 58), static_cast<uint16_t>(r8));
    r29 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 36));
    r8 = (r29 + r8);
    r8 = (r8 + -30);
}

loc_80190874:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190880;
    }
}

loc_80190878:
{
    r8 = 0;
    goto loc_8019089C;
}

loc_80190880:
{
}

loc_80190884:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190890;
    }
}

loc_80190888:
{
    r8 = (r5 + -156);
    goto loc_8019089C;
}

loc_80190890:
{
    r8_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_34 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_8019089C:
{
    MemoryInline::FlatWrite16((r10 + 62), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 32));
    r29 = MemoryInline::FlatRead32((r10 + 24));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_801908C0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_801908CC;
    }
}

loc_801908C4:
{
    r8 = 0;
    goto loc_801908E8;
}

loc_801908CC:
{
}

loc_801908D0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_801908DC;
    }
}

loc_801908D4:
{
    r8 = (r5 + -156);
    goto loc_801908E8;
}

loc_801908DC:
{
    r8_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_36 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_801908E8:
{
    MemoryInline::FlatWrite16((r10 + 66), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 32));
    r29 = MemoryInline::FlatRead32((r10 + 28));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_8019090C:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190918;
    }
}

loc_80190910:
{
    r8 = 0;
    goto loc_80190934;
}

loc_80190918:
{
}

loc_8019091C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190928;
    }
}

loc_80190920:
{
    r8 = (r5 + -156);
    goto loc_80190934;
}

loc_80190928:
{
    r8_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_38 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190934:
{
    MemoryInline::FlatWrite16((r10 + 70), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = MemoryInline::FlatRead32((r10 + 36));
    r8 = (r30 + r8);
    r8 = (r8 + r29);
    r8 = (r8 + -30);
}

loc_80190954:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190960;
    }
}

loc_80190958:
{
    r8 = 0;
    goto loc_8019097C;
}

loc_80190960:
{
}

loc_80190964:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190970;
    }
}

loc_80190968:
{
    r8 = (r5 + -156);
    goto loc_8019097C;
}

loc_80190970:
{
    r8_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_40 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_8019097C:
{
    MemoryInline::FlatWrite16((r10 + 74), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r10 + 78), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 82), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 90), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 94), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 98), static_cast<uint16_t>(r0));
    goto loc_80190BF0;
}

loc_8019099C:
{
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 24));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_801909B4:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_801909C0;
    }
}

loc_801909B8:
{
    r8 = 0;
    goto loc_801909DC;
}

loc_801909C0:
{
}

loc_801909C4:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_801909D0;
    }
}

loc_801909C8:
{
    r8 = (r5 + -156);
    goto loc_801909DC;
}

loc_801909D0:
{
    r8_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_14 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_801909DC:
{
    MemoryInline::FlatWrite16((r10 + 54), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 28));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_801909F8:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190A04;
    }
}

loc_801909FC:
{
    r8 = 0;
    goto loc_80190A20;
}

loc_80190A04:
{
}

loc_80190A08:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190A14;
    }
}

loc_80190A0C:
{
    r8 = (r5 + -156);
    goto loc_80190A20;
}

loc_80190A14:
{
    r8_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_16 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190A20:
{
    MemoryInline::FlatWrite16((r10 + 58), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 36));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 40));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80190A3C:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190A48;
    }
}

loc_80190A40:
{
    r8 = 0;
    goto loc_80190A64;
}

loc_80190A48:
{
}

loc_80190A4C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190A58;
    }
}

loc_80190A50:
{
    r8 = (r5 + -156);
    goto loc_80190A64;
}

loc_80190A58:
{
    r8_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_18 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190A64:
{
    MemoryInline::FlatWrite16((r10 + 62), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 36));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 44));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80190A80:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190A8C;
    }
}

loc_80190A84:
{
    r8 = 0;
    goto loc_80190AA8;
}

loc_80190A8C:
{
}

loc_80190A90:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190A9C;
    }
}

loc_80190A94:
{
    r8 = (r5 + -156);
    goto loc_80190AA8;
}

loc_80190A9C:
{
    r8_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_20 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190AA8:
{
    MemoryInline::FlatWrite16((r10 + 90), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 32));
    r29 = MemoryInline::FlatRead32((r10 + 24));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80190ACC:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190AD8;
    }
}

loc_80190AD0:
{
    r8 = 0;
    goto loc_80190AF4;
}

loc_80190AD8:
{
}

loc_80190ADC:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190AE8;
    }
}

loc_80190AE0:
{
    r8 = (r5 + -156);
    goto loc_80190AF4;
}

loc_80190AE8:
{
    r8_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_22 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190AF4:
{
    MemoryInline::FlatWrite16((r10 + 66), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 32));
    r29 = MemoryInline::FlatRead32((r10 + 28));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80190B18:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190B24;
    }
}

loc_80190B1C:
{
    r8 = 0;
    goto loc_80190B40;
}

loc_80190B24:
{
}

loc_80190B28:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190B34;
    }
}

loc_80190B2C:
{
    r8 = (r5 + -156);
    goto loc_80190B40;
}

loc_80190B34:
{
    r8_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_24 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190B40:
{
    MemoryInline::FlatWrite16((r10 + 70), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 36));
    r29 = MemoryInline::FlatRead32((r10 + 40));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80190B64:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190B70;
    }
}

loc_80190B68:
{
    r8 = 0;
    goto loc_80190B8C;
}

loc_80190B70:
{
}

loc_80190B74:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190B80;
    }
}

loc_80190B78:
{
    r8 = (r5 + -156);
    goto loc_80190B8C;
}

loc_80190B80:
{
    r8_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_26 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190B8C:
{
    MemoryInline::FlatWrite16((r10 + 74), static_cast<uint16_t>(r8));
    r29 = MemoryInline::FlatRead32((r10 + 36));
    r30 = MemoryInline::FlatRead32((r10 + 44));
    r31 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r30 = (r29 + r30);
    r8 = (r31 + r8);
    r8 = (r30 + r8);
}

loc_80190BB0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80190BBC;
    }
}

loc_80190BB4:
{
    r8 = 0;
    goto loc_80190BD8;
}

loc_80190BBC:
{
}

loc_80190BC0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80190BCC;
    }
}

loc_80190BC4:
{
    r8 = (r5 + -156);
    goto loc_80190BD8;
}

loc_80190BCC:
{
    r8_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_28 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80190BD8:
{
    MemoryInline::FlatWrite16((r10 + 94), static_cast<uint16_t>(r8));
    r12 = (r12 | -2147483648);
    MemoryInline::FlatWrite16((r10 + 78), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 82), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 98), static_cast<uint16_t>(r0));
}

loc_80190BF0:
{
    r30 = MemoryInline::FlatRead32((r10 + 4));
    r8 = 1;
    r30 = (r30 & -1073741825);
    r30 = (r30 | -2147483648);
    MemoryInline::FlatWrite32((r10 + 4), r30);
}

loc_80190C04:
{
}

loc_80190C08:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80190C44;
    }
}

loc_80190C0C:
{
    r9 = MemoryInline::FlatRead16((r10 + 48));
    r30 = (r3 + -21845);
    MemoryInline::FlatWrite16((r11 + 146), static_cast<uint16_t>(r9));
    r31 = MemoryInline::FlatRead16((r10 + 48));
    r9 = MemoryInline::FlatRead16((r10 + 50));
    r9 = (r9 - r31);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r9) >> 4);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r31 = (r31_rot_2 & 1);
    r9 = (r9 + r31);
    MemoryInline::FlatWrite16((r11 + 148), static_cast<uint16_t>(r9));
    r9 = MemoryInline::FlatRead32((r11 + 28));
    r9 = (r9 | 256);
    MemoryInline::FlatWrite32((r11 + 28), r9);
}

loc_80190C44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80190C48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80190F8C;
    }
}

loc_80190C4C:
{
    r8 = MemoryInline::FlatRead16((r10 + 52));
}

loc_80190C54:
{
    MemoryInline::FlatWrite16((r11 + 60), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190C60;
    }
}

loc_80190C5C:
{
    r12 = (r12 | 1);
}

loc_80190C60:
{
    r9 = MemoryInline::FlatRead16((r10 + 52));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 54));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_5 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190C84:
{
    MemoryInline::FlatWrite16((r11 + 62), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190C90;
    }
}

loc_80190C8C:
{
    r12 = (r12 | 4);
}

loc_80190C90:
{
    r8 = MemoryInline::FlatRead16((r10 + 56));
}

loc_80190C98:
{
    MemoryInline::FlatWrite16((r11 + 64), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190CA4;
    }
}

loc_80190CA0:
{
    r12 = (r12 | 2);
}

loc_80190CA4:
{
    r9 = MemoryInline::FlatRead16((r10 + 56));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 58));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_6 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190CC8:
{
    MemoryInline::FlatWrite16((r11 + 66), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190CD4;
    }
}

loc_80190CD0:
{
    r12 = (r12 | 4);
}

loc_80190CD4:
{
    r8 = MemoryInline::FlatRead16((r10 + 64));
}

loc_80190CDC:
{
    MemoryInline::FlatWrite16((r11 + 68), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190CE8;
    }
}

loc_80190CE4:
{
    r12 = (r12 | 65536);
}

loc_80190CE8:
{
    r9 = MemoryInline::FlatRead16((r10 + 64));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 66));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_7 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190D0C:
{
    MemoryInline::FlatWrite16((r11 + 70), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190D18;
    }
}

loc_80190D14:
{
    r12 = (r12 | 262144);
}

loc_80190D18:
{
    r8 = MemoryInline::FlatRead16((r10 + 68));
}

loc_80190D20:
{
    MemoryInline::FlatWrite16((r11 + 72), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190D2C;
    }
}

loc_80190D28:
{
    r12 = (r12 | 131072);
}

loc_80190D2C:
{
    r9 = MemoryInline::FlatRead16((r10 + 68));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 70));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_8 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190D50:
{
    MemoryInline::FlatWrite16((r11 + 74), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190D5C;
    }
}

loc_80190D58:
{
    r12 = (r12 | 262144);
}

loc_80190D5C:
{
    r8 = MemoryInline::FlatRead16((r10 + 76));
}

loc_80190D64:
{
    MemoryInline::FlatWrite16((r11 + 76), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190D70;
    }
}

loc_80190D6C:
{
    r12 = (r12 | 2097152);
}

loc_80190D70:
{
    r9 = MemoryInline::FlatRead16((r10 + 76));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 78));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_9 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190D94:
{
    MemoryInline::FlatWrite16((r11 + 78), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190DA0;
    }
}

loc_80190D9C:
{
    r12 = (r12 | 8388608);
}

loc_80190DA0:
{
    r8 = MemoryInline::FlatRead16((r10 + 80));
}

loc_80190DA8:
{
    MemoryInline::FlatWrite16((r11 + 80), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190DB4;
    }
}

loc_80190DB0:
{
    r12 = (r12 | 4194304);
}

loc_80190DB4:
{
    r9 = MemoryInline::FlatRead16((r10 + 80));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 82));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_10 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190DD8:
{
    MemoryInline::FlatWrite16((r11 + 82), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190DE4;
    }
}

loc_80190DE0:
{
    r12 = (r12 | 8388608);
}

loc_80190DE4:
{
    r8 = MemoryInline::FlatRead16((r10 + 88));
}

loc_80190DEC:
{
    MemoryInline::FlatWrite16((r11 + 84), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190DF8;
    }
}

loc_80190DF4:
{
    r12 = (r12 | 67108864);
}

loc_80190DF8:
{
    r9 = MemoryInline::FlatRead16((r10 + 88));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 90));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_11 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190E1C:
{
    MemoryInline::FlatWrite16((r11 + 86), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190E28;
    }
}

loc_80190E24:
{
    r12 = (r12 | 268435456);
}

loc_80190E28:
{
    r8 = MemoryInline::FlatRead16((r10 + 92));
}

loc_80190E30:
{
    MemoryInline::FlatWrite16((r11 + 88), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190E3C;
    }
}

loc_80190E38:
{
    r12 = (r12 | 134217728);
}

loc_80190E3C:
{
    r9 = MemoryInline::FlatRead16((r10 + 92));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 94));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_12 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190E60:
{
    MemoryInline::FlatWrite16((r11 + 90), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190E6C;
    }
}

loc_80190E68:
{
    r12 = (r12 | 268435456);
}

loc_80190E6C:
{
    r8 = MemoryInline::FlatRead16((r10 + 60));
}

loc_80190E74:
{
    MemoryInline::FlatWrite16((r11 + 92), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190E80;
    }
}

loc_80190E7C:
{
    r12 = (r12 | 8);
}

loc_80190E80:
{
    r9 = MemoryInline::FlatRead16((r10 + 60));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 62));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_13 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190EA4:
{
    MemoryInline::FlatWrite16((r11 + 94), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190EB0;
    }
}

loc_80190EAC:
{
    r12 = (r12 | 16);
}

loc_80190EB0:
{
    r8 = MemoryInline::FlatRead16((r10 + 72));
}

loc_80190EB8:
{
    MemoryInline::FlatWrite16((r11 + 96), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190EC4;
    }
}

loc_80190EC0:
{
    r12 = (r12 | 524288);
}

loc_80190EC4:
{
    r9 = MemoryInline::FlatRead16((r10 + 72));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 74));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_14 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190EE8:
{
    MemoryInline::FlatWrite16((r11 + 98), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190EF4;
    }
}

loc_80190EF0:
{
    r12 = (r12 | 1048576);
}

loc_80190EF4:
{
    r8 = MemoryInline::FlatRead16((r10 + 84));
}

loc_80190EFC:
{
    MemoryInline::FlatWrite16((r11 + 100), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190F08;
    }
}

loc_80190F04:
{
    r12 = (r12 | 16777216);
}

loc_80190F08:
{
    r9 = MemoryInline::FlatRead16((r10 + 84));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 86));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_15 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
}

loc_80190F2C:
{
    MemoryInline::FlatWrite16((r11 + 102), static_cast<uint16_t>(r9));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190F38;
    }
}

loc_80190F34:
{
    r12 = (r12 | 33554432);
}

loc_80190F38:
{
    r8 = MemoryInline::FlatRead16((r10 + 96));
}

loc_80190F40:
{
    MemoryInline::FlatWrite16((r11 + 104), static_cast<uint16_t>(r8));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80190F4C;
    }
}

loc_80190F48:
{
    r12 = (r12 | 536870912);
}

loc_80190F4C:
{
    r9 = MemoryInline::FlatRead16((r10 + 96));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 98));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_16 & 1);
    r9 = (r8 + r9);
    r8 = (r9 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80190F70:
{
    MemoryInline::FlatWrite16((r11 + 106), static_cast<uint16_t>(r9));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80190F7C;
    }
}

loc_80190F78:
{
    r12 = (r12 | 1073741824);
}

loc_80190F7C:
{
    MemoryInline::FlatWrite32((r11 + 52), r12);
    r8 = MemoryInline::FlatRead32((r11 + 28));
    r8 = (r8 | 18);
    MemoryInline::FlatWrite32((r11 + 28), r8);
}

loc_80190F8C:
{
    r7 = (r7 + 100);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801904F0;
    }
}

loc_80190F94:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801904AC func_801904AC preserves=true fpr_mask=0x00000000
