#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DFB04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_10 = 0;
    uint32_t r3_ca_11 = 0;
    uint32_t r3_ca_12 = 0;
    uint32_t r3_ca_13 = 0;
    uint32_t r3_ca_14 = 0;
    uint32_t r3_ca_15 = 0;
    uint32_t r3_ca_16 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_ca_8 = 0;
    uint32_t r3_ca_9 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_10 = 0;
    uint32_t r3_not_11 = 0;
    uint32_t r3_not_12 = 0;
    uint32_t r3_not_13 = 0;
    uint32_t r3_not_14 = 0;
    uint32_t r3_not_15 = 0;
    uint32_t r3_not_16 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_not_7 = 0;
    uint32_t r3_not_8 = 0;
    uint32_t r3_not_9 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_10 = 0;
    uint32_t r3_subfe_rb_11 = 0;
    uint32_t r3_subfe_rb_12 = 0;
    uint32_t r3_subfe_rb_13 = 0;
    uint32_t r3_subfe_rb_14 = 0;
    uint32_t r3_subfe_rb_15 = 0;
    uint32_t r3_subfe_rb_16 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r3_subfe_rb_4 = 0;
    uint32_t r3_subfe_rb_5 = 0;
    uint32_t r3_subfe_rb_6 = 0;
    uint32_t r3_subfe_rb_7 = 0;
    uint32_t r3_subfe_rb_8 = 0;
    uint32_t r3_subfe_rb_9 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_10 = 0;
    uint32_t r4_subfc_min_11 = 0;
    uint32_t r4_subfc_min_12 = 0;
    uint32_t r4_subfc_min_13 = 0;
    uint32_t r4_subfc_min_14 = 0;
    uint32_t r4_subfc_min_15 = 0;
    uint32_t r4_subfc_min_16 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
    uint32_t r4_subfc_min_4 = 0;
    uint32_t r4_subfc_min_5 = 0;
    uint32_t r4_subfc_min_6 = 0;
    uint32_t r4_subfc_min_7 = 0;
    uint32_t r4_subfc_min_8 = 0;
    uint32_t r4_subfc_min_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_14 = 0;
    uint32_t r7_rot_15 = 0;
    uint32_t r7_rot_16 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800DFB04;

loc_800DFB04:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_800DFB1C:
{
    r31 = 0x80270000u;
    r31 = (r31 + 28752);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DFECC;
    }
}

loc_800DFB28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800DFB3C;
    }
}

loc_800DFB2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800DFB30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DFB48;
    }
}

loc_800DFB34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800DFDFC;
    }
}

loc_800DFB38:
{
    goto loc_800E0970;
}

loc_800DFB3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_800DFB40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E0970;
    }
}

loc_800DFB44:
{
    goto loc_800E0014;
}

loc_800DFB48:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 1688));
}

loc_800DFB54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFB64;
    }
}

loc_800DFB58:
{
    r0 = MemoryInline::FlatRead32((r3 + 1692));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(14));
}

loc_800DFB60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DFC6C;
    }
}

loc_800DFB64:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 1752), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 1692));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(14));
}

loc_800DFB80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DFC38;
    }
}

loc_800DFB84:
{
    r30 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_800DFB8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DFC28;
    }
}

loc_800DFB90:
{
    r28 = MemoryInline::FlatRead32((r13 + -26864));
    r27 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r29 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_5 = r4;
    r4 = (r4_subfc_min_5 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_5) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r29 + 19923);
    r3_subfe_rb_5 = r3;
    r3_not_5 = ~(r28);
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r3_not_5 + r3_subfe_rb_5);
    r3 = (r3 + r3_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_9 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_5 & 67108863);
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
    r0 = (r29 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r9 = (r5 + -31457);
    r3_addr_5 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_5);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
    r3 = 1;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r31 + 280);
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
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_5 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800DFC28u;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800DFC28:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 1820), r0);
    ctx->lr = 0x800DFC38u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8138u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800DFC38:
{
    r4 = (r31 + 6656);
    r3 = 64;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800DFC48u;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    r4 = 0;
    r5 = 48;
    MemoryInline::FlatWrite32((r3 + 1692), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = (r3 + 1696);
    ctx->lr = 0x800DFC68u;
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
    goto loc_800E0970;
}

loc_800DFC6C:
{
    r4 = (r31 + 6680);
    r3 = 64;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800DFC7Cu;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 1752), r0);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r5 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800DFC9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DFCBC;
    }
}

