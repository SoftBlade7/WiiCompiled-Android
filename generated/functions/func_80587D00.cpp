#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80587D00(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80587D00;

loc_80587D00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x80587D18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x805784D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x80890000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6656));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 660), 0, 42u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r31 + 660), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 664), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 668), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 672), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 676), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 680), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r31 + 684), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 688), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r31 + 692), r0);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r31 + 694), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r31 + 700), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00003FA gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0x000000C0 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80587D00 func_80587D00 preserves=true fpr_mask=0x00000000
