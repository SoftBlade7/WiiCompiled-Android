#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006DEE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006DEE0;

loc_8006DEE0:
{
    r0 = (r4 + -65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8006DEE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006DF14;
    }
}

loc_8006DEEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006DEF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006DF04;
    }
}

loc_8006DEF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 96);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DF18;
}

loc_8006DF04:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -97);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_8006DF18;
}

loc_8006DF14:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006D920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8006DF18:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006DEE0 func_8006DEE0 preserves=true fpr_mask=0x00000000
