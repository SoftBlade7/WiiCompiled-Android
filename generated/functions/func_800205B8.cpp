#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800205B8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800205B8;

loc_800205B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800205C4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800205D4;
    }
}

loc_800205CC:
{
    r3 = 1795;
    goto loc_80020618;
}

loc_800205D4:
{
    r5 = 0x802A0000u;
    r7 = 0x802A0000u;
    r5 = (r5 + 25912);
    r8 = 1;
    r0 = MemoryInline::FlatRead32((r5 + 504));
    r6 = (r7 + 25556);
    MemoryInline::FlatWriteRam32((r6 + 4), r8);
    r0 = (r0 | 1024);
    MemoryInline::FlatWriteRam32((r6 + 12), r3);
    MemoryInline::FlatWriteRam32((r6 + 16), r4);
    MemoryInline::FlatWriteRam32((r7 + 25556), r8);
    MemoryInline::FlatWriteRam32((r5 + 504), r0);
}

loc_8002060C:
{
    r3 = 0;
    // inline leaf 0x8002083C (4 guest instruction(s))
    r4 = 0x802A0000u;
    r4 = (r4 + 25744);
    MemoryInline::FlatWriteRam32((r4 + 152), r3);
    // end of inlined leaf 0x8002083C
    r3 = 0;
}

loc_80020618:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800205B8 func_800205B8 preserves=true fpr_mask=0x00000000
