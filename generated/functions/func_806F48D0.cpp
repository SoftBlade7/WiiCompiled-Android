#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F48D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_806F48D0;

loc_806F48D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    r6 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 2912));
    MemoryInline::FlatWriteFloat32((r5 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F4900:
{
    r3 = cr;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000048 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F48D0 func_806F48D0 preserves=true fpr_mask=0x00000000
