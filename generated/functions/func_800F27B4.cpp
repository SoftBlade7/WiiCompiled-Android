#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F27B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_adde_right_0 = 0;
    uint32_t r0_adde_right_1 = 0;
    uint32_t r0_adde_right_2 = 0;
    uint32_t r0_adde_right_3 = 0;
    uint32_t r0_adde_right_4 = 0;
    uint32_t r0_adde_right_5 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_10 = 0;
    uint32_t r0_ca_11 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_not_7 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r0_subfc_sub_4 = 0;
    uint32_t r0_subfc_sub_5 = 0;
    uint32_t r0_subfc_sub_6 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r0_subfe_rb_4 = 0;
    uint32_t r0_subfe_rb_5 = 0;
    uint32_t r0_subfe_rb_6 = 0;
    uint32_t r0_subfe_rb_7 = 0;
    uint32_t r10_ca_0 = 0;
    uint32_t r10_ca_1 = 0;
    uint32_t r10_ca_2 = 0;
    uint32_t r30_ca_0 = 0;
    uint32_t r30_ca_1 = 0;
    uint32_t r30_ca_2 = 0;
    uint32_t r3_subfc_min_0 = 0;
    uint32_t r3_subfc_min_1 = 0;
    uint32_t r3_subfc_min_10 = 0;
    uint32_t r3_subfc_min_11 = 0;
    uint32_t r3_subfc_min_12 = 0;
    uint32_t r3_subfc_min_13 = 0;
    uint32_t r3_subfc_min_14 = 0;
    uint32_t r3_subfc_min_2 = 0;
    uint32_t r3_subfc_min_3 = 0;
    uint32_t r3_subfc_min_4 = 0;
    uint32_t r3_subfc_min_5 = 0;
    uint32_t r3_subfc_min_6 = 0;
    uint32_t r3_subfc_min_7 = 0;
    uint32_t r3_subfc_min_8 = 0;
    uint32_t r3_subfc_min_9 = 0;
    uint32_t r4_addc_left_0 = 0;
    uint32_t r4_addc_left_1 = 0;
    uint32_t r4_addc_left_2 = 0;
    uint32_t r4_addc_left_3 = 0;
    uint32_t r4_addc_left_4 = 0;
    uint32_t r4_addc_right_0 = 0;
    uint32_t r4_addc_right_1 = 0;
    uint32_t r4_addc_right_2 = 0;
    uint32_t r4_addc_right_3 = 0;
    uint32_t r4_adde_left_0 = 0;
    uint32_t r4_adde_left_1 = 0;
    uint32_t r4_adde_left_2 = 0;
    uint32_t r4_adde_left_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_10 = 0;
    uint32_t r4_ca_11 = 0;
    uint32_t r4_ca_12 = 0;
    uint32_t r4_ca_13 = 0;
    uint32_t r4_ca_14 = 0;
    uint32_t r4_ca_15 = 0;
    uint32_t r4_ca_16 = 0;
    uint32_t r4_ca_17 = 0;
    uint32_t r4_ca_18 = 0;
    uint32_t r4_ca_19 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_20 = 0;
    uint32_t r4_ca_21 = 0;
    uint32_t r4_ca_22 = 0;
    uint32_t r4_ca_23 = 0;
    uint32_t r4_ca_24 = 0;
    uint32_t r4_ca_25 = 0;
    uint32_t r4_ca_26 = 0;
    uint32_t r4_ca_27 = 0;
    uint32_t r4_ca_28 = 0;
    uint32_t r4_ca_29 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_30 = 0;
    uint32_t r4_ca_31 = 0;
    uint32_t r4_ca_32 = 0;
    uint32_t r4_ca_33 = 0;
    uint32_t r4_ca_34 = 0;
    uint32_t r4_ca_35 = 0;
    uint32_t r4_ca_36 = 0;
    uint32_t r4_ca_37 = 0;
    uint32_t r4_ca_38 = 0;
    uint32_t r4_ca_39 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r4_ca_40 = 0;
    uint32_t r4_ca_41 = 0;
    uint32_t r4_ca_42 = 0;
    uint32_t r4_ca_43 = 0;
    uint32_t r4_ca_44 = 0;
    uint32_t r4_ca_45 = 0;
    uint32_t r4_ca_46 = 0;
    uint32_t r4_ca_47 = 0;
    uint32_t r4_ca_48 = 0;
    uint32_t r4_ca_49 = 0;
    uint32_t r4_ca_5 = 0;
    uint32_t r4_ca_50 = 0;
    uint32_t r4_ca_51 = 0;
    uint32_t r4_ca_52 = 0;
    uint32_t r4_ca_53 = 0;
    uint32_t r4_ca_54 = 0;
    uint32_t r4_ca_55 = 0;
    uint32_t r4_ca_56 = 0;
    uint32_t r4_ca_57 = 0;
    uint32_t r4_ca_58 = 0;
    uint32_t r4_ca_59 = 0;
    uint32_t r4_ca_6 = 0;
    uint32_t r4_ca_60 = 0;
    uint32_t r4_ca_61 = 0;
    uint32_t r4_ca_62 = 0;
    uint32_t r4_ca_63 = 0;
    uint32_t r4_ca_64 = 0;
    uint32_t r4_ca_7 = 0;
    uint32_t r4_ca_8 = 0;
    uint32_t r4_ca_9 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_10 = 0;
    uint32_t r4_not_11 = 0;
    uint32_t r4_not_12 = 0;
    uint32_t r4_not_13 = 0;
    uint32_t r4_not_14 = 0;
    uint32_t r4_not_15 = 0;
    uint32_t r4_not_16 = 0;
    uint32_t r4_not_17 = 0;
    uint32_t r4_not_18 = 0;
    uint32_t r4_not_19 = 0;
    uint32_t r4_not_2 = 0;
    uint32_t r4_not_20 = 0;
    uint32_t r4_not_21 = 0;
    uint32_t r4_not_22 = 0;
    uint32_t r4_not_23 = 0;
    uint32_t r4_not_24 = 0;
    uint32_t r4_not_25 = 0;
    uint32_t r4_not_26 = 0;
    uint32_t r4_not_27 = 0;
    uint32_t r4_not_28 = 0;
    uint32_t r4_not_29 = 0;
    uint32_t r4_not_3 = 0;
    uint32_t r4_not_30 = 0;
    uint32_t r4_not_31 = 0;
    uint32_t r4_not_32 = 0;
    uint32_t r4_not_33 = 0;
    uint32_t r4_not_34 = 0;
    uint32_t r4_not_35 = 0;
    uint32_t r4_not_36 = 0;
    uint32_t r4_not_37 = 0;
    uint32_t r4_not_38 = 0;
    uint32_t r4_not_39 = 0;
    uint32_t r4_not_4 = 0;
    uint32_t r4_not_40 = 0;
    uint32_t r4_not_41 = 0;
    uint32_t r4_not_42 = 0;
    uint32_t r4_not_43 = 0;
    uint32_t r4_not_44 = 0;
    uint32_t r4_not_45 = 0;
    uint32_t r4_not_46 = 0;
    uint32_t r4_not_47 = 0;
    uint32_t r4_not_48 = 0;
    uint32_t r4_not_49 = 0;
    uint32_t r4_not_5 = 0;
    uint32_t r4_not_50 = 0;
    uint32_t r4_not_51 = 0;
    uint32_t r4_not_52 = 0;
    uint32_t r4_not_53 = 0;
    uint32_t r4_not_54 = 0;
    uint32_t r4_not_55 = 0;
    uint32_t r4_not_56 = 0;
    uint32_t r4_not_57 = 0;
    uint32_t r4_not_58 = 0;
    uint32_t r4_not_59 = 0;
    uint32_t r4_not_6 = 0;
    uint32_t r4_not_60 = 0;
    uint32_t r4_not_61 = 0;
    uint32_t r4_not_62 = 0;
    uint32_t r4_not_7 = 0;
    uint32_t r4_not_8 = 0;
    uint32_t r4_not_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
    uint32_t r4_subfc_min_4 = 0;
    uint32_t r4_subfc_min_5 = 0;
    uint32_t r4_subfc_min_6 = 0;
    uint32_t r5_addc_left_0 = 0;
    uint32_t r5_addc_left_1 = 0;
    uint32_t r5_addc_left_2 = 0;
    uint32_t r5_addc_left_3 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_ca_5 = 0;
    uint32_t r5_ca_6 = 0;
    uint32_t r5_ca_7 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_not_4 = 0;
    uint32_t r5_not_5 = 0;
    uint32_t r5_not_6 = 0;
    uint32_t r5_not_7 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_10 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_ca_5 = 0;
    uint32_t r6_ca_6 = 0;
    uint32_t r6_ca_7 = 0;
    uint32_t r6_ca_8 = 0;
    uint32_t r6_ca_9 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint32_t r6_not_5 = 0;
    uint32_t r6_not_6 = 0;
    uint32_t r6_not_7 = 0;
    uint32_t r7_adde_right_0 = 0;
    uint32_t r7_adde_right_1 = 0;
    uint32_t r7_adde_right_2 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r7_ca_4 = 0;
    uint32_t r8_addc_left_0 = 0;
    uint32_t r8_addc_left_1 = 0;
    uint32_t r8_addc_left_2 = 0;
    uint32_t r8_addc_left_3 = 0;
    uint32_t r8_addc_right_0 = 0;
    uint32_t r8_addc_right_1 = 0;
    uint32_t r8_addc_right_2 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F27B4;