loc_800DFCA0:
{
    r0 = MemoryInline::FlatRead32((r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800DFCA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DFCBC;
    }
}

loc_800DFCAC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r5 + 2204), r4);
    MemoryInline::FlatWrite32((r5 + 2200), r3);
}

loc_800DFCBC:
{
    r3 = MemoryInline::FlatRead32((r5 + 16));
    ctx->lr = 0x800DFCC4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F240u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_800DFCD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800DFCDC;
    }
}

loc_800DFCD4:
{
    r0 = MemoryInline::FlatRead32((r3 + 1592));
    MemoryInline::FlatWrite32((r3 + 1920), r0);
}

loc_800DFCDC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r30 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(17));
}

loc_800DFCE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DFD84;
    }
}

loc_800DFCEC:
{
    r27 = MemoryInline::FlatRead32((r13 + -26864));
    r28 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r29 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_3 = r4;
    r4 = (r4_subfc_min_3 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_3) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r29 + 19923);
    r3_subfe_rb_3 = r3;
    r3_not_3 = ~(r27);
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r3_subfe_rb_3);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_5 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_3 & 67108863);
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
    r0 = (r29 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 68));
    r9 = (r5 + -31457);
    r3_addr_3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_3);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r3 = 1;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r31 + 280);
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
    ctx->lr = 0x800DFD84u;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800DFD84:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 17;
    r0 = 0;
    r28 = 1;
    MemoryInline::FlatWrite32((r3 + 1820), r4);
    r27 = 48;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 1872), r0);
    goto loc_800DFDD4;
}

loc_800DFDA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800DFDAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800DFDBC;
    }
}

loc_800DFDB0:
{
    r3 = (r3 + r27);
    r3 = (r3 + 56);
    goto loc_800DFDC0;
}

loc_800DFDBC:
{
    r3 = 0;
}

loc_800DFDC0:
{
    r3 = MemoryInline::FlatRead8((r3 + 22));
    r4 = 1;
    ctx->lr = 0x800DFDCCu;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = (r27 + 48);
    r28 = (r28 + 1);
}

loc_800DFDD4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800DFDE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800DFDA8;
    }
}

loc_800DFDE4:
{
    r3 = MemoryInline::FlatRead8((r3 + 1614));
    r4 = 1;
    ctx->lr = 0x800DFDF0u;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    goto loc_800E0970;
}

loc_800DFDFC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r30 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_800DFE08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DFEA4;
    }
}

loc_800DFE0C:
{
    r27 = MemoryInline::FlatRead32((r13 + -26864));
    r28 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r29 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_1 = r4;
    r4 = (r4_subfc_min_1 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_1) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r29 + 19923);
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r27);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_1 & 67108863);
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
    r0 = (r29 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r9 = (r5 + -31457);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_1);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r3 = 1;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r31 + 280);
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
    ctx->lr = 0x800DFEA4u;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800DFEA4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 1820), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_800DFEBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E0970;
    }
}

loc_800DFEC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 1592));
    MemoryInline::FlatWrite32((r3 + 1920), r0);
    goto loc_800E0970;
}

loc_800DFECC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r30 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_800DFED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DFF74;
    }
}

