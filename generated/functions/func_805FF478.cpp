#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FF478(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805FF478;

loc_805FF478:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_805FF48C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(143))) {
        goto loc_805FF498;
    }
}

loc_805FF490:
{
}

loc_805FF494:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(172))) {
        goto loc_805FF4A0;
    }
}

loc_805FF498:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 104), r0);
}

loc_805FF4A0:
{
    r5 = MemoryInline::FlatRead32((r3 + 104));
    r4 = -1;
    MemoryInline::FlatWrite32((r3 + 112), r4);
    r0 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_805FF4B4:
{
    MemoryInline::FlatWrite32((r3 + 116), r4);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805FF4CC;
    }
}

loc_805FF4BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805FF4C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805FF4C4:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806003E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805FF4CC:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80600128u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805FF478 func_805FF478 preserves=true fpr_mask=0x00000000
