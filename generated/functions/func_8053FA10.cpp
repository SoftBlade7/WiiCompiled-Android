#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053FA10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

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

    goto loc_8053FA10;

loc_8053FA10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r4 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r4 + 32));
}

loc_8053FA30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053FA3C;
    }
}

loc_8053FA34:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_8053FA40;
}

loc_8053FA3C:
{
    r3 = 0;
}

loc_8053FA40:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_8053FA4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053FA74;
    }
}

loc_8053FA50:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
}

loc_8053FA58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053FA64;
    }
}

loc_8053FA5C:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_8053FA68;
}

loc_8053FA64:
{
    r3 = 0;
}

loc_8053FA68:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_8053FA74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053FA78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053FA84;
    }
}

loc_8053FA7C:
{
    r3 = 0;
    goto loc_8053FB24;
}

loc_8053FA84:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl0_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F34:
{
    r6 = 1;
}

loc_inl0_0x80656F38:
{
    r3 = r6;
}

loc_inl0_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053FA94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053FAA0;
    }
}

loc_8053FA98:
{
    r3 = 1;
    goto loc_8053FB24;
}

loc_8053FAA0:
{
    r31 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053FAB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053FAC0;
    }
}

loc_8053FAB8:
{
    r3 = 0;
    goto loc_8053FB24;
}

loc_8053FAC0:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r6 = 0;
    r7 = 0;
    r5 = MemoryInline::FlatRead8((r3 + 36));
    goto loc_8053FB14;
}

loc_8053FADC:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r3 & 2);
}

loc_8053FAF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053FB10;
    }
}

loc_8053FAF4:
{
    r0 = (r3 & 16);
}

loc_8053FAF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053FB10;
    }
}

loc_8053FAFC:
{
    r6 = (r6 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8053FB04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053FB10;
    }
}

loc_8053FB08:
{
    r3 = 0;
    goto loc_8053FB24;
}

loc_8053FB10:
{
    r7 = (r7 + 1);
}

loc_8053FB14:
{
    r0 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_8053FB1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053FADC;
    }
}

loc_8053FB20:
{
    r3 = 1;
}

loc_8053FB24:
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
// RECOMP_REGISTRATION base 0x8053FA10 func_8053FA10 preserves=true fpr_mask=0x00000000
