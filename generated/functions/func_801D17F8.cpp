#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D17F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_13 = 0;
    uint32_t r0_mdest_14 = 0;
    uint32_t r0_mdest_15 = 0;
    uint32_t r0_mdest_16 = 0;
    uint32_t r0_mdest_17 = 0;
    uint32_t r0_mdest_18 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_12 = 0;
    uint32_t r0_mrot_13 = 0;
    uint32_t r0_mrot_14 = 0;
    uint32_t r0_mrot_15 = 0;
    uint32_t r0_mrot_16 = 0;
    uint32_t r0_mrot_17 = 0;
    uint32_t r0_mrot_18 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_addr_dcbz_0 = 0;
    uint32_t r6_addr_dcbz_1 = 0;
    uint32_t r6_addr_dcbz_10 = 0;
    uint32_t r6_addr_dcbz_11 = 0;
    uint32_t r6_addr_dcbz_2 = 0;
    uint32_t r6_addr_dcbz_3 = 0;
    uint32_t r6_addr_dcbz_4 = 0;
    uint32_t r6_addr_dcbz_5 = 0;
    uint32_t r6_addr_dcbz_6 = 0;
    uint32_t r6_addr_dcbz_7 = 0;
    uint32_t r6_addr_dcbz_8 = 0;
    uint32_t r6_addr_dcbz_9 = 0;
    uint32_t r6_addr_dcbz_al_0 = 0;
    uint32_t r6_addr_dcbz_al_1 = 0;
    uint32_t r6_addr_dcbz_al_10 = 0;
    uint32_t r6_addr_dcbz_al_11 = 0;
    uint32_t r6_addr_dcbz_al_2 = 0;
    uint32_t r6_addr_dcbz_al_3 = 0;
    uint32_t r6_addr_dcbz_al_4 = 0;
    uint32_t r6_addr_dcbz_al_5 = 0;
    uint32_t r6_addr_dcbz_al_6 = 0;
    uint32_t r6_addr_dcbz_al_7 = 0;
    uint32_t r6_addr_dcbz_al_8 = 0;
    uint32_t r6_addr_dcbz_al_9 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint32_t r7_stbu_ea_3 = 0;
    uint32_t r7_stbu_ea_4 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_10 = 0;
    uint32_t r8_mdest_11 = 0;
    uint32_t r8_mdest_12 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mdest_3 = 0;
    uint32_t r8_mdest_4 = 0;
    uint32_t r8_mdest_5 = 0;
    uint32_t r8_mdest_6 = 0;
    uint32_t r8_mdest_7 = 0;
    uint32_t r8_mdest_8 = 0;
    uint32_t r8_mdest_9 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_10 = 0;
    uint32_t r8_mrot_11 = 0;
    uint32_t r8_mrot_12 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_mrot_3 = 0;
    uint32_t r8_mrot_4 = 0;
    uint32_t r8_mrot_5 = 0;
    uint32_t r8_mrot_6 = 0;
    uint32_t r8_mrot_7 = 0;
    uint32_t r8_mrot_8 = 0;
    uint32_t r8_mrot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_14 = 0;
    uint32_t r8_rot_15 = 0;
    uint32_t r8_rot_16 = 0;
    uint32_t r8_rot_17 = 0;
    uint32_t r8_rot_18 = 0;
    uint32_t r8_rot_19 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_10 = 0;
    uint32_t r9_mdest_11 = 0;
    uint32_t r9_mdest_12 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mdest_6 = 0;
    uint32_t r9_mdest_7 = 0;
    uint32_t r9_mdest_8 = 0;
    uint32_t r9_mdest_9 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_10 = 0;
    uint32_t r9_mrot_11 = 0;
    uint32_t r9_mrot_12 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_mrot_6 = 0;
    uint32_t r9_mrot_7 = 0;
    uint32_t r9_mrot_8 = 0;
    uint32_t r9_mrot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_15 = 0;
    uint32_t r9_rot_16 = 0;
    uint32_t r9_rot_17 = 0;
    uint32_t r9_rot_18 = 0;
    uint32_t r9_rot_19 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_20 = 0;
    uint32_t r9_rot_21 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;
    uint32_t r9_subfic_ra_0 = 0;
    uint32_t r9_subfic_ra_1 = 0;
    uint32_t r9_subfic_ra_2 = 0;
    uint32_t r9_subfic_ra_3 = 0;
    uint32_t r9_subfic_ra_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D17F8;

