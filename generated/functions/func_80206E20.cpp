#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80206E20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80206E20;

loc_80206E20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    // inline leaf 0x801EF3C0 (6 guest instruction(s))
}

loc_inl0_0x801EF3C0:
{
}

loc_inl0_0x801EF3C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(97))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3C8:
{
}

loc_inl0_0x801EF3CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(122))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3D0:
{
    r3 = (r3 + -32);
    goto loc_inl0_cont_801EF3C0;
}

loc_inl0_return:
{
}

loc_inl0_cont_801EF3C0:
{
    // end of inlined leaf 0x801EF3C0
    r0 = (r3 + -65);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80206E4C;
    }
}

loc_80206E44:
{
}

loc_80206E48:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(26))) {
        goto loc_80206E54;
    }
}

loc_80206E4C:
{
    r31 = 0;
    goto loc_80206E68;
}

loc_80206E54:
{
    r0 = (r0 * 6272);
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r3 = (r3 + r0);
    r31 = (r3 + 72);
}

loc_80206E68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80206E6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206E88;
    }
}

loc_80206E70:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206F28;
}

loc_80206E88:
{
    r3 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206E90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206EB0;
    }
}

loc_80206E94:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80206F28;
}

loc_80206EB0:
{
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206EB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206ED4;
    }
}

loc_80206EB8:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80206F28;
}

loc_80206ED4:
{
    r3 = r31;
    // inline leaf 0x801F031C (6 guest instruction(s))
    r4 = (0 - r3);
    r0 = 10;
    r3 = (r4 | r3);
    r3 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r0 & ~r3);
    // end of inlined leaf 0x801F031C
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
    r3 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206F04;
    }
}

loc_80206EF0:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r31 + 6228), r3);
    goto loc_80206F28;
}

loc_80206F04:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r5 = 0x80360000u;
    r5 = (r5 + -20912);
    r3 = 0;
    r0 = (r0 & 65534);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam32((r5 + 12), r0);
}

loc_80206F28:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000002B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80206E20 func_80206E20 preserves=true fpr_mask=0x00000000
