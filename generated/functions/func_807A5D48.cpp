#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A5D48(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_807A5D48;

loc_807A5D48:
{
    r4 = 0x808A0000u;
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 21968));
    r5 = -1;
    r4 = 300;
    r0 = 12;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 424), 0, 72u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 424), static_cast<uint16_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 428), r5);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 432), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 476), r4);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 480), r6);
    }
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r3 + 484), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 488), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 492), r6);
    }
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r3 + 472), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A5D48 func_807A5D48 preserves=true fpr_mask=0x00000000
