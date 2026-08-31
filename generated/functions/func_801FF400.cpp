#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FF400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FF400;

loc_801FF400:
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
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801FF41C:
{
    MemoryInline::FlatWrite32(r7, r0);
    r27 = r3;
    r31 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF440;
    }
}

loc_801FF438:
{
    r3 = 0;
    goto loc_801FF664;
}

loc_801FF440:
{
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r5 = MemoryInline::FlatRead32((r7 + 608));
    r0 = (r3 + r6);
}

loc_801FF454:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r5))) {
        goto loc_801FF468;
    }
}

loc_801FF458:
{
    r29 = (r5 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF468;
    }
}

loc_801FF460:
{
    r3 = 0;
    goto loc_801FF664;
}

loc_801FF468:
{
    r5 = MemoryInline::FlatRead32((r4 + 36));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FF474:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF614;
    }
}

loc_801FF478:
{
    r4 = MemoryInline::FlatRead32((r4 + 40));
    r3 = (r7 + 4);
    r6 = (r31 + 36);
    r5 = 0;
    ctx->lr = 0x801FF48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC29Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FF490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FF498;
    }
}

loc_801FF494:
{
    goto loc_801FF664;
}

loc_801FF498:
{
    r5 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r5 + 65536);
}

loc_801FF4A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801FF558;
    }
}

loc_801FF4A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
}

loc_801FF4B0:
{
    r8 = MemoryInline::FlatRead32((r3 + 608));
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801FF4C0;
    }
}

loc_801FF4B8:
{
    r4 = 0;
    goto loc_801FF4C4;
}

loc_801FF4C0:
{
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF4C4:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r3 = (r3 + -1);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r7 = (r0 & r3);
    r5 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r8 & r3);
    r6 = (0 - r7);
    r4 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6 = (r6 | r7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
}

loc_801FF508:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FF514;
    }
}

loc_801FF50C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_801FF514:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FF518:
{
    MemoryInline::FlatWrite32((r31 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF528;
    }
}

loc_801FF520:
{
    r4 = 0;
    goto loc_801FF530;
}

loc_801FF528:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF530:
{
    r5 = MemoryInline::FlatRead32((r31 + 32));
    r3 = 28;
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    goto loc_801FF664;
}

loc_801FF558:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r6 = MemoryInline::FlatRead32((r31 + 32));
    r8 = MemoryInline::FlatRead32((r3 + 608));
    r0 = (r6 + r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
}

loc_801FF56C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FF614;
    }
}

loc_801FF570:
{
}

loc_801FF574:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801FF580;
    }
}

loc_801FF578:
{
    r4 = 0;
    goto loc_801FF584;
}

loc_801FF580:
{
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF584:
{
    r3 = MemoryInline::FlatRead16(r4);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r0 = (r3 + -1);
    r7 = (r6 & r0);
    r5 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r3 = (r8 & r0);
    r4 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
    r6 = (0 - r7);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6 = (r6 | r7);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
}

loc_801FF5C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FF5D0;
    }
}

loc_801FF5C8:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_801FF5D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FF5D4:
{
    MemoryInline::FlatWrite32((r31 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF5E4;
    }
}

loc_801FF5DC:
{
    r4 = 0;
    goto loc_801FF5EC;
}

loc_801FF5E4:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF5EC:
{
    r5 = MemoryInline::FlatRead32((r31 + 32));
    r3 = 27;
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    goto loc_801FF664;
}

loc_801FF614:
{
    r6 = MemoryInline::FlatRead16((r31 + 44));
    r3 = r27;
    r4 = r28;
    r7 = r29;
    r8 = (r1 + 8);
    r9 = 1;
    ctx->lr = 0x801FF630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80205058u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FF634:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FF648;
    }
}

loc_801FF638:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FF640:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF648;
    }
}

loc_801FF644:
{
    goto loc_801FF664;
}

loc_801FF648:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    MemoryInline::FlatWrite32(r30, r0);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x801FF660u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FEE78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0;
}

loc_801FF664:
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FF400 func_801FF400 preserves=true fpr_mask=0x00000000
