#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B6858(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addr_dcbz_0 = 0;
    uint32_t r0_addr_dcbz_1 = 0;
    uint32_t r0_addr_dcbz_2 = 0;
    uint32_t r0_addr_dcbz_al_0 = 0;
    uint32_t r0_addr_dcbz_al_1 = 0;
    uint32_t r0_addr_dcbz_al_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r11_addr_5 = 0;
    uint32_t r11_addr_6 = 0;
    uint32_t r11_addr_7 = 0;
    uint32_t r11_addr_8 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mdest_3 = 0;
    uint32_t r12_mdest_4 = 0;
    uint32_t r12_mdest_5 = 0;
    uint32_t r12_mdest_6 = 0;
    uint32_t r12_mdest_7 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_mrot_3 = 0;
    uint32_t r12_mrot_4 = 0;
    uint32_t r12_mrot_5 = 0;
    uint32_t r12_mrot_6 = 0;
    uint32_t r12_mrot_7 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_11 = 0;
    uint32_t r12_rot_12 = 0;
    uint32_t r12_rot_13 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_10 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;
    uint32_t r31_rot_8 = 0;
    uint32_t r31_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_dcbz_0 = 0;
    uint32_t r4_addr_dcbz_al_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_10 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mdest_4 = 0;
    uint32_t r5_mdest_5 = 0;
    uint32_t r5_mdest_6 = 0;
    uint32_t r5_mdest_7 = 0;
    uint32_t r5_mdest_8 = 0;
    uint32_t r5_mdest_9 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_10 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_mrot_4 = 0;
    uint32_t r5_mrot_5 = 0;
    uint32_t r5_mrot_6 = 0;
    uint32_t r5_mrot_7 = 0;
    uint32_t r5_mrot_8 = 0;
    uint32_t r5_mrot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_19 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_20 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B6858;

loc_801B6858:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r31);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r29);
    r4_addr_dcbz_0 = r4;
    r4_addr_dcbz_al_0 = (r4_addr_dcbz_0 & -32);
    memset_zero_32(r4_addr_dcbz_al_0);
    r12 = MemoryInline::FlatRead32((r3 + 1700));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -24960), 0, 100u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r13 + -24864));
}

loc_801B6878:
{
    r11 = MemoryInline::FlatRead32((r3 + 1696));
    r5 = (r12 + 4);
    r10 = (r8 + 32);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r9 = (r9_rot_0 & 31);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(28))) {
        goto loc_801B6944;
    }
}

loc_801B688C:
{
    r8_addr_0 = (r8 + r9);
    r5 = MemoryInline::FlatRead8(r8_addr_0);
    r10_addr_0 = (r10 + r9);
    r10 = MemoryInline::FlatRead8(r10_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(255));
}

loc_801B6898:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B68A8;
    }
}

loc_801B689C:
{
    r12 = (r12 + r10);
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    goto loc_801B6AE0;
}

loc_801B68A8:
{
    r6 = (r8 + 88);
    r5 = 5;
    r12 = (r12 + 5);
}

loc_801B68B4:
{
}

loc_801B68B8:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(33))) {
        goto loc_801B68D4;
    }
}

loc_801B68C0:
{
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r12));
    r10 = (r10_rot_2 & 1);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9 = (r9 | r10);
    r12 = (r12 + 1);
    goto loc_801B6918;
}

loc_801B68D4:
{
    r10 = MemoryInline::FlatRead32((r3 + 1692));
    r12 = 1;
    r10 = (r10 + 4);
    r11 = MemoryInline::FlatRead32(r10);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r9_mrot_1 = (r9_rot_3 & 1);
    r9_mdest_1 = (r9 & -2);
    r9 = (r9_mdest_1 | r9_mrot_1);
    MemoryInline::FlatWrite32((r3 + 1692), r10);
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    goto loc_801B6904;
}

loc_801B68F4:
{
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_5 & -2);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r12));
    r10 = (r10_rot_4 & 1);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9 = (r9 | r10);
}

loc_801B6904:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r0));
}

loc_801B6908:
{
    r12 = (r12 + 1);
    r5 = (r5 + 1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B68F4;
    }
}

loc_801B6914:
{
    goto loc_801B6924;
}

loc_801B6918:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r0));
}

loc_801B691C:
{
    r5 = (r5 + 1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B68B4;
    }
}

