#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A72AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A72AC;

loc_807A72AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r4 = 0x809C0000u;
    r4 = (r4 + 12104);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 * 116);
    r5 = (r5 & -9);
    r5 = (r5 | 4);
    MemoryInline::FlatWrite32((r3 + 120), r5);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A72DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7310;
    }
}

loc_807A72E0:
{
    r6 = 0x808D0000u;
    r0 = (r5 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A72E8:
{
    r6 = (r6 + 7432);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7310;
    }
}

loc_807A7304:
{
    MemoryInline::FlatWrite32((r3 + 360), r5);
    MemoryInline::FlatWrite32((r3 + 364), r4);
    MemoryInline::FlatWrite32((r3 + 368), r0);
}

loc_807A7310:
{
    r7 = 0x808D0000u;
    r7 = (r7 + 7444);
    r6 = MemoryInline::FlatRead32(r7);
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r5 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r3 + 376), r5);
    r0 = (r0 & -14337);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    MemoryInline::FlatWrite32((r3 + 372), r6);
    r5 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r3 + 380), r5);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r4 + 32), r0);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A72AC func_807A72AC preserves=true fpr_mask=0x00000000
