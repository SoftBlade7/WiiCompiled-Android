#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80547D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80547D30;

loc_80547D30:
{
    r9 = (r3 + 65536);
    r8 = MemoryInline::FlatRead8((r9 + -28070));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80547D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80547D6C;
    }
}

loc_80547D40:
{
    r7 = MemoryInline::FlatRead8((r9 + -28074));
    r3 = 1;
    r6 = MemoryInline::FlatRead16((r9 + -28072));
    r0 = MemoryInline::FlatRead16((r9 + -28076));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r9 + -28068));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32(r5, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80547D6C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000338 gpr_write=0x000003C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80547D30 func_80547D30 preserves=true fpr_mask=0x00000000
