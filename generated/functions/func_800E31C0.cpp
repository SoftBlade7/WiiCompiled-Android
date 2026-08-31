#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8011D47C_statefree(uint32_t);
extern "C" uint64_t func_8011D4CC_statefree(uint32_t);
extern "C" uint64_t func_8011E488_statefree(uint32_t);

extern "C" void func_800E31C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_addc_left_0 = 0;
    uint32_t r7_addc_left_1 = 0;
    uint32_t r7_addc_left_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800E31C0;

loc_800E31C0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r31 = 0x80270000u;
    r28 = r3;
    r29 = r4;
    r31 = (r31 + 28752);
    r6 = MemoryInline::FlatRead32((r6 + 1820));
    r30 = r5;
    r5 = r29;
    r4 = (r31 + 7376);
    r3 = 64;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E3204u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26884));
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -26884), r0);
    r0 = MemoryInline::FlatRead32((r6 + 1776));
    r3 = MemoryInline::FlatRead32((r6 + 1780));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E32A8;
    }
}

loc_800E3224:
{
    r0 = (r29 + -4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800E322C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800E3254;
    }
}

loc_800E3230:
{
    r0 = 0;
    r4 = (r31 + 316);
    MemoryInline::FlatWrite32((r6 + 1780), r0);
    r5 = (r31 + 7360);
    r3 = 4;
    MemoryInline::FlatWrite32((r6 + 1776), r0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E3250u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E32A8;
}

loc_800E3254:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = 0x80000000u;
    r5 = 274857984;
    r7 = MemoryInline::FlatRead32((r6 + 248));
    r8 = (r5 + 19923);
    r0 = 30000;
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(30));
    r7 = (r7_rot_1 & 1073741823);
    r5 = (r31 + 7360);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r7)) >> 32));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r7 = (r7_rot_2 & 67108863);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r7 = (r7 * 30000);
    r7_addc_left_1 = r7;
    r7 = (r7_addc_left_1 + r4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (r31 + 7416);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r3);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r6 + 1780), r7);
    r3 = 4;
    MemoryInline::FlatWrite32((r6 + 1776), r0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E32A8u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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

loc_800E32A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_800E32AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E32D0;
    }
}

loc_800E32B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E45DC;
    }
}

loc_800E32B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800E32B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E32C4;
    }
}

loc_800E32BC:
{
    goto loc_800E45DC;
}

loc_800E32C4:
{
    r3 = r30;
    ctx->lr = 0x800E32CCu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E4600u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E45DC;
}

loc_800E32D0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 0;
    r27 = 0;
    MemoryInline::FlatWrite32((r3 + 1780), r0);
    MemoryInline::FlatWrite32((r3 + 1776), r0);
    goto loc_800E33B4;
}

loc_800E32E8:
{
    r3 = r28;
    r4 = r27;
    ctx->lr = 0x800E32F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011E480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r30 = r3;
    r4 = (r31 + 7464);
    r5 = -1;
    ctx->lr = 0x800E3304u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_800E3308:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E3314;
    }
}

loc_800E330C:
{
    r3 = 0;
    goto loc_800E3384;
}

loc_800E3314:
{
    r3 = r30;
    r4 = (r31 + 7476);
    r5 = -1;
    ctx->lr = 0x800E3324u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_800E3328:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E3334;
    }
}

loc_800E332C:
{
    r3 = 0;
    goto loc_800E3384;
}

loc_800E3334:
{
    r3 = r30;
    r4 = (r31 + 504);
    r5 = -1;
    ctx->lr = 0x800E3344u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_800E3348:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E3354;
    }
}

loc_800E334C:
{
    r3 = 0;
    goto loc_800E3384;
}

loc_800E3354:
{
    r3 = r30;
    r4 = (r31 + 492);
    r5 = -1;
    ctx->lr = 0x800E3364u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_800E3368:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E3374;
    }
}

loc_800E336C:
{
    r3 = 0;
    goto loc_800E3384;
}

loc_800E3374:
{
    r3 = r30;
    r4 = (r13 + -32160);
    r5 = 0;
    ctx->lr = 0x800E3384u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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

loc_800E3384:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800E3388:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E33B0;
    }
}