loc_800F27B4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r0 = 69;
    r4 = (r6 ^ -2147483648);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r31);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r28);
    r8 = MemoryInline::FlatRead32((r3 + 20));
    r7 = (static_cast<int32_t>(r8) >> 31);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r8);
    r5 = (r7 ^ -2147483648);
    r0_subfc_sub_0 = r0;
    r0 = (r8 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r4_not_0 = ~(r4);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r5);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r7);
    r4_not_1 = ~(r5);
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r4_not_1 + r5);
    r4 = (r4 + r4_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2824;
    }
}

loc_800F2808:
{
    r4 = 139;
    r0 = (r6 ^ -2147483648);
    r4_subfc_min_1 = r4;
    r4 = (r4_subfc_min_1 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_1) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r4_not_2 = ~(r5);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_not_2 + r0);
    r4 = (r4 + r4_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_3 = ~(r0);
    r4_ca_3 = (xer >> 29) & 1u;
    r4 = (r4_not_3 + r0);
    r4 = (r4 + r4_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2830;
    }
}

loc_800F2824:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2830:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_800F2838:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_800F2844;
    }
}

loc_800F283C:
{
}

loc_800F2840:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(11))) {
        goto loc_800F2914;
    }
}

loc_800F2844:
{
    r4 = 715849728;
    r7 = MemoryInline::FlatRead32((r1 + 12));
    r6 = (r4 + -21845);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r4 = (r0 + r4);
    r0 = (static_cast<int32_t>(r4) >> 31);
    r4_addc_right_1 = r4;
    r4 = (r7 + r4_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_adde_right_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r5 + r0_adde_right_1);
    r0 = (r0 + r0_ca_1);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 12);
    r4 = (r5 - r0);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_800F28C0;
    }
}

