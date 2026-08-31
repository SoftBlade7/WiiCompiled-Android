#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808743A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_subfc_sub_0 = 0;
    uint32_t r4_subfe_rb_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_subfe_rb_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808743A0;

loc_808743A0:
{
}

loc_808743A4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_808743BC;
    }
}

loc_808743A8:
{
    r7 = 0x808E0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + -14900));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
}

loc_808743BC:
{
    r7 = MemoryInline::FlatRead32((r3 + 772));
    r0 = (0 - r8);
    r0 = (r0 | r8);
    f2.d = MemoryInline::FlatReadFloat32(r5);
    r7 = (r7 + 1);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r7 = (r7 & 15);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r8 = (r7 * 24);
    MemoryInline::FlatWrite32((r3 + 772), r7);
    r7 = (static_cast<int32_t>(r0) >> 31);
    r5 = 0x808E0000u;
    r8 = (r3 + r8);
    MemoryInline::FlatWriteFloat32((r8 + 388), f2.d);
    MemoryInline::FlatWriteFloat32((r8 + 392), f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 396), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 772));
    r0 = (r0 * 24);
    r8 = (r3 + r0);
    MemoryInline::FlatWrite8((r8 + 400), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead32((r3 + 772));
    r5 = MemoryInline::FlatRead32((r5 + -14840));
    r0 = (r0 * 24);
    r6 = (r5 & r7);
    r5 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 404), r6);
    r9 = MemoryInline::FlatRead32((r3 + 360));
    r0 = MemoryInline::FlatRead32((r3 + 348));
    r7 = (r9 + 1);
    r6 = MemoryInline::FlatRead32((r3 + 772));
    r5 = (r7 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r5_subfe_rb_0 = r5;
    r5_not_0 = ~(r5);
    r5_ca_0 = (xer >> 29) & 1u;
    r5 = (r5_not_0 + r5_subfe_rb_0);
    r5 = (r5 + r5_ca_0);
    r8 = (r7 & r5);
    r6 = (r6 * 24);
}

loc_8087444C:
{
    r5 = (r3 + r6);
    r7 = (r5 + 388);
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r0))) {
        goto loc_808744CC;
    }
}

loc_80874458:
{
    r6 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 368));
    r6_addr_1 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80874478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808744CC;
    }
}

loc_8087447C:
{
    MemoryInline::FlatWrite32((r3 + 360), r8);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r5 = 1;
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r7);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 348));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r5);
}

loc_808744CC:
{
    r7 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 348));
    r5 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r4_subfc_sub_0 = r4;
    r4 = (r5 - r4_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4_subfc_sub_0) ? 1u : 0u) << 29);
    r4_subfe_rb_0 = r4;
    r4_not_0 = ~(r4);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r4_subfe_rb_0);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6 = (r5 & r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_808744EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_808744F0:
{
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & -16);
    r4 = MemoryInline::FlatRead32((r3 + 368));
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = MemoryInline::FlatRead8((r4 + 3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80874510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80874514:
{
    MemoryInline::FlatWrite32((r3 + 360), r6);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & -16);
    r4 = 3;
    r6 = 0;
    r5_addr_4 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_4, r4);
    r5 = -1;
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_13 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 348));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808743A0 func_808743A0 preserves=true fpr_mask=0x00000000
