#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805940D4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_805940D4;

loc_805940D4:
{
    r7 = 0x80890000u;
    r6 = -1;
    r7 = (r7 + 7872);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    r5 = 0x802A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 46u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 16), f0.d);
    r4 = (r5 + 16640);
    f1.d = MemoryInline::FlatReadFloat32(r7);
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 26), static_cast<uint16_t>(r6));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 24));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 24), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 28), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 32), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 36), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 40), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 44), f1.d);
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r3 + 60), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 56), f0.d);
    ctx->gpr[0] = r0;
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

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805940D4 func_805940D4 preserves=true fpr_mask=0x00000000