loc_800F289C:
{
    r4 = (r4 + 12);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 16), r4);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r4_addc_left_1 = r4;
    r4 = (r4_addc_left_1 + r0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_adde_right_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r5 + r0_adde_right_2);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_800F28C0:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r6 = 0;
    r8 = MemoryInline::FlatRead32((r1 + 12));
    r0 = 69;
    r5 = (r4 ^ -2147483648);
    r4 = (r6 ^ -2147483648);
    r0_subfc_sub_1 = r0;
    r0 = (r8 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r4_not_4 = ~(r4);
    r4_ca_4 = (xer >> 29) & 1u;
    r4 = (r4_not_4 + r5);
    r4 = (r4 + r4_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_5 = ~(r5);
    r4_ca_5 = (xer >> 29) & 1u;
    r4 = (r4_not_5 + r5);
    r4 = (r4 + r4_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2908;
    }
}

loc_800F28EC:
{
    r4 = 139;
    r0 = (r6 ^ -2147483648);
    r4_subfc_min_2 = r4;
    r4 = (r4_subfc_min_2 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_2) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r4_not_6 = ~(r5);
    r4_ca_6 = (xer >> 29) & 1u;
    r4 = (r4_not_6 + r0);
    r4 = (r4 + r4_ca_6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_6)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_6)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_7 = ~(r0);
    r4_ca_7 = (xer >> 29) & 1u;
    r4 = (r4_not_7 + r0);
    r4 = (r4 + r4_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2914;
    }
}

