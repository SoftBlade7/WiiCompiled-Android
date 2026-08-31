#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017077C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

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

    goto loc_8017077C;

loc_8017077C:
{
    r12 = 0;
    r11 = 0;
}

loc_80170788:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80170790;
    }
}

loc_8017078C:
{
    r4 = 1;
}

loc_80170790:
{
}

loc_80170794:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8017079C;
    }
}

loc_80170798:
{
    r5 = 1;
}

loc_8017079C:
{
    r10 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_801707A4:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r11));
    r9 = 0;
    r4 = (r4 + r0);
    r0 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r12));
    r4 = (r4 + -1);
    r10 = PPC_Sraw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r11));
    r4 = (r5 + r0);
    MemoryInline::FlatWrite32(r6, r10);
    r0 = (r4 + -1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r12));
    MemoryInline::FlatWrite32(r7, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801707DC;
    }
}

loc_801707D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(22));
}

loc_801707D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801707E0;
    }
}

loc_801707DC:
{
    r9 = 1;
}

loc_801707E0:
{
    r0 = (0 - r9);
    r0 = (r0 | r9);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r8, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF8 gpr_write=0x00001E39 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8017077C func_8017077C preserves=true fpr_mask=0x00000000
