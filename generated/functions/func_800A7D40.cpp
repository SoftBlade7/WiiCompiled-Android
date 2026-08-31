#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A7D40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A7D40;

loc_800A7D40:
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
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r27 + 291));
    r31 = r3;
    r29 = 0;
}

loc_800A7D6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A7D74;
    }
}

loc_800A7D70:
{
    r29 = 1;
}

loc_800A7D74:
{
    r0 = MemoryInline::FlatRead8((r27 + 293));
}

loc_800A7D7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A7D84;
    }
}

loc_800A7D80:
{
    r29 = 1;
}

loc_800A7D84:
{
    r0 = MemoryInline::FlatRead8((r27 + 292));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_800A7D8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A7DD4;
    }
}

loc_800A7D90:
{
    r30 = r27;
    r28 = 0;
    goto loc_800A7DC4;
}

loc_800A7D9C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2932));
}

loc_800A7DA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A7DBC;
    }
}

loc_800A7DA8:
{
    r3 = MemoryInline::FlatRead32((r30 + 2936));
}

loc_800A7DB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A7DBC;
    }
}

loc_800A7DB4:
{
    r4 = r29;
    // inline leaf 0x800AA820 (8 guest instruction(s))
}

loc_inl1_0x800AA820:
{
    r0 = MemoryInline::FlatRead8((r3 + 159));
}

loc_inl1_0x800AA828:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800AA82C:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWrite8((r3 + 159), static_cast<uint8_t>(r4));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_800AA820;
}

loc_inl1_return:
{
}

loc_inl1_cont_800AA820:
{
    // end of inlined leaf 0x800AA820
}

loc_800A7DBC:
{
    r30 = (r30 + 56);
    r28 = (r28 + 1);
}

loc_800A7DC4:
{
    r0 = MemoryInline::FlatRead32((r27 + 2088));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800A7DCC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A7D9C;
    }
}

loc_800A7DD0:
{
    MemoryInline::FlatWrite8((r27 + 292), static_cast<uint8_t>(r29));
}

loc_800A7DD4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800001B gpr_write=0xF800081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A7D40 func_800A7D40 preserves=true fpr_mask=0x00000000
