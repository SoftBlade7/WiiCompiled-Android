#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D96E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r0_mdest_19 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_20 = 0;
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
    uint32_t r0_mrot_19 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_20 = 0;
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
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
    uint32_t r0_rot_58 = 0;
    uint32_t r0_rot_59 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_60 = 0;
    uint32_t r0_rot_61 = 0;
    uint32_t r0_rot_62 = 0;
    uint32_t r0_rot_63 = 0;
    uint32_t r0_rot_64 = 0;
    uint32_t r0_rot_65 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mdest_7 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_mrot_7 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r3_subfe_rb_4 = 0;
    uint32_t r3_subfe_rb_5 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mdest_6 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_mrot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
    uint32_t r4_subfc_min_4 = 0;
    uint32_t r4_subfc_min_5 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_10 = 0;
    uint32_t r6_mdest_11 = 0;
    uint32_t r6_mdest_12 = 0;
    uint32_t r6_mdest_13 = 0;
    uint32_t r6_mdest_14 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mdest_5 = 0;
    uint32_t r6_mdest_6 = 0;
    uint32_t r6_mdest_7 = 0;
    uint32_t r6_mdest_8 = 0;
    uint32_t r6_mdest_9 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_10 = 0;
    uint32_t r6_mrot_11 = 0;
    uint32_t r6_mrot_12 = 0;
    uint32_t r6_mrot_13 = 0;
    uint32_t r6_mrot_14 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_mrot_5 = 0;
    uint32_t r6_mrot_6 = 0;
    uint32_t r6_mrot_7 = 0;
    uint32_t r6_mrot_8 = 0;
    uint32_t r6_mrot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_17 = 0;
    uint32_t r6_rot_18 = 0;
    uint32_t r6_rot_19 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_20 = 0;
    uint32_t r6_rot_21 = 0;
    uint32_t r6_rot_22 = 0;
    uint32_t r6_rot_23 = 0;
    uint32_t r6_rot_24 = 0;
    uint32_t r6_rot_25 = 0;
    uint32_t r6_rot_26 = 0;
    uint32_t r6_rot_27 = 0;
    uint32_t r6_rot_28 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800D96E8;

loc_800D96E8:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 132u, (r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 104u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_4, 108u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 112u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_4, 116u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 120u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_4, 124u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r29 = 0x80270000u;
    r27 = r3;
    r28 = r4;
    r26 = r5;
    r29 = (r29 + 28752);
    r6 = r27;
    r4 = (r29 + 2668);
    r5 = (r28 + -1);
    r3 = 128;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D9728u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_800D972C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D9A1C;
    }
}

loc_800D9730:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D9740;
    }
}

loc_800D9734:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_800D9738:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D974C;
    }
}

loc_800D973C:
{
    goto loc_800DA6A0;
}

loc_800D9740:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_800D9744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800DA6A0;
    }
}

loc_800D9748:
{
    goto loc_800D9C4C;
}

loc_800D974C:
{
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r5 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800D9758:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DA6A0;
    }
}

loc_800D975C:
{
    r4 = MemoryInline::FlatRead32(r26);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -16777216);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_1 = (r3_rot_2 & 255);
    r3_mdest_1 = (r3 & -256);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_2 & 65280);
    r0_mdest_1 = (r0 & -65281);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800D977C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D97B8;
    }
}

loc_800D9780:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 1920), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 1640), r0);
    r5 = MemoryInline::FlatRead32((r26 + 4));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 16711680);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -16777216);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_1 = (r4_rot_2 & 255);
    r4_mdest_1 = (r4 & -256);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_5 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0 = (r4 | r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & -1);
    MemoryInline::FlatWrite32((r3 + 2224), r0);
    goto loc_800D9910;
}

loc_800D97B8:
{
    r3 = (r1 + 56);
    r4 = 0;
    r5 = 48;
    ctx->lr = 0x800D97C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r26 + 4));
    r3 = (r1 + 96);
    r4 = (r26 + 24);
    r5 = 4;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & 16711680);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & -16777216);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_1 = (r6_rot_2 & 255);
    r6_mdest_1 = (r6 & -256);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_8 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0 = (r6 | r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 255);
    MemoryInline::FlatWriteRam8((r1 + 78), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead32((r26 + 4));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_3 & 16711680);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_10 & -16777216);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_4 & 255);
    r6_mdest_2 = (r6 & -256);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_11 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0 = (r6 | r0);
    MemoryInline::FlatWriteRam8((r1 + 79), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead32((r26 + 8));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_5 & 16711680);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & -16777216);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_3 = (r6_rot_6 & 255);
    r6_mdest_3 = (r6 & -256);
    r6 = (r6_mdest_3 | r6_mrot_3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_5 = (r0_rot_13 & 65280);
    r0_mdest_5 = (r0 & -65281);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r0 = (r6 | r0);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & -1);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r0 = MemoryInline::FlatRead32((r26 + 12));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r0 = MemoryInline::FlatRead32((r26 + 16));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r7 = MemoryInline::FlatRead32((r26 + 20));
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_7 & 16711680);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_15 & -16777216);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_4 = (r6_rot_8 & 255);
    r6_mdest_4 = (r6 & -256);
    r6 = (r6_mdest_4 | r6_mrot_4);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_6 = (r0_rot_16 & 65280);
    r0_mdest_6 = (r0 & -65281);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r0 = (r6 | r0);
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r26 + 20));
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_9 & 16711680);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_17 & -16777216);
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_5 = (r6_rot_10 & 255);
    r6_mdest_5 = (r6 & -256);
    r6 = (r6_mdest_5 | r6_mrot_5);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_7 = (r0_rot_18 & 65280);
    r0_mdest_7 = (r0 & -65281);
    r0 = (r0_mdest_7 | r0_mrot_7);
    r0 = (r6 | r0);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_19 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 60));
        }
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 1640), 0, 588u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 1640), r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 1644), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 64));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 1648), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 1652), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 72));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 76));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 1656), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 1660), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 80));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 84));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 1664), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 1668), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 88));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 1672), r3);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r5 + 1676), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 96));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 100));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r5 + 1680), r3);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r5 + 1684), r0);
    }
    r4 = MemoryInline::FlatRead32((r26 + 28));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_3 & 16711680);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_20 & -16777216);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_2 = (r3_rot_4 & 255);
    r3_mdest_2 = (r3 & -256);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_8 = (r0_rot_21 & 65280);
    r0_mdest_8 = (r0 & -65281);
    r0 = (r0_mdest_8 | r0_mrot_8);
    r0 = (r3 | r0);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_22 & -1);
    MemoryInline::WriteResolved32(guest_range_0, 584u, (r5 + 2224), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 56));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 1920), r0);
}