loc_801D17F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_801D17FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801D1800:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D184C;
    }
}

loc_801D1804:
{
    r6 = (r4 + r5);
}

loc_801D180C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r6))) {
        goto loc_801D184C;
    }
}

loc_801D1810:
{
    r0 = (r5 & 3);
}

loc_801D1814:
{
    r7 = (r3 + r5);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r4 = (r4_rot_1 & 1073741823);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D1830;
    }
}

loc_801D1820:
{
    ctr = r0;
}

loc_801D1824:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r7_stbu_ea_2 = (r7 + -1);
    MemoryInline::FlatWrite8(r7_stbu_ea_2, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1824;
    }
}

loc_801D1830:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801D1834:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801D1838:
{
    ctr = r4;
}

loc_801D183C:
{
    r6 = (r6 + -4);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + -4), r0);
    r7 = (r7 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D183C;
    }
}

loc_801D1848:
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801D184C:
{
    r0 = (r4 + -32);
}

loc_801D1854:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_801D1860;
    }
}

loc_801D1858:
{
}

loc_801D185C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r4))) {
        goto loc_801D1B54;
    }
}

loc_801D1860:
{
}

loc_801D1864:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(64))) {
        goto loc_801D1B54;
    }
}

loc_801D1868:
{
    r9 = (r3 & 31);
}

loc_801D186C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801D18CC;
    }
}

loc_801D1870:
{
    r9_subfic_ra_1 = r9;
    r9 = (32 - r9_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r9_subfic_ra_1) ? 1u : 0u) << 29);
    r7 = r4;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
}

loc_801D187C:
{
    r8 = r3;
    r6 = (r9 & 3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D18A0;
    }
}

loc_801D1888:
{
    ctr = r0;
}

loc_801D188C:
{
    r0 = MemoryInline::FlatRead32(r7);
    r7 = (r7 + 4);
    MemoryInline::FlatWrite32(r8, r0);
    r8 = (r8 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D188C;
    }
}

loc_801D18A0:
{
}

loc_801D18A4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801D18C0;
    }
}

loc_801D18A8:
{
    ctr = r6;
}

loc_801D18AC:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D18AC;
    }
}

loc_801D18C0:
{
    r3 = (r3 + r9);
    r4 = (r4 + r9);
    r5 = (r5 - r9);
}

loc_801D18CC:
{
    r0 = (r4 & 3);
    r7 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801D18D8:
{
    r6 = r3;
    r12 = (r5 & -32);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 134217727);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1A04;
    }
}

loc_801D18E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D18FC;
    }
}

loc_801D18EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D18F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1908;
    }
}

loc_801D18F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D1960;
    }
}

loc_801D18F8:
{
    goto loc_801D1B48;
}

loc_801D18FC:
{
}

loc_801D1900:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_801D1B48;
    }
}

loc_801D1904:
{
    goto loc_801D1AA8;
}

loc_801D1908:
{
    ctr = r8;
}

loc_801D190C:
{
    r6_addr_dcbz_4 = r6;
    r6_addr_dcbz_al_4 = (r6_addr_dcbz_4 & -32);
    memset_zero_32(r6_addr_dcbz_al_4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, r7);
            r10 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r7 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r11);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r10);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r7 + 8));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r7 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r11);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r10);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r7 + 16));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r7 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r11);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r10);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r7 + 24));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r7 + 28));
        }
    }
    r7 = (r7 + 32);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r11);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r10);
    }
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D190C;
    }
}

loc_801D195C:
{
    goto loc_801D1B48;
}

loc_801D1960:
{
    r9 = MemoryInline::FlatRead32((r4 + -1));
    ctr = r8;
    r7 = (r4 + 3);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r9 = (r9_rot_1 & -256);
}

