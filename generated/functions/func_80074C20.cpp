#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074C20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80074C20;

loc_80074C20:
{
    r0 = (r4 + -196608);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80074C28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80074C54;
    }
}

loc_80074C2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80074C30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074C44;
    }
}

loc_80074C34:
{
    r0 = MemoryInline::FlatRead32((r3 + 316));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 316), r0);
    goto loc_80074C58;
}

loc_80074C44:
{
    r0 = MemoryInline::FlatRead32((r3 + 316));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 316), r0);
    goto loc_80074C58;
}

loc_80074C54:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80071D40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80074C58:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80074C20 func_80074C20 preserves=true fpr_mask=0x00000000
