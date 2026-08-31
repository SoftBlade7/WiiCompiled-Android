#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80881994(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_addc_right_4 = 0;
    uint32_t r0_addc_right_5 = 0;
    uint32_t r0_addc_right_6 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_adde_left_4 = 0;
    uint32_t r0_adde_left_5 = 0;
    uint32_t r0_adde_left_6 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_10 = 0;
    uint32_t r0_ca_11 = 0;
    uint32_t r0_ca_12 = 0;
    uint32_t r0_ca_13 = 0;
    uint32_t r0_ca_14 = 0;
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
    uint32_t r0_not_10 = 0;
    uint32_t r0_not_11 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_not_7 = 0;
    uint32_t r0_not_8 = 0;
    uint32_t r0_not_9 = 0;
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
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_10 = 0;
    uint32_t r0_subfc_sub_11 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r0_subfc_sub_4 = 0;
    uint32_t r0_subfc_sub_5 = 0;
    uint32_t r0_subfc_sub_6 = 0;
    uint32_t r0_subfc_sub_7 = 0;
    uint32_t r0_subfc_sub_8 = 0;
    uint32_t r0_subfc_sub_9 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_10 = 0;
    uint32_t r0_subfe_rb_11 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r0_subfe_rb_4 = 0;
    uint32_t r0_subfe_rb_5 = 0;
    uint32_t r0_subfe_rb_6 = 0;
    uint32_t r0_subfe_rb_7 = 0;
    uint32_t r0_subfe_rb_8 = 0;
    uint32_t r0_subfe_rb_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_ca_8 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_not_7 = 0;
    uint32_t r3_not_8 = 0;
    uint32_t r3_subfc_sub_0 = 0;
    uint32_t r3_subfc_sub_1 = 0;
    uint32_t r3_subfc_sub_2 = 0;
    uint32_t r3_subfc_sub_3 = 0;
    uint32_t r3_subfc_sub_4 = 0;
    uint32_t r3_subfc_sub_5 = 0;
    uint32_t r3_subfc_sub_6 = 0;
    uint32_t r3_subfc_sub_7 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r3_subfe_rb_4 = 0;
    uint32_t r3_subfe_rb_5 = 0;
    uint32_t r3_subfe_rb_6 = 0;
    uint32_t r3_subfe_rb_7 = 0;
    uint32_t r3_subfe_rb_8 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r4_ca_5 = 0;
    uint32_t r4_ca_6 = 0;
    uint32_t r4_ca_7 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
    uint32_t r4_not_3 = 0;
    uint32_t r4_not_4 = 0;
    uint32_t r4_not_5 = 0;
    uint32_t r4_not_6 = 0;
    uint32_t r4_not_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_addr_5 = 0;
    uint32_t r9_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80881994;

loc_80881994:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead8(r3);
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808819B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80882B40;
    }
}

loc_808819B8:
{
    r5 = MemoryInline::FlatRead32((r3 + 8436));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_808819C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80882854;
    }
}

loc_808819C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8432));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_808819CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80882854;
    }
}

loc_808819D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 17278));
}

loc_808819D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80881C34;
    }
}

loc_808819DC:
{
    r4 = MemoryInline::FlatRead8((r3 + 5));
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_808819E8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_80881C34;
    }
}

loc_808819EC:
{
    r4 = MemoryInline::FlatRead8((r3 + 8440));
    r0 = MemoryInline::FlatRead8((r3 + 8441));
}

loc_808819F8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80881C34;
    }
}

loc_808819FC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 8440), static_cast<uint8_t>(r0));
    r27 = 0;
    r25 = 0x808E0000u;
    MemoryInline::FlatWrite32((r3 + 8444), r5);
    r29 = 1;
    r30 = 0;
    goto loc_80881C24;
}

loc_80881A1C:
{
    r0 = (r27 & 255);
    r3 = MemoryInline::FlatRead8((r31 + 8440));
    r0 = (r0 * 28);
    r28 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r28 + 16));
}

loc_80881A34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80881C20;
    }
}

loc_80881A38:
{
    r3 = MemoryInline::FlatRead8((r31 + 7916));
    r0 = MemoryInline::FlatRead8((r28 + 18));
}

loc_80881A44:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80881C20;
    }
}

loc_80881A48:
{
    r0 = MemoryInline::FlatRead8((r28 + 19));
}

loc_80881A50:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80881C20;
    }
}

loc_80881A54:
{
    r26 = MemoryInline::FlatRead8((r28 + 25));
    r0 = (r26 * 20);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite8((r4 + 2832), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead32((r4 + 2828));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80881A6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80881AA8;
    }
}

loc_80881A70:
{
    r3 = MemoryInline::FlatRead32((r4 + 2816));
    r5 = (r1 + 44);
    r0 = MemoryInline::FlatRead32((r4 + 2820));
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r7 = 1;
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r0 = MemoryInline::FlatRead32((r4 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 8444));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80881B54;
}

loc_80881AA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80881AAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80881AE8;
    }
}

