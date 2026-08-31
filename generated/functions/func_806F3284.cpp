#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F3284(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_806F3338_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F3284;

loc_806F3284:
{
    r7 = 0x808A0000u;
    r10 = 0;
    r7 = (r7 + 2912);
    r8 = 0;
    f2.d = MemoryInline::FlatReadFloat32(r7);
    r9 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    r5 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    r4 = 0;
    goto loc_806F3340;
}

loc_806F32B0:
{
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r10 = (r10 + 1);
    r6_addr_2 = (r6 + r8);
    r6 = MemoryInline::FlatRead32(r6_addr_2);
    r8 = (r8 + 4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 16), 0, 104u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r6 + 24), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r6 + 20), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r6 + 16), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r6 + 36), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r6 + 32), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r6 + 28), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r6 + 48), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r6 + 44), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r6 + 40), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r6 + 60), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r6 + 56), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r6 + 52), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r6 + 72), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r6 + 68), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r6 + 64), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r6 + 76), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r6 + 80), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r6 + 84), f2.d);
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r6 + 88), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r6 + 92), f2.d);
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r6 + 96), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r6 + 100), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r6 + 104), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r6 + 108), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r6 + 112), f2.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r6 + 116), r4);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r6 = (r0 + r9);
    MemoryInline::FlatWriteFloat32((r6 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r6 + 4), f2.d);
    addr_stfsx_806F3338_loc_0 = (r9 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806F3338_loc_0, f2.d);
    r9 = (r9 + 12);
}

loc_806F3340:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r0));
}

loc_806F3348:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F32B0;
    }
}

loc_806F334C:
{
    f1.d = MemoryInline::FlatReadFloat32(r7);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F3284 func_806F3284 preserves=true fpr_mask=0x00000000