loc_800E338C:
{
    r3 = r28;
    r4 = r30;
    ctx->lr = 0x800E3398u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011E384u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = r27;
    r4 = (r31 + 7488);
    r3 = 1024;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E33ACu;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = (r27 + -1);
}

loc_800E33B0:
{
    r27 = (r27 + 1);
}

loc_800E33B4:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_5337 = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_5337);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011E488u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r3));
}

loc_800E33C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800E32E8;
    }
}

loc_800E33C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_800E33D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4498;
    }
}

loc_800E33D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E33E4;
    }
}

loc_800E33D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800E33DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4260;
    }
}

loc_800E33E0:
{
    goto loc_800E45DC;
}

loc_800E33E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_800E33E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E33F0;
    }
}

loc_800E33EC:
{
    goto loc_800E45DC;
}

loc_800E33F0:
{
    r29 = 0;
    goto loc_800E3454;
}

loc_800E33F8:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x800E3404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011E480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r27 + 1748));
}

loc_800E3414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E3450;
    }
}

loc_800E3418:
{
    // inline leaf 0x8011D474 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8011D474
    r0 = MemoryInline::FlatRead32((r27 + 1748));
}

loc_800E3424:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E3450;
    }
}

loc_800E3428:
{
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead16((r27 + 1744));
}

loc_800E3434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E3450;
    }
}

loc_800E3438:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011D47Cu) && KnownTranslatedCpuCall<0x8011D47Cu>::kAvailable && !KnownTranslatedCpuCall<0x8011D47Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011D47Cu>()) {
        const auto state_free_result_8011D47C_6274 = func_8011D47C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011D47C_6274);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011D47Cu>(ctx);
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
    r0 = MemoryInline::FlatRead16((r27 + 1744));
    r3 = (r3 & 65535);
}

loc_800E344C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_800E3464;
    }
}

loc_800E3450:
{
    r29 = (r29 + 1);
}

loc_800E3454:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_69A2 = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_69A2);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011E488u>(ctx);
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
}

loc_800E3460:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r3))) {
        goto loc_800E33F8;
    }
}

loc_800E3464:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_7057 = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_7057);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011E488u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r3));
}

loc_800E3470:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4240;
    }
}

loc_800E3474:
{
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 48;
    ctx->lr = 0x800E3484u;
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
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 255;
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r5 + 1912));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1748));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead16((r5 + 1744));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    // inline leaf 0x8011D4C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8011D4C4
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011D4CCu) && KnownTranslatedCpuCall<0x8011D4CCu>::kAvailable && !KnownTranslatedCpuCall<0x8011D4CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011D4CCu>()) {
        const auto state_free_result_8011D4CC_7C14 = func_8011D4CC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011D4CC_7C14);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011D4CCu>(ctx);
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
    MemoryInline::FlatWriteRam16((r1 + 30), static_cast<uint16_t>(r3));
    r3 = r30;
    // inline leaf 0x8011D48C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 21));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8011D48C
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = 4;
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r3));
    r3 = (r1 + 56);
    r4 = (r4 + 2216);
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
    InvokeDirectCpu<0x800E941Cu>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 21));
}

loc_800E34EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E3954;
    }
}

loc_800E34F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_800E34F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E394C;
    }
}

loc_800E34FC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800E3500:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800E38DC;
    }
}

loc_800E3504:
{
}

loc_800E3508:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800E385C;
    }
}

loc_800E350C:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800E3528;
    }
}

loc_800E3514:
{
    r3 = 0x80000000u;
    r0 = (r3 + 1);
}

loc_800E3520:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800E3528;
    }
}

loc_800E3524:
{
    r5 = 1;
}

loc_800E3528:
{
}

loc_800E352C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800E385C;
    }
}

loc_800E3530:
{
    r3 = (r4 * 48);
    r0 = (r4 + -1);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
    r3 = (r5 + r3);
    ctr = r0;
}

loc_800E354C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800E385C;
    }
}

loc_800E3550:
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
        goto loc_800E3550;
    }
}

loc_800E385C:
{
    r0 = (r4 * 48);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = (r3 + r0);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800E3870:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E38DC;
    }
}

loc_800E3874:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 12));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r5 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r5 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r5 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r5 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r5 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r5 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r5 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r5 + 100), r0);
    }
    r5 = (r5 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E3874;
    }
}

