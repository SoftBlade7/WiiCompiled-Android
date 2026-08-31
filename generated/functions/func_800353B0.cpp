#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800353B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800353B0;

loc_800353B0:
{
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r5 = 1;
    goto loc_800353E8;
}

loc_800353C0:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_800353C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800353DC;
    }
}

loc_800353CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_800353D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_800353DC;
    }
}

loc_800353D8:
{
    MemoryInline::FlatWrite32((r4 + 216), r5);
}

loc_800353DC:
{
    r0 = MemoryInline::FlatRead16((r3 + 66));
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800353E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800353EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800353C0;
    }
}

loc_800353F0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800353B0 func_800353B0 preserves=true fpr_mask=0x00000000
