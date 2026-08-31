#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017002C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    goto loc_8017002C;

loc_8017002C:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26760));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26748));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26752));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f6.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = PpcFmulsInline(f6.d, f5.d);
}

loc_801700A4:
{
    MemoryInline::FlatWriteFloat32((r30 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f6.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x40000006 gpr_write=0xC0000003 gpr_return=0x00000000 fpr_read=0x00000020 fpr_write=0x0000005F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8017002C func_8017002C preserves=true fpr_mask=0x00000000