loc_80881AB0:
{
    r3 = MemoryInline::FlatRead32((r4 + 2816));
    r5 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r4 + 2820));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = 1;
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r0 = MemoryInline::FlatRead32((r4 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 8444));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80881B54;
}

loc_80881AE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80881AEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80881B24;
    }
}

loc_80881AF0:
{
    r3 = MemoryInline::FlatRead32((r4 + 2816));
    r5 = (r1 + 20);
    r0 = MemoryInline::FlatRead32((r4 + 2820));
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = MemoryInline::FlatRead32((r4 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 8444));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80881B54;
}

loc_80881B24:
{
    r3 = MemoryInline::FlatRead32((r4 + 2816));
    r5 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r4 + 2820));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = MemoryInline::FlatRead32((r4 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 8444));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80881B54:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 8444));
    MemoryInline::FlatWrite32((r28 + 20), r0);
    MemoryInline::FlatWrite8((r28 + 24), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r28 + 25), static_cast<uint8_t>(r26));
    r3 = MemoryInline::FlatRead8((r31 + 7916));
}

loc_80881B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80881C1C;
    }
}

loc_80881B84:
{
}

loc_80881B88:
{
    r5 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_80881BF4;
    }
}

loc_80881B90:
{
    r0 = (r5 + 7);
    r6 = r28;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_80881BA4:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_80881BF4;
    }
}

loc_80881BA8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r25 + -13948), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r25 + -13948));
    r4 = (r4 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r25 + -13948));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r25 + -13948));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r25 + -13948));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r25 + -13948));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r25 + -13948));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r25 + -13948));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r25 + -13948));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80881BA8;
    }
}

loc_80881BF4:
{
    r0 = (r3 - r4);
    r5 = (r28 + r4);
    ctr = r0;
}

loc_80881C04:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_80881C1C;
    }
}

loc_80881C08:
{
    r0 = MemoryInline::FlatRead8((r25 + -13948));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80881C08;
    }
}

loc_80881C1C:
{
    MemoryInline::FlatWrite8((r31 + 8458), static_cast<uint8_t>(r29));
}

loc_80881C20:
{
    r27 = (r27 + 1);
}

loc_80881C24:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (r27 & 255);
}

loc_80881C30:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80881A1C;
    }
}

loc_80881C34:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead8((r31 + 7917));
    r4 = MemoryInline::FlatRead32((r3 + -10448));
    r6 = 0;
    goto loc_80881C8C;
}

loc_80881C48:
{
    r0 = (r6 & 255);
    r3 = (r31 + r0);
    r7 = MemoryInline::FlatRead8((r3 + 7918));
    r3 = (r31 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 8016));
}

loc_80881C60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80881C88;
    }
}

loc_80881C64:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 1020);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
}

loc_80881C78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80881C88;
    }
}

loc_80881C7C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 8458), static_cast<uint8_t>(r0));
    goto loc_80881C98;
}

loc_80881C88:
{
    r6 = (r6 + 1);
}

loc_80881C8C:
{
    r0 = (r6 & 255);
}

loc_80881C94:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_80881C48;
    }
}

loc_80881C98:
{
    r4 = MemoryInline::FlatRead8((r31 + 7916));
    r7 = 1;
    r6 = 0;
    goto loc_80881CEC;
}

loc_80881CA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80881CAC:
{
    r7 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80881CE8;
    }
}

loc_80881CB4:
{
    r0 = (r6 & 255);
    r3 = 1;
    r5 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 17236));
}

loc_80881CC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80881CDC;
    }
}

loc_80881CCC:
{
    r0 = MemoryInline::FlatRead8((r5 + 8028));
}

loc_80881CD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80881CDC;
    }
}

loc_80881CD8:
{
    r3 = 0;
}

loc_80881CDC:
{
}

loc_80881CE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80881CE8;
    }
}

loc_80881CE4:
{
    r7 = 1;
}

loc_80881CE8:
{
    r6 = (r6 + 1);
}

loc_80881CEC:
{
    r0 = (r6 & 255);
}

loc_80881CF4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_80881CA8;
    }
}

loc_80881CF8:
{
    r5 = MemoryInline::FlatRead32((r31 + 17172));
    r0 = (r5 * 136);
    r3 = (r31 + r0);
    r6 = MemoryInline::FlatRead32((r3 + 8468));
}

loc_80881D0C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(3))) {
        goto loc_80881D30;
    }
}

loc_80881D10:
{
    r4 = MemoryInline::FlatRead32((r31 + 17184));
    r3 = MemoryInline::FlatRead32((r31 + 8436));
    r0 = (r4 + 420);
    r0 = (r3 ^ r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    goto loc_80881D4C;
}

loc_80881D30:
{
    r4 = MemoryInline::FlatRead32((r31 + 17184));
    r3 = MemoryInline::FlatRead32((r31 + 8436));
    r0 = (r4 + 180);
    r0 = (r3 ^ r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
}

loc_80881D4C:
{
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r3 = 0;
}

loc_80881D58:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80881D68;
    }
}

loc_80881D5C:
{
}

loc_80881D60:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80881D68;
    }
}

