#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80599FA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80599FA0;

loc_80599FA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 32));
    // inline leaf 0x805906DC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x805906DC
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = r31;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 20), r0);
    r4 = MemoryInline::FlatRead32((r31 + 28));
    // inline leaf 0x805908B4 (8 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r4 * 44);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + r0);
    r3 = (r3 + 420);
    // end of inlined leaf 0x805908B4
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 16), r3);
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8056));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8040));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 36), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 48), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r31 + 52), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 56), f1.d);
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r31 + 54), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 60), f0.d);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80599FA0 func_80599FA0 preserves=true fpr_mask=0x00000000
