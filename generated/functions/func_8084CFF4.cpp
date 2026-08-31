#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8084CFF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8084CFF4;

loc_8084CFF4:
{
    r3 = 0x809C0000u;
    r0 = 11;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r6 = 1;
    r3 = (r4 + 3096);
    r5 = MemoryInline::FlatRead32((r4 + 3300));
    ctr = r0;
}

loc_8084D010:
{
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8084D024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084D030;
    }
}

loc_8084D028:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8084D02C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084D040;
    }
}

loc_8084D030:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8084D034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084D040;
    }
}

loc_8084D038:
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

loc_8084D040:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084D010;
    }
}

loc_8084D048:
{
    r3 = 1;
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

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8084CFF4 func_8084CFF4 preserves=true fpr_mask=0x00000000