loc_800F2908:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2914:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r8 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F291C:
{
    r4 = 0x80280000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -21216);
    r4_addr_1 = (r4 + r0);
    r5 = MemoryInline::FlatRead32(r4_addr_1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r5) >> 31);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F294C;
    }
}

loc_800F2934:
{
}

loc_800F2938:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_800F294C;
    }
}

loc_800F293C:
{
    r6 = 1;
    r0 = 0;
    r5_addc_left_1 = r5;
    r5 = (r5_addc_left_1 + r6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_adde_left_1 = r4;
    r4_ca_10 = (xer >> 29) & 1u;
    r4 = (r4_adde_left_1 + r0);
    r4 = (r4 + r4_ca_10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_10)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_800F294C:
{
    r8 = MemoryInline::FlatRead32((r1 + 12));
    r6 = -70;
    r9 = MemoryInline::FlatRead32((r1 + 8));
    r28 = -1;
    r31 = (r8 + r6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r12 = 365;
    r30_ca_1 = (xer >> 29) & 1u;
    r30 = (r9 + r28);
    r30 = (r30 + r30_ca_1);
    r0 = 0;
    r8_addc_left_1 = r8;
    r8 = (r8_addc_left_1 + r28);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r28)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = -17;
    r10_ca_1 = (xer >> 29) & 1u;
    r10 = (r9 + r28);
    r10 = (r10 + r10_ca_1);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(30));
    r8 = (r8_rot_1 & -1);
    r6 = (r0 ^ -2147483648);
    r9 = (static_cast<int32_t>(r10) >> 2);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(30));
    r8_mrot_1 = (r8_rot_2 & -1073741824);
    r8_mdest_1 = (r8 & 1073741823);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r8_addc_left_2 = r8;
    r8 = (r8_addc_left_2 + r7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7_ca_1 = (xer >> 29) & 1u;
    r7 = (r9 + r28);
    r7 = (r7 + r7_ca_1);
    r10 = (r31 * 365);
    r11 = (static_cast<uint32_t>((static_cast<uint64_t>(r31) * static_cast<uint64_t>(r12)) >> 32));
    r8_addc_right_1 = r8;
    r8 = (r10 + r8_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r10)) + static_cast<uint64_t>(static_cast<uint32_t>(r8_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r9 = (r30 * r12);
    r9 = (r11 + r9);
    r7_adde_right_1 = r7;
    r7_ca_2 = (xer >> 29) & 1u;
    r7 = (r9 + r7_adde_right_1);
    r7 = (r7 + r7_ca_2);
    r10 = (r8 + r5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r9_ca_1 = (xer >> 29) & 1u;
    r9 = (r7 + r4);
    r9 = (r9 + r9_ca_1);
    r11 = (static_cast<int32_t>(r3) >> 31);
    r5 = (static_cast<int32_t>(r3) >> 31);
    r4 = (r9 ^ -2147483648);
    r8 = (r10 + r3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r10)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7_ca_3 = (xer >> 29) & 1u;
    r7 = (r9 + r5);
    r7 = (r7 + r7_ca_3);
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    r5 = (r10 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r10) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r6_not_1 = ~(r6);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r4);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r6_not_2 = ~(r4);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r4);
    r6 = (r6 + r6_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800F2A1C;
    }
}

loc_800F29E4:
{
    r4 = (r11 ^ -2147483648);
    r6 = (r0 ^ -2147483648);
    r5 = (r3 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r6_not_3 = ~(r6);
    r6_ca_3 = (xer >> 29) & 1u;
    r6 = (r6_not_3 + r4);
    r6 = (r6 + r6_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_4 = ~(r4);
    r6_ca_4 = (xer >> 29) & 1u;
    r6 = (r6_not_4 + r4);
    r6 = (r6 + r6_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800F2A1C;
    }
}

loc_800F2A00:
{
    r5 = (r0 ^ -2147483648);
    r4 = (r7 ^ -2147483648);
    r0_subfc_sub_3 = r0;
    r0 = (r8 - r0_subfc_sub_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0_subfc_sub_3) ? 1u : 0u) << 29);
    r5_not_1 = ~(r5);
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_not_1 + r4);
    r5 = (r5 + r5_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_2 = ~(r4);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r4);
    r5 = (r5 + r5_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2A7C;
    }
}