loc_800D9910:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r4 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800D991C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D992C;
    }
}

loc_800D9920:
{
    r3 = 65536;
    r6 = (r3 + 24464);
    goto loc_800D9930;
}

loc_800D992C:
{
    r6 = (r0 * 10000);
}

loc_800D9930:
{
    MemoryInline::FlatWrite32((r4 + 1908), r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r6) >> 31);
    r3 = 128;
    MemoryInline::FlatWrite32((r4 + 1904), r5);
    r4 = (r29 + 2708);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D994Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1830), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r28 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(7));
}

loc_800D9964:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D9A00;
    }
}

loc_800D9968:
{
    r30 = MemoryInline::FlatRead32((r13 + -26864));
    r31 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r26 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_1 = r4;
    r4 = (r4_subfc_min_1 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_1) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r26 + 19923);
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r30);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_24 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_12 & 67108863);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r26 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 28));
    r9 = (r5 + -31457);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_1);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & 1);
    r3 = 1;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r29 + 280);
    r0 = (r7 + 50);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D9A00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800D9A00:
{
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 7;
    r3 = r27;
    r4 = 2;
    MemoryInline::FlatWrite32((r5 + 1820), r0);
    ctx->lr = 0x800D9A18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E1590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800DA6A0;
}

loc_800D9A1C:
{
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r6 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(17));
}

loc_800D9A28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D9C3C;
    }
}

loc_800D9A2C:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r6 + 1872));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
    r4 = MemoryInline::FlatRead8(r26);
    r5 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r6 + 1872), r0);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4_mrot_5 = (r4_rot_7 & 65280);
    r4_mdest_5 = (r4 & -65281);
    r4 = (r4_mdest_5 | r4_mrot_5);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead16((r3 + 1834));
}

loc_800D9A58:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_800D9A60;
    }
}

loc_800D9A5C:
{
    MemoryInline::FlatWrite16((r3 + 1834), static_cast<uint16_t>(r4));
}

loc_800D9A60:
{
    r26 = MemoryInline::FlatRead32((r13 + -26868));
    r6 = 0;
    r5 = 1;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r26 + 48));
    r7 = (r26 + 104);
    r0 = (r3 + -1);
    ctr = r0;
}

loc_800D9A84:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_800D9AB8;
    }
}

loc_800D9A88:
{
    r0 = MemoryInline::FlatRead32((r26 + 48));
}

loc_800D9A90:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_800D9A9C;
    }
}

loc_800D9A94:
{
    r3 = r7;
    goto loc_800D9AA0;
}

loc_800D9A9C:
{
    r3 = 0;
}

loc_800D9AA0:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
    r7 = (r7 + 48);
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r6 = (r6 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D9A88;
    }
}

loc_800D9AB8:
{
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 1;
    r3 = MemoryInline::FlatRead8((r5 + 1614));
    r0 = MemoryInline::FlatRead32((r5 + 1872));
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r6 = (r6 | r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_800D9AD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DA6A0;
    }
}

loc_800D9AD8:
{
    r3 = -2;
    ctx->lr = 0x800D9AE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CDED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 2224), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800D9AF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D9B0C;
    }
}

loc_800D9AF8:
{
    r4 = (r29 + 2728);
    r3 = 128;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D9B08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800DA6A0;
}

loc_800D9B0C:
{
    r26 = 1;
    r27 = 48;
    goto loc_800D9B44;
}

loc_800D9B18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_800D9B1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D9B2C;
    }
}

loc_800D9B20:
{
    r3 = (r3 + r27);
    r3 = (r3 + 56);
    goto loc_800D9B30;
}

loc_800D9B2C:
{
    r3 = 0;
}

loc_800D9B30:
{
    r3 = MemoryInline::FlatRead8((r3 + 22));
    r4 = 3;
    ctx->lr = 0x800D9B3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E1590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = (r27 + 48);
    r26 = (r26 + 1);
}

loc_800D9B44:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_800D9B50:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_800D9B18;
    }
}

loc_800D9B54:
{
    r0 = MemoryInline::FlatRead32((r3 + 1592));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D9B5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D9B6C;
    }
}

loc_800D9B60:
{
    r3 = MemoryInline::FlatRead8((r3 + 1614));
    r4 = 3;
    ctx->lr = 0x800D9B6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E1590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800D9B6C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r27 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(18));
}

loc_800D9B78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D9C14;
    }
}

