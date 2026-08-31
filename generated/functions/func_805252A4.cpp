#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805252A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805252A4;

loc_805252A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_805252AC:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = (r0 & -49);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805252CC;
    }
}

loc_805252C0:
{
    r0 = (r0 & 255);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
}

loc_805252CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 28));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    r0 = (r0 | 1);
    r0 = (r0 & -3);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805252A4 func_805252A4 preserves=true fpr_mask=0x00000000
