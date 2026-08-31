#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DB008(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807DB008;

loc_807DB008:
{
    r4 = MemoryInline::FlatRead32((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807DB010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807DB014:
{
    r3 = MemoryInline::FlatRead32((r4 + 344));
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    r3 = MemoryInline::FlatRead32((r4 + 348));
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807DB008 func_807DB008 preserves=true fpr_mask=0x00000000
