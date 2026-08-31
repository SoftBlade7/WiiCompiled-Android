#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E09F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801E09F8;

loc_801E09F8:
{
    r8 = MemoryInline::FlatRead32((r13 + -24384));
    r9 = 0;
    r10 = 0;
    r11 = (r8 + 6400);
    r8 = 0;
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801E0A14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E0A74;
    }
}

loc_801E0A18:
{
    r0 = MemoryInline::FlatRead8(r3);
    r11_addr_2 = (r11 + r0);
    r0 = MemoryInline::FlatRead8(r11_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E0A6C;
    }
}

loc_801E0A28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(64));
}

loc_801E0A2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E0A6C;
    }
}

loc_801E0A30:
{
    r9 = (r9 + 6);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(6));
    r8 = (r8_rot_2 & -64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(8));
}

loc_801E0A3C:
{
    r8 = (r8 | r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E0A6C;
    }
}

loc_801E0A44:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(r6));
}

loc_801E0A48:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E0A58;
    }
}

loc_801E0A4C:
{
    MemoryInline::FlatWrite32(r7, r6);
    r3 = -8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801E0A58:
{
    r9 = (r9 + -8);
    r10 = (r10 + 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r9) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r9));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_801E0A6C:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E0A18;
    }
}

loc_801E0A74:
{
    MemoryInline::FlatWrite32(r7, r10);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0x00002FF9 gpr_write=0x00000F29 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E09F8 func_801E09F8 preserves=true fpr_mask=0x00000000
