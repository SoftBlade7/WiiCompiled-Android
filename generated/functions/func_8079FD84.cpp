#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079FD84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_8079FD84;

loc_8079FD84:
{
    r6 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 320));
    r6 = (r6 + 20992);
    f1.d = MemoryInline::FlatReadFloat32(r6);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079FD98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079FE28;
    }
}

loc_8079FD9C:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 96));
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r5 + 12104);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 56));
    r7 = (r0 * 116);
    r4 = MemoryInline::FlatRead32((r3 + 116));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 64));
    r4 = (r4 | 64);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r6 = (r5 + r7);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWrite32((r3 + 116), r4);
    r0 = (r0 * 116);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    MemoryInline::FlatWriteFloat32((r3 + 96), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r5 = (r5 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 64));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 56));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    r3 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8079FE28:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000048 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079FD84 func_8079FD84 preserves=true fpr_mask=0x00000000