loc_80881D64:
{
    r3 = 1;
}

loc_80881D68:
{
}

loc_80881D6C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80881D80;
    }
}

loc_80881D70:
{
}

loc_80881D74:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80881D80;
    }
}

loc_80881D78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80881D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088284C;
    }
}

loc_80881D80:
{
    r0 = MemoryInline::FlatRead8((r31 + 17278));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80881D88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088284C;
    }
}

loc_80881D8C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8(r31);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_1 = r0;
    r0 = (r8 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r6);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = MemoryInline::FlatRead32((r31 + 17172));
    r26 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r31 + 17176));
}

loc_80881DB0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80881F64;
    }
}

loc_80881DB4:
{
    r0 = MemoryInline::FlatRead8((r31 + 17277));
}

loc_80881DBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80881F64;
    }
}

loc_80881DC0:
{
    r5 = (r26 * 28);
    r4 = (r31 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 24));
}

loc_80881DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80881F64;
    }
}

loc_80881DD4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 24), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 16));
    r0 = MemoryInline::FlatRead8((r31 + 8440));
    r6 = MemoryInline::FlatRead8((r4 + 25));
}

loc_80881DEC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_80881F64;
    }
}

loc_80881DF0:
{
    r3 = MemoryInline::FlatRead8((r31 + 7916));
    r0 = MemoryInline::FlatRead8((r4 + 18));
}

loc_80881DFC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80881F64;
    }
}

loc_80881E00:
{
    r0 = MemoryInline::FlatRead8((r4 + 19));
}

loc_80881E08:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80881F64;
    }
}

loc_80881E0C:
{
    r0 = MemoryInline::FlatRead8((r31 + 2812));
}

loc_80881E14:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80881E2C;
    }
}

loc_80881E18:
{
    r0 = (r6 * 20);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 2828));
}

loc_80881E28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80881F64;
    }
}

loc_80881E2C:
{
    r30 = (r31 + r5);
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80881E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80881F64;
    }
}

loc_80881E4C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x80881E5Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 16842752;
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r4 + 257);
    r0 = (r3 & ~r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80881F64;
    }
}

loc_80881E70:
{
    r25 = 0;
    r28 = 0x809C0000u;
    r27 = 0x808E0000u;
    r29 = 0x809C0000u;
    goto loc_80881EFC;
}

loc_80881E84:
{
    r4 = (r25 & 255);
    r3 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80881E9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80881EF8;
    }
}

loc_80881EA0:
{
    r3 = MemoryInline::FlatRead32((r28 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = MemoryInline::FlatRead32((r30 + 12));
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80881EECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r27 + -14036));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80881EF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80881F0C;
    }
}

loc_80881EF8:
{
    r25 = (r25 + 1);
}

loc_80881EFC:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r25 & 255);
}

loc_80881F08:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80881E84;
    }
}

loc_80881F0C:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r25 & 255);
}

loc_80881F18:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80881F64;
    }
}

loc_80881F1C:
{
    r4 = MemoryInline::FlatRead32((r31 + 17176));
    r3 = 64;
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r4 = (r4 + 1);
    r3_subfc_sub_1 = r3;
    r3 = (r4 - r3_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3_subfc_sub_1) ? 1u : 0u) << 29);
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r3);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r4 & r3);
}

loc_80881F3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80881F64;
    }
}

loc_80881F40:
{
    r0 = (r3 * 136);
    MemoryInline::FlatWrite32((r31 + 17176), r3);
    r4 = 5;
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 8468), r4);
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 8476), static_cast<uint8_t>(r26));
}

loc_80881F64:
{
    r3 = MemoryInline::FlatRead32((r31 + 17172));
    r0 = MemoryInline::FlatRead32((r31 + 17176));
}

loc_80881F70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_808822AC;
    }
}

loc_80881F74:
{
    r3 = MemoryInline::FlatRead8((r31 + 7916));
    r0 = MemoryInline::FlatRead8((r31 + 17277));
    r4 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r3));
}

loc_80881F84:
{
    r4 = (r4 * r3);
    r4 = (r26 - r4);
    r6 = (r4 & 255);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80881FE0;
    }
}

loc_80881F94:
{
}

loc_80881F98:
{
    r4 = (r6 + -1);
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(1))) {
        goto loc_80881FA4;
    }
}

loc_80881FA0:
{
    r4 = (r3 + -1);
}

loc_80881FA4:
{
    r7 = (r4 & 255);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    goto loc_80881FD8;
}

loc_80881FB0:
{
    r4 = (r31 + r6);
    r4 = MemoryInline::FlatRead8((r4 + 8028));
}

loc_80881FBC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80881FE0;
    }
}

loc_80881FC0:
{
    r6 = (r6 + 1);
    r4 = (r6 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r4_not_2 = ~(r4);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_not_2 + r5);
    r4 = (r4 + r4_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (r6 & r4);
    r6 = (r4 & 255);
}

loc_80881FD8:
{
}

loc_80881FDC:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r7))) {
        goto loc_80881FB0;
    }
}

