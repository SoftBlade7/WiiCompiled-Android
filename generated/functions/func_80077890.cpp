#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80077890(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    goto loc_80077890;

loc_80077890:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f4.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29240));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29248));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29244));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    f2.d = f1.d;
    r3 = (r3 + 4);
    f5.d = f1.d;
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    // inline leaf 0x8016FF04 (7 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f6.d);
    // end of inlined leaf 0x8016FF04
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & -2);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r31, r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80077890 func_80077890 preserves=true fpr_mask=0x00000000
