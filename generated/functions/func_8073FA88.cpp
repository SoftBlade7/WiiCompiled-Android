#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073FA88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8073FA88;

loc_8073FA88:
{
    r5 = r3;
    r6 = 0;
    goto loc_8073FAA4;
}

loc_8073FA94:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r5 = (r5 + 4);
    r6 = (r6 + 1);
    MemoryInline::FlatWriteFloat32((r4 + 28), f1.d);
}

loc_8073FAA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8073FAAC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8073FA94;
    }
}

loc_8073FAB0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073FA88 func_8073FA88 preserves=true fpr_mask=0x00000000
