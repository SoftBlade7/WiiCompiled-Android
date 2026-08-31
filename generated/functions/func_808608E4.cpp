#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808608E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808608E4;

loc_808608E4:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_808608EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80860900;
    }
}

loc_808608F0:
{
    r5 = 99;
    r6 = 59;
    r7 = 999;
    goto loc_8086090C;
}

loc_80860900:
{
    r6 = MemoryInline::FlatRead8((r3 + 6));
    r5 = (r0 & 255);
    r7 = MemoryInline::FlatRead16((r3 + 8));
}

loc_8086090C:
{
    r3 = 1717960704;
    r9 = 9610;
    r3 = (r3 + 26215);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 36), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 44), r9);
    r10 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0 = 9611;
    r8 = 1374420992;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 56), r0);
    r8 = (r8 + -31457);
    r11 = (static_cast<int32_t>(r10) >> 2);
    r0 = (static_cast<int32_t>(r10) >> 2);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_0 & 1);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & 1);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r11 = (r11 + r12);
    r0 = (r0 + r10);
    r10 = (r11 + 9600);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 36), r10);
    r11 = (static_cast<int32_t>(r9) >> 2);
    r9 = (static_cast<int32_t>(r9) >> 2);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_1 & 1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 1);
    r11 = (r11 + r12);
    r12 = (r9 + r10);
    r9 = (r11 + 9600);
    r10 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 5);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 48), r9);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r9 = (r8 + r9);
    r11 = (r9 + 9600);
    r8 = (static_cast<int32_t>(r10) >> 2);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 60), r11);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r11 = (r8 + r9);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r11))) >> 32));
    r9 = (static_cast<int32_t>(r3) >> 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r10);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r10) >> 2);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    r3 = (r3 + r8);
    r8 = (r0 * 10);
    r9 = (r9 + r10);
    r8 = (r5 - r8);
    r0 = (r12 * 10);
    r8 = (r8 + 9600);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 40), r8);
    r5 = (r9 * 10);
    r6 = (r6 - r0);
    r0 = (r3 * 10);
    r3 = (r6 + 9600);
    r5 = (r11 - r5);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 52), r3);
    r3 = (r7 - r0);
    r5 = (r5 + 9600);
    r0 = (r3 + 9600);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 64), r5);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 68), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00001FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808608E4 func_808608E4 preserves=true fpr_mask=0x00000000
