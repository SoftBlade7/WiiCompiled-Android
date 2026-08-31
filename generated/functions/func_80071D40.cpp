#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80071D40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80071D40;

loc_80071D40:
{
    r0 = (r4 + -131072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80071D48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80071D74;
    }
}

loc_80071D4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80071D50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071D64;
    }
}

loc_80071D54:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_80071D78;
}

loc_80071D64:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & -257);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_80071D78;
}

loc_80071D74:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DEE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80071D78:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80071D40 func_80071D40 preserves=true fpr_mask=0x00000000
