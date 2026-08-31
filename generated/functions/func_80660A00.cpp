#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80660A00(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
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

    goto loc_80660A00;

loc_80660A00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    }
    r23 = r3;
    r24 = (r3 + 64);
    r20 = 0;
    r31 = 255;
    r26 = 48;
    r27 = 36;
    r28 = 67;
    r29 = 0;
    r30 = -1;
}

loc_80660A34:
{
    r21 = r23;
    r22 = (r24 + 16);
    r25 = 0;
}

loc_80660A40:
{
    r3 = r22;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x80660A50u;
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
    MemoryInline::FlatWrite8((r21 + 84), static_cast<uint8_t>(r26));
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
}

loc_80660A5C:
{
    r22 = (r22 + 8);
    MemoryInline::FlatWrite8((r21 + 85), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r21 + 86), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r21 + 87), static_cast<uint8_t>(r29));
    r21 = (r21 + 8);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80660A40;
    }
}

loc_80660A74:
{
    MemoryInline::FlatWrite8((r23 + 116), static_cast<uint8_t>(r30));
    r20 = (r20 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(12));
}

loc_80660A80:
{
    r24 = (r24 + 56);
    guest_range_1 = MemoryInline::ResolveRangeHost((r23 + 64), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r23 + 96), r29);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r23 + 100), r29);
    }
    MemoryInline::WriteResolved8(guest_range_1, 53u, (r23 + 117), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 54u, (r23 + 118), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 55u, (r23 + 119), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r23 + 68), r29);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r23 + 64), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r23 + 76), r29);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r23 + 72), r29);
    }
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r23 + 104), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r23 + 105), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r23 + 106), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r23 + 107), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r23 + 108), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r23 + 109), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r23 + 110), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r23 + 111), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 48u, (r23 + 112), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 49u, (r23 + 113), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 50u, (r23 + 114), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 51u, (r23 + 115), static_cast<uint8_t>(r31));
    r23 = (r23 + 56);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80660A34;
    }
}

loc_80660AE0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 16));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
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

// RECOMP_GUEST_ABI gpr_read=0xFFF000FA gpr_write=0xFFF000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80660A00 func_80660A00 preserves=true fpr_mask=0x00000000
