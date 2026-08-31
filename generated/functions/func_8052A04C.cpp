#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052A04C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052A04C;

loc_8052A04C:
{
    r5 = 0x809C0000u;
    r5 = (r5 + -5376);
    r5 = MemoryInline::FlatRead32((r5 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8052A05C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052A090;
    }
}

loc_8052A060:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = 1;
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8052A090:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052A04C func_8052A04C preserves=true fpr_mask=0x00000000
