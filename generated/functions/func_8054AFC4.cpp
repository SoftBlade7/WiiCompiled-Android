#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054AFC4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_8054AFC4;

loc_8054AFC4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    f3.d = MemoryInline::FlatReadFloat32(r4);
    r5 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 3748));
    f5.d = (-(f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    r3 = (r3 + 28);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r4 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r3 = (r4 + 16712);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 28), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r31 + 28), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 32), f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 48), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 64), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 16712));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 36), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 52), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 68), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 40), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 56), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 72), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001E gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000006 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054AFC4 func_8054AFC4 preserves=true fpr_mask=0x00000000
