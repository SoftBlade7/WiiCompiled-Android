#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AEE14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_805AEE14;

loc_805AEE14:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r8 = 1127219200;
    r0 = MemoryInline::FlatRead8(r4);
    r7 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    r5 = MemoryInline::FlatRead8((r4 + 2));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f5.d = MemoryInline::FlatReadFloat64((r7 + 9544));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = PPC_Fctiwz(f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = PPC_Fctiwz(f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    fctiwzword1 = PPC_FprLowWordInline(f4.d);
    f2.d = PPC_Fctiwz(f3.d);
    r4 = fctiwzword0;
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r0 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    r5 = fctiwzword2;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x0000003D fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805AEE14 func_805AEE14 preserves=true fpr_mask=0x00000000