loc_800D9B7C:
{
    r28 = MemoryInline::FlatRead32((r13 + -26864));
    r30 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r26 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_3 = r4;
    r4 = (r4_subfc_min_3 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_3) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r26 + 19923);
    r3_subfe_rb_3 = r3;
    r3_not_3 = ~(r28);
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r3_subfe_rb_3);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_61 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_61 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_26 & 67108863);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r26 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_62 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_62 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 72));
    r9 = (r5 + -31457);
    r3_addr_3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_3);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_63 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_63 & 1);
    r3 = 1;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r29 + 280);
    r0 = (r7 + 50);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D9C14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800D9C14:
{
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 18;
    r4 = (r29 + 2776);
    r3 = 128;
    MemoryInline::FlatWrite32((r5 + 1820), r0);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = MemoryInline::FlatRead16((r5 + 1834));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D9C38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800DA6A0;
}

loc_800D9C3C:
{
    r3 = r27;
    r4 = 3;
    ctx->lr = 0x800D9C48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E1590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800DA6A0;
}

loc_800D9C4C:
{
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r5 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_800D9C58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DA6A0;
    }
}

loc_800D9C5C:
{
    r4 = MemoryInline::FlatRead32(r26);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_6 & 16711680);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_28 & -16777216);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_4 = (r3_rot_7 & 255);
    r3_mdest_4 = (r3 & -256);
    r3 = (r3_mdest_4 | r3_mrot_4);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_10 = (r0_rot_29 & 65280);
    r0_mdest_10 = (r0 & -65281);
    r0 = (r0_mdest_10 | r0_mrot_10);
    r0 = (r3 | r0);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r27 = (r27_rot_1 & -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_800D9C78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DA678;
    }
}

loc_800D9C7C:
{
    r29 = (r27 + -1);
    r28 = 0;
    r31 = 0x80000000u;
    goto loc_800DA1C8;
}

loc_800D9C8C:
{
    r0 = (r29 - r28);
    r3 = (r1 + 8);
    r0 = (r0 * 6);
    r4 = 0;
    r5 = 48;
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r30 = (r26 + r0);
    ctx->lr = 0x800D9CACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r1 + 48);
    r4 = (r30 + 24);
    r5 = 4;
    r6_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_15 & 16711680);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_32 & -16777216);
    r6_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_8 = (r6_rot_16 & 255);
    r6_mdest_8 = (r6 & -256);
    r6 = (r6_mdest_8 | r6_mrot_8);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_12 = (r0_rot_33 & 65280);
    r0_mdest_12 = (r0 & -65281);
    r0 = (r0_mdest_12 | r0_mrot_12);
    r0 = (r6 | r0);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_34 & 255);
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead32((r30 + 4));
    r6_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_17 & 16711680);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_35 & -16777216);
    r6_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_9 = (r6_rot_18 & 255);
    r6_mdest_9 = (r6 & -256);
    r6 = (r6_mdest_9 | r6_mrot_9);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_13 = (r0_rot_36 & 65280);
    r0_mdest_13 = (r0 & -65281);
    r0 = (r0_mdest_13 | r0_mrot_13);
    r0 = (r6 | r0);
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead32((r30 + 8));
    r6_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_19 & 16711680);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_37 & -16777216);
    r6_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_10 = (r6_rot_20 & 255);
    r6_mdest_10 = (r6 & -256);
    r6 = (r6_mdest_10 | r6_mrot_10);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_14 = (r0_rot_38 & 65280);
    r0_mdest_14 = (r0 & -65281);
    r0 = (r0_mdest_14 | r0_mrot_14);
    r0 = (r6 | r0);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_39 & -1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r30 + 16));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r7 = MemoryInline::FlatRead32((r30 + 20));
    r6_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_21 & 16711680);
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_40 & -16777216);
    r6_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_11 = (r6_rot_22 & 255);
    r6_mdest_11 = (r6 & -256);
    r6 = (r6_mdest_11 | r6_mrot_11);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_15 = (r0_rot_41 & 65280);
    r0_mdest_15 = (r0 & -65281);
    r0 = (r0_mdest_15 | r0_mrot_15);
    r0 = (r6 | r0);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r30 + 20));
    r6_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_23 & 16711680);
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_42 & -16777216);
    r6_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6_mrot_12 = (r6_rot_24 & 255);
    r6_mdest_12 = (r6 & -256);
    r6 = (r6_mdest_12 | r6_mrot_12);
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_16 = (r0_rot_43 & 65280);
    r0_mdest_16 = (r0 & -65281);
    r0 = (r0_mdest_16 | r0_mrot_16);
    r0 = (r6 | r0);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_44 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = MemoryInline::FlatRead32((r3 + 48));
}

loc_800D9D70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(32))) {
        goto loc_800DA1C4;
    }
}

loc_800D9D74:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800D9D78:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800DA154;
    }
}

loc_800D9D7C:
{
}

loc_800D9D80:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800DA0D0;
    }
}

loc_800D9D84:
{
    r3 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800D9D9C;
    }
}

loc_800D9D8C:
{
    r0 = (r31 + 1);
}

loc_800D9D94:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800D9D9C;
    }
}

loc_800D9D98:
{
    r3 = 1;
}

loc_800D9D9C:
{
}

loc_800D9DA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DA0D0;
    }
}

loc_800D9DA4:
{
    r3 = (r4 * 48);
    r0 = (r4 + -1);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_45 & 536870911);
    r3 = (r5 + r3);
    ctr = r0;
}

loc_800D9DC0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800DA0D0;
    }
}

