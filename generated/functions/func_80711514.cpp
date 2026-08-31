#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80711514(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
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

    goto loc_80711514;

loc_80711514:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    r6 = 0x808A0000u;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    r26 = r3;
    r30 = (r1 + 12);
    r25 = (r1 + 8);
    r29 = 255;
    r28 = 255;
    r27 = 0;
    r31 = 0x809C0000u;
    r24 = 0x809C0000u;
    r23 = 255;
    r4 = (r4 + 7940);
    r10 = MemoryInline::FlatRead8(r4);
    r6 = (r6 + 7944);
    r5 = MemoryInline::FlatRead8(r6);
    r9 = MemoryInline::FlatRead8((r4 + 1));
    r8 = MemoryInline::FlatRead8((r4 + 2));
    r7 = MemoryInline::FlatRead8((r4 + 3));
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r1 + 12), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r1 + 13), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r1 + 14), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r1 + 15), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r1 + 11), static_cast<uint8_t>(r0));
    goto loc_807115DC;
}

loc_80711594:
{
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = (r27 & 255);
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_807115B8;
    }
}

loc_807115A8:
{
    r0 = (r27 & 255);
    r30_addr_2 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r23));
    r25_addr_2 = (r25 + r0);
    MemoryInline::FlatWrite8(r25_addr_2, static_cast<uint8_t>(r23));
    goto loc_807115D8;
}

loc_807115B8:
{
    r4 = MemoryInline::FlatRead32((r24 + -10448));
    r5 = (r27 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r30_addr_3 = (r30 + r5);
    MemoryInline::FlatWrite8(r30_addr_3, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r25_addr_3 = (r25 + r5);
    MemoryInline::FlatWrite8(r25_addr_3, static_cast<uint8_t>(r0));
}

loc_807115D8:
{
    r27 = (r27 + 1);
}

loc_807115DC:
{
    r6 = MemoryInline::FlatRead8((r26 + 76));
    r0 = (r27 & 255);
}

loc_807115E8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80711594;
    }
}

loc_807115EC:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    r8 = 0;
    goto loc_8071161C;
}

loc_807115FC:
{
    r5 = (r8 & 255);
    r0 = (r29 & 255);
    r4_addr_2 = (r4 + r5);
    r7 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_8071160C:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(r0))) {
        goto loc_80711618;
    }
}

loc_80711610:
{
    r29 = r7;
    r3_addr_5 = (r3 + r5);
    r28 = MemoryInline::FlatRead8(r3_addr_5);
}

loc_80711618:
{
    r8 = (r8 + 1);
}

loc_8071161C:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_80711624:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807115FC;
    }
}

loc_80711628:
{
    r0 = MemoryInline::FlatRead8((r26 + 60));
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite8((r26 + 61), static_cast<uint8_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    r0 = MemoryInline::FlatRead8((r3 + 38));
    MemoryInline::FlatWrite8((r26 + 60), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r26 + 62), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r26 + 63), static_cast<uint8_t>(r28));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

// RECOMP_GUEST_ABI gpr_read=0xFF8001FB gpr_write=0xFF8007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80711514 func_80711514 preserves=true fpr_mask=0x00000000