loc_80881FE0:
{
    r5 = (r31 + r6);
    r4 = MemoryInline::FlatRead8((r31 + 7917));
    r5 = MemoryInline::FlatRead8((r5 + 7930));
}

loc_80881FF0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_808822AC;
    }
}

loc_80881FF4:
{
    r6 = (r26 * 28);
    r5 = MemoryInline::FlatRead8((r31 + 8440));
    r7 = 0;
    r10 = 0;
    r8 = (r31 + r6);
    r9 = 0;
    r4 = MemoryInline::FlatRead8((r8 + 16));
    r11 = 0;
}

loc_80882018:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r5))) {
        goto loc_8088202C;
    }
}

loc_8088201C:
{
    r8 = MemoryInline::FlatRead8((r8 + 18));
}

loc_80882024:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r3))) {
        goto loc_8088202C;
    }
}

loc_80882028:
{
    r11 = 1;
}

loc_8088202C:
{
}

loc_80882030:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80882048;
    }
}

loc_80882034:
{
    r8 = (r31 + r6);
    r8 = MemoryInline::FlatRead8((r8 + 19));
}

loc_80882040:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r3))) {
        goto loc_80882048;
    }
}

loc_80882044:
{
    r9 = 1;
}

loc_80882048:
{
}

loc_8088204C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80882074;
    }
}

loc_80882050:
{
    r8 = (r31 + r6);
    r9 = MemoryInline::FlatRead32((r8 + 12));
    r8 = MemoryInline::FlatRead32((r9 + 360));
    r9 = MemoryInline::FlatRead32((r9 + 352));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r8 = (r8_rot_1 & -16);
    r9_addr_1 = (r9 + r8);
    r8 = MemoryInline::FlatRead32(r9_addr_1);
}

loc_8088206C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80882074;
    }
}

loc_80882070:
{
    r10 = 1;
}

loc_80882074:
{
}

loc_80882078:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_808820B4;
    }
}

loc_8088207C:
{
    r8 = (r31 + r6);
    r10 = 0;
    r11 = MemoryInline::FlatRead32((r8 + 12));
    r9 = MemoryInline::FlatRead32((r11 + 356));
    r8 = MemoryInline::FlatRead32((r11 + 360));
}

loc_80882094:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r8))) {
        goto loc_808820A8;
    }
}

loc_80882098:
{
    r8 = MemoryInline::FlatRead8((r11 + 365));
}

loc_808820A0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_808820A8;
    }
}

loc_808820A4:
{
    r10 = 1;
}

loc_808820A8:
{
}

loc_808820AC:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_808820B4;
    }
}

loc_808820B0:
{
    r7 = 1;
}

loc_808820B4:
{
}

loc_808820B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80882104;
    }
}

loc_808820BC:
{
    r10 = (r31 + r6);
    r11 = 0;
    goto loc_808820F8;
}

loc_808820C8:
{
    r9 = (r11 & 255);
    r8 = (r10 + r9);
    r8 = MemoryInline::FlatRead8((r8 + 27));
}

loc_808820D8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_808820F4;
    }
}

loc_808820DC:
{
    r8 = (r31 + r9);
    r8 = MemoryInline::FlatRead8((r8 + 8028));
}

loc_808820E8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_808820F4;
    }
}

loc_808820EC:
{
    r7 = 0;
    goto loc_80882104;
}

loc_808820F4:
{
    r11 = (r11 + 1);
}

loc_808820F8:
{
    r8 = (r11 & 255);
}

loc_80882100:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r3))) {
        goto loc_808820C8;
    }
}

loc_80882104:
{
}

loc_80882108:
{
    r29 = 0;
    r9 = 0;
    r10 = 0;
    r8 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80882144;
    }
}

loc_8088211C:
{
}

loc_80882120:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r5))) {
        goto loc_80882144;
    }
}

loc_80882124:
{
    r5 = (r31 + r6);
    r4 = MemoryInline::FlatRead8((r5 + 18));
}

loc_80882130:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_80882144;
    }
}

loc_80882134:
{
    r0 = MemoryInline::FlatRead8((r5 + 19));
}

loc_8088213C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80882144;
    }
}

loc_80882140:
{
    r8 = 1;
}

loc_80882144:
{
}

loc_80882148:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80882170;
    }
}

loc_8088214C:
{
    r3 = (r31 + r6);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_17 & -16);
    r3_addr_10 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_10);
}

loc_80882168:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80882170;
    }
}

loc_8088216C:
{
    r10 = 1;
}

loc_80882170:
{
}

loc_80882174:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_808821B0;
    }
}

loc_80882178:
{
    r3 = (r31 + r6);
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32((r5 + 356));
    r0 = MemoryInline::FlatRead32((r5 + 360));
}

loc_80882190:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_808821A4;
    }
}

loc_80882194:
{
    r0 = MemoryInline::FlatRead8((r5 + 365));
}

loc_8088219C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808821A4;
    }
}

loc_808821A0:
{
    r4 = 1;
}

loc_808821A4:
{
}

loc_808821A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808821B0;
    }
}

