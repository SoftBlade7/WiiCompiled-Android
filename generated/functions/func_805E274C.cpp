#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E274C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_805E274C;

loc_805E274C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x805E2764u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r4 = 0x808C0000u;
    r3 = (r31 + 372);
    r4 = (r4 + -27968);
    MemoryInline::FlatWrite32(r31, r4);
    ctx->lr = 0x805E2778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805F9E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead32((r31 + 584));
    r5 = 0;
    r4 = 1;
    r3 = 0x80890000u;
    r0 = (r0 & 8388607);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20544));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0_mrot_0 = (r0_rot_0 & 7340032);
    r0_mdest_0 = (r0 & -7340033);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r31 + 560), r5);
    r0 = (r0 | 524288);
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 584), r0);
    r0 = (r0 & -516097);
    MemoryInline::FlatWrite16((r31 + 568), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r31 + 570), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r31 + 572), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 576), f0.d);
    MemoryInline::FlatWrite16((r31 + 580), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r31 + 564), r5);
    MemoryInline::FlatWrite32((r31 + 584), r0);
    MemoryInline::FlatWrite16((r31 + 582), static_cast<uint16_t>(r5));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000000E gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E274C func_805E274C preserves=true fpr_mask=0x00000000
