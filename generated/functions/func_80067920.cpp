#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80067920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_80067920;

loc_80067920:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80067928:
{
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f2.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 8), f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006798C;
    }
}

loc_80067940:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80067944:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006798C;
    }
}

loc_80067948:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29448));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80067950:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80067968;
    }
}

loc_80067954:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_80067968:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32(r4, r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_8006798C:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 268435455);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80067920 func_80067920 preserves=true fpr_mask=0x00000000
