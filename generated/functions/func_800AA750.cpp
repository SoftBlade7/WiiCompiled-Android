#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AA750(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800AA750;

loc_800AA750:
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
    r0 = MemoryInline::FlatRead8((r3 + 158));
    r27 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800AA770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AA7F8;
    }
}

loc_800AA774:
{
    r29 = r27;
    r30 = 0;
    goto loc_800AA7E4;
}

loc_800AA780:
{
    r28 = r29;
    r31 = 0;
    goto loc_800AA7D0;
}

loc_800AA78C:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
}

loc_800AA794:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800AA7C8;
    }
}

loc_800AA798:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0;
}

loc_800AA7A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800AA7B8;
    }
}

loc_800AA7A8:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
}

loc_800AA7B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800AA7B8;
    }
}

loc_800AA7B4:
{
    r4 = 1;
}

loc_800AA7B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800AA7BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AA7C8;
    }
}

loc_800AA7C0:
{
    r4 = 0;
    ctx->lr = 0x800AA7C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80127DB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_800AA7C8:
{
    r28 = (r28 + 4);
    r31 = (r31 + 1);
}

loc_800AA7D0:
{
    r0 = MemoryInline::FlatRead32((r27 + 144));
}

loc_800AA7D8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_800AA78C;
    }
}

loc_800AA7DC:
{
    r29 = (r29 + 16);
    r30 = (r30 + 1);
}

loc_800AA7E4:
{
    r0 = MemoryInline::FlatRead32((r27 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_800AA7EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AA780;
    }
}

loc_800AA7F0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 158), static_cast<uint8_t>(r0));
}

loc_800AA7F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 160), static_cast<uint8_t>(r0));
    r11 = (r1 + 32);
    MemoryInline::FlatWrite8((r27 + 159), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r27 + 157), static_cast<uint8_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0xF800001B gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AA750 func_800AA750 preserves=true fpr_mask=0x00000000
