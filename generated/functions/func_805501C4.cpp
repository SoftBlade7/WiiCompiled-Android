#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805501C4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805501C4;

loc_805501C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805501D0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805501F0;
    }
}

loc_805501E8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
}

loc_805501EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805501F8;
    }
}

loc_805501F0:
{
    r3 = 0;
    goto loc_8055044C;
}

loc_805501F8:
{
}

loc_805501FC:
{
    r31 = r4;
    r30 = 0;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8055020C;
    }
}

loc_80550208:
{
    r31 = 3;
}

loc_8055020C:
{
}

loc_80550210:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_80550380;
    }
}

loc_80550214:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80550224:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80550244;
    }
}

loc_80550228:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80550248;
}

loc_80550244:
{
    r3 = 0;
}

loc_80550248:
{
    r3 = (r3 + 65536);
    r4 = 56;
    r3 = (r3 + -28680);
    // inline leaf 0x8054994C (12 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r4 = (r4 & 31);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8054994C
}

loc_8055025C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80550278;
    }
}

loc_80550260:
{
}

loc_80550264:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(3))) {
        goto loc_80550270;
    }
}

loc_80550268:
{
}

loc_8055026C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(7))) {
        goto loc_80550380;
    }
}

loc_80550270:
{
    r30 = 2;
    goto loc_80550380;
}

loc_80550278:
{
    r4 = 0x809C0000u;
    r3 = 65536;
    r8 = MemoryInline::FlatRead32((r4 + -10424));
    r7 = (r3 + -27664);
    r9 = 0;
    r10 = 0;
    r3 = 0;
    r0 = 2;
}

loc_80550298:
{
    r11 = 0;
    r4 = 0;
    ctr = r0;
}

loc_805502A4:
{
    r5 = MemoryInline::FlatRead16((r8 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_805502AC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_805502C4;
    }
}

loc_805502B0:
{
    r5 = (r5 & 255);
    r5 = (r7 * r5);
    r5 = (r8 + r5);
    r5 = (r5 + 56);
    goto loc_805502C8;
}

loc_805502C4:
{
    r5 = 0;
}

loc_805502C8:
{
    r5 = (r5 + r4);
    r6 = (r5 + r3);
    r5 = MemoryInline::FlatRead8((r6 + 118));
}

loc_805502D8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805502E4;
    }
}

loc_805502DC:
{
    r5 = MemoryInline::FlatRead32((r6 + 132));
    goto loc_805502E8;
}

loc_805502E4:
{
    r5 = 3;
}

loc_805502E8:
{
}

loc_805502EC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805502F8;
    }
}

loc_805502F0:
{
    r9 = 1;
    goto loc_8055035C;
}

loc_805502F8:
{
    r5 = MemoryInline::FlatRead16((r8 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = (r4 + 896);
}

loc_80550304:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8055031C;
    }
}

loc_80550308:
{
    r5 = (r5 & 255);
    r5 = (r7 * r5);
    r5 = (r8 + r5);
    r5 = (r5 + 56);
    goto loc_80550320;
}

loc_8055031C:
{
    r5 = 0;
}

loc_80550320:
{
    r5 = (r5 + r4);
    r6 = (r5 + r3);
    r5 = MemoryInline::FlatRead8((r6 + 118));
}

loc_80550330:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8055033C;
    }
}

loc_80550334:
{
    r5 = MemoryInline::FlatRead32((r6 + 132));
    goto loc_80550340;
}

loc_8055033C:
{
    r5 = 3;
}

loc_80550340:
{
}

loc_80550344:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80550350;
    }
}

loc_80550348:
{
    r9 = 1;
    goto loc_8055035C;
}

loc_80550350:
{
    r11 = (r11 + 1);
    r4 = (r4 + 896);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805502A4;
    }
}

loc_8055035C:
{
}

loc_80550360:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80550374;
    }
}

loc_80550364:
{
    r10 = (r10 + 1);
    r3 = (r3 + 112);
}

loc_80550370:
{
    if ((static_cast<uint32_t>(r10) < static_cast<uint32_t>(8))) {
        goto loc_80550298;
    }
}

loc_80550374:
{
}

loc_80550378:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80550380;
    }
}

loc_8055037C:
{
    r30 = 2;
}

loc_80550380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80550384:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80550448;
    }
}

loc_80550388:
{
}

loc_8055038C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(3))) {
        goto loc_80550398;
    }
}

loc_80550390:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(7));
}

loc_80550394:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80550448;
    }
}

loc_80550398:
{
    r3 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + -10424));
    r5 = MemoryInline::FlatRead16((r7 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_805503A8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_805503C8;
    }
}

loc_805503AC:
{
    r3 = 65536;
    r4 = (r5 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r7 + r0);
    r0 = (r3 + 56);
    goto loc_805503CC;
}

loc_805503C8:
{
    r0 = 0;
}

loc_805503CC:
{
    r6 = (r31 * 896);
    r3 = (r0 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 454));
}

loc_805503DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805503E8;
    }
}

loc_805503E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 468));
    goto loc_805503EC;
}

loc_805503E8:
{
    r0 = 3;
}

loc_805503EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805503F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80550448;
    }
}

loc_805503F4:
{
}

loc_805503F8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8055041C;
    }
}

loc_805503FC:
{
    r4 = MemoryInline::FlatRead16((r7 + 54));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 65536;
    r0 = (r3 + -27664);
    r3 = (r4 & 255);
    r0 = (r0 * r3);
    r3 = (r7 + r0);
    r0 = (r3 + 56);
    goto loc_80550420;
}

loc_8055041C:
{
    r0 = 0;
}

loc_80550420:
{
    r3 = (r0 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 902));
}

loc_8055042C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80550438;
    }
}

loc_80550430:
{
    r0 = MemoryInline::FlatRead32((r3 + 916));
    goto loc_8055043C;
}

loc_80550438:
{
    r0 = 3;
}

loc_8055043C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80550440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80550448;
    }
}

loc_80550444:
{
    r30 = 1;
}

loc_80550448:
{
    r3 = r30;
}

loc_8055044C:
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000FFB gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805501C4 func_805501C4 preserves=true fpr_mask=0x00000000
