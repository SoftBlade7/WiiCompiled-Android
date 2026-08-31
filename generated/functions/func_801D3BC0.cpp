#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D3BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D3BC0;

loc_801D3BC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_801D3BC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D3CB0;
    }
}

loc_801D3BC8:
{
}

loc_801D3BCC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1024))) {
        goto loc_801D3BDC;
    }
}

loc_801D3BD0:
{
    r6 = r4;
    r7 = 0;
    goto loc_801D3C38;
}

loc_801D3BDC:
{
    r0 = (r4 + -1024);
    r7 = MemoryInline::FlatRead32((r3 + 52));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(9) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r0) >> 9);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801D3C30;
    }
}

loc_801D3BEC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_801D3BF0:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D3C24;
    }
}

loc_801D3BF8:
{
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3BF8;
    }
}

loc_801D3C1C:
{
    r6 = (r6 & 7);
}

loc_801D3C20:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801D3C30;
    }
}

loc_801D3C24:
{
    ctr = r6;
}

loc_801D3C28:
{
    r7 = MemoryInline::FlatRead32(r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3C28;
    }
}

loc_801D3C30:
{
    r0 = (r4 + -1024);
    r6 = (r0 & 511);
}

loc_801D3C38:
{
    r0 = (r5 - r4);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_801D3C44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D3CB0;
    }
}

loc_801D3C48:
{
}

loc_801D3C4C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801D3C78;
    }
}

loc_801D3C50:
{
}

loc_801D3C54:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(1024))) {
        goto loc_801D3C6C;
    }
}

loc_801D3C58:
{
    r5 = (r3 + r6);
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_801D3C94;
}

loc_801D3C6C:
{
    r7 = MemoryInline::FlatRead32((r3 + 52));
    r6 = 0;
    goto loc_801D3C88;
}

loc_801D3C78:
{
}

loc_801D3C7C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(512))) {
        goto loc_801D3C88;
    }
}

loc_801D3C80:
{
    r6 = 0;
    r7 = MemoryInline::FlatRead32(r7);
}

loc_801D3C88:
{
    r5 = (r7 + r6);
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_801D3C94:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_801D3C9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3CA8;
    }
}

loc_801D3CA0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801D3CA8:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3C48;
    }
}

loc_801D3CB0:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D3BC0 func_801D3BC0 preserves=true fpr_mask=0x00000000