loc_808821AC:
{
    r9 = 1;
}

loc_808821B0:
{
}

loc_808821B4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_808821D4;
    }
}

loc_808821B8:
{
    r3 = (r31 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 18));
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 8028));
}

loc_808821CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808821D4;
    }
}

loc_808821D0:
{
    r29 = 1;
}

loc_808821D4:
{
}

loc_808821D8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_808821E4;
    }
}

loc_808821DC:
{
}

loc_808821E0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_808822AC;
    }
}

loc_808821E4:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r31 + 2812));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_2 = r0;
    r0 = (r8 + r0_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_2 + r6);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r27 = (r3 & 255);
    r25 = (r27 * 20);
    r3 = (r31 + r25);
    r0 = MemoryInline::FlatRead8((r3 + 2832));
}

loc_8088220C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808822AC;
    }
}

loc_80882210:
{
    r0 = MemoryInline::FlatRead8((r3 + 2833));
}

loc_80882218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808822AC;
    }
}

loc_8088221C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_8088222C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80882244;
    }
}

loc_80882230:
{
    // inline leaf 0x8082B3EC (5 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    // end of inlined leaf 0x8082B3EC
    r3 = (r31 + r25);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2820));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80882240:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808822AC;
    }
}

loc_80882244:
{
    r4 = MemoryInline::FlatRead32((r31 + 17176));
    r3 = 64;
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r4 = (r4 + 1);
    r3_subfc_sub_3 = r3;
    r3 = (r4 - r3_subfc_sub_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3_subfc_sub_3) ? 1u : 0u) << 29);
    r3_subfe_rb_3 = r3;
    r3_not_3 = ~(r3);
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r3_subfe_rb_3);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r4 & r3);
}

loc_80882264:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_808822AC;
    }
}

loc_80882268:
{
    r0 = (r3 * 136);
    MemoryInline::FlatWrite32((r31 + 17176), r3);
    r4 = 4;
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 8468), r4);
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 8476), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 8477), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 8478), static_cast<uint8_t>(r29));
}

loc_808822AC:
{
    r6 = MemoryInline::FlatRead32((r31 + 17176));
    r5 = MemoryInline::FlatRead32((r31 + 17172));
}

loc_808822B8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r6))) {
        goto loc_80882480;
    }
}

loc_808822BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 17277));
}

loc_808822C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80882480;
    }
}

loc_808822C8:
{
    r0 = (r5 * 136);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8468));
}

loc_808822D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80882480;
    }
}

loc_808822DC:
{
    r9 = (r26 * 28);
    r0 = MemoryInline::FlatRead8((r31 + 8440));
    r4 = (r31 + r9);
    r3 = MemoryInline::FlatRead8((r4 + 16));
}

loc_808822F0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_80882480;
    }
}

loc_808822F4:
{
    r3 = MemoryInline::FlatRead8((r31 + 7916));
    r0 = MemoryInline::FlatRead8((r4 + 18));
}

loc_80882300:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80882480;
    }
}

loc_80882304:
{
    r0 = MemoryInline::FlatRead8((r4 + 19));
}

loc_8088230C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80882480;
    }
}

loc_80882310:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 318u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 312u, (r3 + 360));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 304u, (r3 + 352));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0 = (r0_rot_20 & -16);
    r4_addr_3 = (r4 + r0);
    r8 = MemoryInline::FlatRead32(r4_addr_3);
}

loc_80882328:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_808823AC;
    }
}

loc_8088232C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 308u, (r3 + 356));
    r4 = 0;
}

loc_80882338:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_8088234C;
    }
}

loc_8088233C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 317u, (r3 + 365));
}

loc_80882344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088234C;
    }
}

loc_80882348:
{
    r4 = 1;
}

loc_8088234C:
{
}

loc_80882350:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808823AC;
    }
}

loc_80882354:
{
    r3 = (r6 + 1);
    r0 = 64;
    r0_subfc_sub_1 = r0;
    r0 = (r3 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r0);
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 & r0);
}

loc_8088236C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r3))) {
        goto loc_80882480;
    }
}

loc_80882370:
{
    r0 = (r3 * 136);
    MemoryInline::FlatWrite32((r31 + 17176), r3);
    r5 = 6;
    r4 = 1;
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 8468), r5);
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 8476), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 8478), static_cast<uint8_t>(r4));
    goto loc_80882480;
}

loc_808823AC:
{
}

loc_808823B0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(3))) {
        goto loc_80882480;
    }
}

loc_808823B4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 308u, (r3 + 356));
    r4 = 0;
}

loc_808823C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_808823D4;
    }
}

loc_808823C4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 317u, (r3 + 365));
}

loc_808823CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808823D4;
    }
}

loc_808823D0:
{
    r4 = 1;
}

loc_808823D4:
{
}

loc_808823D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80882480;
    }
}

loc_808823DC:
{
    r4 = (r6 + 1);
    r0 = 64;
    r0_subfc_sub_2 = r0;
    r0 = (r4 - r0_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0_subfc_sub_2) ? 1u : 0u) << 29);
    r0_subfe_rb_2 = r0;
    r0_not_2 = ~(r0);
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r0_subfe_rb_2);
    r0 = (r0 + r0_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = (r4 & r0);
}

