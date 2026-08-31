#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80170640(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80170640;

loc_80170640:
{
    r10 = 3;
    r0 = 2;
}

loc_80170660:
{
}

loc_80170664:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(6))) {
        goto loc_80170670;
    }
}

loc_80170668:
{
}

loc_8017066C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(22))) {
        goto loc_80170678;
    }
}

loc_80170670:
{
    r11 = 64;
    goto loc_8017067C;
}

loc_80170678:
{
    r11 = 32;
}

loc_8017067C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
}

loc_80170680:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80170704;
    }
}

loc_80170684:
{
    r5 = 1;
    r12 = 0;
    r8 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r10));
    r9 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    ctr = r7;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(0));
}

loc_8017069C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80170730;
    }
}

loc_801706A0:
{
    r6 = (r3 + r8);
    r5 = (r4 + r9);
    r6 = (r6 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_801706B0:
{
    r6 = PPC_Sraw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r5 = (r5 + -1);
    r6 = (r11 * r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r0) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r5 = (r6 * r5);
    r12 = (r12 + r5);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801706D4;
    }
}

loc_801706CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_801706D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80170730;
    }
}

loc_801706D4:
{
}

loc_801706D8:
{
    r5 = 1;
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_801706E4;
    }
}

loc_801706E0:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r5 = (r5_rot_2 & 32767);
}

loc_801706E4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_801706E8:
{
    r3 = (r5 & 65535);
    r5 = 1;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801706F8;
    }
}

loc_801706F4:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r5 = (r5_rot_4 & 32767);
}

loc_801706F8:
{
    r4 = (r5 & 65535);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801706A0;
    }
}

loc_80170700:
{
    goto loc_80170730;
}

loc_80170704:
{
    r6 = 1;
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r5 = (r3 + r5);
    r3 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r5 = (r5 + -1);
    r5 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r10));
    r3 = (r4 + r3);
    r4 = (r11 * r5);
    r3 = (r3 + -1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r0) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r12 = (r4 * r0);
}

loc_80170730:
{
    r3 = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001F79 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80170640 func_80170640 preserves=true fpr_mask=0x00000000
