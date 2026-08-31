#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126D14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_80126D84_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80126D14;

loc_80126D14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r6 = MemoryInline::FlatRead32((r13 + -26360));
    r31 = (r6 + -36);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6)) + static_cast<uint64_t>(static_cast<uint32_t>(-36)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80126D2C:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_80126D38;
    }
}

loc_80126D30:
{
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    r31 = (r31 + r0);
}

loc_80126D38:
{
    r0 = MemoryInline::FlatRead32((r13 + -26364));
    r31 = (r31 - r0);
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_80126D4C;
    }
}

loc_80126D44:
{
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    r31 = (r31 + r0);
}

loc_80126D4C:
{
}

loc_80126D50:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r31))) {
        goto loc_80126D58;
    }
}

loc_80126D54:
{
    goto loc_80126D5C;
}

loc_80126D58:
{
    r31 = r5;
}

loc_80126D5C:
{
    r0 = (r3 * 360);
    r5 = 0x802F0000u;
    r7 = MemoryInline::FlatRead32((r13 + -26364));
    r5 = (r5 + 29824);
    r5 = (r5 + r0);
    ctr = r31;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80126D78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80126DA4;
    }
}

loc_80126D7C:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r7 = (r7 + 1);
    addr_lhax_80126D84_loc_0 = (r6 + r5);
    r0 = MemoryInline::FlatRead16(addr_lhax_80126D84_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_80126D98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80126DA0;
    }
}

loc_80126D9C:
{
    r7 = 0;
}

loc_80126DA0:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80126D7C;
    }
}

loc_80126DA4:
{
    r5 = (r3 * 360);
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    r3 = 0x802F0000u;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r3 = (r3 + 29824);
    r3 = (r3 + r5);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800020FB gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80126D14 func_80126D14 preserves=true fpr_mask=0x00000000
