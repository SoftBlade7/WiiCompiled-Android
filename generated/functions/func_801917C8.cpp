#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801917C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

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

    goto loc_801917C8;

loc_801917C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r6 = MemoryInline::FlatRead8(r4);
    r5 = MemoryInline::FlatRead8((r4 + 1));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 4);
    r7 = (r6 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801917EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801918DC;
    }
}

loc_801917F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80191804;
    }
}

loc_801917F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_801917F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80191814;
    }
}

loc_801917FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80191840;
    }
}

loc_80191800:
{
    goto loc_801918DC;
}

loc_80191804:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_80191808:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801918C4;
    }
}

loc_8019180C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801918DC;
    }
}

loc_80191810:
{
    goto loc_80191850;
}

loc_80191814:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r4 = (r4_rot_1 & 130560);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = (r3 + r4);
    r31 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 1032));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8019182C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801918DC;
    }
}

loc_80191830:
{
    // inline leaf 0x801925D8 (3 guest instruction(s))
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    // end of inlined leaf 0x801925D8
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1032), r0);
    goto loc_801918DC;
}

loc_80191840:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r4 = r7;
    ctx->lr = 0x8019184Cu;
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
    InvokeDirectCpu<0x8019159Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801918DC;
}

loc_80191850:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(10));
}

loc_80191854:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80191898;
    }
}

loc_8019185C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019186C;
    }
}

loc_80191860:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(7));
}

loc_80191864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80191878;
    }
}

loc_80191868:
{
    goto loc_801918DC;
}

loc_8019186C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(91));
}

loc_80191870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801918A4;
    }
}

loc_80191874:
{
    goto loc_801918DC;
}

loc_80191878:
{
    r4 = 0x80290000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r4 = (r4 + -7784);
    r3 = (r3 + r0);
    r4_addr_1 = (r4 + r5);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r3 + 108), r0);
    goto loc_801918DC;
}

loc_80191898:
{
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r3 + 236), static_cast<uint8_t>(r6));
    goto loc_801918DC;
}

loc_801918A4:
{
    r4 = 0x80290000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r4 = (r4 + -7784);
    r3 = (r3 + r0);
    r4_addr_2 = (r4 + r5);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r3 + 172), r0);
    goto loc_801918DC;
}

loc_801918C4:
{
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & 65280);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r4 = (r6 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 40), r4);
}

loc_801918DC:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801917C8 func_801917C8 preserves=true fpr_mask=0x00000000
