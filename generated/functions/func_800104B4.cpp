#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800104B4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800104B4;

loc_800104B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800104B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800104D8;
    }
}

loc_800104BC:
{
    r5 = 0;
    r4 = 1;
    r0 = 48;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800104D8:
{
    r7 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r7));
}

loc_800104E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_800104E4:
{
    r6 = (r3 + r4);
    r5 = MemoryInline::FlatRead8((r6 + 5));
    r8 = (r6 + 5);
    r0 = (r5 + -48);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800104FC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(5))) {
        goto loc_8001053C;
    }
}

loc_80010500:
{
    r5 = (r3 + r7);
    r5 = (r5 + 5);
}

loc_80010508:
{
    r5 = (r5 + -1);
}

loc_80010510:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r8))) {
        goto loc_80010520;
    }
}

loc_80010514:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8001051C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_80010508;
    }
}

loc_80010520:
{
}

loc_80010524:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r8))) {
        goto loc_80010534;
    }
}

loc_80010528:
{
    r0 = MemoryInline::FlatRead8((r8 + -1));
    r5 = (r0 & 1);
    goto loc_80010550;
}

loc_80010534:
{
    r5 = 1;
    goto loc_80010550;
}

loc_8001053C:
{
    r0 = (r6 ^ 5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r0 = (r5 - r0);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
}

loc_80010550:
{
    ctr = r4;
}

loc_80010558:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800105A4;
    }
}

loc_8001055C:
{
    r8 = (r8 + -1);
    r0 = MemoryInline::FlatRead8(r8);
    r5 = (r0 + r5);
    r0 = (r5 + -48);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r6 ^ 9);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r0 = (r5 - r0);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & 1);
}

loc_80010580:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8001058C;
    }
}

loc_80010584:
{
}

loc_80010588:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80010594;
    }
}

loc_8001058C:
{
    r4 = (r4 + -1);
    goto loc_800105A0;
}

loc_80010594:
{
    r0 = (r6 + 48);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    goto loc_800105A4;
}

loc_800105A0:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001055C;
    }
}

loc_800105A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800105A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800105CC;
    }
}

loc_800105AC:
{
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = 1;
    r0 = 49;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    r4 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800105CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800105D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800104BC;
    }
}

loc_800105D4:
{
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800104B4 func_800104B4 preserves=true fpr_mask=0x00000000
