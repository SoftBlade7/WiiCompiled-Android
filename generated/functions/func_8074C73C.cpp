#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074C73C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8074C73C;

loc_8074C73C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -17160);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 16), r4);
    ctx->lr = 0x8074C760u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = 0x808D0000u;
    r0 = 0;
    r3 = (r3 + -17136);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r3);
    r4 = 0x809C0000u;
    r5 = 0x802A0000u;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 20), r0);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11512));
    r6 = (r4 + 11352);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 11352));
    r4 = (r5 + 16640);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 32), f1.d);
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 36), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 52), f0.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 64), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8074C73C func_8074C73C preserves=true fpr_mask=0x00000000