loc_800F2A1C:
{
    r6 = 0;
    r0 = (r9 ^ -2147483648);
    r5 = (r6 ^ -2147483648);
    r4 = (r10 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r10) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5_not_4 = ~(r5);
    r5_ca_4 = (xer >> 29) & 1u;
    r5 = (r5_not_4 + r0);
    r5 = (r5 + r5_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_5 = ~(r0);
    r5_ca_5 = (xer >> 29) & 1u;
    r5 = (r5_not_5 + r0);
    r5 = (r5 + r5_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800F2A88;
    }
}

loc_800F2A3C:
{
    r0 = (r11 ^ -2147483648);
    r4 = (r6 ^ -2147483648);
    r3_subfc_min_1 = r3;
    r3 = (r3_subfc_min_1 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3_subfc_min_1) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r4_not_10 = ~(r4);
    r4_ca_12 = (xer >> 29) & 1u;
    r4 = (r4_not_10 + r0);
    r4 = (r4 + r4_ca_12);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_10)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_12)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_11 = ~(r0);
    r4_ca_13 = (xer >> 29) & 1u;
    r4 = (r4_not_11 + r0);
    r4 = (r4 + r4_ca_13);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_11)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_13)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F2A88;
    }
}

loc_800F2A58:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r6 ^ -2147483648);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 ^ -2147483648);
    r3_subfc_min_2 = r3;
    r3 = (r3_subfc_min_2 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3_subfc_min_2) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r4_not_12 = ~(r4);
    r4_ca_14 = (xer >> 29) & 1u;
    r4 = (r4_not_12 + r0);
    r4 = (r4 + r4_ca_14);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_12)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_14)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_13 = ~(r0);
    r4_ca_15 = (xer >> 29) & 1u;
    r4 = (r4_not_13 + r0);
    r4 = (r4 + r4_ca_15);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_13)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_15)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2A88;
    }
}

loc_800F2A7C:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2A88:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 24;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r4)) >> 32));
    r0 = (r6 | r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (r5 * r4);
    r31 = (r6 * 24);
    r30 = (r3 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2ACC;
    }
}

loc_800F2AAC:
{
    r3 = r30;
    r4 = r31;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r4 ^ 24);
    r0 = (r4 | r3);
    r4 = (r0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r4);
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_800F2AD0;
}

loc_800F2ACC:
{
    r0 = 0;
}

loc_800F2AD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F2AD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2AE4;
    }
}

loc_800F2AD8:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2AE4:
{
    r9 = MemoryInline::FlatRead32((r29 + 8));
    r5 = 0;
    r0 = (r30 ^ -2147483648);
    r8 = (static_cast<int32_t>(r9) >> 31);
    r4 = (r5 ^ -2147483648);
    r3 = (static_cast<int32_t>(r9) >> 31);
    r7 = (r31 + r9);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r31)) + static_cast<uint64_t>(static_cast<uint32_t>(r9)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_ca_6 = (xer >> 29) & 1u;
    r6 = (r30 + r3);
    r6 = (r6 + r6_ca_6);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r3 = (r31 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_15 = ~(r4);
    r4_ca_17 = (xer >> 29) & 1u;
    r4 = (r4_not_15 + r0);
    r4 = (r4 + r4_ca_17);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_15)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_17)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r4_not_16 = ~(r0);
    r4_ca_18 = (xer >> 29) & 1u;
    r4 = (r4_not_16 + r0);
    r4 = (r4 + r4_ca_18);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_16)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_18)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800F2B58;
    }
}

