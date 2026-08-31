#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A6248(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A6248;

loc_807A6248:
{
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6260;
    }
}

loc_807A6254:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 21768));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_807A6260:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 13876));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A6248 func_807A6248 preserves=true fpr_mask=0x00000000
