#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005ADC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

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

    goto loc_8005ADC0;

loc_8005ADC0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = MemoryInline::FlatRead32((r3 + 44));
    r27 = r3;
    r28 = r4;
    r30 = 0;
    r31 = MemoryInline::FlatRead16((r5 + 34));
    r29 = 0;
}

loc_8005ADF0:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_8005AE8C;
    }
}

loc_8005ADF4:
{
    goto loc_8005AE80;
}

loc_8005ADF8:
{
    r3 = MemoryInline::FlatRead32((r27 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8005AE04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005AE10;
    }
}

loc_8005AE08:
{
    r0 = (r3 + r0);
    goto loc_8005AE14;
}

loc_8005AE10:
{
    r0 = 0;
}

loc_8005AE14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005AE18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005AE40;
    }
}

loc_8005AE1C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
    r3 = (r3_rot_2 & 1048560);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005AE2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005AE38;
    }
}

loc_8005AE30:
{
    r5 = (r0 + r3);
    goto loc_8005AE44;
}

loc_8005AE38:
{
    r5 = 0;
    goto loc_8005AE44;
}

loc_8005AE40:
{
    r5 = 0;
}

loc_8005AE44:
{
    r0 = MemoryInline::FlatRead32(r5);
    r3 = r28;
    r4 = (r1 + 8);
    r5 = (r0 + r5);
    r0 = (r5 + -4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8005AE60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8005AE64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005AE7C;
    }
}

loc_8005AE68:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r30 = 1;
    r3 = MemoryInline::FlatRead32((r27 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_2, static_cast<uint16_t>(r29));
}

loc_8005AE7C:
{
    r29 = (r29 + 1);
}

loc_8005AE80:
{
    r0 = (r29 & 65535);
}

loc_8005AE88:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r31))) {
        goto loc_8005ADF8;
    }
}

loc_8005AE8C:
{
    r3 = r27;
    r4 = 4;
    r5 = 1;
    // inline leaf 0x80060570 (10 guest instruction(s))
}

loc_inl1_0x80060570:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_inl1_0x80060574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80060588;
    }
}

loc_inl1_0x80060578:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_inl1_cont_80060570;
}

loc_inl1_0x80060588:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_inl1_cont_80060570:
{
    // end of inlined leaf 0x80060570
    r11 = (r1 + 48);
    r3 = r30;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xF80001FB gpr_write=0xF80009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005ADC0 func_8005ADC0 preserves=true fpr_mask=0x00000000
