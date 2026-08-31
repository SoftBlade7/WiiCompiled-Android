#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052CDC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t xer = ctx->xer;

    goto loc_8052CDC8;

loc_8052CDC8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x80890000u;
    r8 = (23 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(23) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r7 = (r7 + -272);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    r7_addr_0 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r9 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r7 = (r7_rot_0 & 255);
    r4 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r8));
    r0 = (r4 & r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r7 = (r7 + -127);
    r4 = r3;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    r3 = (r1 + 12);
    r7 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CB6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    xer = ctx->xer;
    r6 = r3;
    r4 = r30;
    r5 = r31;
    r3 = (r1 + 16);
    r7 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CB6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF001C7A gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052CDC8 func_8052CDC8 preserves=true fpr_mask=0x00000000
