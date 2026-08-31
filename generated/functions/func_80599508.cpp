#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80599508(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80599508;

loc_80599508:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 28));
    ctx->lr = 0x80599524u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B8330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8040));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80599534:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 100u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r31 + 32), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 48), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 44), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 60), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 56), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 68), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 76), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 72), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 88), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 84), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r31 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 100), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 96), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r31 + 108), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r31 + 112), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r31 + 116), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r31 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r31 + 124), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r31 + 120), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805995AC;
    }
}

loc_8059959C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r31 + 108), f0.d);
}

loc_805995AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000005A gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80599508 func_80599508 preserves=true fpr_mask=0x00000000