loc_800D9DC4:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r3 + 56), r5);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32((r3 + 64), r5);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite32((r3 + 72), r5);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r3 + 80), r5);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    MemoryInline::FlatWrite32((r3 + 88), r5);
    MemoryInline::FlatWrite32((r3 + 92), r0);
    r5 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32((r3 + 96), r5);
    MemoryInline::FlatWrite32((r3 + 100), r0);
    r5 = MemoryInline::FlatRead32((r3 + -40));
    r0 = MemoryInline::FlatRead32((r3 + -36));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = MemoryInline::FlatRead32((r3 + -32));
    r0 = MemoryInline::FlatRead32((r3 + -28));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r5 = MemoryInline::FlatRead32((r3 + -24));
    r0 = MemoryInline::FlatRead32((r3 + -20));
    MemoryInline::FlatWrite32((r3 + 24), r5);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r5 = MemoryInline::FlatRead32((r3 + -16));
    r0 = MemoryInline::FlatRead32((r3 + -12));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r5 = MemoryInline::FlatRead32((r3 + -8));
    r0 = MemoryInline::FlatRead32((r3 + -4));
    MemoryInline::FlatWrite32((r3 + 40), r5);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r5);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r5 = MemoryInline::FlatRead32((r3 + -88));
    r0 = MemoryInline::FlatRead32((r3 + -84));
    MemoryInline::FlatWrite32((r3 + -40), r5);
    MemoryInline::FlatWrite32((r3 + -36), r0);
    r5 = MemoryInline::FlatRead32((r3 + -80));
    r0 = MemoryInline::FlatRead32((r3 + -76));
    MemoryInline::FlatWrite32((r3 + -32), r5);
    MemoryInline::FlatWrite32((r3 + -28), r0);
    r5 = MemoryInline::FlatRead32((r3 + -72));
    r0 = MemoryInline::FlatRead32((r3 + -68));
    MemoryInline::FlatWrite32((r3 + -24), r5);
    MemoryInline::FlatWrite32((r3 + -20), r0);
    r5 = MemoryInline::FlatRead32((r3 + -64));
    r0 = MemoryInline::FlatRead32((r3 + -60));
    MemoryInline::FlatWrite32((r3 + -16), r5);
    MemoryInline::FlatWrite32((r3 + -12), r0);
    r5 = MemoryInline::FlatRead32((r3 + -56));
    r0 = MemoryInline::FlatRead32((r3 + -52));
    MemoryInline::FlatWrite32((r3 + -8), r5);
    MemoryInline::FlatWrite32((r3 + -4), r0);
    r5 = MemoryInline::FlatRead32((r3 + -48));
    r0 = MemoryInline::FlatRead32((r3 + -44));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + -136));
    r0 = MemoryInline::FlatRead32((r3 + -132));
    MemoryInline::FlatWrite32((r3 + -88), r5);
    MemoryInline::FlatWrite32((r3 + -84), r0);
    r5 = MemoryInline::FlatRead32((r3 + -128));
    r0 = MemoryInline::FlatRead32((r3 + -124));
    MemoryInline::FlatWrite32((r3 + -80), r5);
    MemoryInline::FlatWrite32((r3 + -76), r0);
    r5 = MemoryInline::FlatRead32((r3 + -120));
    r0 = MemoryInline::FlatRead32((r3 + -116));
    MemoryInline::FlatWrite32((r3 + -72), r5);
    MemoryInline::FlatWrite32((r3 + -68), r0);
    r5 = MemoryInline::FlatRead32((r3 + -112));
    r0 = MemoryInline::FlatRead32((r3 + -108));
    MemoryInline::FlatWrite32((r3 + -64), r5);
    MemoryInline::FlatWrite32((r3 + -60), r0);
    r5 = MemoryInline::FlatRead32((r3 + -104));
    r0 = MemoryInline::FlatRead32((r3 + -100));
    MemoryInline::FlatWrite32((r3 + -56), r5);
    MemoryInline::FlatWrite32((r3 + -52), r0);
    r5 = MemoryInline::FlatRead32((r3 + -96));
    r0 = MemoryInline::FlatRead32((r3 + -92));
    MemoryInline::FlatWrite32((r3 + -48), r5);
    MemoryInline::FlatWrite32((r3 + -44), r0);
    r5 = MemoryInline::FlatRead32((r3 + -184));
    r0 = MemoryInline::FlatRead32((r3 + -180));
    MemoryInline::FlatWrite32((r3 + -136), r5);
    MemoryInline::FlatWrite32((r3 + -132), r0);
    r5 = MemoryInline::FlatRead32((r3 + -176));
    r0 = MemoryInline::FlatRead32((r3 + -172));
    MemoryInline::FlatWrite32((r3 + -128), r5);
    MemoryInline::FlatWrite32((r3 + -124), r0);
    r5 = MemoryInline::FlatRead32((r3 + -168));
    r0 = MemoryInline::FlatRead32((r3 + -164));
    MemoryInline::FlatWrite32((r3 + -120), r5);
    MemoryInline::FlatWrite32((r3 + -116), r0);
    r5 = MemoryInline::FlatRead32((r3 + -160));
    r0 = MemoryInline::FlatRead32((r3 + -156));
    MemoryInline::FlatWrite32((r3 + -112), r5);
    MemoryInline::FlatWrite32((r3 + -108), r0);
    r5 = MemoryInline::FlatRead32((r3 + -152));
    r0 = MemoryInline::FlatRead32((r3 + -148));
    MemoryInline::FlatWrite32((r3 + -104), r5);
    MemoryInline::FlatWrite32((r3 + -100), r0);
    r5 = MemoryInline::FlatRead32((r3 + -144));
    r0 = MemoryInline::FlatRead32((r3 + -140));
    MemoryInline::FlatWrite32((r3 + -96), r5);
    MemoryInline::FlatWrite32((r3 + -92), r0);
    r5 = MemoryInline::FlatRead32((r3 + -232));
    r4 = (r4 + -8);
    r0 = MemoryInline::FlatRead32((r3 + -228));
    MemoryInline::FlatWrite32((r3 + -184), r5);
    MemoryInline::FlatWrite32((r3 + -180), r0);
    r5 = MemoryInline::FlatRead32((r3 + -224));
    r0 = MemoryInline::FlatRead32((r3 + -220));
    MemoryInline::FlatWrite32((r3 + -176), r5);
    MemoryInline::FlatWrite32((r3 + -172), r0);
    r5 = MemoryInline::FlatRead32((r3 + -216));
    r0 = MemoryInline::FlatRead32((r3 + -212));
    MemoryInline::FlatWrite32((r3 + -168), r5);
    MemoryInline::FlatWrite32((r3 + -164), r0);
    r5 = MemoryInline::FlatRead32((r3 + -208));
    r0 = MemoryInline::FlatRead32((r3 + -204));
    MemoryInline::FlatWrite32((r3 + -160), r5);
    MemoryInline::FlatWrite32((r3 + -156), r0);
    r5 = MemoryInline::FlatRead32((r3 + -200));
    r0 = MemoryInline::FlatRead32((r3 + -196));
    MemoryInline::FlatWrite32((r3 + -152), r5);
    MemoryInline::FlatWrite32((r3 + -148), r0);
    r5 = MemoryInline::FlatRead32((r3 + -192));
    r0 = MemoryInline::FlatRead32((r3 + -188));
    MemoryInline::FlatWrite32((r3 + -144), r5);
    MemoryInline::FlatWrite32((r3 + -140), r0);
    r5 = MemoryInline::FlatRead32((r3 + -280));
    r0 = MemoryInline::FlatRead32((r3 + -276));
    MemoryInline::FlatWrite32((r3 + -232), r5);
    MemoryInline::FlatWrite32((r3 + -228), r0);
    r5 = MemoryInline::FlatRead32((r3 + -272));
    r0 = MemoryInline::FlatRead32((r3 + -268));
    MemoryInline::FlatWrite32((r3 + -224), r5);
    MemoryInline::FlatWrite32((r3 + -220), r0);
    r5 = MemoryInline::FlatRead32((r3 + -264));
    r0 = MemoryInline::FlatRead32((r3 + -260));
    MemoryInline::FlatWrite32((r3 + -216), r5);
    MemoryInline::FlatWrite32((r3 + -212), r0);
    r5 = MemoryInline::FlatRead32((r3 + -256));
    r0 = MemoryInline::FlatRead32((r3 + -252));
    MemoryInline::FlatWrite32((r3 + -208), r5);
    MemoryInline::FlatWrite32((r3 + -204), r0);
    r5 = MemoryInline::FlatRead32((r3 + -248));
    r0 = MemoryInline::FlatRead32((r3 + -244));
    MemoryInline::FlatWrite32((r3 + -200), r5);
    MemoryInline::FlatWrite32((r3 + -196), r0);
    r5 = MemoryInline::FlatRead32((r3 + -240));
    r0 = MemoryInline::FlatRead32((r3 + -236));
    MemoryInline::FlatWrite32((r3 + -192), r5);
    MemoryInline::FlatWrite32((r3 + -188), r0);
    r5 = MemoryInline::FlatRead32((r3 + -328));
    r0 = MemoryInline::FlatRead32((r3 + -324));
    MemoryInline::FlatWrite32((r3 + -280), r5);
    MemoryInline::FlatWrite32((r3 + -276), r0);
    r5 = MemoryInline::FlatRead32((r3 + -320));
    r0 = MemoryInline::FlatRead32((r3 + -316));
    MemoryInline::FlatWrite32((r3 + -272), r5);
    MemoryInline::FlatWrite32((r3 + -268), r0);
    r5 = MemoryInline::FlatRead32((r3 + -312));
    r0 = MemoryInline::FlatRead32((r3 + -308));
    MemoryInline::FlatWrite32((r3 + -264), r5);
    MemoryInline::FlatWrite32((r3 + -260), r0);
    r5 = MemoryInline::FlatRead32((r3 + -304));
    r0 = MemoryInline::FlatRead32((r3 + -300));
    MemoryInline::FlatWrite32((r3 + -256), r5);
    MemoryInline::FlatWrite32((r3 + -252), r0);
    r5 = MemoryInline::FlatRead32((r3 + -296));
    r0 = MemoryInline::FlatRead32((r3 + -292));
    MemoryInline::FlatWrite32((r3 + -248), r5);
    MemoryInline::FlatWrite32((r3 + -244), r0);
    r5 = MemoryInline::FlatRead32((r3 + -288));
    r0 = MemoryInline::FlatRead32((r3 + -284));
    MemoryInline::FlatWrite32((r3 + -240), r5);
    MemoryInline::FlatWrite32((r3 + -236), r0);
    r3 = (r3 + -384);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D9DC4;
    }
}