loc_801B6924:
{
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 64));
    r5 = MemoryInline::FlatRead32((r5 + 140));
    r0 = (r0 + r9);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead8(r5_addr_1);
    goto loc_801B6AE0;
}

loc_801B6944:
{
}

loc_801B6948:
{
    r9 = MemoryInline::FlatRead32((r3 + 1692));
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(33))) {
        goto loc_801B69F8;
    }
}

loc_801B6950:
{
}

loc_801B6954:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r5 = (r5_rot_1 & 31);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(32))) {
        goto loc_801B6984;
    }
}

loc_801B695C:
{
    r8_addr_1 = (r8 + r5);
    r9 = MemoryInline::FlatRead8(r8_addr_1);
    r10_addr_1 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_1);
}

loc_801B6968:
{
    r5 = (r12 + r10);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(255))) {
        goto loc_801B6A5C;
    }
}

loc_801B6970:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(33));
}

loc_801B6974:
{
    MemoryInline::FlatWrite32((r3 + 1700), r5);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B6A5C;
    }
}

loc_801B697C:
{
    r5 = r9;
    goto loc_801B6AE0;
}

loc_801B6984:
{
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r5_mrot_2 = (r5_rot_6 & 15);
    r5_mdest_2 = (r5 & -16);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r8_addr_2 = (r8 + r5);
    r9 = MemoryInline::FlatRead8(r8_addr_2);
    r10_addr_2 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(255));
}

loc_801B699C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 1696), r11);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 1700), r10);
    }
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B69B0;
    }
}

loc_801B69A8:
{
    r5 = r9;
    goto loc_801B6AE0;
}

loc_801B69B0:
{
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r9 = (r9_rot_7 & -134217728);
    r6 = (r8 + 88);
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(31));
    r9_mrot_3 = (r9_rot_8 & 2147483647);
    r9_mdest_3 = (r9 & -2147483648);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r12 = 5;
}

loc_801B69C0:
{
    r11 = (31 - r12);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r12) ? 1u : 0u) << 29);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r5 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r11));
    r12 = (r12 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_801B69D4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B69C0;
    }
}

loc_801B69D8:
{
    MemoryInline::FlatWrite32((r3 + 1700), r12);
}

loc_801B69DC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r7 = MemoryInline::FlatRead32((r8 + 64));
    r6 = (r8 + r0);
    r6 = MemoryInline::FlatRead32((r6 + 140));
    r0 = (r7 + r5);
    r6_addr_2 = (r6 + r0);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    goto loc_801B6AE0;
}

loc_801B69F8:
{
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(5));
    r5 = (r5_rot_8 & 31);
    r8_addr_4 = (r8 + r5);
    r12 = MemoryInline::FlatRead8(r8_addr_4);
    r10_addr_4 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(255));
}

loc_801B6A10:
{
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    r10 = (r10 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B6A28;
    }
}

loc_801B6A1C:
{
    MemoryInline::FlatWrite32((r3 + 1700), r10);
    r5 = r12;
    goto loc_801B6AE0;
}

loc_801B6A28:
{
    r12 = 5;
    r6 = 20;
}

loc_801B6A30:
{
    r9 = (31 - r12);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r12) ? 1u : 0u) << 29);
    r6 = (r6 + 4);
    r5 = (r8 + r6);
    r12 = (r12 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 68));
    r5 = PPC_Srw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r9));
}

loc_801B6A4C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_801B6A30;
    }
}

loc_801B6A50:
{
    r0 = (r12 + 1);
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    goto loc_801B69DC;
}

loc_801B6A5C:
{
    r0 = (33 - r12);
    r5 = -1;
    r7 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r9 = MemoryInline::FlatRead32((r3 + 1692));
    r5 = (r11 & ~r7);
    r7 = (r8 + 68);
    r6 = (33 - r12);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(33) >= static_cast<uint32_t>(r12) ? 1u : 0u) << 29);
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    r12 = (r6 + 1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r7 = (r7 + r6);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r5_mrot_1 = (r5_rot_3 & 1);
    r5_mdest_1 = (r5 & -2);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r9 = 2;
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    r7 = (r7 + 4);
    r6 = MemoryInline::FlatRead32(r7);
    goto loc_801B6AB8;
}

loc_801B6AA4:
{
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & -2);
    r7 = (r7 + 4);
    r6 = MemoryInline::FlatRead32(r7);
    r5 = (r5 + r10);
    r9 = (r9 + 1);
    r12 = (r12 + 1);
}

loc_801B6AB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r6));
}

