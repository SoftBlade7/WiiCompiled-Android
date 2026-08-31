#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020B4E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8020B4E4;

loc_8020B4E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0;
    r5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    goto loc_8020B500;
}

loc_8020B4F8:
{
    r5 = (r5 + 2);
    r4 = (r4 + 1);
}

loc_8020B500:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_8020B508:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020B4F8;
    }
}

loc_8020B50C:
{
}

loc_8020B510:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(8))) {
        goto loc_8020B57C;
    }
}

loc_8020B514:
{
    r7 = r3;
    r6 = 0;
    r5 = 0;
    ctr = r4;
}

loc_8020B528:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_8020B554;
    }
}

loc_8020B52C:
{
}

loc_8020B530:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(7))) {
        goto loc_8020B538;
    }
}

loc_8020B534:
{
    r5 = 0;
}

loc_8020B538:
{
    r4 = MemoryInline::FlatRead16(r7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r7 = (r7 + 2);
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r6 = (r6 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8020B52C;
    }
}

loc_8020B554:
{
    r4 = 138543104;
    r0 = (r4 + 4229);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r6)) >> 32));
    r0 = (r6 - r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 268435455);
    r0 = (r0 * 31);
    r8 = (r6 - r0);
    goto loc_8020B580;
}

loc_8020B57C:
{
    r8 = -1;
}

loc_8020B580:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(-1));
}

loc_8020B584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B664;
    }
}

loc_8020B588:
{
    r4 = r3;
    r9 = 0;
    goto loc_8020B59C;
}

loc_8020B594:
{
    r4 = (r4 + 2);
    r9 = (r9 + 1);
}

loc_8020B59C:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8020B5A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020B594;
    }
}

loc_8020B5A8:
{
    r4 = 0x84210000u;
    r5 = 0x80380000u;
    r6 = (r4 + 2115);
    r11 = 0;
    r5 = (r5 + 11520);
}

loc_8020B5BC:
{
    r0 = (r11 * r11);
    r10 = 0;
    r7 = (r8 + r0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r0 = (r0 + r7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 31);
    r7 = (r7 - r0);
    r0 = (r7 * 18);
    r12 = (r5 + r0);
    r4 = r12;
    goto loc_8020B5FC;
}

loc_8020B5F4:
{
    r4 = (r4 + 2);
    r10 = (r10 + 1);
}

loc_8020B5FC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8020B604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020B5F4;
    }
}

loc_8020B608:
{
}

loc_8020B60C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r10))) {
        goto loc_8020B658;
    }
}

loc_8020B610:
{
    r10 = r3;
    r31 = 1;
    ctr = r9;
}

loc_8020B620:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(0))) {
        goto loc_8020B648;
    }
}

loc_8020B624:
{
    r4 = MemoryInline::FlatRead16(r10);
    r0 = MemoryInline::FlatRead16(r12);
}

loc_8020B630:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8020B63C;
    }
}

loc_8020B634:
{
    r31 = 0;
    goto loc_8020B648;
}

loc_8020B63C:
{
    r10 = (r10 + 2);
    r12 = (r12 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8020B624;
    }
}

loc_8020B648:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8020B64C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B658;
    }
}

loc_8020B650:
{
    r3 = r7;
    goto loc_8020B668;
}

loc_8020B658:
{
    r11 = (r11 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(15));
}

loc_8020B660:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8020B5BC;
    }
}

loc_8020B664:
{
    r3 = -1;
}

loc_8020B668:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8020B4E4 func_8020B4E4 preserves=true fpr_mask=0x00000000
