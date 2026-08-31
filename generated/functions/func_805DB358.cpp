#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DB358(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805DB358;

loc_805DB358:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r6;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r7 = (r7_rot_0 & 255);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
}

loc_805DB37C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(1))) {
        goto loc_805DB3A0;
    }
}

loc_805DB384:
{
}

loc_805DB388:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(2))) {
        goto loc_805DB3BC;
    }
}

loc_805DB38C:
{
}

loc_805DB390:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(3))) {
        goto loc_805DB3CC;
    }
}

loc_805DB394:
{
}

loc_805DB398:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(4))) {
        goto loc_805DB3DC;
    }
}

loc_805DB39C:
{
    goto loc_805DB3F8;
}

loc_805DB3A0:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_7 & 65535);
    r7 = 4;
    r0 = (r0 ^ 4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    goto loc_805DB3FC;
}

loc_805DB3BC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 65535);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
    goto loc_805DB3FC;
}

loc_805DB3CC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 65535);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    goto loc_805DB3FC;
}

loc_805DB3DC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 65535);
    r7 = 96;
    r0 = (r0 ^ 96);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    goto loc_805DB3FC;
}

loc_805DB3F8:
{
    r0 = 0;
}

loc_805DB3FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DB400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DB618;
    }
}

loc_805DB404:
{
    r0 = MemoryInline::FlatRead32((r3 + 240));
}

loc_805DB40C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(30))) {
        goto loc_805DB44C;
    }
}

loc_805DB410:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r7 = (r7_rot_1 & -8);
    r0 = MemoryInline::FlatRead32(r6);
    r7 = (r3 + r7);
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 240));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r3 + 240));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_1, r0);
    r4 = MemoryInline::FlatRead32((r3 + 240));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 240), r0);
    goto loc_805DB500;
}

loc_805DB44C:
{
    r7 = r3;
    r10 = MemoryInline::FlatRead32(r6);
    r8 = -1;
    r9 = 0;
    ctr = r0;
}

loc_805DB464:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805DB488;
    }
}

loc_805DB468:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_805DB470:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r10))) {
        goto loc_805DB47C;
    }
}

loc_805DB474:
{
    r8 = r9;
    r10 = r0;
}

loc_805DB47C:
{
    r7 = (r7 + 8);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805DB468;
    }
}

loc_805DB488:
{
}

loc_805DB48C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_805DB500;
    }
}

loc_805DB490:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r8 = (r3 + r0);
    goto loc_805DB4BC;
}

loc_805DB49C:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r10 = (r10 + 1);
    MemoryInline::FlatWrite32(r8, r0);
    r0 = MemoryInline::FlatRead8((r8 + 12));
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 13));
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r0));
    r8 = (r8 + 8);
}

loc_805DB4BC:
{
    r7 = MemoryInline::FlatRead32((r3 + 240));
    r0 = (r7 + -1);
}

loc_805DB4C8:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_805DB49C;
    }
}

loc_805DB4CC:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -8);
    r0 = MemoryInline::FlatRead32(r6);
    r7 = (r3 + r7);
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 240));
    r4 = (r4 + -1);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_3 & -8);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r3 + 240));
    r4 = (r4 + -1);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_4 & -8);
    r3_addr_2 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_2, r0);
}

loc_805DB500:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805DB50C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DB618;
    }
}

loc_805DB510:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 636));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805DB524:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DB530;
    }
}

loc_805DB528:
{
    r29 = 0;
    goto loc_805DB584;
}

loc_805DB530:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7208);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DB580;
    }
}

loc_805DB53C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DB550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DB568;
}

loc_805DB554:
{
}

loc_805DB558:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805DB564;
    }
}

loc_805DB55C:
{
    r0 = 1;
    goto loc_805DB574;
}

loc_805DB564:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DB568:
{
}

loc_805DB56C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DB554;
    }
}

loc_805DB570:
{
    r0 = 0;
}

loc_805DB574:
{
}

loc_805DB578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DB580;
    }
}

loc_805DB57C:
{
    goto loc_805DB584;
}

loc_805DB580:
{
    r29 = 0;
}

loc_805DB584:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    // inline leaf 0x806568F0 (6 guest instruction(s))
}

loc_inl0_0x806568F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
}

loc_inl0_0x806568F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x806568FC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 236), r0);
    goto loc_inl0_cont_806568F0;
}

loc_inl0_return:
{
}

loc_inl0_cont_806568F0:
{
    // end of inlined leaf 0x806568F0
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 3520), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 632));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805DB5AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DB5B8;
    }
}

loc_805DB5B0:
{
    r29 = 0;
    goto loc_805DB60C;
}

loc_805DB5B8:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7216);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DB608;
    }
}

loc_805DB5C4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DB5D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DB5F0;
}

loc_805DB5DC:
{
}

loc_805DB5E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805DB5EC;
    }
}

loc_805DB5E4:
{
    r0 = 1;
    goto loc_805DB5FC;
}

loc_805DB5EC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DB5F0:
{
}

loc_805DB5F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DB5DC;
    }
}

loc_805DB5F8:
{
    r0 = 0;
}

loc_805DB5FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DB600:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DB608;
    }
}

loc_805DB604:
{
    goto loc_805DB60C;
}

loc_805DB608:
{
    r29 = 0;
}

loc_805DB60C:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWrite32((r29 + 10996), r0);
}

loc_805DB618:
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805DB358 func_805DB358 preserves=true fpr_mask=0x00000000
