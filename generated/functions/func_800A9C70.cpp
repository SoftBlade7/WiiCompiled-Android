#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A9C70(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800A9C70;

loc_800A9C70:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28024));
    r8 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 140), 0, 136u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 144), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 148), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 152), r7);
    }
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 162), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 159), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 160), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 158), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 161), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 256), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 260), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r3 + 264), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 176), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 168), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 172), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 180), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 184), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 188), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 192), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 196), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 200), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 204), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 220), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 236), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 208), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 224), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 240), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 212), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 228), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 244), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 216), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 232), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 248), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 252), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 163), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 268), r8);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 272), r8);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FC gpr_write=0x00000101 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A9C70 func_800A9C70 preserves=true fpr_mask=0x00000000
