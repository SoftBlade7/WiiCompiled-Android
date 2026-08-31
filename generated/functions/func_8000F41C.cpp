#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000F41C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addic_src_0 = 0;
    uint32_t r3_addic_src_1 = 0;
    uint32_t r3_addic_src_2 = 0;
    uint32_t r3_addic_src_3 = 0;
    uint32_t r3_addic_src_4 = 0;
    uint32_t r3_addic_src_5 = 0;
    uint32_t r3_addic_src_6 = 0;
    uint32_t r3_addic_src_7 = 0;
    uint32_t r3_addic_src_8 = 0;
    uint32_t r3_addic_src_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r6_stbu_ea_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000F41C;

loc_8000F41C:
{
    r6 = (r3 + r5);
    r4 = (r4 + r5);
    r3 = (r6 & 3);
}

loc_8000F428:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000F440;
    }
}

loc_8000F42C:
{
    r5 = (r5 - r3);
}

loc_8000F430:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r3_addic_src_2 = r3;
    r3 = (r3_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000F438:
{
    r6_stbu_ea_2 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8000F430;
    }
}

loc_8000F440:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
}

loc_8000F444:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000F490;
    }
}

loc_8000F448:
{
    r0 = MemoryInline::FlatRead32((r4 + -4));
    r3_addic_src_5 = r3;
    r3 = (r3_addic_src_5 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000F450:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + -32), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + -4), r0);
    r0 = MemoryInline::FlatRead32((r4 + -8));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + -8), r0);
    r0 = MemoryInline::FlatRead32((r4 + -12));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + -12), r0);
    r0 = MemoryInline::FlatRead32((r4 + -16));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + -16), r0);
    r0 = MemoryInline::FlatRead32((r4 + -20));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + -20), r0);
    r0 = MemoryInline::FlatRead32((r4 + -24));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + -24), r0);
    r0 = MemoryInline::FlatRead32((r4 + -28));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + -28), r0);
    r4 = (r4 + -32);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r6 + -32), r0);
    r6 = (r6 + -32);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8000F448;
    }
}

loc_8000F490:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r3 = (r3_rot_1 & 7);
}

loc_8000F494:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000F4A8;
    }
}

loc_8000F498:
{
    r4 = (r4 + -4);
    r0 = MemoryInline::FlatRead32(r4);
    r3_addic_src_8 = r3;
    r3 = (r3_addic_src_8 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_8)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000F4A0:
{
    MemoryInline::FlatWrite32((r6 + -4), r0);
    r6 = (r6 + -4);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8000F498;
    }
}

loc_8000F4A8:
{
    r5 = (r5 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000F4AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8000F4B0:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000F4B8:
{
    r6_stbu_ea_5 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_5, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000F4B0;
    }
}

loc_8000F4C0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000F41C func_8000F41C preserves=true fpr_mask=0x00000000
