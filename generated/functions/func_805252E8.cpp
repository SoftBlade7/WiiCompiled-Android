#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805252E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805252E8;

loc_805252E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 28));
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + -704));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805252F8:
{
    r0 = (r0 | 2);
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    r0 = (r0 & 254);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80525318:
{
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805252E8 func_805252E8 preserves=true fpr_mask=0x00000000
