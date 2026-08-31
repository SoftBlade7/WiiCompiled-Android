#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000F584(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r12_stbu_ea_0 = 0;
    uint32_t r12_stbu_ea_1 = 0;
    uint32_t r12_stbu_ea_2 = 0;
    uint32_t r12_stbu_ea_3 = 0;
    uint32_t r12_stbu_ea_4 = 0;
    uint32_t r12_stbu_ea_5 = 0;
    uint32_t r3_addic_src_0 = 0;
    uint32_t r3_addic_src_1 = 0;
    uint32_t r3_addic_src_2 = 0;
    uint32_t r3_addic_src_3 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000F584;

loc_8000F584:
{
    r12 = (r3 + r5);
    r11 = (r4 + r5);
    r3 = (r12 & 3);
}

loc_8000F590:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000F5A8;
    }
}

loc_8000F594:
{
    r5 = (r5 - r3);
}

loc_8000F598:
{
    r11 = (r11 + -1);
    r0 = MemoryInline::FlatRead8(r11);
    r3_addic_src_2 = r3;
    r3 = (r3_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000F5A0:
{
    r12_stbu_ea_2 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_2, static_cast<uint8_t>(r0));
    r12 = r12_stbu_ea_2;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8000F598;
    }
}

loc_8000F5A8:
{
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r9 = (r9_rot_0 & 24);
    r8 = (r11 & 3);
    r10 = (32 - r9);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r4 = (r4_rot_0 & 536870911);
    r0 = (4 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r11 = (r11 + r0);
    r11 = (r11 + -4);
    r6 = MemoryInline::FlatRead32(r11);
}

loc_8000F5C4:
{
    r7 = MemoryInline::FlatRead32((r11 + -4));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r4_addic_src_2 = r4;
    r4 = (r4_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000F5D0:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r9));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r12 + -4), r0);
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r10));
    r11 = (r11 + -8);
    r6 = MemoryInline::FlatRead32(r11);
    r3 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r9));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r12 + -8), r0);
    r12 = (r12 + -8);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8000F5C4;
    }
}

loc_8000F5F4:
{
    r0 = (r5 & 4);
}

loc_8000F5F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000F610;
    }
}

loc_8000F5FC:
{
    r11 = (r11 + -4);
    r3 = MemoryInline::FlatRead32(r11);
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r9));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r12 + -4), r0);
    r12 = (r12 + -4);
}

loc_8000F610:
{
    r5 = (r5 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000F614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8000F618:
{
    r11 = (r11 + r8);
}

loc_8000F61C:
{
    r11 = (r11 + -1);
    r0 = MemoryInline::FlatRead8(r11);
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000F624:
{
    r12_stbu_ea_5 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_5, static_cast<uint8_t>(r0));
    r12 = r12_stbu_ea_5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000F61C;
    }
}

loc_8000F62C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000F584 func_8000F584 preserves=true fpr_mask=0x00000000