loc_800F2B20:
{
    r0 = (r8 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r9 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_17 = ~(r4);
    r4_ca_19 = (xer >> 29) & 1u;
    r4 = (r4_not_17 + r0);
    r4 = (r4 + r4_ca_19);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_17)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_19)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_18 = ~(r0);
    r4_ca_20 = (xer >> 29) & 1u;
    r4 = (r4_not_18 + r0);
    r4 = (r4 + r4_ca_20);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_18)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_20)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800F2B58;
    }
}

loc_800F2B3C:
{
    r0 = (r6 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r7 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_19 = ~(r4);
    r4_ca_21 = (xer >> 29) & 1u;
    r4 = (r4_not_19 + r0);
    r4 = (r4 + r4_ca_21);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_19)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_21)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_20 = ~(r0);
    r4_ca_22 = (xer >> 29) & 1u;
    r4 = (r4_not_20 + r0);
    r4 = (r4 + r4_ca_22);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_20)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_22)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2BB8;
    }
}

loc_800F2B58:
{
    r5 = 0;
    r0 = (r30 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r31 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_22 = ~(r4);
    r4_ca_24 = (xer >> 29) & 1u;
    r4 = (r4_not_22 + r0);
    r4 = (r4 + r4_ca_24);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_22)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_24)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_23 = ~(r0);
    r4_ca_25 = (xer >> 29) & 1u;
    r4 = (r4_not_23 + r0);
    r4 = (r4 + r4_ca_25);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_23)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_25)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F2BC4;
    }
}

loc_800F2B78:
{
    r0 = (r8 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r9 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_24 = ~(r4);
    r4_ca_26 = (xer >> 29) & 1u;
    r4 = (r4_not_24 + r0);
    r4 = (r4 + r4_ca_26);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_24)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_26)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_25 = ~(r0);
    r4_ca_27 = (xer >> 29) & 1u;
    r4 = (r4_not_25 + r0);
    r4 = (r4 + r4_ca_27);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_25)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_27)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F2BC4;
    }
}

loc_800F2B94:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r5 ^ -2147483648);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 ^ -2147483648);
    r3_subfc_min_4 = r3;
    r3 = (r3_subfc_min_4 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3_subfc_min_4) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_26 = ~(r4);
    r4_ca_28 = (xer >> 29) & 1u;
    r4 = (r4_not_26 + r0);
    r4 = (r4 + r4_ca_28);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_26)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_28)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_27 = ~(r0);
    r4_ca_29 = (xer >> 29) & 1u;
    r4 = (r4_not_27 + r0);
    r4 = (r4 + r4_ca_29);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_27)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_29)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2BC4;
    }
}

loc_800F2BB8:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2BC4:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 60;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r4)) >> 32));
    r0 = (r6 | r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (r5 * r4);
    r31 = (r6 * 60);
    r30 = (r3 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2C08;
    }
}

loc_800F2BE8:
{
    r3 = r30;
    r4 = r31;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r4 ^ 60);
    r0 = (r4 | r3);
    r4 = (r0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_subfe_rb_3 = r0;
    r0_not_3 = ~(r4);
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r0_subfe_rb_3);
    r0 = (r0 + r0_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_800F2C0C;
}

loc_800F2C08:
{
    r0 = 0;
}

loc_800F2C0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F2C10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2C20;
    }
}

loc_800F2C14:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2C20:
{
    r9 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 0;
    r0 = (r30 ^ -2147483648);
    r8 = (static_cast<int32_t>(r9) >> 31);
    r4 = (r5 ^ -2147483648);
    r3 = (static_cast<int32_t>(r9) >> 31);
    r7 = (r31 + r9);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r31)) + static_cast<uint64_t>(static_cast<uint32_t>(r9)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_ca_7 = (xer >> 29) & 1u;
    r6 = (r30 + r3);
    r6 = (r6 + r6_ca_7);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r3 = (r31 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_29 = ~(r4);
    r4_ca_31 = (xer >> 29) & 1u;
    r4 = (r4_not_29 + r0);
    r4 = (r4 + r4_ca_31);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_29)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_31)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r4_not_30 = ~(r0);
    r4_ca_32 = (xer >> 29) & 1u;
    r4 = (r4_not_30 + r0);
    r4 = (r4 + r4_ca_32);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_30)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_32)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800F2C94;
    }
}

