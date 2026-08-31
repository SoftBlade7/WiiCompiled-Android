#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80531F2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80531F2C;

loc_80531F2C:
{
    r6 = MemoryInline::FlatRead32((r3 + 3084));
    r0 = MemoryInline::FlatRead32((r3 + 6140));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80531F38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80531F64;
    }
}

loc_80531F3C:
{
    r5 = (r3 + 9200);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_80531F44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80531F54;
    }
}

loc_80531F48:
{
    r0 = (r3 + 19440);
    MemoryInline::FlatWrite32((r3 + 6140), r0);
    goto loc_80531F64;
}

loc_80531F54:
{
    r0 = (r3 + 19440);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80531F5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80531F64;
    }
}

loc_80531F60:
{
    MemoryInline::FlatWrite32((r3 + 6140), r5);
}

loc_80531F64:
{
    r3 = MemoryInline::FlatRead32((r3 + 6140));
    r5 = 10240;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80531F2C func_80531F2C preserves=true fpr_mask=0x00000000
