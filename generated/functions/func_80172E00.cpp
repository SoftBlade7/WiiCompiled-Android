#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80172E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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

    goto loc_80172E00;

loc_80172E00:
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
    r30 = MemoryInline::FlatRead32((r2 + -26840));
    r31 = 0x80340000u;
    r31 = (r31 + 16528);
    r27 = r3;
    r0 = MemoryInline::FlatRead32((r30 + 1532));
    r28 = r4;
    r29 = (r31 + 0);
}

loc_80172E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80172E3C;
    }
}

loc_80172E38:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016EE78u>(ctx);
}

loc_80172E3C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1529));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80172E44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80172E58;
    }
}

loc_80172E48:
{
    r4 = r30;
    r3 = (r31 + 128);
    r5 = 1536;
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
}

loc_80172E58:
{
    r4 = (r27 + r28);
    r3 = 0;
    r4 = (r4 + -4);
    MemoryInline::FlatWriteRam32(r29, r27);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r29 + 4), r4);
    MemoryInline::FlatWriteRam32((r29 + 8), r28);
    MemoryInline::FlatWriteRam32((r29 + 28), r3);
    MemoryInline::FlatWriteRam32((r29 + 20), r27);
    MemoryInline::FlatWriteRam32((r29 + 24), r27);
    MemoryInline::FlatWrite8((r30 + 1528), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016E654u>(ctx);
    r3 = (r31 + 1664);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016CF10u>(ctx);
    r3 = (r31 + 0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016C94Cu>(ctx);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016E6B0u>(ctx);
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

// RECOMP_GUEST_ABI gpr_read=0xF800007F gpr_write=0xF800087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80172E00 func_80172E00 preserves=true fpr_mask=0x00000000
