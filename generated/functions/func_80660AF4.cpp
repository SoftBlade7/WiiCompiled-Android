#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80660AF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80660AF4;

loc_80660AF4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    }
    r24 = r4;
    r26 = (r4 + 16);
    r27 = 0;
    r25 = r24;
    r28 = 48;
    r29 = 36;
    r30 = 67;
    r31 = 0;
}

loc_80660B24:
{
    r3 = r26;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x80660B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r25 + 20), static_cast<uint8_t>(r28));
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
}

loc_80660B40:
{
    r26 = (r26 + 8);
    MemoryInline::FlatWrite8((r25 + 21), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r25 + 22), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r25 + 23), static_cast<uint8_t>(r31));
    r25 = (r25 + 8);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80660B24;
    }
}

loc_80660B58:
{
    r3 = 0;
    r4 = -1;
    r0 = 255;
    guest_range_0 = MemoryInline::ResolveRangeHost(r24, 0, 56u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r24 + 52), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r24 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r24 + 36), r3);
    }
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r24 + 53), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r24 + 55), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r24 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_0, 0u, r24, r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r24 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r24 + 8), r3);
    }
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r24 + 54), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r24 + 40), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r24 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r24 + 42), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r24 + 43), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r24 + 44), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r24 + 45), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r24 + 46), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r24 + 47), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r24 + 48), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (r24 + 49), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r24 + 50), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r24 + 51), static_cast<uint8_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0000FA gpr_write=0xFF0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80660AF4 func_80660AF4 preserves=true fpr_mask=0x00000000
