#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012E408(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mdest_3 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_mrot_3 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_subfic_ra_0 = 0;
    uint32_t r12_subfic_ra_1 = 0;
    uint32_t r12_subfic_ra_2 = 0;
    uint32_t r12_subfic_ra_3 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_subfze_src_0 = 0;
    uint32_t r5_subfze_src_1 = 0;
    uint32_t r5_subfze_src_2 = 0;
    uint32_t r5_subfze_src_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8012E408;

loc_8012E408:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 96;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    ctr = r0;
}

loc_8012E418:
{
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r5 = (r5 & -65536);
}

loc_8012E428:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8012E4A0;
    }
}

loc_8012E42C:
{
    MemoryInline::FlatWrite32((r4 + 24), r5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r5 = (r5_rot_2 & 65535);
    r0 = (r5 + 1);
    r6 = MemoryInline::FlatRead32(r4);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r9 = MemoryInline::FlatRead32((r4 + 36));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 508);
    r6_addr_2 = (r6 + r5);
    r11 = MemoryInline::FlatRead32(r6_addr_2);
    r6_addr_3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_3);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r10 = (r0 - r11);
    r0 = (r11 * r5);
    r31 = (static_cast<int32_t>(r10) >> 31);
    r7 = (static_cast<int32_t>(r9) >> 31);
    r6 = (r10 * r9);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r12 = (r12_rot_2 & -1);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r11)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_2 & -1);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r10) * static_cast<uint64_t>(r9)) >> 32));
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r12_mrot_2 = (r12_rot_3 & -256);
    r12_mdest_2 = (r12 & 255);
    r12 = (r12_mdest_2 | r12_mrot_2);
    r9 = (r31 * r9);
    r5 = (r10 * r7);
    r8 = (r8 + r9);
    r8 = (r8 + r5);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r6_mrot_2 = (r6_rot_3 & -256);
    r6_mdest_2 = (r6 & 255);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r5 = (static_cast<int32_t>(r8) >> 24);
    MemoryInline::FlatWrite32((r4 + 32), r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(24) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r0) >> 24);
    goto loc_8012E4B0;
}

loc_8012E4A0:
{
    r5 = MemoryInline::FlatRead32((r4 + 28));
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r12 = (r5 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r12);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r12) >> 31);
}

loc_8012E4B0:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWrite32((r4 + 28), r12);
}

loc_8012E4BC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8012E4C8;
    }
}

loc_8012E4C0:
{
    r12_subfic_ra_2 = r12;
    r12 = (0 - r12_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r12_subfic_ra_2) ? 1u : 0u) << 29);
    r5_subfze_src_2 = r5;
    r5_not_2 = ~(r5_subfze_src_2);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r5_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8012E4C8:
{
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + r0);
    r0 = (r5 & -8388608);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012E4D8:
{
    MemoryInline::FlatWrite32((r4 + 16), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E4F4;
    }
}

loc_8012E4E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r5 = (r5 & 8388607);
    MemoryInline::FlatWrite32((r4 + 16), r5);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r4 + 20), r0);
}

loc_8012E4F4:
{
    MemoryInline::FlatWrite32(r3, r12);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012E418;
    }
}

loc_8012E500:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012E408 func_8012E408 preserves=true fpr_mask=0x00000000
