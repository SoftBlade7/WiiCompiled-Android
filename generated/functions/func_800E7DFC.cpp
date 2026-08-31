#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7DFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800E7DFC;

loc_800E7DFC:
{
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 48));
    r5 = r6;
    r3 = MemoryInline::FlatRead32((r6 + 1912));
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E7E18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E7E44;
    }
}

loc_800E7E1C:
{
    r0 = MemoryInline::FlatRead32((r5 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_800E7E24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E7E38;
    }
}

loc_800E7E28:
{
    r0 = (r4 * 48);
    r3 = (r6 + r0);
    r3 = (r3 + 56);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E7E38:
{
    r5 = (r5 + 48);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E7E1C;
    }
}

loc_800E7E44:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E7DFC func_800E7DFC preserves=true fpr_mask=0x00000000
