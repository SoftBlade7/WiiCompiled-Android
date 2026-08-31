#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078235C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8078235C;

loc_8078235C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = MemoryInline::FlatRead32((r3 + 284));
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_80782374:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r10));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80782390;
    }
}

loc_80782388:
{
    r11 = 0;
    goto loc_80782398;
}

loc_80782390:
{
    r0 = MemoryInline::FlatRead32(r11);
    MemoryInline::FlatWrite32((r3 + 284), r0);
}

loc_80782398:
{
    MemoryInline::FlatWrite32(r11, r4);
    r4 = r11;
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 + 292);
    MemoryInline::FlatWrite32((r11 + 4), r5);
    r5 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r11 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWrite32((r11 + 12), r5);
    r5 = MemoryInline::FlatRead8((r1 + 28));
    MemoryInline::FlatWrite32((r11 + 16), r0);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite8((r11 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r11 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AEF80u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8078235C func_8078235C preserves=true fpr_mask=0x00000000
