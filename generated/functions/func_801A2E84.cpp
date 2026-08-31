#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A2E84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A2E84;

loc_801A2E84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801A2E88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A2FD4;
    }
}

loc_801A2E8C:
{
    r9 = r3;
    r5 = 4;
    r0 = 2;
    goto loc_801A2FAC;
}

loc_801A2E9C:
{
    r10 = 0;
    ctr = r0;
}

loc_801A2EA4:
{
    r8 = (r10 & 1);
}

loc_801A2EA8:
{
    r7 = 240;
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801A2EB4;
    }
}

loc_801A2EB0:
{
    r7 = 15;
}

loc_801A2EB4:
{
    r3 = (0 - r8);
    r6 = MemoryInline::FlatRead8(r4);
    r3 = (r3 | r8);
    r3 = (static_cast<int32_t>(r3) >> 31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (r5 & ~r3);
    r6 = (r6 & r7);
    r3 = (r3 & 255);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = PPC_Sraw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801A2EF0;
    }
}

loc_801A2EDC:
{
}

loc_801A2EE0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(10))) {
        goto loc_801A2EF0;
    }
}

loc_801A2EE4:
{
    r3 = (r3 + 48);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r3));
    goto loc_801A2F14;
}

loc_801A2EF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(10));
}

loc_801A2EF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A2F0C;
    }
}

loc_801A2EF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_801A2EFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A2F0C;
    }
}

loc_801A2F00:
{
    r3 = (r3 + 87);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r3));
    goto loc_801A2F14;
}

loc_801A2F0C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801A2F14:
{
}

loc_801A2F18:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801A2F20;
    }
}

loc_801A2F1C:
{
    r4 = (r4 + 1);
}

loc_801A2F20:
{
    r10 = (r10 + 1);
    r7 = 240;
    r8 = (r10 & 1);
}

loc_801A2F2C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801A2F34;
    }
}

loc_801A2F30:
{
    r7 = 15;
}

loc_801A2F34:
{
    r3 = (0 - r8);
    r6 = MemoryInline::FlatRead8(r4);
    r3 = (r3 | r8);
    r3 = (static_cast<int32_t>(r3) >> 31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (r5 & ~r3);
    r6 = (r6 & r7);
    r3 = (r3 & 255);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = PPC_Sraw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801A2F70;
    }
}

loc_801A2F5C:
{
}

loc_801A2F60:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(10))) {
        goto loc_801A2F70;
    }
}

loc_801A2F64:
{
    r3 = (r3 + 48);
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r3));
    goto loc_801A2F94;
}

loc_801A2F70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(10));
}

loc_801A2F74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A2F8C;
    }
}

loc_801A2F78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_801A2F7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A2F8C;
    }
}

loc_801A2F80:
{
    r3 = (r3 + 87);
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r3));
    goto loc_801A2F94;
}

loc_801A2F8C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801A2F94:
{
}

loc_801A2F98:
{
    r9 = (r9 + 2);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801A2FA4;
    }
}

loc_801A2FA0:
{
    r4 = (r4 + 1);
}

loc_801A2FA4:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A2EA4;
    }
}

loc_801A2FAC:
{
    r3 = MemoryInline::FlatRead8(r4);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801A2E9C;
    }
}

loc_801A2FB8:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A2E9C;
    }
}

loc_801A2FC4:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801A2FD4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801A2E84 func_801A2E84 preserves=true fpr_mask=0x00000000
