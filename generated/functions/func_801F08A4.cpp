#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F08A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F08A4;

loc_801F08A4:
{
    r0 = 0;
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    goto loc_801F08C0;
}

loc_801F08B4:
{
    r4 = MemoryInline::FlatRead8((r3 + 84));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
}

loc_801F08C0:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_2 & 32767);
}

loc_801F08C4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801F08B4;
    }
}

loc_801F08C8:
{
    r0 = 0;
    r5 = MemoryInline::FlatRead8((r3 + 10));
    MemoryInline::FlatWrite8((r3 + 85), static_cast<uint8_t>(r0));
    goto loc_801F08E4;
}

loc_801F08D8:
{
    r4 = MemoryInline::FlatRead8((r3 + 85));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 85), static_cast<uint8_t>(r0));
}

loc_801F08E4:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_4 & 32767);
}

loc_801F08E8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801F08D8;
    }
}

loc_801F08EC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 104u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 14));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 8));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r5 = (r5_rot_5 & -32);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 11));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r3 + 108));
    r4 = (r4 + r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 76u, (r3 + 84));
    r4 = (r4 + -1);
    r6 = (r0 * r7);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 12));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r10) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = PPC_Sraw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r10));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 104));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 77u, (r3 + 85));
    r8 = (r9 & 65535);
    r5 = (r8 + r5);
    MemoryInline::FlatWrite16((r3 + 86), static_cast<uint16_t>(r9));
    r5 = (r6 + r5);
    r4 = (r4 - r5);
    MemoryInline::FlatWrite32((r3 + 96), r5);
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801F0940:
{
    MemoryInline::FlatWrite32((r3 + 100), r0);
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4085))) {
        goto loc_801F0970;
    }
}

loc_801F0948:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r10));
    r4 = -1431633920;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r5 = 0;
    r4 = (r4 + -21845);
    MemoryInline::FlatWrite32((r3 + 80), r5);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_0 & 2147483647);
    r4 = (r4 + -2);
    goto loc_801F09A4;
}

loc_801F0970:
{
}

loc_801F0974:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(65525))) {
        goto loc_801F0990;
    }
}

loc_801F0978:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r10));
    r5 = 1;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_1 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 80), r5);
    r4 = (r4 + -2);
    goto loc_801F09A4;
}

loc_801F0990:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r10));
    r5 = 2;
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r4 = (r4_rot_2 & 1073741823);
    MemoryInline::FlatWrite32((r3 + 80), r5);
    r4 = (r4 + -2);
}

loc_801F09A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801F09AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_801F09B0:
{
    MemoryInline::FlatWrite32((r3 + 100), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000499 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F08A4 func_801F08A4 preserves=true fpr_mask=0x00000000
