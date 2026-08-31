#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012C17C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8012C17C;

loc_8012C17C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0x80280000u;
    r6 = 0x80280000u;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27104));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 212));
    r6 = (r6 + 7216);
    r4 = (r4 + 7184);
    r5 = MemoryInline::FlatRead32((r6 + 96));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    r7 = MemoryInline::FlatRead32((r4 + 28));
    r4 = MemoryInline::FlatRead32((r6 + 100));
    r3 = MemoryInline::FlatRead32((r6 + 104));
    f0.d = PPC_Fctiwz(f0.d);
    r0 = MemoryInline::FlatRead32((r6 + 108));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r6 = fctiwzword0;
    r6 = (r7 + r6);
    r6 = (r6 + r5);
    r6 = (r6 + r4);
    r6 = (r6 + r3);
    r6 = (r6 + r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r3 = (r3_rot_0 & -16);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012C17C func_8012C17C preserves=true fpr_mask=0x00000000
