#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590E70(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80590E70;

loc_80590E70:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80590E7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80590E80:
{
    // inline leaf 0x805A4DEC (13 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 820));
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8976));
    r5 = (r5 | 1);
    r4 = (r5 & -3);
    MemoryInline::FlatWriteFloat32((r3 + 648), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 444), f1.d);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteFloat32((r3 + 400), f0.d);
    MemoryInline::FlatWrite32((r3 + 404), r0);
    // end of inlined leaf 0x805A4DEC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590E70 func_80590E70 preserves=true fpr_mask=0x00000000