loc_801D1970:
{
    r6_addr_dcbz_2 = r6;
    r6_addr_dcbz_al_2 = (r6_addr_dcbz_2 & -32);
    memset_zero_32(r6_addr_dcbz_al_2);
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, r7);
            r10 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r7 + 4));
        }
    }
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r9_mrot_2 = (r9_rot_3 & 255);
    r9_mdest_2 = (r9 & -256);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    guest_range_3 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r6, r9);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_5 & 255);
    r0_mdest_2 = (r0 & -256);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r8 = (r8_rot_3 & -256);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + 4), r0);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r8_mrot_2 = (r8_rot_4 & 255);
    r8_mdest_2 = (r8 & -256);
    r8 = (r8_mdest_2 | r8_mrot_2);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r10 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r7 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + 8), r8);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_7 & 255);
    r0_mdest_3 = (r0 & -256);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r9 = (r9_rot_4 & -256);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r7 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + 12), r0);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r9_mrot_3 = (r9_rot_5 & 255);
    r9_mdest_3 = (r9 & -256);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & -256);
    r10 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r7 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + 16), r9);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_9 & 255);
    r0_mdest_4 = (r0 & -256);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r8 = (r8_rot_5 & -256);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r7 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + 20), r0);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r8_mrot_3 = (r8_rot_6 & 255);
    r8_mdest_3 = (r8 & -256);
    r8 = (r8_mdest_3 | r8_mrot_3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r0 = (r0_rot_10 & -256);
    r10 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r7 + 28));
    r7 = (r7 + 32);
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + 24), r8);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0_mrot_5 = (r0_rot_11 & 255);
    r0_mdest_5 = (r0 & -256);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r9 = (r9_rot_6 & -256);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + 28), r0);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1970;
    }
}

loc_801D1A00:
{
    goto loc_801D1B48;
}

loc_801D1A04:
{
    r9 = MemoryInline::FlatRead32((r4 + -2));
    ctr = r8;
    r7 = (r4 + 2);
    r9_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r9 = (r9_rot_13 & -65536);
}

loc_801D1A14:
{
    r6_addr_dcbz_8 = r6;
    r6_addr_dcbz_al_8 = (r6_addr_dcbz_8 & -32);
    memset_zero_32(r6_addr_dcbz_al_8);
    guest_range_4 = MemoryInline::ResolveRangeHost(r7, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_4, 0u, r7);
            r10 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r7 + 4));
        }
    }
    r9_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r9_mrot_8 = (r9_rot_15 & 65535);
    r9_mdest_8 = (r9 & -65536);
    r9 = (r9_mdest_8 | r9_mrot_8);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r0 = (r0_rot_22 & -65536);
    guest_range_5 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r6, r9);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r0_mrot_12 = (r0_rot_23 & 65535);
    r0_mdest_12 = (r0 & -65536);
    r0 = (r0_mdest_12 | r0_mrot_12);
    r8_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r8 = (r8_rot_13 & -65536);
    r11 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r6 + 4), r0);
    r8_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r8_mrot_8 = (r8_rot_14 & 65535);
    r8_mdest_8 = (r8 & -65536);
    r8 = (r8_mdest_8 | r8_mrot_8);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r0 = (r0_rot_24 & -65536);
    r10 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r7 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r6 + 8), r8);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r0_mrot_13 = (r0_rot_25 & 65535);
    r0_mdest_13 = (r0 & -65536);
    r0 = (r0_mdest_13 | r0_mrot_13);
    r9_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r9 = (r9_rot_16 & -65536);
    r11 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r7 + 16));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r6 + 12), r0);
    r9_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r9_mrot_9 = (r9_rot_17 & 65535);
    r9_mdest_9 = (r9 & -65536);
    r9 = (r9_mdest_9 | r9_mrot_9);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r0 = (r0_rot_26 & -65536);
    r10 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r7 + 20));
    MemoryInline::WriteResolved32(guest_range_5, 16u, (r6 + 16), r9);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r0_mrot_14 = (r0_rot_27 & 65535);
    r0_mdest_14 = (r0 & -65536);
    r0 = (r0_mdest_14 | r0_mrot_14);
    r8_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r8 = (r8_rot_15 & -65536);
    r11 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r7 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r6 + 20), r0);
    r8_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r8_mrot_9 = (r8_rot_16 & 65535);
    r8_mdest_9 = (r8 & -65536);
    r8 = (r8_mdest_9 | r8_mrot_9);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r0 = (r0_rot_28 & -65536);
    r10 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r7 + 28));
    r7 = (r7 + 32);
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r6 + 24), r8);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r0_mrot_15 = (r0_rot_29 & 65535);
    r0_mdest_15 = (r0 & -65536);
    r0 = (r0_mdest_15 | r0_mrot_15);
    r9_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r9 = (r9_rot_18 & -65536);
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r6 + 28), r0);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1A14;
    }
}