loc_800E38DC:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 20));
        }
    }
    MemoryInline::FlatWrite32((r4 + 56), r3);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 28));
        }
    }
    MemoryInline::FlatWrite32((r4 + 64), r3);
    MemoryInline::FlatWrite32((r4 + 68), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 36));
        }
    }
    MemoryInline::FlatWrite32((r4 + 72), r3);
    MemoryInline::FlatWrite32((r4 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 44));
        }
    }
    MemoryInline::FlatWrite32((r4 + 80), r3);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 52));
        }
    }
    MemoryInline::FlatWrite32((r4 + 88), r3);
    MemoryInline::FlatWrite32((r4 + 92), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r1 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 60));
        }
    }
    MemoryInline::FlatWrite32((r4 + 96), r3);
    MemoryInline::FlatWrite32((r4 + 100), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_800E394C:
{
    ctx->lr = 0x800E3950u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E73A8u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E45DC;
}

loc_800E3954:
{
    r0 = MemoryInline::FlatRead8((r3 + 21));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800E395C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E3DD0;
    }
}

loc_800E3960:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E7F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_800E3974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E3DC8;
    }
}

loc_800E3978:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800E397C:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800E3D58;
    }
}

loc_800E3980:
{
}

loc_800E3984:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800E3CD8;
    }
}

loc_800E3988:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800E39A4;
    }
}

loc_800E3990:
{
    r3 = 0x80000000u;
    r0 = (r3 + 1);
}

loc_800E399C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800E39A4;
    }
}

loc_800E39A0:
{
    r5 = 1;
}

loc_800E39A4:
{
}

loc_800E39A8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800E3CD8;
    }
}

loc_800E39AC:
{
    r3 = (r4 * 48);
    r0 = (r4 + -1);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_9 & 536870911);
    r3 = (r5 + r3);
    ctr = r0;
}

loc_800E39C8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800E3CD8;
    }
}

loc_800E39CC:
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
        goto loc_800E39CC;
    }
}

loc_800E3CD8:
{
    r0 = (r4 * 48);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = (r3 + r0);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800E3CEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E3D58;
    }
}

loc_800E3CF0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r5 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r5 + 12));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r5 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r5 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r5 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r5 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r5 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r5 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r5 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r5 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r5 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r5 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r5 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r5 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r5 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r5 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r5 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r5 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r5 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r5 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r5 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r5 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r5 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r5 + 100), r0);
    }
    r5 = (r5 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E3CF0;
    }
}

loc_800E3D58:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r1 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r1 + 20));
        }
    }
    MemoryInline::FlatWrite32((r4 + 56), r3);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r1 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r1 + 28));
        }
    }
    MemoryInline::FlatWrite32((r4 + 64), r3);
    MemoryInline::FlatWrite32((r4 + 68), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r1 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r1 + 36));
        }
    }
    MemoryInline::FlatWrite32((r4 + 72), r3);
    MemoryInline::FlatWrite32((r4 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r1 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r1 + 44));
        }
    }
    MemoryInline::FlatWrite32((r4 + 80), r3);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r1 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r1 + 52));
        }
    }
    MemoryInline::FlatWrite32((r4 + 88), r3);
    MemoryInline::FlatWrite32((r4 + 92), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 40u, (r1 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 44u, (r1 + 60));
        }
    }
    MemoryInline::FlatWrite32((r4 + 96), r3);
    MemoryInline::FlatWrite32((r4 + 100), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_800E3DC8:
{
    ctx->lr = 0x800E3DCCu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E73A8u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E45DC;
}

loc_800E3DD0:
{
    r0 = MemoryInline::FlatRead8((r3 + 21));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_800E3DD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E45DC;
    }
}

loc_800E3DDC:
{
    r4 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_800E3DE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4238;
    }
}

loc_800E3DE8:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800E3DEC:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800E41C8;
    }
}

loc_800E3DF0:
{
}

loc_800E3DF4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800E4148;
    }
}

loc_800E3DF8:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800E3E14;
    }
}

loc_800E3E00:
{
    r3 = 0x80000000u;
    r0 = (r3 + 1);
}

loc_800E3E0C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800E3E14;
    }
}

loc_800E3E10:
{
    r5 = 1;
}

loc_800E3E14:
{
}

loc_800E3E18:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800E4148;
    }
}

