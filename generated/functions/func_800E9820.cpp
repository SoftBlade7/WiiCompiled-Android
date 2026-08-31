#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E9820(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800E9820;

loc_800E9820:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800E9888:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_800E988C:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000070 gpr_write=0x00000051 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E9820 func_800E9820 preserves=true fpr_mask=0x00000000