loc_800DA0D0:
{
    r0 = (r4 * 48);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = (r3 + r0);
    ctr = r4;
}

loc_800DA0E4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_800DA154;
    }
}

loc_800DA0E8:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 48u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r5 + 8));
    r4 = (r4 + -1);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r5 + 12));
    guest_range_7 = MemoryInline::ResolveRangeHost((r5 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 0u, (r5 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_7, 4u, (r5 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r5 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r5 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 8u, (r5 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r5 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r5 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r5 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r5 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r5 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r5 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r5 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r5 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r5 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r5 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r5 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 32u, (r5 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_7, 36u, (r5 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r5 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r5 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 40u, (r5 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_7, 44u, (r5 + 100), r0);
    }
    r5 = (r5 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800DA0E8;
    }
}

loc_800DA154:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r1 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r1 + 12));
        }
    }
    MemoryInline::FlatWrite32((r4 + 56), r3);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r1 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r1 + 20));
        }
    }
    MemoryInline::FlatWrite32((r4 + 64), r3);
    MemoryInline::FlatWrite32((r4 + 68), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r1 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r1 + 28));
        }
    }
    MemoryInline::FlatWrite32((r4 + 72), r3);
    MemoryInline::FlatWrite32((r4 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r1 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r1 + 36));
        }
    }
    MemoryInline::FlatWrite32((r4 + 80), r3);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r1 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r1 + 44));
        }
    }
    MemoryInline::FlatWrite32((r4 + 88), r3);
    MemoryInline::FlatWrite32((r4 + 92), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r1 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r1 + 52));
        }
    }
    MemoryInline::FlatWrite32((r4 + 96), r3);
    MemoryInline::FlatWrite32((r4 + 100), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_800DA1C4:
{
    r28 = (r28 + 1);
}

loc_800DA1C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r27));
}