loc_800DFEDC:
{
    r27 = MemoryInline::FlatRead32((r13 + -26864));
    r28 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r29 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_13 = r4;
    r4 = (r4_subfc_min_13 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_13) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r29 + 19923);
    r3_subfe_rb_13 = r3;
    r3_not_13 = ~(r27);
    r3_ca_13 = (xer >> 29) & 1u;
    r3 = (r3_not_13 + r3_subfe_rb_13);
    r3 = (r3 + r3_ca_13);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_13)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_13)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_13)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_28 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_13 & 67108863);
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
    r0 = (r29 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r9 = (r5 + -31457);
    r3_addr_13 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_13);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_30 & 1);
    r3 = 1;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r31 + 280);
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
    r7_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_13 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800DFF74u;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800DFF74:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r29 = 1;
    MemoryInline::FlatWrite32((r3 + 1820), r29);
    ctx->lr = 0x800DFF84u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8138u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_800DFF88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DFFC0;
    }
}

loc_800DFF8C:
{
    r4 = (r31 + 6656);
    r3 = 64;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800DFF9Cu;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    r4 = 0;
    r5 = 48;
    MemoryInline::FlatWrite32((r3 + 1692), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = (r3 + 1696);
    ctx->lr = 0x800DFFBCu;
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
    goto loc_800E0970;
}

loc_800DFFC0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 21));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800DFFE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800DFFF4;
    }
}

loc_800DFFE4:
{
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 1912));
    MemoryInline::FlatWrite32((r3 + 1752), r0);
}

loc_800DFFF4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1830), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r5 + 1908), r4);
    MemoryInline::FlatWrite32((r5 + 1904), r3);
    goto loc_800E0970;
}

loc_800E0014:
{
    r4 = (r31 + 6728);
    r3 = 64;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E0024u;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r3 + 1785), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r5 + 20));
}

loc_800E0048:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800E00EC;
    }
}

loc_800E004C:
{
    r6 = MemoryInline::FlatRead32((r5 + 1592));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800E0054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E05F8;
    }
}

loc_800E0058:
{
    r0 = MemoryInline::FlatRead32((r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_800E0060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E00D4;
    }
}

loc_800E0064:
{
    r3 = (r0 * 48);
    r0 = MemoryInline::FlatRead32((r5 + 1596));
    r4 = (r5 + r3);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 56), r6);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 60), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1600));
    r0 = MemoryInline::FlatRead32((r5 + 1604));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 68), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1608));
    r0 = MemoryInline::FlatRead32((r5 + 1612));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 76), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1616));
    r0 = MemoryInline::FlatRead32((r5 + 1620));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 84), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1624));
    r0 = MemoryInline::FlatRead32((r5 + 1628));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 92), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1632));
    r0 = MemoryInline::FlatRead32((r5 + 1636));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 100), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 48), r0);
}

loc_800E00D4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 0;
    r5 = 48;
    r3 = (r3 + 1592);
    ctx->lr = 0x800E00E8u;
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
    goto loc_800E05F8;
}

loc_800E00EC:
{
    r4 = MemoryInline::FlatRead32((r5 + 48));
}

loc_800E00F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_800E0568;
    }
}

loc_800E00F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_800E00FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E0550;
    }
}

loc_800E0100:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800E0104:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800E04E0;
    }
}

loc_800E0108:
{
}

loc_800E010C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800E0460;
    }
}

loc_800E0110:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800E012C;
    }
}

loc_800E0118:
{
    r3 = 0x80000000u;
    r0 = (r3 + 1);
}

loc_800E0124:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800E012C;
    }
}

loc_800E0128:
{
    r6 = 1;
}

loc_800E012C:
{
}

loc_800E0130:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800E0460;
    }
}

loc_800E0134:
{
    r3 = (r4 * 48);
    r0 = (r4 + -1);
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_14 & 536870911);
    r3 = (r6 + r3);
    ctr = r0;
}

loc_800E0150:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800E0460;
    }
}

loc_800E0154:
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
        goto loc_800E0154;
    }
}

loc_800E0460:
{
    r0 = (r4 * 48);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r6 = (r3 + r0);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800E0474:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E04E0;
    }
}

loc_800E0478:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r6 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r6 + 12));
        }
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r6 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r6 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r6 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r6 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r6 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r6 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r6 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r6 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r6 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r6 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r6 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r6 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r6 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r6 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r6 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r6 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r6 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r6 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r6 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r6 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r6 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r6 + 100), r0);
    }
    r6 = (r6 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E0478;
    }
}