loc_801D1AA4:
{
    goto loc_801D1B48;
}

loc_801D1AA8:
{
    r9 = MemoryInline::FlatRead32((r4 + -3));
    ctr = r8;
    r7 = (r4 + 1);
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r9 = (r9_rot_7 & -16777216);
}

loc_801D1AB8:
{
    r6_addr_dcbz_6 = r6;
    r6_addr_dcbz_al_6 = (r6_addr_dcbz_6 & -32);
    memset_zero_32(r6_addr_dcbz_al_6);
    guest_range_6 = MemoryInline::ResolveRangeHost(r7, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_6, 0u, r7);
            r10 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r7 + 4));
        }
    }
    r9_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r9_mrot_5 = (r9_rot_9 & 16777215);
    r9_mdest_5 = (r9 & -16777216);
    r9 = (r9_mdest_5 | r9_mrot_5);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r0 = (r0_rot_13 & -16777216);
    guest_range_7 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, r6, r9);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r0_mrot_7 = (r0_rot_14 & 16777215);
    r0_mdest_7 = (r0 & -16777216);
    r0 = (r0_mdest_7 | r0_mrot_7);
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r8 = (r8_rot_8 & -16777216);
    r11 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_7, 4u, (r6 + 4), r0);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r8_mrot_5 = (r8_rot_9 & 16777215);
    r8_mdest_5 = (r8 & -16777216);
    r8 = (r8_mdest_5 | r8_mrot_5);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r0 = (r0_rot_15 & -16777216);
    r10 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r7 + 12));
    MemoryInline::WriteResolved32(guest_range_7, 8u, (r6 + 8), r8);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r0_mrot_8 = (r0_rot_16 & 16777215);
    r0_mdest_8 = (r0 & -16777216);
    r0 = (r0_mdest_8 | r0_mrot_8);
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r9 = (r9_rot_10 & -16777216);
    r11 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r7 + 16));
    MemoryInline::WriteResolved32(guest_range_7, 12u, (r6 + 12), r0);
    r9_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r9_mrot_6 = (r9_rot_11 & 16777215);
    r9_mdest_6 = (r9 & -16777216);
    r9 = (r9_mdest_6 | r9_mrot_6);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r0 = (r0_rot_17 & -16777216);
    r10 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r7 + 20));
    MemoryInline::WriteResolved32(guest_range_7, 16u, (r6 + 16), r9);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r0_mrot_9 = (r0_rot_18 & 16777215);
    r0_mdest_9 = (r0 & -16777216);
    r0 = (r0_mdest_9 | r0_mrot_9);
    r8_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r8 = (r8_rot_10 & -16777216);
    r11 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r7 + 24));
    MemoryInline::WriteResolved32(guest_range_7, 20u, (r6 + 20), r0);
    r8_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r8_mrot_6 = (r8_rot_11 & 16777215);
    r8_mdest_6 = (r8 & -16777216);
    r8 = (r8_mdest_6 | r8_mrot_6);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r0 = (r0_rot_19 & -16777216);
    r10 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r7 + 28));
    r7 = (r7 + 32);
    MemoryInline::WriteResolved32(guest_range_7, 24u, (r6 + 24), r8);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r0_mrot_10 = (r0_rot_20 & 16777215);
    r0_mdest_10 = (r0 & -16777216);
    r0 = (r0_mdest_10 | r0_mrot_10);
    r9_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r9 = (r9_rot_12 & -16777216);
    MemoryInline::WriteResolved32(guest_range_7, 28u, (r6 + 28), r0);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1AB8;
    }
}

loc_801D1B48:
{
    r3 = (r3 + r12);
    r4 = (r4 + r12);
    r5 = (r5 - r12);
}

loc_801D1B54:
{
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_32 & 1073741823);
}

loc_801D1B58:
{
    r6 = r3;
    r5 = (r5 & 3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D1B7C;
    }
}

loc_801D1B64:
{
    ctr = r0;
}

loc_801D1B68:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1B68;
    }
}

loc_801D1B7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801D1B80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801D1B84:
{
    ctr = r5;
}

loc_801D1B88:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1B88;
    }
}

loc_801D1B9C:
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
    ctx->ctr = ctr;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D17F8 func_801D17F8 preserves=true fpr_mask=0x00000000
