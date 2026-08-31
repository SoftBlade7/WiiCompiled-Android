#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008BE00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008BE00;

loc_8008BE00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8008BE20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008BE2C;
    }
}

loc_8008BE24:
{
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008BF90;
}

loc_8008BE2C:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = 715849728;
    MemoryInline::FlatWrite16((r5 + 146), static_cast<uint16_t>(r0));
    r4 = (r4 + -21845);
    r6 = -1;
    r7 = MemoryInline::FlatRead16((r31 + 14));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r7 - r0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (0 - r8);
    r0 = (r0 & ~r8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r8 + r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008BE78;
    }
}

loc_8008BE74:
{
    r6 = 1;
}

loc_8008BE78:
{
    r0 = (r6 * 96);
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r4 + r0);
    r4 = (r7 - r0);
    r0 = (r8 * 96);
    r0 = (r5 + r0);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8008BE9C;
    }
}

loc_8008BE98:
{
    r4 = (0 - r4);
}

loc_8008BE9C:
{
    r0 = (r7 - r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8008BEA8;
    }
}

loc_8008BEA4:
{
    r0 = (0 - r0);
}

loc_8008BEA8:
{
}

loc_8008BEAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_8008BEBC;
    }
}

loc_8008BEB0:
{
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite16((r4 + 148), static_cast<uint16_t>(r8));
    goto loc_8008BEC4;
}

loc_8008BEBC:
{
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite16((r4 + 148), static_cast<uint16_t>(r6));
}

loc_8008BEC4:
{
    r5 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r0 = MemoryInline::FlatRead16((r5 + 148));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 96);
    r0 = (r4 + r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8008BF04;
    }
}

loc_8008BEDC:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = 715849728;
    r4 = (r4 + -21845);
    r0 = (0 - r0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
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
    MemoryInline::FlatWrite16((r5 + 148), static_cast<uint16_t>(r0));
    goto loc_8008BF30;
}

loc_8008BF04:
{
}

loc_8008BF08:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(32767))) {
        goto loc_8008BF30;
    }
}

loc_8008BF0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = 715849728;
    r4 = (r4 + -21845);
    r0_subfic_ra_1 = r0;
    r0 = (32767 - r0_subfic_ra_1);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r5 + 148), static_cast<uint16_t>(r0));
}

loc_8008BF30:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r4 + 148));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008BF3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008BF54;
    }
}

loc_8008BF40:
{
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008BF48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008BF54;
    }
}

loc_8008BF4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
    MemoryInline::FlatWrite16((r4 + 146), static_cast<uint16_t>(r0));
}

loc_8008BF54:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = 0;
    r5 = MemoryInline::FlatRead32(r31);
    r4 = (r4 & -513);
    r6 = (r4 | 256);
    MemoryInline::FlatWrite32((r31 + 4), r6);
    r4 = MemoryInline::FlatRead16((r5 + 146));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r5 + 148));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead32((r5 + 28));
    r4 = (r4 | r6);
    MemoryInline::FlatWrite32((r5 + 28), r4);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008BF90:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001FB gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8008BE00 func_8008BE00 preserves=true fpr_mask=0x00000000
