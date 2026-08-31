#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014FC6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014FC6C;

loc_8014FC6C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8014FC88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FCA8;
    }
}

loc_8014FC8C:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8014FC94:
{
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1691))) {
        goto loc_8014FCA8;
    }
}

loc_8014FC9C:
{
    r0 = 1691;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r0));
}

loc_8014FCA8:
{
    r0 = MemoryInline::FlatRead8((r4 + 6));
}

loc_8014FCB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FCE4;
    }
}

loc_8014FCB4:
{
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 88), r5);
    MemoryInline::FlatWrite32((r3 + 92), r0);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWrite32((r3 + 96), r5);
    MemoryInline::FlatWrite32((r3 + 100), r0);
    r5 = MemoryInline::FlatRead32((r4 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWrite32((r3 + 104), r5);
    MemoryInline::FlatWrite32((r3 + 108), r0);
}

loc_8014FCE4:
{
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014FCEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014FD64;
    }
}

loc_8014FCF0:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014FCF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014FD64;
    }
}

loc_8014FCFC:
{
    MemoryInline::FlatWrite16((r3 + 60), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead16((r4 + 34));
    r0 = MemoryInline::FlatRead16((r31 + 50));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8014FD10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8014FD64;
    }
}

loc_8014FD14:
{
    MemoryInline::FlatWrite16((r31 + 50), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r4 + 34));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1279));
}

loc_8014FD20:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8014FD64;
    }
}

loc_8014FD24:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & 524280);
    r4 = 1717960704;
    r0 = (r3 + 3);
    r4 = (r4 + 26215);
    r3 = 2;
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    r30 = (r0 & 65535);
    ctx->lr = 0x8014FD50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8012ED54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014FD54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014FD64;
    }
}

loc_8014FD58:
{
    r4 = MemoryInline::FlatRead16((r31 + 40));
    r5 = r30;
    ctx->lr = 0x8014FD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80146354u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8014FD64:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE0FF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014FC6C func_8014FC6C preserves=true fpr_mask=0x00000000
