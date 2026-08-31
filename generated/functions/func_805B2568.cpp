#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B2568(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805B2568;

loc_805B2568:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r10 = (r5 + r7);
    r3 = (r6 + r8);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r10 = (r10 + -1);
    r0 = (r3 + -1);
    r3 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r12 = PPC_Divw(static_cast<int32_t>(r10), static_cast<int32_t>(r7));
    r29 = 0;
    r30 = r4;
    r31 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r8));
    goto loc_805B2628;
}

loc_805B25A0:
{
    r28 = 0;
    r10 = 0;
    goto loc_805B2618;
}

loc_805B25AC:
{
    r27 = 0;
    goto loc_805B2608;
}

loc_805B25B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_805B25B8:
{
    r26 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B2604;
    }
}

loc_805B25C0:
{
    r25 = (r27 + r3);
    r11 = (r25 * r5);
    ctr = r7;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B2604;
    }
}

loc_805B25D0:
{
}

loc_805B25D4:
{
    r0 = (r26 + r10);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805B25F0;
    }
}

loc_805B25DC:
{
    r0 = (r0 * r6);
    r0 = (r25 + r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r30 = (r30 + 2);
    goto loc_805B25FC;
}

loc_805B25F0:
{
    r0 = (r0 + r11);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r30 = (r30 + 2);
}

loc_805B25FC:
{
    r26 = (r26 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805B25D0;
    }
}

loc_805B2604:
{
    r27 = (r27 + 1);
}

loc_805B2608:
{
}

loc_805B260C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r8))) {
        goto loc_805B25B4;
    }
}

loc_805B2610:
{
    r10 = (r10 + r7);
    r28 = (r28 + 1);
}

loc_805B2618:
{
}

loc_805B261C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r12))) {
        goto loc_805B25AC;
    }
}

loc_805B2620:
{
    r3 = (r3 + r8);
    r29 = (r29 + 1);
}

loc_805B2628:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r31));
}

loc_805B262C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B25A0;
    }
}

loc_805B2630:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = r4;
    r4 = (r6 * r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE001FFB gpr_write=0xFE001C1B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B2568 func_805B2568 preserves=true fpr_mask=0x00000000
