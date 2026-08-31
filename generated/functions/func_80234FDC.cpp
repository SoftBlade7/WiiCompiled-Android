#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80234FDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];

    goto loc_80234FDC;

loc_80234FDC:
{
    r7 = MemoryInline::FlatRead8(r4);
    r6 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    r0 = (r0 - r7);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r9 = MemoryInline::FlatRead8((r4 + 2));
    r0 = (r0 - r8);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r6 = (r0 ^ -2147483648);
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r0 = (r0 - r9);
    f8.d = MemoryInline::FlatReadFloat64((r2 + -24864));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r0 = (r0 ^ -2147483648);
    f7.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = (r0 - r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r0 = (r0 ^ -2147483648);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat64((r2 + -24880));
    f3.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f10.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f7.d = PpcFmulsInline(f1.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f10.d));
    f5.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f10.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f6.d = PPC_Fctiwz(f7.d);
    f5.d = PPC_Fctiwz(f5.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f6.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f5.d);
    r0 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword1;
    r4 = fctiwzword2;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
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
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x000003F3 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80234FDC func_80234FDC preserves=true fpr_mask=0x00000000
