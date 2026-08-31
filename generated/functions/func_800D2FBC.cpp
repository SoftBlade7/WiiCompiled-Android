#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2FBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800D2FBC;

loc_800D2FBC:
{
    r5 = MemoryInline::FlatRead32((r13 + -26896));
    r6 = MemoryInline::FlatRead32((r5 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(4));
}

loc_800D2FC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D2FDC;
    }
}

loc_800D2FCC:
{
    r0 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r5 + 40), r0);
    r5 = MemoryInline::FlatRead32((r13 + -26896));
    MemoryInline::FlatWrite32((r5 + 36), r6);
}

loc_800D2FDC:
{
    r5 = MemoryInline::FlatRead32((r13 + -26896));
    r12 = MemoryInline::FlatRead32((r5 + 120));
    r5 = MemoryInline::FlatRead32((r5 + 124));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x00001061 gpr_return=0x00000000 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x800D2FBC func_800D2FBC preserves=true fpr_mask=0x00000000