loc_808823F4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r7))) {
        goto loc_80882480;
    }
}

loc_808823F8:
{
    r4 = (r31 + r9);
    r6 = 6;
    r0 = (r7 * 136);
    r8 = MemoryInline::FlatRead8((r4 + 25));
    r9 = MemoryInline::FlatRead32((r4 + 20));
    r5 = 0;
    MemoryInline::FlatWrite32((r31 + 17176), r7);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 8468), r6);
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite8((r4 + 8476), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite8((r4 + 8478), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite8((r4 + 8477), static_cast<uint8_t>(r8));
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 8480), r9);
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 48));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 8484), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 52));
    MemoryInline::FlatWriteFloat32((r4 + 8488), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 56));
    MemoryInline::FlatWriteFloat32((r4 + 8492), f0.d);
}

loc_80882480:
{
    r5 = MemoryInline::FlatRead32((r31 + 17176));
    r4 = MemoryInline::FlatRead32((r31 + 17172));
}

loc_8088248C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_808824D4;
    }
}

loc_80882490:
{
    r0 = (r4 * 136);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8468));
}

loc_808824A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808824D4;
    }
}

loc_808824A4:
{
    r3 = (r5 + 1);
    r0 = 64;
    r0_subfc_sub_4 = r0;
    r0 = (r3 - r0_subfc_sub_4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_4) ? 1u : 0u) << 29);
    r0_subfe_rb_4 = r0;
    r0_not_4 = ~(r0);
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_not_4 + r0_subfe_rb_4);
    r0 = (r0 + r0_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 & r0);
}

loc_808824BC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r3))) {
        goto loc_808824D4;
    }
}

loc_808824C0:
{
    r0 = (r3 * 136);
    MemoryInline::FlatWrite32((r31 + 17176), r3);
    r4 = 0;
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 8468), r4);
}

loc_808824D4:
{
    r3 = MemoryInline::FlatRead32((r31 + 17172));
    r0 = MemoryInline::FlatRead32((r31 + 17176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_808824E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088284C;
    }
}

loc_808824E4:
{
    r4 = (r3 + 1);
    r0 = 64;
    r0_subfc_sub_6 = r0;
    r0 = (r4 - r0_subfc_sub_6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0_subfc_sub_6) ? 1u : 0u) << 29);
    r3 = MemoryInline::FlatRead32((r31 + 17180));
    r0_subfe_rb_6 = r0;
    r0_not_6 = ~(r0);
    r0_ca_9 = (xer >> 29) & 1u;
    r0 = (r0_not_6 + r0_subfe_rb_6);
    r0 = (r0 + r0_ca_9);
    r5 = MemoryInline::FlatRead32((r31 + 8436));
    r4 = (r4 & r0);
    r6 = (r3 + 1);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 17184), r5);
    r3 = (r6 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r3_subfe_rb_5 = r3;
    r3_not_5 = ~(r3);
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r3_not_5 + r3_subfe_rb_5);
    r3 = (r3 + r3_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r31 + 17172), r4);
    r3 = (r6 & r3);
    r0 = (r4 * 136);
    MemoryInline::FlatWrite32((r31 + 17180), r3);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8468));
}

loc_80882530:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80882634;
    }
}

loc_80882534:
{
    r5 = 0;
    goto loc_80882550;
}

loc_8088253C:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r0 = (r0 * 28);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r4));
}

loc_80882550:
{
    r4 = MemoryInline::FlatRead8(r31);
    r0 = (r5 & 255);
}

loc_8088255C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8088253C;
    }
}

loc_80882560:
{
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r9 = 0;
    r10 = 0;
    r4 = 1;
    r0 = (r0 * 136);
    r3 = (r31 + r0);
    r6 = MemoryInline::FlatRead8((r3 + 8477));
    r7 = MemoryInline::FlatRead8((r3 + 8476));
    r8 = MemoryInline::FlatRead32((r3 + 8480));
    goto loc_808825FC;
}

loc_80882588:
{
    r3 = (r10 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 8440));
    r3 = (r3 * 28);
    r5 = (r31 + r3);
    r3 = MemoryInline::FlatRead8((r5 + 16));
}

loc_808825A0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_808825F8;
    }
}

loc_808825A4:
{
    r3 = MemoryInline::FlatRead8((r5 + 18));
}

loc_808825AC:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r3))) {
        goto loc_808825F8;
    }
}

loc_808825B0:
{
    r0 = MemoryInline::FlatRead8((r5 + 19));
}

loc_808825B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_808825F8;
    }
}

loc_808825BC:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_808825C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r8))) {
        goto loc_808825F8;
    }
}

loc_808825C8:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_23 & -16);
    r3_addr_14 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_14);
}

loc_808825E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_808825F8;
    }
}

loc_808825E4:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    MemoryInline::FlatWrite8((r5 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r5 + 26), static_cast<uint8_t>(r9));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite8((r31 + 8458), static_cast<uint8_t>(r4));
}