loc_801B6ABC:
{
    r10_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r9));
    r10 = (r10_rot_7 & 1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B6AA4;
    }
}

loc_801B6AC4:
{
    MemoryInline::FlatWrite32((r3 + 1700), r9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 64));
    r6 = MemoryInline::FlatRead32((r6 + 140));
    r0 = (r0 + r5);
    r6_addr_1 = (r6 + r0);
    r5 = MemoryInline::FlatRead8(r6_addr_1);
}

loc_801B6AE0:
{
    r0 = 32;
    r0_addr_dcbz_0 = (r4 + r0);
    r0_addr_dcbz_al_0 = (r0_addr_dcbz_0 & -32);
    memset_zero_32(r0_addr_dcbz_al_0);
    r0 = 64;
    r7 = 0;
    r0_addr_dcbz_1 = (r4 + r0);
    r0_addr_dcbz_al_1 = (r0_addr_dcbz_1 & -32);
    memset_zero_32(r0_addr_dcbz_al_1);
}

loc_801B6AF8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801B6B80;
    }
}

loc_801B6AFC:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r3 + 1700));
    r11 = (33 - r10);
    r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r3 + 1696));
    r12 = (r5 - r11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
    r29 = (r10 + -1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B6B2C;
    }
}

loc_801B6B14:
{
    r0 = (r10 + r5);
    r10 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r29));
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    r0 = (32 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r7 = PPC_Srw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
    goto loc_801B6B58;
}

loc_801B6B2C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r29));
    r10 = MemoryInline::FlatRead32((r3 + 1692));
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead32(r10);
    r12 = (r12 + 1);
    MemoryInline::FlatWrite32((r3 + 1696), r7);
    r7 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r11));
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r3 + 1692), r10);
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r12 = (32 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r7 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r12));
}

loc_801B6B58:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0 = (32 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
}

loc_801B6B68:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r0))) {
        goto loc_801B6B80;
    }
}

loc_801B6B6C:
{
    r0 = -1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = (r7 + r0);
    r0 = (r5 + 1);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801B6B80:
{
    r0 = 96;
    r0_addr_dcbz_2 = (r4 + r0);
    r0_addr_dcbz_al_2 = (r0_addr_dcbz_2 & -32);
    memset_zero_32(r0_addr_dcbz_al_2);
    r8 = 0x80250000u;
    r0 = MemoryInline::FlatRead16((r3 + 1680));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = (r8 + 11840);
    r6 = 1;
    r9 = -1;
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 1680), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_801B6EC4;
}

loc_801B6BAC:
{
    r29 = MemoryInline::FlatRead32((r3 + 1700));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -24960));
}

loc_801B6BB8:
{
    r30 = MemoryInline::FlatRead32((r3 + 1696));
    r5 = (r29 + 4);
    r31 = (r11 + 32);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r5));
    r12 = (r12_rot_2 & 31);
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(28))) {
        goto loc_801B6C84;
    }
}

loc_801B6BCC:
{
    r11_addr_2 = (r11 + r12);
    r5 = MemoryInline::FlatRead8(r11_addr_2);
    r31_addr_2 = (r31 + r12);
    r31 = MemoryInline::FlatRead8(r31_addr_2);
}

loc_801B6BD8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(255))) {
        goto loc_801B6BE8;
    }
}

loc_801B6BDC:
{
    r29 = (r29 + r31);
    MemoryInline::FlatWrite32((r3 + 1700), r29);
    goto loc_801B6E1C;
}

loc_801B6BE8:
{
    r7 = (r11 + 88);
    r5 = 5;
    r29 = (r29 + 5);
}

loc_801B6BF4:
{
}

loc_801B6BF8:
{
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_4 & -2);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(33))) {
        goto loc_801B6C14;
    }
}

loc_801B6C00:
{
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
    r31 = (r31_rot_3 & 1);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r12 = (r12 | r31);
    r29 = (r29 + 1);
    goto loc_801B6C58;
}

loc_801B6C14:
{
    r31 = MemoryInline::FlatRead32((r3 + 1692));
    r29 = 1;
    r31 = (r31 + 4);
    r30 = MemoryInline::FlatRead32(r31);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r12_mrot_2 = (r12_rot_5 & 1);
    r12_mdest_2 = (r12 & -2);
    r12 = (r12_mdest_2 | r12_mrot_2);
    MemoryInline::FlatWrite32((r3 + 1692), r31);
    MemoryInline::FlatWrite32((r3 + 1696), r30);
    goto loc_801B6C44;
}