loc_800F2C5C:
{
    r0 = (r8 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r9 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_31 = ~(r4);
    r4_ca_33 = (xer >> 29) & 1u;
    r4 = (r4_not_31 + r0);
    r4 = (r4 + r4_ca_33);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_31)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_33)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_32 = ~(r0);
    r4_ca_34 = (xer >> 29) & 1u;
    r4 = (r4_not_32 + r0);
    r4 = (r4 + r4_ca_34);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_32)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_34)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800F2C94;
    }
}

loc_800F2C78:
{
    r0 = (r6 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r7 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_33 = ~(r4);
    r4_ca_35 = (xer >> 29) & 1u;
    r4 = (r4_not_33 + r0);
    r4 = (r4 + r4_ca_35);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_33)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_35)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_34 = ~(r0);
    r4_ca_36 = (xer >> 29) & 1u;
    r4 = (r4_not_34 + r0);
    r4 = (r4 + r4_ca_36);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_34)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_36)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2CF4;
    }
}

loc_800F2C94:
{
    r5 = 0;
    r0 = (r30 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r31 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_36 = ~(r4);
    r4_ca_38 = (xer >> 29) & 1u;
    r4 = (r4_not_36 + r0);
    r4 = (r4 + r4_ca_38);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_36)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_38)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_37 = ~(r0);
    r4_ca_39 = (xer >> 29) & 1u;
    r4 = (r4_not_37 + r0);
    r4 = (r4 + r4_ca_39);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_37)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_39)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F2D00;
    }
}

loc_800F2CB4:
{
    r0 = (r8 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r9 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_38 = ~(r4);
    r4_ca_40 = (xer >> 29) & 1u;
    r4 = (r4_not_38 + r0);
    r4 = (r4 + r4_ca_40);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_38)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_40)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_39 = ~(r0);
    r4_ca_41 = (xer >> 29) & 1u;
    r4 = (r4_not_39 + r0);
    r4 = (r4 + r4_ca_41);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_39)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_41)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F2D00;
    }
}

loc_800F2CD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r5 ^ -2147483648);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 ^ -2147483648);
    r3_subfc_min_6 = r3;
    r3 = (r3_subfc_min_6 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3_subfc_min_6) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_40 = ~(r4);
    r4_ca_42 = (xer >> 29) & 1u;
    r4 = (r4_not_40 + r0);
    r4 = (r4 + r4_ca_42);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_40)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_42)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_41 = ~(r0);
    r4_ca_43 = (xer >> 29) & 1u;
    r4 = (r4_not_41 + r0);
    r4 = (r4 + r4_ca_43);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_41)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_43)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2D00;
    }
}

loc_800F2CF4:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2D00:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 60;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r4)) >> 32));
    r0 = (r6 | r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (r5 * r4);
    r30 = (r6 * 60);
    r31 = (r3 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2D44;
    }
}

loc_800F2D24:
{
    r3 = r31;
    r4 = r30;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r4 ^ 60);
    r0 = (r4 | r3);
    r4 = (r0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_subfe_rb_5 = r0;
    r0_not_5 = ~(r4);
    r0_ca_9 = (xer >> 29) & 1u;
    r0 = (r0_not_5 + r0_subfe_rb_5);
    r0 = (r0 + r0_ca_9);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_9)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_800F2D48;
}

loc_800F2D44:
{
    r0 = 0;
}

loc_800F2D48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F2D4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2D5C;
    }
}

