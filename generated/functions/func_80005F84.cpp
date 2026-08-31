#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80005F84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_10 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint32_t r0_addic_src_3 = 0;
    uint32_t r0_addic_src_4 = 0;
    uint32_t r0_addic_src_5 = 0;
    uint32_t r0_addic_src_6 = 0;
    uint32_t r0_addic_src_7 = 0;
    uint32_t r0_addic_src_8 = 0;
    uint32_t r0_addic_src_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r6_stbu_ea_5 = 0;
    uint32_t r6_stbu_ea_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80005F84;

loc_80005F84:
{
}

loc_80005F88:
{
    r7 = (r4 & 255);
    r6 = (r3 + -1);
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(32))) {
        goto loc_80006020;
    }
}

loc_80005F94:
{
    r0 = ~(r6 | r6);
    r0 = (r0 & 3);
}

loc_80005F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80005FB0;
    }
}

loc_80005FA0:
{
    r5 = (r5 - r0);
}

loc_80005FA4:
{
    r0_addic_src_2 = r0;
    r0 = (r0_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80005FA8:
{
    r6_stbu_ea_2 = (r6 + 1);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r7));
    r6 = r6_stbu_ea_2;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80005FA4;
    }
}

loc_80005FB0:
{
}

loc_80005FB4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80005FD0;
    }
}

loc_80005FB8:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & -16777216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r4 = (r7 | r4);
    r0 = (r3 | r0);
    r7 = (r4 | r0);
}

loc_80005FD0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_80005FD4:
{
    r3 = (r6 + -3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80006004;
    }
}

loc_80005FDC:
{
    MemoryInline::FlatWrite32((r3 + 4), r7);
    r0_addic_src_5 = r0;
    r0 = (r0_addic_src_5 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80005FE4:
{
    MemoryInline::FlatWrite32((r3 + 8), r7);
    MemoryInline::FlatWrite32((r3 + 12), r7);
    MemoryInline::FlatWrite32((r3 + 16), r7);
    MemoryInline::FlatWrite32((r3 + 20), r7);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    MemoryInline::FlatWrite32((r3 + 28), r7);
    MemoryInline::FlatWrite32((r3 + 32), r7);
    r3 = (r3 + 32);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80005FDC;
    }
}

loc_80006004:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 7);
}

loc_80006008:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80006018;
    }
}

loc_8000600C:
{
    r0_addic_src_8 = r0;
    r0 = (r0_addic_src_8 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_8)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80006010:
{
    MemoryInline::FlatWrite32((r3 + 4), r7);
    r3 = (r3 + 4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000600C;
    }
}

loc_80006018:
{
    r6 = (r3 + 3);
    r5 = (r5 & 3);
}

loc_80006020:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80006024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80006028:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000602C:
{
    r6_stbu_ea_6 = (r6 + 1);
    MemoryInline::FlatWrite8(r6_stbu_ea_6, static_cast<uint8_t>(r7));
    r6 = r6_stbu_ea_6;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80006028;
    }
}

loc_80006034:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80005F84 func_80005F84 preserves=true fpr_mask=0x00000000
