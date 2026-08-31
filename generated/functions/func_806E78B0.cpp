#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E78B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_806E78B0;

loc_806E78B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 28824));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_806E78D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806E790C;
    }
}

loc_806E78D8:
{
    r5 = 0x808C0000u;
    r4 = (r31 + 276);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 28828));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 268), f0.d);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 28828));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 256), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 264), f0.d);
    goto loc_806E7938;
}

loc_806E790C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 276));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 284));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 2164));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 268), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 256), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 264), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 244), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
}

loc_806E7938:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x0000000A fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E78B0 func_806E78B0 preserves=true fpr_mask=0x00000000
