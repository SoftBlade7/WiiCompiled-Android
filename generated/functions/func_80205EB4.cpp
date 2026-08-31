#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80205EB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80205EB4;

loc_80205EB4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205EC0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80205ED8;
    }
}

loc_80205ED0:
{
    r3 = 10;
    goto loc_80206074;
}

loc_80205ED8:
{
    ctx->lr = 0x80205EDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F0218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205FB0;
    }
}

loc_80205EE4:
{
    r3 = r31;
    ctx->lr = 0x80205EECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F0244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80205EF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206038;
    }
}

loc_80205EF4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205EFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205F60;
    }
}

loc_80205F00:
{
    r3 = r31;
    ctx->lr = 0x80205F08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x80205F10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80205F24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80205F28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80205F4C;
    }
}

loc_80205F2C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
}

loc_80205F34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80205F40;
    }
}

loc_80205F38:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 5632), r0);
}

loc_80205F40:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_80205F4C:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80205F60:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205F68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80205FA0;
    }
}

loc_80205F6C:
{
    r3 = r31;
    ctx->lr = 0x80205F74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80205758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80205F78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80205F80;
    }
}

loc_80205F7C:
{
    goto loc_80205FA4;
}

loc_80205F80:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r0 = (r0 & 65528);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80205FA0:
{
    r3 = 0;
}

loc_80205FA4:
{
}

loc_80205FA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206038;
    }
}

loc_80205FAC:
{
    goto loc_8020603C;
}

loc_80205FB0:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205FB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206038;
    }
}

loc_80205FBC:
{
    r3 = r31;
    ctx->lr = 0x80205FC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F0244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205FC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020602C;
    }
}

loc_80205FCC:
{
    r3 = r31;
    ctx->lr = 0x80205FD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x80205FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80205FF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80205FF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80206018;
    }
}

loc_80205FF8:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
}

loc_80206000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020600C;
    }
}

loc_80206004:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 5632), r0);
}

loc_8020600C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_80206018:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_8020602C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_80206038:
{
    r3 = 0;
}

loc_8020603C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206048;
    }
}

loc_80206044:
{
    goto loc_80206074;
}

loc_80206048:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206050:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020605C;
    }
}

loc_80206054:
{
    r3 = 9;
    goto loc_80206074;
}

loc_8020605C:
{
    r3 = r31;
    ctx->lr = 0x80206064u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F0270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (0 - r3);
    r0 = (r0 | r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r0 & 11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206074:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80205EB4 func_80205EB4 preserves=true fpr_mask=0x00000000
