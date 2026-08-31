#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80668FE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80668FE4;

loc_80668FE4:
{
    MemoryInline::FlatWriteRam32((r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    MemoryInline::FlatWriteRam32((r1 + 476), r31);
    MemoryInline::FlatWriteRam32((r1 + 472), r30);
    r6 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80669008:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80669028;
    }
}

loc_8066900C:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r6 + r0);
    r31 = (r4 + 56);
    goto loc_8066902C;
}

loc_80669028:
{
    r31 = 0;
}

loc_8066902C:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -30280));
    r0 = (r0 ^ 3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & 3);
    r0 = (r4 - r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_80669048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066905C;
    }
}

loc_8066904C:
{
    r3 = MemoryInline::FlatRead32((r3 + 31240));
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_8066905C:
{
}

loc_80669060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066907C;
    }
}

loc_80669064:
{
    r3 = (r31 + 65536);
    r3 = (r3 + -28744);
    // inline leaf 0x800EC150 (13 guest instruction(s))
}

loc_inl0_0x800EC150:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = 0;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_3 & 3);
}

loc_inl0_0x800EC160:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl0_0x800EC174;
    }
}

loc_inl0_0x800EC164:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_inl0_0x800EC16C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl0_0x800EC174;
    }
}

loc_inl0_0x800EC170:
{
    r4 = 1;
}

loc_inl0_0x800EC174:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_800EC150:
{
    // end of inlined leaf 0x800EC150
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_8066907C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80669080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806690DC;
    }
}

loc_80669084:
{
    r4 = 0x808B0000u;
    r3 = (r1 + 16);
    r4 = (r4 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x806690A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = 0;
}

loc_806690A4:
{
    r0 = (r30 & 65535);
    r3 = (r1 + 8);
    r0 = (r0 * 448);
    r4 = (r31 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x806690BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806690C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806690CC;
    }
}

loc_806690C4:
{
    r0 = 1;
    goto loc_806690DC;
}

loc_806690CC:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(30));
}

loc_806690D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806690A4;
    }
}

loc_806690D8:
{
    r0 = 0;
}

loc_806690DC:
{
    r31 = MemoryInline::FlatRead32((r1 + 476));
    r3 = r0;
    r30 = MemoryInline::FlatRead32((r1 + 472));
    r0 = MemoryInline::FlatRead32((r1 + 484));
    ctx->lr = r0;
    r1 = (r1 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80668FE4 func_80668FE4 preserves=true fpr_mask=0x00000000
