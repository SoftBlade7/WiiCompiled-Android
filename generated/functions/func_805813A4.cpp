#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805813A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805813A4;

loc_805813A4:
{
    r6 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & 786432);
}

loc_805813B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805813C8;
    }
}

loc_805813B8:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 | 262144);
    MemoryInline::FlatWrite32((r5 + 12), r0);
}

loc_805813C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805813CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805813D0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805813A4 func_805813A4 preserves=true fpr_mask=0x00000000
