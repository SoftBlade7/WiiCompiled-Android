#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80143EC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80143EC8;

loc_80143EC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + -30144);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r5 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80143EF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80143F14;
    }
}

loc_80143EF8:
{
    r3 = 917504;
    r4 = 0x80280000u;
    r5 = r31;
    r6 = r30;
    r3 = (r3 + 3);
    r4 = (r4 + 19496);
    ctx->lr = 0x80143F14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80143F14:
{
    r3 = 0x80340000u;
    r0 = 2;
    r3 = (r3 + -30144);
    r4 = 0;
    r3 = (r3 + 172);
    ctr = r0;
}

loc_80143F2C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80143F34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143F48;
    }
}

loc_80143F38:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80143F40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_80143F48;
    }
}

loc_80143F44:
{
    goto loc_80143FB8;
}

loc_80143F48:
{
    r3 = (r3 + 96);
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (r4 + 1);
}

loc_80143F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143F68;
    }
}

loc_80143F58:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80143F60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_80143F68;
    }
}

loc_80143F64:
{
    goto loc_80143FB8;
}

loc_80143F68:
{
    r3 = (r3 + 96);
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (r4 + 1);
}

loc_80143F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143F88;
    }
}

loc_80143F78:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80143F80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_80143F88;
    }
}

loc_80143F84:
{
    goto loc_80143FB8;
}

loc_80143F88:
{
    r3 = (r3 + 96);
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (r4 + 1);
}

loc_80143F94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143FA8;
    }
}

loc_80143F98:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80143FA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_80143FA8;
    }
}

loc_80143FA4:
{
    goto loc_80143FB8;
}

loc_80143FA8:
{
    r4 = (r4 + 1);
    r3 = (r3 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80143F2C;
    }
}

loc_80143FB4:
{
    r3 = 0;
}

loc_80143FB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80143FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143FE4;
    }
}

loc_80143FC0:
{
    r0 = (0 - r31);
    r12 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r31);
    r3 = MemoryInline::FlatRead16((r3 + 4));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 + 260);
    r4 = (r0 & 65535);
    ctr = r12;
    ctx->lr = 0x80143FE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80143FE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80143EC8 func_80143EC8 preserves=true fpr_mask=0x00000000
