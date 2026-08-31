#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CFAC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_806CFAC0;

loc_806CFAC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 1;
    r6 = 0;
    r7 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    r5 = 0x808C0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 272));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    MemoryInline::FlatWrite8((r3 + 338), static_cast<uint8_t>(r0));
    r0 = 1127219200;
    f2.d = MemoryInline::FlatReadFloat32((r7 + -720));
    MemoryInline::FlatWrite16((r3 + 340), static_cast<uint16_t>(r6));
    r6 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r3 + 344), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -736));
    MemoryInline::FlatWriteFloat32((r3 + 348), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
    r4 = MemoryInline::FlatRead32((r5 + 19040));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 19044));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 360), f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806CFAC0 func_806CFAC0 preserves=true fpr_mask=0x00000000
