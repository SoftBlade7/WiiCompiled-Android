#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006DDB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8006DDB0;

loc_8006DDB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006DDB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006DE18;
    }
}

loc_8006DDB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8006DDBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006DE10;
    }
}

loc_8006DDC0:
{
    r7 = (r4 * 24);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r6 = MemoryInline::FlatRead32(r5);
    r4 = 9;
    r7 = (r3 + r7);
    MemoryInline::FlatWrite32((r7 + 156), r6);
    MemoryInline::FlatWrite32((r7 + 160), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r7 + 164), r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r6 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r7 + 168), r6);
    MemoryInline::FlatWrite32((r7 + 172), r0);
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r5 = 1;
    MemoryInline::FlatWrite32((r7 + 176), r0);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8006DE10:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8006DE18:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 9;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x000010F9 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8006DDB0 func_8006DDB0 preserves=true fpr_mask=0x00000000