loc_800DA1CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800D9C8C;
    }
}

loc_800DA1D0:
{
    r0 = (r27 * 6);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_49 & -4);
    r4 = (r26 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4 = (r4_rot_4 & 16711680);
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_50 & -16777216);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_3 = (r4_rot_5 & 255);
    r4_mdest_3 = (r4 & -256);
    r4 = (r4_mdest_3 | r4_mrot_3);
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_17 = (r0_rot_51 & 65280);
    r0_mdest_17 = (r0 & -65281);
    r0 = (r0_mdest_17 | r0_mrot_17);
    r0 = (r4 | r0);
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_52 & -1);
    MemoryInline::FlatWrite32((r3 + 2224), r0);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 48), 0, 1592u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_800DA20C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DA660;
    }
}

loc_800DA210:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800DA214:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800DA5F0;
    }
}

loc_800DA218:
{
}

loc_800DA21C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800DA570;
    }
}

loc_800DA220:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800DA23C;
    }
}

loc_800DA228:
{
    r3 = 0x80000000u;
    r0 = (r3 + 1);
}

loc_800DA234:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800DA23C;
    }
}

loc_800DA238:
{
    r6 = 1;
}

loc_800DA23C:
{
}

loc_800DA240:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800DA570;
    }
}

loc_800DA244:
{
    r3 = (r4 * 48);
    r0 = (r4 + -1);
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_53 & 536870911);
    r3 = (r6 + r3);
    ctr = r0;
}

loc_800DA260:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800DA570;
    }
}