loc_801B6C34:
{
    r12_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_7 & -2);
    r31_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
    r31 = (r31_rot_5 & 1);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r12 = (r12 | r31);
}

loc_801B6C44:
{
}

loc_801B6C48:
{
    r29 = (r29 + 1);
    r5 = (r5 + 1);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(r0))) {
        goto loc_801B6C34;
    }
}

loc_801B6C54:
{
    goto loc_801B6C64;
}

loc_801B6C58:
{
}

loc_801B6C5C:
{
    r5 = (r5 + 1);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(r0))) {
        goto loc_801B6BF4;
    }
}

loc_801B6C64:
{
    MemoryInline::FlatWrite32((r3 + 1700), r29);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = (r11 + r0);
    r0 = MemoryInline::FlatRead32((r11 + 64));
    r5 = MemoryInline::FlatRead32((r5 + 140));
    r0 = (r0 + r12);
    r5_addr_4 = (r5 + r0);
    r5 = MemoryInline::FlatRead8(r5_addr_4);
    goto loc_801B6E1C;
}

loc_801B6C84:
{
}

loc_801B6C88:
{
    r12 = MemoryInline::FlatRead32((r3 + 1692));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(33))) {
        goto loc_801B6D38;
    }
}

loc_801B6C90:
{
}

loc_801B6C94:
{
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r5));
    r5 = (r5_rot_11 & 31);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(32))) {
        goto loc_801B6CC4;
    }
}

loc_801B6C9C:
{
    r11_addr_3 = (r11 + r5);
    r12 = MemoryInline::FlatRead8(r11_addr_3);
    r31_addr_3 = (r31 + r5);
    r31 = MemoryInline::FlatRead8(r31_addr_3);
}

loc_801B6CA8:
{
    r5 = (r29 + r31);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(255))) {
        goto loc_801B6D9C;
    }
}

loc_801B6CB0:
{
}

loc_801B6CB4:
{
    MemoryInline::FlatWrite32((r3 + 1700), r5);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(33))) {
        goto loc_801B6D9C;
    }
}

loc_801B6CBC:
{
    r5 = r12;
    goto loc_801B6E1C;
}

loc_801B6CC4:
{
    r12 = (r12 + 4);
    r30 = MemoryInline::FlatRead32(r12);
    MemoryInline::FlatWrite32((r3 + 1692), r12);
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r5_mrot_7 = (r5_rot_16 & 15);
    r5_mdest_7 = (r5 & -16);
    r5 = (r5_mdest_7 | r5_mrot_7);
    r11_addr_4 = (r11 + r5);
    r12 = MemoryInline::FlatRead8(r11_addr_4);
    r31_addr_4 = (r31 + r5);
    r31 = MemoryInline::FlatRead8(r31_addr_4);
}

loc_801B6CDC:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r3 + 1696), r30);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r3 + 1700), r31);
    }
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(255))) {
        goto loc_801B6CF0;
    }
}

loc_801B6CE8:
{
    r5 = r12;
    goto loc_801B6E1C;
}

loc_801B6CF0:
{
    r12_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r12 = (r12_rot_9 & -134217728);
    r7 = (r11 + 88);
    r12_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(31));
    r12_mrot_4 = (r12_rot_10 & 2147483647);
    r12_mdest_4 = (r12 & -2147483648);
    r12 = (r12_mdest_4 | r12_mrot_4);
    r29 = 5;
}

loc_801B6D00:
{
    r30 = (31 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r5 = PPC_Srw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r30));
    r29 = (r29 + 1);
}

loc_801B6D14:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_801B6D00;
    }
}

loc_801B6D18:
{
    MemoryInline::FlatWrite32((r3 + 1700), r29);
}

loc_801B6D1C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r10 = MemoryInline::FlatRead32((r11 + 64));
    r7 = (r11 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 140));
    r0 = (r10 + r5);
    r7_addr_3 = (r7 + r0);
    r5 = MemoryInline::FlatRead8(r7_addr_3);
    goto loc_801B6E1C;
}

loc_801B6D38:
{
    r12 = (r12 + 4);
    r30 = MemoryInline::FlatRead32(r12);
    MemoryInline::FlatWrite32((r3 + 1692), r12);
    r5_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(5));
    r5 = (r5_rot_18 & 31);
    r11_addr_6 = (r11 + r5);
    r29 = MemoryInline::FlatRead8(r11_addr_6);
    r31_addr_6 = (r31 + r5);
    r31 = MemoryInline::FlatRead8(r31_addr_6);
}

