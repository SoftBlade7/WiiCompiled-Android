#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067FE1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067FE1C;

loc_8067FE1C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8067FE28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067FE6C;
    }
}

loc_8067FE2C:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32(r5, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11760));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16));
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_8067FE6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067FE1C func_8067FE1C preserves=true fpr_mask=0x00000000
