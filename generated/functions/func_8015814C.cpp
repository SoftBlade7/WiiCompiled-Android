#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015814C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015814C;

loc_8015814C:
{
    r0 = 53;
    r11 = (r3 + 1);
    r10 = r11;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r9 = 0;
    r6 = 28;
    r7 = 26;
    r8 = 25;
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(0));
}

loc_80158174:
{
    r11 = (r11 + 1);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80158224;
    }
}

loc_8015817C:
{
    r0 = MemoryInline::FlatRead16(r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80158184:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801581A8;
    }
}

loc_80158188:
{
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r8));
    r0 = MemoryInline::FlatRead16((r5 + 4));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWrite8((r11 + 2), static_cast<uint8_t>(r0));
    r11 = (r11 + 3);
    goto loc_80158218;
}

loc_801581A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801581AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801581E8;
    }
}

loc_801581B0:
{
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 255);
    MemoryInline::FlatWrite8((r11 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWrite8((r11 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite8((r11 + 4), static_cast<uint8_t>(r0));
    r11 = (r11 + 5);
    goto loc_80158218;
}

loc_801581E8:
{
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r6));
    r4 = 0;
    r11 = (r11 + 1);
    goto loc_8015820C;
}

loc_801581F8:
{
    r3 = (r5 + r4);
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r0));
    r11 = (r11 + 1);
}

loc_8015820C:
{
    r0 = MemoryInline::FlatRead16(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80158214:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801581F8;
    }
}

loc_80158218:
{
    r9 = (r9 + 1);
    r5 = (r5 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015817C;
    }
}

loc_80158224:
{
    r4 = (r11 - r10);
    r3 = r11;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015814C func_8015814C preserves=true fpr_mask=0x00000000
