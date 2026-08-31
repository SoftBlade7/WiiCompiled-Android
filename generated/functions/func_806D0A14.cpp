#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D0A14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806D0A14;

loc_806D0A14:
{
    r0 = MemoryInline::FlatRead32((r3 + 192));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(100));
}

loc_806D0A1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806D0A20:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 228));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 232));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 236));
    MemoryInline::FlatWriteFloat32((r3 + 288), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 292), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 296), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D0A14 func_806D0A14 preserves=true fpr_mask=0x00000000
