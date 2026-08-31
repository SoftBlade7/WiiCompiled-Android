#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010F5B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

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

    goto loc_8010F5B0;

loc_8010F5B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = 2;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    goto loc_8010F72C;
}

loc_8010F5C4:
{
}

loc_8010F5C8:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r4))) {
        goto loc_8010F5D8;
    }
}

loc_8010F5CC:
{
    r7 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    goto loc_8010F5DC;
}

loc_8010F5D8:
{
    r7 = 0;
}

loc_8010F5DC:
{
    r31 = (r31 + 1);
}

loc_8010F5E4:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r4))) {
        goto loc_8010F5F4;
    }
}

loc_8010F5E8:
{
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    goto loc_8010F5F8;
}

loc_8010F5F4:
{
    r6 = 0;
}

loc_8010F5F8:
{
    r31 = (r31 + 1);
}

loc_8010F600:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r4))) {
        goto loc_8010F610;
    }
}

loc_8010F604:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    goto loc_8010F614;
}

loc_8010F610:
{
    r0 = 0;
}

loc_8010F614:
{
    r9 = (r0 & 63);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r10 = (r10_rot_2 & 15);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(30));
    r12 = (r12_rot_2 & 63);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r11 = (r11_rot_2 & 48);
    r7 = (r11 + r10);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 60);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 3);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r12));
    r0 = (r6 + r0);
    r10 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    r11 = 0;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r9));
    ctr = r8;
    r31 = (r31 + 1);
}

loc_8010F654:
{
    r7 = MemoryInline::FlatRead8(r10);
}

loc_8010F65C:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(26))) {
        goto loc_8010F66C;
    }
}

loc_8010F660:
{
    r0 = (r7 + 65);
    r0 = (r0 & 255);
    goto loc_8010F6B4;
}

loc_8010F66C:
{
}

loc_8010F670:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(52))) {
        goto loc_8010F680;
    }
}

loc_8010F674:
{
    r0 = (r7 + 71);
    r0 = (r0 & 255);
    goto loc_8010F6B4;
}

loc_8010F680:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(62));
}

loc_8010F684:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010F694;
    }
}

loc_8010F688:
{
    r0 = (r7 + -4);
    r0 = (r0 & 255);
    goto loc_8010F6B4;
}

loc_8010F694:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010F6A0;
    }
}

loc_8010F698:
{
    r0 = 43;
    goto loc_8010F6B4;
}

loc_8010F6A0:
{
    r6 = (r7 + -63);
    r0 = (63 - r7);
    r0 = ~(r6 | r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r0 & 47);
}

loc_8010F6B4:
{
    r7 = MemoryInline::FlatRead8((r10 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_8010F6C0:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(26))) {
        goto loc_8010F6D0;
    }
}

loc_8010F6C4:
{
    r0 = (r7 + 65);
    r0 = (r0 & 255);
    goto loc_8010F718;
}

loc_8010F6D0:
{
}

loc_8010F6D4:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(52))) {
        goto loc_8010F6E4;
    }
}

loc_8010F6D8:
{
    r0 = (r7 + 71);
    r0 = (r0 & 255);
    goto loc_8010F718;
}

loc_8010F6E4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(62));
}

loc_8010F6E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010F6F8;
    }
}

loc_8010F6EC:
{
    r0 = (r7 + -4);
    r0 = (r0 & 255);
    goto loc_8010F718;
}

loc_8010F6F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010F704;
    }
}

loc_8010F6FC:
{
    r0 = 43;
    goto loc_8010F718;
}

loc_8010F704:
{
    r6 = (r7 + -63);
    r0 = (63 - r7);
    r0 = ~(r6 | r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r0 & 47);
}

loc_8010F718:
{
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r5 = (r5 + 2);
    r10 = (r10 + 2);
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8010F654;
    }
}

loc_8010F72C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r4));
}

loc_8010F730:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010F5C4;
    }
}

loc_8010F734:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010F5B0 func_8010F5B0 preserves=true fpr_mask=0x00000000
