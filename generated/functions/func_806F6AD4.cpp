#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F6AD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_806F6AD4;

loc_806F6AD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + 8912);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x806F6AF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x800887F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    // inline leaf 0x800890A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800890A0
    r4 = 0x809C0000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r31 + 4), r3);
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10392));
    r0 = MemoryInline::FlatRead32((r3 + 6260));
    MemoryInline::FlatWriteRam32(r31, r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_0 & 1);
    r3 = MemoryInline::FlatRead32((r4 + 1752));
    MemoryInline::FlatWriteRam32((r31 + 12), r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 1756));
    MemoryInline::FlatWriteRamFloat32((r31 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 1760));
    MemoryInline::FlatWriteRamFloat32((r31 + 20), f0.d);
    MemoryInline::FlatWriteRam8((r31 + 24), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 1832));
    MemoryInline::FlatWriteRamFloat32((r31 + 8), f0.d);
    MemoryInline::FlatWrite8((r30 + 36), static_cast<uint8_t>(r5));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F6AD4 func_806F6AD4 preserves=true fpr_mask=0x00000000