loc_808825F8:
{
    r10 = (r10 + 1);
}

loc_808825FC:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (r10 & 255);
}

loc_80882608:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80882618;
    }
}

loc_8088260C:
{
    r0 = (r9 & 255);
}

loc_80882614:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_80882588;
    }
}

loc_80882618:
{
    r3 = MemoryInline::FlatRead32((r31 + 17172));
    r0 = 64;
    r3 = (r3 + 1);
    r0_subfc_sub_7 = r0;
    r0 = (r3 - r0_subfc_sub_7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_7) ? 1u : 0u) << 29);
    r0_subfe_rb_7 = r0;
    r0_not_7 = ~(r0);
    r0_ca_10 = (xer >> 29) & 1u;
    r0 = (r0_not_7 + r0_subfe_rb_7);
    r0 = (r0 + r0_ca_10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_10)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r31 + 17172), r0);
}

loc_80882634:
{
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 8468));
}

loc_80882648:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80882760;
    }
}

loc_8088264C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8496));
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 8472), r0);
    r4 = 0;
    r9 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r6 = MemoryInline::FlatRead8((r31 + 17248));
    r0 = (r0 * 136);
    r5 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 8601));
    r0 = (r6 * r0);
    r8 = (r0 & 255);
    goto loc_808826D4;
}

loc_80882680:
{
    r0 = (r9 & 255);
    r0 = (r0 * 28);
    r5 = (r31 + r0);
    r7 = MemoryInline::FlatRead8((r5 + 26));
}

loc_80882694:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_808826D0;
    }
}

loc_80882698:
{
    r0 = MemoryInline::FlatRead8((r31 + 17248));
    r5 = (r4 & 255);
}

loc_808826A4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_808826CC;
    }
}

loc_808826A8:
{
    r0 = (r8 + r5);
}

loc_808826B0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_808826CC;
    }
}

loc_808826B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r4 = (r4 + 1);
    r0 = (r0 * 136);
    r0 = (r31 + r0);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite8((r5 + 8501), static_cast<uint8_t>(r9));
}

loc_808826CC:
{
    r3 = (r3 + 1);
}

loc_808826D0:
{
    r9 = (r9 + 1);
}

loc_808826D4:
{
    r6 = MemoryInline::FlatRead8(r31);
    r0 = (r9 & 255);
}

loc_808826E0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80882680;
    }
}

loc_808826E4:
{
    r6 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 60), r8);
    r7 = 0x808B0000u;
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r1 + 56), r6);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r7 + 9616));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 9612));
    MemoryInline::FlatWriteRam32((r1 + 64), r6);
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    r0 = (r0 * 136);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r5 = (r31 + r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWrite8((r5 + 8500), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8488));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 8488), f0.d);
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite8((r4 + 8492), static_cast<uint8_t>(r3));
    goto loc_80882818;
}

loc_80882760:
{
}

loc_80882764:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80882810;
    }
}

loc_80882768:
{
    r0 = MemoryInline::FlatRead32((r4 + 8480));
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 8472), r0);
    r8 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r5 = MemoryInline::FlatRead8((r31 + 17248));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 8585));
    r0 = (r5 * r0);
    r7 = (r0 & 255);
    goto loc_808827DC;
}

loc_80882798:
{
    r0 = (r8 & 255);
    r0 = (r0 * 28);
    r4 = (r31 + r0);
    r6 = MemoryInline::FlatRead8((r4 + 26));
}

loc_808827AC:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_808827D8;
    }
}

loc_808827B0:
{
    r4 = (r3 & 255);
    r0 = (r7 + r4);
}

loc_808827BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_808827D8;
    }
}

loc_808827C0:
{
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r3 = (r3 + 1);
    r0 = (r0 * 136);
    r0 = (r31 + r0);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite8((r4 + 8485), static_cast<uint8_t>(r8));
}

loc_808827D8:
{
    r8 = (r8 + 1);
}

loc_808827DC:
{
    r5 = MemoryInline::FlatRead8(r31);
    r0 = (r8 & 255);
}

loc_808827E8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_808827FC;
    }
}

loc_808827EC:
{
    r0 = MemoryInline::FlatRead8((r31 + 17248));
    r4 = (r3 & 255);
}

loc_808827F8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80882798;
    }
}

loc_808827FC:
{
    r0 = MemoryInline::FlatRead32((r31 + 17172));
    r0 = (r0 * 136);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite8((r4 + 8484), static_cast<uint8_t>(r3));
    goto loc_80882818;
}

loc_80882810:
{
    r0 = MemoryInline::FlatRead32((r31 + 8436));
    MemoryInline::FlatWrite32((r4 + 8472), r0);
}

loc_80882818:
{
    r5 = 0;
    r4 = 0;
    goto loc_80882834;
}

loc_80882824:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 17236), static_cast<uint8_t>(r4));
}

loc_80882834:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80882840:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80882824;
    }
}

loc_80882844:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 17261), static_cast<uint8_t>(r0));
}

