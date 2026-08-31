#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80191F64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80191F64;

loc_80191F64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 1127219200;
    r5 = 0x80250000u;
    r4 = 0x80250000u;
    r6 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = MemoryInline::FlatRead16((r6 + 2));
    f2.d = MemoryInline::FlatReadFloat64((r5 + 11328));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11324));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r0 = MemoryInline::FlatRead8((r3 + 13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    r4 = MemoryInline::FlatRead8(r5);
    r0 = (r0 - r4);
    r4 = (r0 * 100);
    MemoryInline::FlatWrite32((r3 + 40), r4);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80191F64 func_80191F64 preserves=true fpr_mask=0x00000000
