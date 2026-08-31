#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052D298(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;

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

    goto loc_8052D298;

loc_8052D298:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = 0;
    r7 = 255;
    r5 = 0x80890000u;
    MemoryInline::FlatWrite32((r3 + 4), r8);
    r0 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat64((r5 + -104));
    r6 = 0x80380000u;
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32(r3, r4);
    r5 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r6 + 24576));
    r5 = MemoryInline::FlatRead16((r5 + 44));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r5 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 116));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead16((r4 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052D298 func_8052D298 preserves=true fpr_mask=0x00000000
