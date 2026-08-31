#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073F8F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8073F8F8;

loc_8073F8F8:
{
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r5 = r3;
    r7 = 0;
    goto loc_8073F91C;
}

loc_8073F908:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r6 + r7);
    r5 = (r5 + 4);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 24), r0);
}

loc_8073F91C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_8073F924:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8073F908;
    }
}

loc_8073F928:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073F8F8 func_8073F8F8 preserves=true fpr_mask=0x00000000
