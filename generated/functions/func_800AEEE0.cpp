#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AEEE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_800AEEF0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800AEEE0;

loc_800AEEE0:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = (r3 + r7);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    addr_lhax_800AEEF0_loc_0 = (r3 + r7);
    r8 = MemoryInline::FlatRead16(addr_lhax_800AEEF0_loc_0);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r6 = MemoryInline::FlatRead16((r6 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r5 = MemoryInline::FlatRead16((r3 + 38));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r7 = (r7 * r8);
    r5 = (r5 * r6);
    r0 = (r0 * r4);
    r7 = (r7 + r5);
    r7 = (r7 + r0);
    r7 = (static_cast<int32_t>(r7) >> 10);
    r7 = (r7 + 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(32767));
}

loc_800AEF2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AEF38;
    }
}

loc_800AEF30:
{
    r7 = 32767;
    goto loc_800AEF44;
}

loc_800AEF38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(-32768));
}

loc_800AEF3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AEF44;
    }
}

loc_800AEF40:
{
    r7 = -32768;
}

loc_800AEF44:
{
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r7));
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000002F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800AEEE0 func_800AEEE0 preserves=true fpr_mask=0x00000000
