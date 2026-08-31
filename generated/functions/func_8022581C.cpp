#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022581C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022581C;

loc_8022581C:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80225824:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80225830;
    }
}

loc_80225828:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80225830:
{
    r3 = MemoryInline::FlatRead16((r3 + 24));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022581C func_8022581C preserves=true fpr_mask=0x00000000
