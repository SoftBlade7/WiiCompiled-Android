#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056AF10(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_8056AF10;

loc_8056AF10:
{
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 5800));
    r7 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 16), r7);
    r6 = 0x802A0000u;
    r4 = 0x80890000u;
    r0 = 0;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 44), f2.d);
    r5 = (r6 + 16640);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5688));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 48), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 52), f2.d);
    }
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 20), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 24), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 28), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 32), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 36), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 40), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 56), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 60), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 96), r7);
    MemoryInline::WriteResolved8(guest_range_0, 84u, (r3 + 100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 104), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 108), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 112), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 116), f2.d);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056AF10 func_8056AF10 preserves=true fpr_mask=0x00000000
