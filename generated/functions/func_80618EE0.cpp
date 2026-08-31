#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80618EE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80618EE0;

loc_80618EE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 300));
}

loc_80618F04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80618F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80618F14;
    }
}

loc_80618F0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_80618F14:
{
    MemoryInline::FlatWriteFloat32((r3 + 124), f1.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000058 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80618EE0 func_80618EE0 preserves=true fpr_mask=0x00000000
