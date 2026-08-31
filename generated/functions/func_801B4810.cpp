#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B4810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r7_addr_8 = 0;
    uint32_t r7_addr_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B4810;

loc_801B4810:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -16), 0, 16u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -16), r1);
    r1 = (r1 + -16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 12), r31);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 8), r30);
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -25084), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 1692), 0, 12u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 1700));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r4 + 1692));
}

loc_801B482C:
{
    r6 = (r0 & -4);
    r0 = (r0 & 3);
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(33))) {
        goto loc_801B484C;
    }
}

loc_801B4838:
{
    r0_subfic_ra_0 = r0;
    r0 = (3 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r4 + 1700), r0);
    goto loc_801B4858;
}

loc_801B484C:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & -8);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1700), r0);
}

loc_801B4858:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r3 = 0;
    r4 = 0;
    r10 = 255;
    MemoryInline::FlatWrite32((r5 + 1692), r6);
    r11 = 1;
    r0 = 16;
    r6 = MemoryInline::FlatRead32(r6);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    MemoryInline::FlatWrite32((r5 + 1696), r6);
}

loc_801B4880:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r5 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r3));
    r6 = MemoryInline::FlatRead8((r6 + 1704));
    r5 = (r6 & r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801B4998;
    }
}

loc_801B4894:
{
    r12 = 0;
    ctr = r0;
}

loc_801B489C:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r31 = 0;
    r5 = (r5 + r4);
    r5 = (r5 + r12);
    MemoryInline::FlatWrite8((r5 + 768), static_cast<uint8_t>(r10));
    goto loc_801B490C;
}

loc_801B48B4:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r6 = (4 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r8 = (r31 + 1);
    r9 = (r5 + r4);
    r30 = PPC_Srw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r6));
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & -4);
    r7 = (r9 + r5);
    r5 = MemoryInline::FlatRead32((r7 + 836));
}

loc_801B48D8:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r5))) {
        goto loc_801B4908;
    }
}

loc_801B48DC:
{
    r6 = MemoryInline::FlatRead32((r9 + 832));
    r5 = (r9 + r12);
    r7 = MemoryInline::FlatRead32((r7 + 908));
    r31 = 99;
    r6 = (r6 + r30);
    r7_addr_4 = (r7 + r6);
    r6 = MemoryInline::FlatRead8(r7_addr_4);
    MemoryInline::FlatWrite8((r5 + 768), static_cast<uint8_t>(r6));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r5 = (r5 + r4);
    r5 = (r5 + r12);
    MemoryInline::FlatWrite8((r5 + 800), static_cast<uint8_t>(r8));
}

loc_801B4908:
{
    r31 = (r31 + 1);
}

loc_801B490C:
{
}

loc_801B4910:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(5))) {
        goto loc_801B48B4;
    }
}

loc_801B4914:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r12 = (r12 + 1);
    r31 = 0;
    r5 = (r5 + r4);
    r5 = (r5 + r12);
    MemoryInline::FlatWrite8((r5 + 768), static_cast<uint8_t>(r10));
    goto loc_801B4988;
}

loc_801B4930:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r6 = (4 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r8 = (r31 + 1);
    r9 = (r5 + r4);
    r30 = PPC_Srw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r6));
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_6 & -4);
    r7 = (r9 + r5);
    r5 = MemoryInline::FlatRead32((r7 + 836));
}

loc_801B4954:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r5))) {
        goto loc_801B4984;
    }
}

loc_801B4958:
{
    r6 = MemoryInline::FlatRead32((r9 + 832));
    r5 = (r9 + r12);
    r7 = MemoryInline::FlatRead32((r7 + 908));
    r31 = 99;
    r6 = (r6 + r30);
    r7_addr_7 = (r7 + r6);
    r6 = MemoryInline::FlatRead8(r7_addr_7);
    MemoryInline::FlatWrite8((r5 + 768), static_cast<uint8_t>(r6));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r5 = (r5 + r4);
    r5 = (r5 + r12);
    MemoryInline::FlatWrite8((r5 + 800), static_cast<uint8_t>(r8));
}

loc_801B4984:
{
    r31 = (r31 + 1);
}

loc_801B4988:
{
}

loc_801B498C:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(5))) {
        goto loc_801B4930;
    }
}

loc_801B4990:
{
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B489C;
    }
}

loc_801B4998:
{
    r3 = (r3 + 1);
    r4 = (r4 + 224);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_801B49A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B4880;
    }
}

loc_801B49A8:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 1665), 0, 14u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r8 + 1666));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r8 + 1665));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r8 + 1671));
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_8 & -2);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r8 + 1672));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & -2);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r8 + 1678));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r9 = (r5 + 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r8 + 1677));
    r11 = (r3 + 1);
    r10 = (r4 + 1);
    r3 = (r7 * 224);
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_9 & -2);
    r4 = (r8 + r3);
    r3 = (r5 * 224);
    r5 = (r4 + 768);
    guest_range_2 = MemoryInline::ResolveRangeHost((r13 + -24960), 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 160u, (r13 + -24800), r5);
    r0 = (r6 * 224);
    r4 = (r8 + r0);
    r5 = (r4 + 768);
    r4 = (r8 + r3);
    MemoryInline::WriteResolved32(guest_range_2, 128u, (r13 + -24832), r5);
    r5 = (r4 + 768);
    r0 = (r9 * 224);
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r13 + -24864), r5);
    r4 = (r8 + r0);
    r5 = (r4 + 768);
    r3 = (r10 * 224);
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r13 + -24896), r5);
    r4 = (r8 + r3);
    r0 = (r11 * 224);
    r4 = (r4 + 768);
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r13 + -24928), r4);
    r3 = (r8 + r0);
    r0 = (r3 + 768);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r13 + -24960), r0);
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 8u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 12));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 8));
        }
    }
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B4810 func_801B4810 preserves=true fpr_mask=0x00000000
