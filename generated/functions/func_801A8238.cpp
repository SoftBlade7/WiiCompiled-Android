#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A8238(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A8238;

loc_801A8238:
{
    r5 = MemoryInline::FlatRead32((r13 + -25328));
    goto loc_801A8244;
}

loc_801A8240:
{
    r5 = MemoryInline::FlatRead32((r5 + 8));
}

loc_801A8244:
{
}

loc_801A8248:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801A825C;
    }
}

loc_801A824C:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801A8258:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_801A8240;
    }
}

loc_801A825C:
{
}

loc_801A8260:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801A8298;
    }
}

loc_801A8264:
{
    r4 = (r13 + -25328);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801A8270:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A827C;
    }
}

loc_801A8274:
{
    MemoryInline::FlatWrite32((r13 + -25328), r3);
    goto loc_801A8280;
}

loc_801A827C:
{
    MemoryInline::FlatWrite32((r4 + 8), r3);
}

loc_801A8280:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r4 = (r13 + -25328);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A8298:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r4 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r5 + 12), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801A82A8:
{
    MemoryInline::FlatWrite32((r3 + 12), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A82B8;
    }
}

loc_801A82B0:
{
    MemoryInline::FlatWrite32((r13 + -25328), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A82B8:
{
    MemoryInline::FlatWrite32((r4 + 8), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A8238 func_801A8238 preserves=true fpr_mask=0x00000000