loc_800E04E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    guest_range_4 = MemoryInline::ResolveRangeHost((r5 + 1592), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r5 + 1592));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r5 + 1596));
        }
    }
    MemoryInline::FlatWrite32((r4 + 56), r3);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r5 + 1600));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r5 + 1604));
        }
    }
    MemoryInline::FlatWrite32((r4 + 64), r3);
    MemoryInline::FlatWrite32((r4 + 68), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r5 + 1608));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r5 + 1612));
        }
    }
    MemoryInline::FlatWrite32((r4 + 72), r3);
    MemoryInline::FlatWrite32((r4 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r5 + 1616));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r5 + 1620));
        }
    }
    MemoryInline::FlatWrite32((r4 + 80), r3);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r5 + 1624));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r5 + 1628));
        }
    }
    MemoryInline::FlatWrite32((r4 + 88), r3);
    MemoryInline::FlatWrite32((r4 + 92), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r5 + 1632));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r5 + 1636));
        }
    }
    MemoryInline::FlatWrite32((r4 + 96), r3);
    MemoryInline::FlatWrite32((r4 + 100), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_800E0550:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 0;
    r5 = 48;
    r3 = (r3 + 1592);
    ctx->lr = 0x800E0564u;
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
    goto loc_800E05F8;
}

loc_800E0568:
{
    r6 = MemoryInline::FlatRead32((r5 + 1640));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800E0570:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E05F8;
    }
}

loc_800E0574:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_800E0578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E05EC;
    }
}

loc_800E057C:
{
    r3 = (r4 * 48);
    r0 = MemoryInline::FlatRead32((r5 + 1644));
    r4 = (r5 + r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r4 + 56), r6);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r4 + 60), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1648));
    r0 = MemoryInline::FlatRead32((r5 + 1652));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r4 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r4 + 68), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1656));
    r0 = MemoryInline::FlatRead32((r5 + 1660));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r4 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r4 + 76), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1664));
    r0 = MemoryInline::FlatRead32((r5 + 1668));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r4 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r4 + 84), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1672));
    r0 = MemoryInline::FlatRead32((r5 + 1676));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r4 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r4 + 92), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 1680));
    r0 = MemoryInline::FlatRead32((r5 + 1684));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r4 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r4 + 100), r0);
    }
    r3 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 48), r0);
}

loc_800E05EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1640), r0);
}

loc_800E05F8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2197), static_cast<uint8_t>(r0));
    r28 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r28 + 1920));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r27 = (r27_rot_1 & 134217727);
    ctx->lr = 0x800E0618u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CEB6Cu>(ctx);
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32((r28 + 2160));
    r7 = r3;
    r5 = r27;
    r8 = MemoryInline::FlatRead32((r28 + 2164));
    r3 = 0;
    r4 = 0;
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x800E063Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -26876));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E0644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E0650;
    }
}

loc_800E0648:
{
    ctx->lr = 0x800E064Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011A7C4u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E0658;
}

loc_800E0650:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -26872), r0);
}

loc_800E0658:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800E0664:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E07C8;
    }
}

loc_800E0668:
{
    r6 = MemoryInline::FlatRead8((r3 + 23));
    r3 = (r1 + 20);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = (r6 + 1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E0684u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r1 + 20);
    r5 = (r1 + 72);
    r3 = (r13 + -32176);
    r6 = 47;
    ctx->lr = 0x800E0698u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CDC98u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = (r1 + 20);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = MemoryInline::FlatRead32((r6 + 48));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E06B4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r1 + 20);
    r5 = (r1 + 72);
    r3 = (r13 + -32172);
    r6 = 47;
    ctx->lr = 0x800E06C8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CDCF0u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 20);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = 90;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E06E0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r1 + 20);
    r5 = (r1 + 72);
    r3 = (r13 + -32168);
    r6 = 47;
    ctx->lr = 0x800E06F4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CDCF0u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r1 + 72);
    r3 = -1;
    r5 = 0;
    ctx->lr = 0x800E0704u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CEC74u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x800E0708u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E27ACu>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800E070C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E0994;
    }
}