loc_8088284C:
{
    r3 = r31;
    ctx->lr = 0x80882854u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8087CCF4u>(ctx);
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
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80882854:
{
    r3 = r31;
    ctx->lr = 0x8088285Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8087E468u>(ctx);
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
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = 0;
    goto loc_808828E4;
}

loc_80882864:
{
    r3 = (r26 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r3 * 28);
    r3 = (r31 + r3);
    r4 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8088287C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_808828E0;
    }
}

loc_80882880:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_80882888:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_808828E0;
    }
}

loc_8088288C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_29 & -16);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
    r5 = r5_addr_2;
}

loc_808828A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_808828C0;
    }
}

loc_808828A8:
{
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (r4 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_30 & 134217727);
    goto loc_808828C4;
}

loc_808828C0:
{
    r0 = 0;
}

loc_808828C4:
{
}

loc_808828C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808828E0;
    }
}

loc_808828CC:
{
    r5 = (r31 + r4);
    r0 = MemoryInline::FlatRead8((r5 + 8040));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808828D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808828E0;
    }
}

loc_808828DC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874B34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808828E0:
{
    r26 = (r26 + 1);
}

loc_808828E4:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (r26 & 255);
}

loc_808828F0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80882864;
    }
}

loc_808828F4:
{
    r5 = 0;
    r4 = 0;
    goto loc_80882910;
}

loc_80882900:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 8040), static_cast<uint8_t>(r4));
}

loc_80882910:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r5 & 255);
}

loc_8088291C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80882900;
    }
}

loc_80882920:
{
    r26 = 0;
    goto loc_80882960;
}

loc_80882928:
{
    r0 = (r26 & 255);
    r0 = (r0 * 28);
    r25 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r25 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80882948u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r25 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8088295Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
}

loc_80882960:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (r26 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8088296C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80882928;
    }
}

loc_80882970:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r5 = 0;
    goto loc_808829EC;
}

loc_80882980:
{
    r0 = (r5 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 7916));
    r0 = (r0 * 28);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_80882998:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_808829E8;
    }
}

loc_8088299C:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_808829A4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_808829E8;
    }
}

loc_808829A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_34 & -16);
    r3_addr_20 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_20);
}

loc_808829C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_808829D4;
    }
}

loc_808829C8:
{
}

loc_808829CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_808829D4;
    }
}

loc_808829D0:
{
    r4 = 0;
}

loc_808829D4:
{
}

loc_808829D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808829E8;
    }
}

loc_808829DC:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
}

loc_808829E8:
{
    r5 = (r5 + 1);
}

loc_808829EC:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (r5 & 255);
}

loc_808829F8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80882980;
    }
}

loc_808829FC:
{
    r5 = 0;
    r4 = 0;
    goto loc_80882A18;
}

loc_80882A08:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 7954), static_cast<uint8_t>(r4));
}

loc_80882A18:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r5 & 255);
}

loc_80882A24:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80882A08;
    }
}

loc_80882A28:
{
    r5 = 0;
    goto loc_80882AA4;
}

loc_80882A30:
{
    r3 = (r5 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r3 * 28);
    r3 = (r31 + r3);
    r4 = MemoryInline::FlatRead8((r3 + 18));
}

loc_80882A48:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80882AA0;
    }
}

loc_80882A4C:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_80882A54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80882AA0;
    }
}

loc_80882A58:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_37 & -16);
    r3_addr_23 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_23);
}

loc_80882A70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80882AA0;
    }
}

loc_80882A74:
{
    r0 = MemoryInline::FlatRead8((r31 + 17277));
}

loc_80882A7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80882A90;
    }
}

loc_80882A80:
{
    r3 = (r31 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 8028));
}

loc_80882A8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80882AA0;
    }
}

loc_80882A90:
{
    r4 = (r31 + r4);
    r3 = MemoryInline::FlatRead8((r4 + 7954));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 7954), static_cast<uint8_t>(r0));
}

loc_80882AA0:
{
    r5 = (r5 + 1);
}

loc_80882AA4:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (r5 & 255);
}

loc_80882AB0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80882A30;
    }
}

loc_80882AB4:
{
    r26 = 0;
    goto loc_80882AF8;
}

loc_80882ABC:
{
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_40 & 1020);
    r25 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r25 + 8052));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80882ACC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80882AF4;
    }
}

loc_80882AD0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80882AE0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r25 + 8052));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80882AF4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80882AF4:
{
    r26 = (r26 + 1);
}

loc_80882AF8:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r26 & 255);
}

loc_80882B04:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80882ABC;
    }
}

loc_80882B08:
{
    r5 = 0;
    r4 = 0;
    goto loc_80882B24;
}

loc_80882B14:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 8040), static_cast<uint8_t>(r4));
}

loc_80882B24:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80882B30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80882B14;
    }
}

loc_80882B34:
{
    r3 = MemoryInline::FlatRead32((r31 + 8436));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 8436), r0);
}

loc_80882B40:
{
    r11 = (r1 + 112);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80881994 func_80881994 preserves=true fpr_mask=0x00000000
