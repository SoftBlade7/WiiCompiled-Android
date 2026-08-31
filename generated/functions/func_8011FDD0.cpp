#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011FDD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8011FDD0;

loc_8011FDD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r28 = r4;
    r29 = r5;
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r31 = r3;
    r30 = 0;
    goto loc_8011FEE4;
}

loc_8011FE04:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = r30;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl2_0x800EF4B0:
{
}

loc_inl2_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl2_0x800EF4C4;
    }
}

loc_inl2_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x800EF4CC;
    }
}

loc_inl2_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl2_cont_800EF4B0;
}

loc_inl2_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl2_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8011FE18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011FE38;
    }
}

loc_8011FE1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011FE2C;
    }
}

loc_8011FE20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011FE24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011FE50;
    }
}

loc_8011FE28:
{
    goto loc_8011FEC8;
}

loc_8011FE2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8011FE30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011FEC8;
    }
}

loc_8011FE34:
{
    goto loc_8011FE44;
}

loc_8011FE38:
{
    r28 = (r28 + 1);
    r29 = (r29 + -1);
    goto loc_8011FED0;
}

loc_8011FE44:
{
    r28 = (r28 + 2);
    r29 = (r29 + -2);
    goto loc_8011FED0;
}

loc_8011FE50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_8011FE54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011FE60;
    }
}

loc_8011FE58:
{
    r3 = 0;
    goto loc_8011FEF0;
}

loc_8011FE60:
{
    r0 = MemoryInline::FlatRead8(r28);
    r28 = (r28 + 1);
    r29 = (r29 + -1);
}

loc_8011FE70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8011FED0;
    }
}

loc_8011FE74:
{
    r3 = r28;
    r4 = 0;
    ctr = r29;
}

loc_8011FE84:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_8011FEA8;
    }
}

loc_8011FE88:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011FE9C;
    }
}

loc_8011FE94:
{
    r0 = (r4 + 1);
    goto loc_8011FEAC;
}

loc_8011FE9C:
{
    r4 = (r4 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8011FE88;
    }
}

loc_8011FEA8:
{
    r0 = -1;
}

loc_8011FEAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8011FEB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011FEBC;
    }
}

loc_8011FEB4:
{
    r3 = 0;
    goto loc_8011FEF0;
}

loc_8011FEBC:
{
    r28 = (r28 + r0);
    r29 = (r29 - r0);
    goto loc_8011FED0;
}

loc_8011FEC8:
{
    r3 = 0;
    goto loc_8011FEF0;
}

loc_8011FED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8011FED4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011FEE0;
    }
}

loc_8011FED8:
{
    r3 = 0;
    goto loc_8011FEF0;
}

loc_8011FEE0:
{
    r30 = (r30 + 1);
}

loc_8011FEE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r31));
}

loc_8011FEE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8011FE04;
    }
}

loc_8011FEEC:
{
    r3 = 1;
}

loc_8011FEF0:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800003B gpr_write=0xF800081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011FDD0 func_8011FDD0 preserves=true fpr_mask=0x00000000
