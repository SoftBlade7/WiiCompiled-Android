#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000F4C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r3_stbu_ea_0 = 0;
    uint32_t r3_stbu_ea_1 = 0;
    uint32_t r3_stbu_ea_2 = 0;
    uint32_t r3_stbu_ea_3 = 0;
    uint32_t r3_stbu_ea_4 = 0;
    uint32_t r3_stbu_ea_5 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r6_addic_src_3 = 0;
    uint32_t r6_addic_src_4 = 0;
    uint32_t r6_addic_src_5 = 0;
    uint32_t r6_rot_0 = 0;

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

    goto loc_8000F4C4;

loc_8000F4C4:
{
    r0 = (0 - r3);
    r7 = (r4 + -1);
    r6 = (r0 & 3);
}

loc_8000F4D0:
{
    r3 = (r3 + -1);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8000F4EC;
    }
}

loc_8000F4D8:
{
    r5 = (r5 - r6);
}

loc_8000F4DC:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000F4E4:
{
    r3_stbu_ea_2 = (r3 + 1);
    MemoryInline::FlatWrite8(r3_stbu_ea_2, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_2;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8000F4DC;
    }
}

loc_8000F4EC:
{
    r0 = (r7 + 1);
    r4 = (r3 + -3);
    r10 = (r0 & 3);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r6 = (r6_rot_0 & 536870911);
    r7 = (r7 - r10);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r11 = (r11_rot_0 & 24);
    r7 = (r7 + 1);
    r8 = MemoryInline::FlatRead32(r7);
    r12 = (32 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
}

loc_8000F50C:
{
    r9 = MemoryInline::FlatRead32((r7 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r11));
    r6_addic_src_5 = r6;
    r6 = (r6_addic_src_5 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000F518:
{
    r0 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r12));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r3 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r11));
    r7 = (r7 + 8);
    r8 = MemoryInline::FlatRead32(r7);
    r0 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r12));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = (r4 + 8);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8000F50C;
    }
}

loc_8000F53C:
{
    r0 = (r5 & 4);
}

loc_8000F540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000F558;
    }
}

loc_8000F544:
{
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r3 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r11));
    r0 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r12));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = (r4 + 4);
}

loc_8000F558:
{
    r5 = (r5 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000F55C:
{
    r6 = (r7 + 3);
    r3 = (r4 + 3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8000F568:
{
    r0 = (4 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r6 = (r6 - r0);
}

loc_8000F570:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8(r6);
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000F578:
{
    r3_stbu_ea_5 = (r3 + 1);
    MemoryInline::FlatWrite8(r3_stbu_ea_5, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000F570;
    }
}

loc_8000F580:
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
// RECOMP_REGISTRATION base 0x8000F4C4 func_8000F4C4 preserves=true fpr_mask=0x00000000