loc_800DA264:
{
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r3 + 56), r6);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32((r3 + 64), r6);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite32((r3 + 72), r6);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r6 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r3 + 80), r6);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r6 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    MemoryInline::FlatWrite32((r3 + 88), r6);
    MemoryInline::FlatWrite32((r3 + 92), r0);
    r6 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32((r3 + 96), r6);
    MemoryInline::FlatWrite32((r3 + 100), r0);
    r6 = MemoryInline::FlatRead32((r3 + -40));
    r0 = MemoryInline::FlatRead32((r3 + -36));
    MemoryInline::FlatWrite32((r3 + 8), r6);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r6 = MemoryInline::FlatRead32((r3 + -32));
    r0 = MemoryInline::FlatRead32((r3 + -28));
    MemoryInline::FlatWrite32((r3 + 16), r6);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r6 = MemoryInline::FlatRead32((r3 + -24));
    r0 = MemoryInline::FlatRead32((r3 + -20));
    MemoryInline::FlatWrite32((r3 + 24), r6);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r6 = MemoryInline::FlatRead32((r3 + -16));
    r0 = MemoryInline::FlatRead32((r3 + -12));
    MemoryInline::FlatWrite32((r3 + 32), r6);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r6 = MemoryInline::FlatRead32((r3 + -8));
    r0 = MemoryInline::FlatRead32((r3 + -4));
    MemoryInline::FlatWrite32((r3 + 40), r6);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r6 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r6);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r6 = MemoryInline::FlatRead32((r3 + -88));
    r0 = MemoryInline::FlatRead32((r3 + -84));
    MemoryInline::FlatWrite32((r3 + -40), r6);
    MemoryInline::FlatWrite32((r3 + -36), r0);
    r6 = MemoryInline::FlatRead32((r3 + -80));
    r0 = MemoryInline::FlatRead32((r3 + -76));
    MemoryInline::FlatWrite32((r3 + -32), r6);
    MemoryInline::FlatWrite32((r3 + -28), r0);
    r6 = MemoryInline::FlatRead32((r3 + -72));
    r0 = MemoryInline::FlatRead32((r3 + -68));
    MemoryInline::FlatWrite32((r3 + -24), r6);
    MemoryInline::FlatWrite32((r3 + -20), r0);
    r6 = MemoryInline::FlatRead32((r3 + -64));
    r0 = MemoryInline::FlatRead32((r3 + -60));
    MemoryInline::FlatWrite32((r3 + -16), r6);
    MemoryInline::FlatWrite32((r3 + -12), r0);
    r6 = MemoryInline::FlatRead32((r3 + -56));
    r0 = MemoryInline::FlatRead32((r3 + -52));
    MemoryInline::FlatWrite32((r3 + -8), r6);
    MemoryInline::FlatWrite32((r3 + -4), r0);
    r6 = MemoryInline::FlatRead32((r3 + -48));
    r0 = MemoryInline::FlatRead32((r3 + -44));
    MemoryInline::FlatWrite32(r3, r6);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r6 = MemoryInline::FlatRead32((r3 + -136));
    r0 = MemoryInline::FlatRead32((r3 + -132));
    MemoryInline::FlatWrite32((r3 + -88), r6);
    MemoryInline::FlatWrite32((r3 + -84), r0);
    r6 = MemoryInline::FlatRead32((r3 + -128));
    r0 = MemoryInline::FlatRead32((r3 + -124));
    MemoryInline::FlatWrite32((r3 + -80), r6);
    MemoryInline::FlatWrite32((r3 + -76), r0);
    r6 = MemoryInline::FlatRead32((r3 + -120));
    r0 = MemoryInline::FlatRead32((r3 + -116));
    MemoryInline::FlatWrite32((r3 + -72), r6);
    MemoryInline::FlatWrite32((r3 + -68), r0);
    r6 = MemoryInline::FlatRead32((r3 + -112));
    r0 = MemoryInline::FlatRead32((r3 + -108));
    MemoryInline::FlatWrite32((r3 + -64), r6);
    MemoryInline::FlatWrite32((r3 + -60), r0);
    r6 = MemoryInline::FlatRead32((r3 + -104));
    r0 = MemoryInline::FlatRead32((r3 + -100));
    MemoryInline::FlatWrite32((r3 + -56), r6);
    MemoryInline::FlatWrite32((r3 + -52), r0);
    r6 = MemoryInline::FlatRead32((r3 + -96));
    r0 = MemoryInline::FlatRead32((r3 + -92));
    MemoryInline::FlatWrite32((r3 + -48), r6);
    MemoryInline::FlatWrite32((r3 + -44), r0);
    r6 = MemoryInline::FlatRead32((r3 + -184));
    r0 = MemoryInline::FlatRead32((r3 + -180));
    MemoryInline::FlatWrite32((r3 + -136), r6);
    MemoryInline::FlatWrite32((r3 + -132), r0);
    r6 = MemoryInline::FlatRead32((r3 + -176));
    r0 = MemoryInline::FlatRead32((r3 + -172));
    MemoryInline::FlatWrite32((r3 + -128), r6);
    MemoryInline::FlatWrite32((r3 + -124), r0);
    r6 = MemoryInline::FlatRead32((r3 + -168));
    r0 = MemoryInline::FlatRead32((r3 + -164));
    MemoryInline::FlatWrite32((r3 + -120), r6);
    MemoryInline::FlatWrite32((r3 + -116), r0);
    r6 = MemoryInline::FlatRead32((r3 + -160));
    r0 = MemoryInline::FlatRead32((r3 + -156));
    MemoryInline::FlatWrite32((r3 + -112), r6);
    MemoryInline::FlatWrite32((r3 + -108), r0);
    r6 = MemoryInline::FlatRead32((r3 + -152));
    r0 = MemoryInline::FlatRead32((r3 + -148));
    MemoryInline::FlatWrite32((r3 + -104), r6);
    MemoryInline::FlatWrite32((r3 + -100), r0);
    r6 = MemoryInline::FlatRead32((r3 + -144));
    r0 = MemoryInline::FlatRead32((r3 + -140));
    MemoryInline::FlatWrite32((r3 + -96), r6);
    MemoryInline::FlatWrite32((r3 + -92), r0);
    r6 = MemoryInline::FlatRead32((r3 + -232));
    r4 = (r4 + -8);
    r0 = MemoryInline::FlatRead32((r3 + -228));
    MemoryInline::FlatWrite32((r3 + -184), r6);
    MemoryInline::FlatWrite32((r3 + -180), r0);
    r6 = MemoryInline::FlatRead32((r3 + -224));
    r0 = MemoryInline::FlatRead32((r3 + -220));
    MemoryInline::FlatWrite32((r3 + -176), r6);
    MemoryInline::FlatWrite32((r3 + -172), r0);
    r6 = MemoryInline::FlatRead32((r3 + -216));
    r0 = MemoryInline::FlatRead32((r3 + -212));
    MemoryInline::FlatWrite32((r3 + -168), r6);
    MemoryInline::FlatWrite32((r3 + -164), r0);
    r6 = MemoryInline::FlatRead32((r3 + -208));
    r0 = MemoryInline::FlatRead32((r3 + -204));
    MemoryInline::FlatWrite32((r3 + -160), r6);
    MemoryInline::FlatWrite32((r3 + -156), r0);
    r6 = MemoryInline::FlatRead32((r3 + -200));
    r0 = MemoryInline::FlatRead32((r3 + -196));
    MemoryInline::FlatWrite32((r3 + -152), r6);
    MemoryInline::FlatWrite32((r3 + -148), r0);
    r6 = MemoryInline::FlatRead32((r3 + -192));
    r0 = MemoryInline::FlatRead32((r3 + -188));
    MemoryInline::FlatWrite32((r3 + -144), r6);
    MemoryInline::FlatWrite32((r3 + -140), r0);
    r6 = MemoryInline::FlatRead32((r3 + -280));
    r0 = MemoryInline::FlatRead32((r3 + -276));
    MemoryInline::FlatWrite32((r3 + -232), r6);
    MemoryInline::FlatWrite32((r3 + -228), r0);
    r6 = MemoryInline::FlatRead32((r3 + -272));
    r0 = MemoryInline::FlatRead32((r3 + -268));
    MemoryInline::FlatWrite32((r3 + -224), r6);
    MemoryInline::FlatWrite32((r3 + -220), r0);
    r6 = MemoryInline::FlatRead32((r3 + -264));
    r0 = MemoryInline::FlatRead32((r3 + -260));
    MemoryInline::FlatWrite32((r3 + -216), r6);
    MemoryInline::FlatWrite32((r3 + -212), r0);
    r6 = MemoryInline::FlatRead32((r3 + -256));
    r0 = MemoryInline::FlatRead32((r3 + -252));
    MemoryInline::FlatWrite32((r3 + -208), r6);
    MemoryInline::FlatWrite32((r3 + -204), r0);
    r6 = MemoryInline::FlatRead32((r3 + -248));
    r0 = MemoryInline::FlatRead32((r3 + -244));
    MemoryInline::FlatWrite32((r3 + -200), r6);
    MemoryInline::FlatWrite32((r3 + -196), r0);
    r6 = MemoryInline::FlatRead32((r3 + -240));
    r0 = MemoryInline::FlatRead32((r3 + -236));
    MemoryInline::FlatWrite32((r3 + -192), r6);
    MemoryInline::FlatWrite32((r3 + -188), r0);
    r6 = MemoryInline::FlatRead32((r3 + -328));
    r0 = MemoryInline::FlatRead32((r3 + -324));
    MemoryInline::FlatWrite32((r3 + -280), r6);
    MemoryInline::FlatWrite32((r3 + -276), r0);
    r6 = MemoryInline::FlatRead32((r3 + -320));
    r0 = MemoryInline::FlatRead32((r3 + -316));
    MemoryInline::FlatWrite32((r3 + -272), r6);
    MemoryInline::FlatWrite32((r3 + -268), r0);
    r6 = MemoryInline::FlatRead32((r3 + -312));
    r0 = MemoryInline::FlatRead32((r3 + -308));
    MemoryInline::FlatWrite32((r3 + -264), r6);
    MemoryInline::FlatWrite32((r3 + -260), r0);
    r6 = MemoryInline::FlatRead32((r3 + -304));
    r0 = MemoryInline::FlatRead32((r3 + -300));
    MemoryInline::FlatWrite32((r3 + -256), r6);
    MemoryInline::FlatWrite32((r3 + -252), r0);
    r6 = MemoryInline::FlatRead32((r3 + -296));
    r0 = MemoryInline::FlatRead32((r3 + -292));
    MemoryInline::FlatWrite32((r3 + -248), r6);
    MemoryInline::FlatWrite32((r3 + -244), r0);
    r6 = MemoryInline::FlatRead32((r3 + -288));
    r0 = MemoryInline::FlatRead32((r3 + -284));
    MemoryInline::FlatWrite32((r3 + -240), r6);
    MemoryInline::FlatWrite32((r3 + -236), r0);
    r3 = (r3 + -384);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800DA264;
    }
}

