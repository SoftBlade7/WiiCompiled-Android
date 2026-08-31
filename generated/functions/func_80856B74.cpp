#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80856B74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80856B74;

loc_80856B74:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_80856B80:
{
    r9 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 100));
    r31 = r0;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80856BA4;
    }
}

loc_80856BA0:
{
    r9 = -1;
}

loc_80856BA4:
{
    r4 = 0x809C0000u;
    r6 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = 715849728;
    r4 = 6;
    r8 = MemoryInline::FlatRead32((r6 + -10448));
    r10 = (r7 + 40);
    r7 = (r5 + -21845);
    r11 = 0;
    ctr = r4;
}

loc_80856BCC:
{
    r4 = (r31 + r9);
    r6 = (r4 + 12);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r4 = (r4 + r5);
    r4 = (r4 * 12);
    r31 = (r6 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_80856BF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80856CB4;
    }
}

loc_80856BF4:
{
    r6 = (r31 & 255);
    r4 = (r6 * 240);
    r4 = (r10 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80856C08:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_80856C3C;
    }
}

loc_80856C0C:
{
    r5 = MemoryInline::FlatRead32((r8 + 12));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & 1020);
    r5_addr_2 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_2);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r4 = (r4 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80856C20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80856C3C;
    }
}

loc_80856C24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 104), static_cast<uint8_t>(r0));
    r3 = r6;
    // inline leaf 0x8078DDE4 (4 guest instruction(s))
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 12088));
    MemoryInline::FlatWrite8((r4 + 492), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x8078DDE4
    MemoryInline::FlatWrite32((r30 + 100), r31);
    goto loc_80856CB4;
}

loc_80856C3C:
{
    r4 = (r31 + r9);
    r6 = (r4 + 12);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r4 = (r4 + r5);
    r4 = (r4 * 12);
    r31 = (r6 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_80856C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80856CB4;
    }
}

loc_80856C64:
{
    r6 = (r31 & 255);
    r4 = (r6 * 240);
    r4 = (r10 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_80856C78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80856CAC;
    }
}

loc_80856C7C:
{
    r5 = MemoryInline::FlatRead32((r8 + 12));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & 1020);
    r5_addr_4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_4);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r4 = (r4 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80856C90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80856CAC;
    }
}

loc_80856C94:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 104), static_cast<uint8_t>(r0));
    r3 = r6;
    // inline leaf 0x8078DDE4 (4 guest instruction(s))
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 12088));
    MemoryInline::FlatWrite8((r4 + 492), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x8078DDE4
    MemoryInline::FlatWrite32((r30 + 100), r31);
    goto loc_80856CB4;
}

loc_80856CAC:
{
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80856BCC;
    }
}

loc_80856CB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0000FFB gpr_write=0xC0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80856B74 func_80856B74 preserves=true fpr_mask=0x00000000
