#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80220508(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80220508;

loc_80220508:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 24));
    r5 = 0;
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r5));
    r0 = (r0 & 2);
}

loc_80220518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80220524;
    }
}

loc_8022051C:
{
    r0 = (r5 | 2);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r0));
}

loc_80220524:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 24));
    r0 = (r0 & 1);
}

loc_8022052C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022053C;
    }
}

loc_80220530:
{
    r0 = MemoryInline::FlatRead16((r4 + 16));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r0));
}

loc_8022053C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 24));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80220544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80220554;
    }
}

loc_80220548:
{
    r0 = MemoryInline::FlatRead16((r4 + 16));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r0));
}

loc_80220554:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 28));
    r5 = (r2 + -25440);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 26));
    r5_addr_0 = (r5 + r0);
    r6 = MemoryInline::FlatRead8(r5_addr_0);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 27));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f9.d = PpcBitCastToFloatInline(resolved_pair.first);
            f8.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 32));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 40));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 72u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r3 + 96));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r3 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 104));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r3 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r3 + 112));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r3 + 116));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 18), 0, 46u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 18), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 19), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 20), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 21), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 22), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 6u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 6u, (r4 + 24), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 10u, (r4 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 14u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 14u, (r4 + 32), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 18u, (r4 + 36), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 30u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 30u, (r4 + 48), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 34u, (r4 + 52), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 22u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 22u, (r4 + 40), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 26u, (r4 + 44), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 38u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 38u, (r4 + 56), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 42u, (r4 + 60), f0.d);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80220508 func_80220508 preserves=true fpr_mask=0x00000000