loc_800E0710:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r30 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(12));
}

loc_800E071C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E07B8;
    }
}

loc_800E0720:
{
    r27 = MemoryInline::FlatRead32((r13 + -26864));
    r28 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r29 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_8 = r4;
    r4 = (r4_subfc_min_8 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_8) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r29 + 19923);
    r3_subfe_rb_8 = r3;
    r3_not_8 = ~(r27);
    r3_ca_8 = (xer >> 29) & 1u;
    r3 = (r3_not_8 + r3_subfe_rb_8);
    r3 = (r3 + r3_ca_8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_8)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_8)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_8)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_19 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_8 & 67108863);
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
    r0 = (r29 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 48));
    r9 = (r5 + -31457);
    r3_addr_8 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_8);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & 1);
    r3 = 1;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r31 + 280);
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
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_8 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E07B8u;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800E07B8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 1820), r0);
    goto loc_800E0918;
}

loc_800E07C8:
{
    r6 = MemoryInline::FlatRead8((r3 + 23));
    r3 = (r1 + 8);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = (r6 + 1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E07E4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r1 + 8);
    r5 = (r1 + 32);
    r3 = (r13 + -32176);
    r6 = 47;
    ctx->lr = 0x800E07F8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CDC98u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = (r1 + 8);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = MemoryInline::FlatRead32((r6 + 48));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E0814u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r1 + 8);
    r5 = (r1 + 32);
    r3 = (r13 + -32172);
    r6 = 47;
    ctx->lr = 0x800E0828u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CDCF0u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = 90;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E0840u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r1 + 8);
    r5 = (r1 + 32);
    r3 = (r13 + -32168);
    r6 = 47;
    ctx->lr = 0x800E0854u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CDCF0u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r1 + 32);
    r3 = 2;
    r5 = 0;
    ctx->lr = 0x800E0864u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CEC74u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r29 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_800E0870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E090C;
    }
}

loc_800E0874:
{
    r27 = MemoryInline::FlatRead32((r13 + -26864));
    r28 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r30 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_10 = r4;
    r4 = (r4_subfc_min_10 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_10) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r30 + 19923);
    r3_subfe_rb_10 = r3;
    r3_not_10 = ~(r27);
    r3_ca_10 = (xer >> 29) & 1u;
    r3 = (r3_not_10 + r3_subfe_rb_10);
    r3 = (r3 + r3_ca_10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_10)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_10)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_10)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_23 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_10 & 67108863);
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
    r0 = (r30 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r9 = (r5 + -31457);
    r3_addr_10 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_10);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_25 & 1);
    r3 = 1;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r31 + 280);
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
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_10 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E090Cu;
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
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800E090C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 1820), r0);
}

loc_800E0918:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 0;
    r27 = 0;
    r28 = 0;
    MemoryInline::FlatWrite32((r3 + 1920), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r3 + 1826), static_cast<uint8_t>(r0));
    goto loc_800E0960;
}

loc_800E0938:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_800E093C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E094C;
    }
}

loc_800E0940:
{
    r3 = (r3 + r28);
    r3 = (r3 + 56);
    goto loc_800E0950;
}

loc_800E094C:
{
    r3 = 0;
}

loc_800E0950:
{
    r3 = MemoryInline::FlatRead8((r3 + 22));
    ctx->lr = 0x800E0958u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8D74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r28 = (r28 + 48);
    r27 = (r27 + 1);
}

loc_800E0960:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_800E096C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800E0938;
    }
}

loc_800E0970:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 1756));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800E097C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E0994;
    }
}

loc_800E0980:
{
    ctx->lr = 0x800E0984u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011E3FCu>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    MemoryInline::FlatWrite32((r3 + 1780), r0);
    MemoryInline::FlatWrite32((r3 + 1776), r0);
}

loc_800E0994:
{
    r11 = (r1 + 144);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x800DFB04 func_800DFB04 preserves=true fpr_mask=0x00000000
