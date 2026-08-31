#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F162C(CpuContext* MKW_RESTRICT ctx)
{
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_806F162C;

loc_806F162C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = (r1 + 8);
    r4 = (r31 + 64);
    r5 = (r31 + 104);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r4 = 0x808C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 0x808A0000u;
    f4.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 40), f6.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2912));
    MemoryInline::FlatWriteFloat32((r31 + 44), f7.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    MemoryInline::FlatWriteFloat32((r31 + 48), f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r4 + 30648));
    f6.d = PpcFmulsInline(f6.d, f8.d);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f5.d = PpcFmulsInline(f7.d, f8.d);
    f4.d = PpcFmulsInline(f4.d, f8.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r31 + 48), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F162C func_806F162C preserves=true fpr_mask=0x00000000