loc_800F2D50:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2D5C:
{
    r9 = MemoryInline::FlatRead32(r29);
    r5 = 0;
    r0 = (r31 ^ -2147483648);
    r8 = (static_cast<int32_t>(r9) >> 31);
    r4 = (r5 ^ -2147483648);
    r3 = (static_cast<int32_t>(r9) >> 31);
    r7 = (r30 + r9);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(r9)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_ca_8 = (xer >> 29) & 1u;
    r6 = (r31 + r3);
    r6 = (r6 + r6_ca_8);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r3 = (r30 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_43 = ~(r4);
    r4_ca_45 = (xer >> 29) & 1u;
    r4 = (r4_not_43 + r0);
    r4 = (r4 + r4_ca_45);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_43)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_45)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r4_not_44 = ~(r0);
    r4_ca_46 = (xer >> 29) & 1u;
    r4 = (r4_not_44 + r0);
    r4 = (r4 + r4_ca_46);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_44)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_46)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800F2DD0;
    }
}

loc_800F2D98:
{
    r0 = (r8 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r9 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_45 = ~(r4);
    r4_ca_47 = (xer >> 29) & 1u;
    r4 = (r4_not_45 + r0);
    r4 = (r4 + r4_ca_47);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_45)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_47)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_46 = ~(r0);
    r4_ca_48 = (xer >> 29) & 1u;
    r4 = (r4_not_46 + r0);
    r4 = (r4 + r4_ca_48);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_46)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_48)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800F2DD0;
    }
}

loc_800F2DB4:
{
    r0 = (r6 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r7 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_47 = ~(r4);
    r4_ca_49 = (xer >> 29) & 1u;
    r4 = (r4_not_47 + r0);
    r4 = (r4 + r4_ca_49);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_47)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_49)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_48 = ~(r0);
    r4_ca_50 = (xer >> 29) & 1u;
    r4 = (r4_not_48 + r0);
    r4 = (r4 + r4_ca_50);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_48)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_50)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2E30;
    }
}

loc_800F2DD0:
{
    r5 = 0;
    r0 = (r31 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r30 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_50 = ~(r4);
    r4_ca_52 = (xer >> 29) & 1u;
    r4 = (r4_not_50 + r0);
    r4 = (r4 + r4_ca_52);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_50)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_52)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_51 = ~(r0);
    r4_ca_53 = (xer >> 29) & 1u;
    r4 = (r4_not_51 + r0);
    r4 = (r4 + r4_ca_53);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_51)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_53)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2E3C;
    }
}

loc_800F2DF0:
{
    r0 = (r8 ^ -2147483648);
    r4 = (r5 ^ -2147483648);
    r3 = (r9 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_52 = ~(r4);
    r4_ca_54 = (xer >> 29) & 1u;
    r4 = (r4_not_52 + r0);
    r4 = (r4 + r4_ca_54);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_52)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_54)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_53 = ~(r0);
    r4_ca_55 = (xer >> 29) & 1u;
    r4 = (r4_not_53 + r0);
    r4 = (r4 + r4_ca_55);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_53)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_55)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2E3C;
    }
}

loc_800F2E0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r5 ^ -2147483648);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 ^ -2147483648);
    r3_subfc_min_8 = r3;
    r3 = (r3_subfc_min_8 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3_subfc_min_8) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_54 = ~(r4);
    r4_ca_56 = (xer >> 29) & 1u;
    r4 = (r4_not_54 + r0);
    r4 = (r4 + r4_ca_56);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_54)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_56)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_55 = ~(r0);
    r4_ca_57 = (xer >> 29) & 1u;
    r4 = (r4_not_55 + r0);
    r4 = (r4 + r4_ca_57);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_55)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_57)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2E3C;
    }
}

loc_800F2E30:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2E3C:
{
    r3 = (r1 + 8);
    ctx->lr = 0x800F2E44u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F254Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F2E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F2E58;
    }
}

loc_800F2E4C:
{
    r4 = -1;
    r3 = -1;
    goto loc_800F2EA8;
}

loc_800F2E58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
        }
    }
    guest_range_2 = MemoryInline::ResolveRangeHost(r29, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r29, r4);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r29 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r29 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r29 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r29 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r29 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r29 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r29 + 28), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r29 + 32), r0);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
}

loc_800F2EA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC001FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F27B4 func_800F27B4 preserves=true fpr_mask=0x00000000