loc_800E3E1C:
{
    r3 = (r4 * 48);
    r0 = (r4 + -1);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
    r3 = (r5 + r3);
    ctr = r0;
}

loc_800E3E38:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800E4148;
    }
}

loc_800E3E3C:
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
        goto loc_800E3E3C;
    }
}

loc_800E4148:
{
    r0 = (r4 * 48);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = (r3 + r0);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800E415C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E41C8;
    }
}

loc_800E4160:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r5 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r5 + 12));
        }
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r5 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r5 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r5 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r5 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r5 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r5 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r5 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r5 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r5 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r5 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r5 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r5 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r5 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r5 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r5 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r5 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r5 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r5 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r5 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r5 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r5 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r5 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r5 + 100), r0);
    }
    r5 = (r5 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E4160;
    }
}

loc_800E41C8:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r1 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r1 + 20));
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
            r3 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r1 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r1 + 28));
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
            r3 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r1 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r1 + 36));
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
            r3 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r1 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r1 + 44));
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
            r3 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r1 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r1 + 52));
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
            r3 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r1 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r1 + 60));
        }
    }
    MemoryInline::FlatWrite32((r4 + 96), r3);
    MemoryInline::FlatWrite32((r4 + 100), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_800E4238:
{
    ctx->lr = 0x800E423Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E73A8u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E45DC;
}

loc_800E4240:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 1760), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r5 + 1772), r4);
    MemoryInline::FlatWrite32((r5 + 1768), r3);
    goto loc_800E45DC;
}

loc_800E4260:
{
    r3 = 1;
    ctx->lr = 0x800E4268u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E48C8u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x800E426Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E4AD0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_180B0 = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_180B0);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011E488u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800E4278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4468;
    }
}

loc_800E427C:
{
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x800E4288u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011E480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r28 = r3;
    r4 = 0;
    r5 = 48;
    r3 = (r6 + 1592);
    ctx->lr = 0x800E42A0u;
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
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = r28;
    r4 = (r13 + -32160);
    r5 = 0;
    ctx->lr = 0x800E42B4u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r27 + 1592), r3);
    r0 = 255;
    r3 = r28;
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r4 + 1614), static_cast<uint8_t>(r0));
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    // inline leaf 0x8011D474 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8011D474
    MemoryInline::FlatWrite32((r27 + 1596), r3);
    r3 = r28;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011D47Cu) && KnownTranslatedCpuCall<0x8011D47Cu>::kAvailable && !KnownTranslatedCpuCall<0x8011D47Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011D47Cu>()) {
        const auto state_free_result_8011D47C_19181 = func_8011D47C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011D47C_19181);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011D47Cu>(ctx);
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
    MemoryInline::FlatWrite16((r27 + 1604), static_cast<uint16_t>(r3));
    r3 = r28;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    // inline leaf 0x8011D4C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8011D4C4
    MemoryInline::FlatWrite32((r27 + 1600), r3);
    r3 = r28;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011D4CCu) && KnownTranslatedCpuCall<0x8011D4CCu>::kAvailable && !KnownTranslatedCpuCall<0x8011D4CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011D4CCu>()) {
        const auto state_free_result_8011D4CC_19925 = func_8011D4CC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011D4CC_19925);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011D4CCu>(ctx);
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
    MemoryInline::FlatWrite16((r27 + 1606), static_cast<uint16_t>(r3));
    r3 = r28;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    // inline leaf 0x8011D48C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 21));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8011D48C
    MemoryInline::FlatWrite8((r27 + 1615), static_cast<uint8_t>(r3));
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r27 + 1756));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E432C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E4364;
    }
}

loc_800E4330:
{
    r3 = MemoryInline::FlatRead32((r27 + 1924));
    r0 = 0;
    r10 = 0x800E0000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = r3;
    r10 = (r10 + 12736);
    r7 = 20;
    r5 = MemoryInline::FlatRead32((r27 + 1928));
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x800E4360u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011E038u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r27 + 1756), r3);
}

loc_800E4364:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 1756));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E4370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E4384;
    }
}

loc_800E4374:
{
    r3 = 5;
    ctx->lr = 0x800E437Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E2990u>(ctx);
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

loc_800E4380:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E45DC;
    }
}

loc_800E4384:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r29 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(3));
}

loc_800E4390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E442C;
    }
}

