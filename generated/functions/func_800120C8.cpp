#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800120C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800120C8;

loc_800120C8:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_800120D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800120E0;
    }
}

loc_800120D4:
{
    r0 = 10;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_800120F0;
}

loc_800120E0:
{
}

loc_800120E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800120F0;
    }
}

loc_800120E8:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_800120F0:
{
    r3 = (r3 + 1);
    r10 = MemoryInline::FlatRead8(r3);
    r11 = 0;
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_80012100:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(94))) {
        goto loc_80012110;
    }
}

loc_80012104:
{
    r3 = (r3 + 1);
    r10 = MemoryInline::FlatRead8(r3);
    r11 = 1;
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_80012110:
{
}

loc_80012114:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(93))) {
        goto loc_8001212C;
    }
}

loc_80012118:
{
    r0 = MemoryInline::FlatRead8((r1 + 27));
    r3 = (r3 + 1);
    r10 = MemoryInline::FlatRead8(r3);
    r0 = (r0 | 32);
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_8001212C:
{
    r8 = (r1 + 8);
    r5 = 1;
    goto loc_800121B4;
}

loc_80012138:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r6 = (r6_rot_2 & 31);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r9 = (r8 + r6);
    r6 = (r10 & 7);
    r7 = MemoryInline::FlatRead8((r9 + 8));
    r6 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_80012154:
{
    r6 = (r7 | r6);
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(45))) {
        goto loc_800121AC;
    }
}

loc_80012160:
{
    r9 = MemoryInline::FlatRead8((r3 + 2));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_800121AC;
    }
}

loc_8001216C:
{
}

loc_80012170:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(93))) {
        goto loc_800121AC;
    }
}

loc_80012174:
{
    goto loc_80012194;
}

loc_80012178:
{
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r6 = (r6_rot_4 & 31);
    r0 = (r10 & 7);
    r7 = (r8 + r6);
    r6 = MemoryInline::FlatRead8((r7 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite8((r7 + 8), static_cast<uint8_t>(r0));
}

loc_80012194:
{
    r10 = (r10 + 1);
}

loc_8001219C:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(r9))) {
        goto loc_80012178;
    }
}

loc_800121A0:
{
    r3 = (r3 + 3);
    r10 = MemoryInline::FlatRead8(r3);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    goto loc_800121B4;
}

loc_800121AC:
{
    r3 = (r3 + 1);
    r10 = MemoryInline::FlatRead8(r3);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_800121B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_800121B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800121C8;
    }
}

loc_800121BC:
{
}

loc_800121C0:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(93))) {
        goto loc_800121D4;
    }
}

loc_800121C4:
{
    goto loc_80012138;
}

loc_800121C8:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_800122BC;
}

loc_800121D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_800121D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800122BC;
    }
}

loc_800121DC:
{
    r0 = 2;
    r5 = (r1 + 16);
    ctr = r0;
}

loc_800121E8:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 4));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 5));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 6));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 7));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 9));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 10));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 11));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 12));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 13));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 14));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 15));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 15), static_cast<uint8_t>(r0));
    r5 = (r5 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800121E8;
    }
}

loc_800122B0:
{
}

loc_800122BC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 56u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    r3 = (r3 + 1);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 60));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 56));
        }
    }
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0xC0000FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800120C8 func_800120C8 preserves=true fpr_mask=0x00000000
