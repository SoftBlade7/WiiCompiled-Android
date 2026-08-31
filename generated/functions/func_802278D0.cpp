#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802278D0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_802278D0;

loc_802278D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80227B18u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f2.d = MemoryInline::FlatReadFloat32((r2 + -25228));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 12), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25216));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 4), f2.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r31, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 8), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 16), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 20), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 24), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 36), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 32), f2.d);
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 40), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 44), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 60), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 52), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 48), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 56), f0.d);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000201E gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802278D0 func_802278D0 preserves=true fpr_mask=0x00000000
