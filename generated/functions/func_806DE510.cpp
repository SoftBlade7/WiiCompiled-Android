#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DE510(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_806DE510;

loc_806DE510:
{
    r8 = 0x808A0000u;
    r6 = 30;
    r8 = (r8 + 1176);
    r7 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r8 + 24));
    r5 = 10;
    f2.d = MemoryInline::FlatReadFloat32((r8 + 28));
    r4 = 40;
    f1.d = MemoryInline::FlatReadFloat32((r8 + 32));
    r0 = 60;
    f0.d = MemoryInline::FlatReadFloat32((r8 + 36));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 216), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 220), r7);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 216), static_cast<uint16_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 228), r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 232), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 236), r4);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 240), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 248), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 252), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 224), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 244), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806DE510 func_806DE510 preserves=true fpr_mask=0x00000000
