#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D0C90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805D0C90;

loc_805D0C90:
{
    r0 = MemoryInline::FlatRead8((r3 + 21036));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D0C98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805D0C9C:
{
    r0 = MemoryInline::FlatRead32((r3 + 21032));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16404));
    r5 = 0;
    r4 = (r0 * 28);
    MemoryInline::FlatWrite32((r3 + 21028), r5);
    r0 = MemoryInline::FlatRead32((r3 + 21024));
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    r3 = (r3 + r4);
    MemoryInline::FlatWrite32((r3 + 20576), r0);
    MemoryInline::FlatWriteFloat32((r3 + 20592), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 20596), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 20600), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805D0C90 func_805D0C90 preserves=true fpr_mask=0x00000000
