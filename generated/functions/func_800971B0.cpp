#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800971B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r31_mdest_0 = 0;
    uint32_t r31_mdest_1 = 0;
    uint32_t r31_mdest_2 = 0;
    uint32_t r31_mrot_0 = 0;
    uint32_t r31_mrot_1 = 0;
    uint32_t r31_mrot_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800971B0;

loc_800971B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_800971BC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800971F0;
    }
}

loc_800971CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(2));
}

loc_800971D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80097204;
    }
}

loc_800971D4:
{
}

loc_800971D8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(3))) {
        goto loc_80097228;
    }
}

loc_800971DC:
{
}

loc_800971E0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(5))) {
        goto loc_80097258;
    }
}

loc_800971E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(4));
}

loc_800971E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800972A8;
    }
}

loc_800971EC:
{
    goto loc_80097308;
}

loc_800971F0:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r4, r0);
    r3 = MemoryInline::FlatRead8(r3);
    goto loc_80097308;
}

loc_80097204:
{
    r5 = MemoryInline::FlatRead32(r4);
    r3 = (r5 + 1);
    MemoryInline::FlatWrite32(r4, r3);
    r0 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite32(r4, r0);
    r3 = MemoryInline::FlatRead8(r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3_mrot_1 = (r3_rot_4 & 65280);
    r3_mdest_1 = (r3 & -65281);
    r3 = (r3_mdest_1 | r3_mrot_1);
    goto loc_80097308;
}

loc_80097228:
{
    r3 = 0;
    // nop
}

loc_80097230:
{
    r5 = MemoryInline::FlatRead32(r4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r3 = (r3_rot_3 & -128);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32(r4, r0);
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r5 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80097248:
{
    r0 = (r5 & 127);
    r3 = (r3 | r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80097230;
    }
}

loc_80097254:
{
    goto loc_80097308;
}

loc_80097258:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = MemoryInline::FlatRead8(r3);
}

loc_8009726C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_8009727C;
    }
}

loc_80097270:
{
    r3 = r5;
    // inline leaf 0x80099D50 (15 guest instruction(s))
}

loc_inl0_0x80099D50:
{
}

loc_inl0_0x80099D54:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_inl0_0x80099D68;
    }
}

loc_inl0_0x80099D58:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    r3 = (r3 + 340);
    goto loc_inl0_cont_80099D50;
}

loc_inl0_0x80099D68:
{
}

loc_inl0_0x80099D6C:
{
    r3 = 0;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80099D74:
{
    r0 = (r4 + -16);
    r3 = 0x802D0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r3 + 23432);
    r3 = (r3 + r0);
    goto loc_inl0_cont_80099D50;
}

loc_inl0_return:
{
}

loc_inl0_cont_80099D50:
{
    // end of inlined leaf 0x80099D50
    goto loc_80097298;
}

loc_8009727C:
{
}

loc_80097280:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(48))) {
        goto loc_80097294;
    }
}

loc_80097284:
{
    r3 = r6;
    r4 = (r4 + -32);
    // inline leaf 0x8009BE90 (8 guest instruction(s))
}

loc_inl1_0x8009BE90:
{
}

loc_inl1_0x8009BE94:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_inl1_0x8009BEA8;
    }
}

loc_inl1_0x8009BE98:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r3 + r0);
    r3 = (r3 + 204);
    goto loc_inl1_cont_8009BE90;
}

loc_inl1_0x8009BEA8:
{
    r3 = 0;
}

loc_inl1_cont_8009BE90:
{
    // end of inlined leaf 0x8009BE90
    goto loc_80097298;
}

loc_80097294:
{
    r3 = 0;
}

loc_80097298:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8009729C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80097308;
    }
}

loc_800972A0:
{
    r3 = MemoryInline::FlatRead16(r3);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_80097308;
}

loc_800972A8:
{
    r5 = MemoryInline::FlatRead32(r4);
    r7 = (r5 + 1);
    MemoryInline::FlatWrite32(r4, r7);
    r3 = (r7 + 1);
    r6 = MemoryInline::FlatRead8(r5);
    r5 = (r3 + 1);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32(r4, r3);
    r7 = MemoryInline::FlatRead8(r7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r7_mrot_1 = (r7_rot_1 & 65280);
    r7_mdest_1 = (r7 & -65281);
    r7 = (r7_mdest_1 | r7_mrot_1);
    MemoryInline::FlatWrite32(r4, r5);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r3 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite32(r4, r0);
    r31 = MemoryInline::FlatRead8(r5);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r31_mrot_1 = (r31_rot_1 & 65280);
    r31_mdest_1 = (r31 & -65281);
    r31 = (r31_mdest_1 | r31_mrot_1);
    // inline leaf 0x800AD050 (9 guest instruction(s))
    r3 = 1638400;
    r4 = MemoryInline::FlatRead32((r13 + -32320));
    r0 = (r3 + 26125);
    r3 = (r4 * r0);
    r3 = (r3 + 1013907456);
    r0 = (r3 + -3233);
    MemoryInline::FlatWrite32((r13 + -32320), r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 65535);
    // end of inlined leaf 0x800AD050
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4 = (r3 & 65535);
    r3 = (r0 - r30);
    r0 = (r3 + 1);
    r4 = (r4 * r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r4 + r30);
}

loc_80097308:
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
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00020FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800971B0 func_800971B0 preserves=true fpr_mask=0x00000000
