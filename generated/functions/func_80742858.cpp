#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80742858(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80742858;

loc_80742858:
{
    r6 = MemoryInline::FlatRead32((r4 + 8));
    r5 = r3;
    r7 = 0;
    goto loc_80742888;
}

loc_80742868:
{
    r8 = MemoryInline::FlatRead32((r5 + 236));
    r0 = MemoryInline::FlatRead32((r8 + 8));
}

loc_80742874:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80742880;
    }
}

loc_80742878:
{
    MemoryInline::FlatWrite32((r8 + 24), r6);
    r6 = (r6 + 1);
}

loc_80742880:
{
    r5 = (r5 + 8);
    r7 = (r7 + 1);
}

loc_80742888:
{
    r0 = MemoryInline::FlatRead32((r3 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_80742890:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80742868;
    }
}

loc_80742894:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80742858 func_80742858 preserves=true fpr_mask=0x00000000
