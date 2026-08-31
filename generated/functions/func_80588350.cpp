#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80588350(CpuContext* MKW_RESTRICT ctx)
{
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

    goto loc_80588350;

loc_80588350:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80890000u;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 6656));
    r6 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32(r3);
    r8 = MemoryInline::FlatRead32((r5 + 4));
    r5 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r4 | 536870912);
    MemoryInline::FlatWrite32((r8 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 680), r7);
    MemoryInline::FlatWrite8((r3 + 684), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 23240));
    MemoryInline::FlatWriteFloat32((r3 + 676), f1.d);
    MemoryInline::FlatWrite16((r3 + 692), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead16((r5 + 23276));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 694), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 696), f0.d);
    MemoryInline::FlatWrite16((r3 + 700), static_cast<uint16_t>(r7));
    // inline leaf 0x805907A0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x805907A0
    ctx->lr = 0x805883B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80865390u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEE0E gpr_write=0x800013FB gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80588350 func_80588350 preserves=true fpr_mask=0x00000000