loc_800DA570:
{
    r0 = (r4 * 48);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r6 = (r3 + r0);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800DA584:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800DA5F0;
    }
}

loc_800DA588:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r6 + 12));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r6 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r6 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r6 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r6 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r6 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r6 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r6 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r6 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r6 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r6 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r6 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r6 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r6 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r6 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r6 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r6 + 100), r0);
    }
    r6 = (r6 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800DA588;
    }
}

loc_800DA5F0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1544u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 1544u, (r5 + 1592));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 1548u, (r5 + 1596));
        }
    }
    MemoryInline::FlatWrite32((r4 + 56), r3);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1552u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 1552u, (r5 + 1600));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 1556u, (r5 + 1604));
        }
    }
    MemoryInline::FlatWrite32((r4 + 64), r3);
    MemoryInline::FlatWrite32((r4 + 68), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1560u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 1560u, (r5 + 1608));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 1564u, (r5 + 1612));
        }
    }
    MemoryInline::FlatWrite32((r4 + 72), r3);
    MemoryInline::FlatWrite32((r4 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1568u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 1568u, (r5 + 1616));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 1572u, (r5 + 1620));
        }
    }
    MemoryInline::FlatWrite32((r4 + 80), r3);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1576u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 1576u, (r5 + 1624));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 1580u, (r5 + 1628));
        }
    }
    MemoryInline::FlatWrite32((r4 + 88), r3);
    MemoryInline::FlatWrite32((r4 + 92), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1584u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 1584u, (r5 + 1632));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 1588u, (r5 + 1636));
        }
    }
    MemoryInline::FlatWrite32((r4 + 96), r3);
    MemoryInline::FlatWrite32((r4 + 100), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_800DA660:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 0;
    r5 = 48;
    r3 = (r3 + 1592);
    ctx->lr = 0x800DA674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800DA698;
}

loc_800DA678:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_8 & 16711680);
    r0_rot_57 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_57 & -16777216);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_5 = (r3_rot_9 & 255);
    r3_mdest_5 = (r3 & -256);
    r3 = (r3_mdest_5 | r3_mrot_5);
    r0_rot_58 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_18 = (r0_rot_58 & 65280);
    r0_mdest_18 = (r0 & -65281);
    r0 = (r0_mdest_18 | r0_mrot_18);
    r0 = (r3 | r0);
    r0_rot_59 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_59 & -1);
    MemoryInline::FlatWrite32((r5 + 2224), r0);
}

loc_800DA698:
{
    r3 = 3;
    ctx->lr = 0x800DA6A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800DFB04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800DA6A0:
{
    r11 = (r1 + 128);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800D96E8 func_800D96E8 preserves=true fpr_mask=0x00000000