loc_801B6D50:
{
    MemoryInline::FlatWrite32((r3 + 1696), r30);
    r31 = (r31 + 1);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(255))) {
        goto loc_801B6D68;
    }
}

loc_801B6D5C:
{
    MemoryInline::FlatWrite32((r3 + 1700), r31);
    r5 = r29;
    goto loc_801B6E1C;
}

loc_801B6D68:
{
    r29 = 5;
    r7 = 20;
}

loc_801B6D70:
{
    r12 = (31 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r7 = (r7 + 4);
    r5 = (r11 + r7);
    r29 = (r29 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 68));
    r5 = PPC_Srw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r12));
}

loc_801B6D8C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_801B6D70;
    }
}

loc_801B6D90:
{
    r0 = (r29 + 1);
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    goto loc_801B6D1C;
}

loc_801B6D9C:
{
    r0 = (33 - r29);
    r12 = MemoryInline::FlatRead32((r3 + 1692));
    r10 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
    r5 = (r30 & ~r10);
    r10 = (r11 + 68);
    r7 = (33 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(33) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r12 = (r12 + 4);
    r30 = MemoryInline::FlatRead32(r12);
    r29 = (r7 + 1);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_12 & -2);
    MemoryInline::FlatWrite32((r3 + 1692), r12);
    r10 = (r10 + r7);
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5_mrot_6 = (r5_rot_13 & 1);
    r5_mdest_6 = (r5 & -2);
    r5 = (r5_mdest_6 | r5_mrot_6);
    r12 = 2;
    MemoryInline::FlatWrite32((r3 + 1696), r30);
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead32(r10);
    goto loc_801B6DF4;
}

loc_801B6DE0:
{
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_15 & -2);
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead32(r10);
    r5 = (r5 + r31);
    r12 = (r12 + 1);
    r29 = (r29 + 1);
}

loc_801B6DF4:
{
}

loc_801B6DF8:
{
    r31_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r12));
    r31 = (r31_rot_8 & 1);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r7))) {
        goto loc_801B6DE0;
    }
}

loc_801B6E00:
{
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r7 = (r11 + r0);
    r0 = MemoryInline::FlatRead32((r11 + 64));
    r7 = MemoryInline::FlatRead32((r7 + 140));
    r0 = (r0 + r5);
    r7_addr_2 = (r7 + r0);
    r5 = MemoryInline::FlatRead8(r7_addr_2);
}

loc_801B6E1C:
{
    r30 = (r5 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801B6E20:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r5) >> 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B6EB4;
    }
}

loc_801B6E28:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 1700));
    r6 = (r6 + r7);
    r11 = (33 - r10);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r3 + 1696));
    r12 = (r30 - r11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
    r29 = (r10 + -1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B6E5C;
    }
}

loc_801B6E44:
{
    r0 = (r10 + r30);
    r10 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r29));
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    r0 = (32 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r7 = PPC_Srw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
    goto loc_801B6E88;
}

loc_801B6E5C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r29));
    r10 = MemoryInline::FlatRead32((r3 + 1692));
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead32(r10);
    r12 = (r12 + 1);
    MemoryInline::FlatWrite32((r3 + 1696), r7);
    r7 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r11));
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r3 + 1692), r10);
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r12 = (32 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r7 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r12));
}

loc_801B6E88:
{
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r0 = (32 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
}

loc_801B6E94:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_801B6EA4;
    }
}

loc_801B6E98:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r30));
    r5 = (r0 + r7);
    r7 = (r5 + 1);
}

loc_801B6EA4:
{
    r8_addr_7 = (r8 + r6);
    r0 = MemoryInline::FlatRead8(r8_addr_7);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_2, static_cast<uint16_t>(r7));
    goto loc_801B6EC0;
}

loc_801B6EB4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(15));
}

loc_801B6EB8:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801B6ECC;
    }
}

loc_801B6EBC:
{
    r6 = (r6 + 15);
}

loc_801B6EC0:
{
    r6 = (r6 + 1);
}

loc_801B6EC4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(64));
}

loc_801B6EC8:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801B6BAC;
    }
}

loc_801B6ECC:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 4u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 28));
            r30 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 24));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 20));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0003FFB gpr_write=0xE0001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B6858 func_801B6858 preserves=true fpr_mask=0x00000000
