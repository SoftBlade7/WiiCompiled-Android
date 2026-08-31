#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B7AA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_807B7AA4;

loc_807B7AA4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = (r4 ^ -2147483648);
    r0 = 1127219200;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r6 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat64((r5 + 25120));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 416), f0.d);
    r6 = (r6 + 9960);
    r5 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r3 + 376), r0);
    MemoryInline::FlatWrite32((r3 + 372), r5);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r3 + 380), r0);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r4 + 32), r0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B7AA4 func_807B7AA4 preserves=true fpr_mask=0x00000000
