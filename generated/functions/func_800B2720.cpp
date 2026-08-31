#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B2720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B2720;

loc_800B2720:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 24u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r6 + 12));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r6 + 14));
        }
    }
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, r6);
    r10 = (r31 * r0);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r6 + 1));
    r9 = (r7 + 1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 20));
    r8 = (r8 + 1);
    r12 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r10));
    r10 = (r12 * r10);
    r30 = (r5 - r10);
    r11 = PPC_Divwu(static_cast<uint32_t>(r30), static_cast<uint32_t>(r31));
    r10 = (r11 * r31);
    r0 = (r12 * r0);
    r10 = (r30 - r10);
    r0 = (r7 + r0);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 20u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
    r10 = (r10 * r9);
    r9 = MemoryInline::FlatRead32((r3 + 20));
    r7 = MemoryInline::FlatRead32((r9 + 12));
    r8 = (r11 * r8);
    goto loc_800B27C4;
}

loc_800B2790:
{
    r3 = MemoryInline::FlatRead16(r7);
}

loc_800B2798:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r5))) {
        goto loc_800B27C0;
    }
}

loc_800B279C:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800B27A4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800B27C0;
    }
}

loc_800B27A8:
{
    r3 = (r5 - r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r3);
    r3 = (r7 + r0);
    r7 = (r3 + 8);
    goto loc_800B27D0;
}

loc_800B27C0:
{
    r7 = MemoryInline::FlatRead32((r7 + 4));
}

loc_800B27C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800B27C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B2790;
    }
}

loc_800B27CC:
{
    r7 = (r9 + 4);
}

loc_800B27D0:
{
    r0 = MemoryInline::FlatRead8(r7);
    r3 = (r10 + 1);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 + 1);
    r5 = MemoryInline::FlatRead8((r7 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r6 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r6 + 10));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r5);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r6 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 12), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r6 + 18));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r4 + 14), r5);
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r4 + 16), r3);
    }
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r4 + 18), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00007FB gpr_write=0xC0001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B2720 func_800B2720 preserves=true fpr_mask=0x00000000
