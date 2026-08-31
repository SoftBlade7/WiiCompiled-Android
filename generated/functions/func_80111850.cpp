#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80111850(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

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
    uint32_t xer = ctx->xer;

    goto loc_80111850;

loc_80111850:
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80111868:
{
    r31 = r3;
    r27 = r4;
    r28 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111880;
    }
}

loc_80111878:
{
    r3 = 0;
    goto loc_801119A8;
}

loc_80111880:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80111884:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111890;
    }
}

loc_80111888:
{
    r3 = 0;
    goto loc_801119A8;
}

loc_80111890:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80111894:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_801118A0;
    }
}

loc_80111898:
{
    r3 = 0;
    goto loc_801119A8;
}

loc_801118A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801118A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801118B4;
    }
}

loc_801118AC:
{
    r3 = 0;
    goto loc_801119A8;
}

loc_801118B4:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801118C4;
    }
}

loc_801118B8:
{
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r28 = r3;
}

loc_801118C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r29 = (r0 + r28);
    goto loc_80111970;
}

loc_801118D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801118D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801118FC;
    }
}

loc_801118DC:
{
    r4 = MemoryInline::FlatRead32(r31);
    r5 = 1;
    r0 = 2;
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 288), r5);
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    goto loc_801119A8;
}

loc_801118FC:
{
}

loc_80111900:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80111910;
    }
}

loc_80111908:
{
    r0 = 0;
    goto loc_8011194C;
}

loc_80111910:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111914:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80111920;
    }
}

loc_80111918:
{
    r0 = 0;
    goto loc_8011194C;
}

loc_80111920:
{
    r30 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = r30;
    ctx->lr = 0x80111930u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80111934:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80111940;
    }
}

loc_80111938:
{
    r0 = 0;
    goto loc_8011194C;
}

loc_80111940:
{
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 8), r30);
}

loc_8011194C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111950:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111970;
    }
}

loc_80111954:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 288), r0);
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    goto loc_801119A8;
}

loc_80111970:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r3));
}

loc_80111978:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801118D0;
    }
}

loc_8011197C:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = r27;
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r5 = r28;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 12), r29);
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = 1;
    r4_addr_1 = (r4 + r29);
    MemoryInline::FlatWrite8(r4_addr_1, static_cast<uint8_t>(r0));
}

loc_801119A8:
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
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xF800187B gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80111850 func_80111850 preserves=true fpr_mask=0x00000000