loc_800E4394:
{
    r30 = MemoryInline::FlatRead32((r13 + -26864));
    r27 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r28 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_1 = r4;
    r4 = (r4_subfc_min_1 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_1) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r28 + 19923);
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
    ctx->gpr[10] = r10;
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
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r28 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 12));
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
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E442Cu;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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

loc_800E442C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 3;
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 1820), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 1592));
    ctx->lr = 0x800E4448u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800DEDDCu>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r4 + 21));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E4454:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E4460;
    }
}

loc_800E4458:
{
    ctx->lr = 0x800E445Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E2990u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E45DC;
}

loc_800E4460:
{
    ctx->lr = 0x800E4464u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E45DC;
}

loc_800E4468:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 1760), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = 48;
    MemoryInline::FlatWrite32((r6 + 1772), r4);
    r4 = 0;
    MemoryInline::FlatWrite32((r6 + 1768), r3);
    r3 = (r6 + 1592);
    ctx->lr = 0x800E4494u;
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
    goto loc_800E45DC;
}

loc_800E4498:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_1D40B = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_1D40B);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011E488u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800E44A4:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E45B0;
    }
}

loc_800E44AC:
{
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x800E44B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011E480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r30 = r3;
    r4 = 0;
    r5 = 48;
    r3 = (r6 + 1592);
    ctx->lr = 0x800E44D0u;
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
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = r30;
    r4 = (r13 + -32160);
    r5 = 0;
    ctx->lr = 0x800E44E4u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r27 + 1592), r3);
    r0 = 255;
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r4 + 1614), static_cast<uint8_t>(r0));
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    // inline leaf 0x8011D474 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8011D474
    MemoryInline::FlatWrite32((r27 + 1596), r3);
    r3 = r30;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011D47Cu) && KnownTranslatedCpuCall<0x8011D47Cu>::kAvailable && !KnownTranslatedCpuCall<0x8011D47Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011D47Cu>()) {
        const auto state_free_result_8011D47C_1E4EB = func_8011D47C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011D47C_1E4EB);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011D47Cu>(ctx);
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
    MemoryInline::FlatWrite16((r27 + 1604), static_cast<uint16_t>(r3));
    r3 = r30;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    // inline leaf 0x8011D4C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8011D4C4
    MemoryInline::FlatWrite32((r27 + 1600), r3);
    r3 = r30;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8011D4CCu) && KnownTranslatedCpuCall<0x8011D4CCu>::kAvailable && !KnownTranslatedCpuCall<0x8011D4CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011D4CCu>()) {
        const auto state_free_result_8011D4CC_1EC8F = func_8011D4CC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011D4CC_1EC8F);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011D4CCu>(ctx);
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
    MemoryInline::FlatWrite16((r27 + 1606), static_cast<uint16_t>(r3));
    r3 = r30;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    // inline leaf 0x8011D48C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 21));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8011D48C
    MemoryInline::FlatWrite8((r27 + 1615), static_cast<uint8_t>(r3));
    r3 = r30;
    r4 = (r31 + 504);
    r5 = -1;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    ctx->lr = 0x800E4558u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r27 + 21), static_cast<uint8_t>(r3));
    r5 = r29;
    r4 = (r31 + 7512);
    r3 = 1024;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E4570u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x800E4580u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011E480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = (r13 + -32160);
    r5 = 0;
    ctx->lr = 0x800E458Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011D2B0u>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r27 + 2160));
    r9 = (r27 + 2216);
    r5 = MemoryInline::FlatRead32((r27 + 2164));
    r6 = MemoryInline::FlatRead32((r27 + 2168));
    r7 = MemoryInline::FlatRead32((r27 + 2172));
    r8 = MemoryInline::FlatRead32((r27 + 2212));
    r10 = MemoryInline::FlatRead32((r27 + 2220));
    ctx->lr = 0x800E45ACu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800D577Cu>(ctx);
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
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800E45DC;
}

loc_800E45B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 1760), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r5 + 1772), r4);
    r4 = (r31 + 7548);
    MemoryInline::FlatWrite32((r5 + 1768), r3);
    r3 = 1024;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E45DCu;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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

loc_800E45DC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26884));
    r11 = (r1 + 96);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -26884), r0);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
// RECOMP_REGISTRATION base 0x800E31C0 func_800E31C0 preserves=true fpr_mask=0x00000000
