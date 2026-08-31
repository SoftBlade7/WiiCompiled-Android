#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073B5DC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t ctr = ctx->ctr;

    goto loc_8073B5DC;

loc_8073B5DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10164));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 60u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 32), static_cast<uint8_t>(r31));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 22u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r4 + 21));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 33), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r3 + 34), static_cast<uint8_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 44), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 52), f1.d);
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 56), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 60), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 4), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r4 + 20));
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r30);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8073B668u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r29 + 24), r0);
    MemoryInline::FlatWrite8((r29 + 28), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFDE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8073B5DC func_8073B5DC preserves=true fpr_mask=0x00000000
