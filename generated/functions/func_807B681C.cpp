#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B681C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807B681C;

loc_807B681C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r4 = 0;
    r7 = MemoryInline::FlatRead32((r3 + 124));
    r0 = (r7 & 64);
}

loc_807B683C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B6850;
    }
}

loc_807B6840:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 2);
}

loc_807B6848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B6850;
    }
}

loc_807B684C:
{
    r4 = 1;
}

loc_807B6850:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807B6854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6874;
    }
}

loc_807B6858:
{
    r4 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r4 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6860:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B6874;
    }
}

loc_807B6864:
{
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6868:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B6874;
    }
}

loc_807B686C:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B687C;
    }
}

loc_807B6874:
{
    r3 = 0;
    goto loc_807B68FC;
}

loc_807B687C:
{
    r0 = (r7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6880:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B68A0;
    }
}

loc_807B6884:
{
    ctx->lr = 0x807B6888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x807A2570u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    r0 = (r3 ^ r31);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r3);
    r0 = (r4 - r0);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    goto loc_807B68F8;
}

loc_807B68A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + 12088));
    r6 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = 0;
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 1756));
}

loc_807B68C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_807B68E4;
    }
}

loc_807B68CC:
{
}

loc_807B68D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807B68E0;
    }
}

loc_807B68D4:
{
    r0 = MemoryInline::FlatRead32((r5 + 1760));
}

loc_807B68DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_807B68E4;
    }
}

loc_807B68E0:
{
    r4 = 1;
}

loc_807B68E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807B68E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B68F8;
    }
}

loc_807B68EC:
{
    r0 = (r7 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B68F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B68F8;
    }
}

loc_807B68F4:
{
    r6 = 1;
}

loc_807B68F8:
{
    r3 = r6;
}

loc_807B68FC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000FB gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807B681C func_807B681C preserves=true fpr_mask=0x00000000
