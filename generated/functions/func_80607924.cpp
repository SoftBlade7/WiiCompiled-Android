#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80607924(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80607924;

loc_80607924:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r5 = 1127219200;
    r0 = (r4 + -1);
    r6 = 0x80890000u;
    r4 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r6 = (r6 + 27968);
    r0 = MemoryInline::FlatRead32((r3 + 400));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = 0x80380000u;
    r0 = (r0 ^ -2147483648);
    f5.d = MemoryInline::FlatReadFloat64((r6 + 312));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 352));
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 360));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 420), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 356));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 416), f1.d);
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    r0 = MemoryInline::FlatRead32((r4 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80607998:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806079AC;
    }
}

loc_8060799C:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32096));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 416), f0.d);
}

loc_806079AC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 396), r0);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80607924 func_80607924 preserves=true fpr_mask=0x00000000
