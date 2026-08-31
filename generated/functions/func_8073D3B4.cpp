#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073D3B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r19 = ctx->gpr[19];
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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8073D3B4;

loc_8073D3B4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 164u, (r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80021580 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -4), r31);
    // end of inlined leaf 0x80021580
    r30 = MemoryInline::FlatRead8((r4 + 29));
    r0 = 0;
    r29 = MemoryInline::FlatRead32((r4 + 20));
    r3 = 0x808A0000u;
    r6 = MemoryInline::FlatRead8((r4 + 16));
    r5 = 0x808D0000u;
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 8), static_cast<uint8_t>(r6));
    r5 = (r5 + -20172);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10400));
    r23 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r5);
    r22 = (r1 + 32);
    r28 = MemoryInline::FlatRead8((r4 + 17));
    r27 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    r26 = 0;
    r25 = 0;
    r24 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 20), r0);
    r31 = 0x809C0000u;
    r21 = 1;
    r20 = 2;
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r1 + 24), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 28), f0.d);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 48), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 56), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 60), r0);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 76), r0);
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r1 + 80), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 84), r0);
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r1 + 88), r0);
    }
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r1 + 92), r0);
    goto loc_8073D4F0;
}

loc_8073D46C:
{
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = (r1 + 8);
    r5 = (r24 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80517590u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r19 = r3;
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = (r19 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B7Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8073D494:
{
    r4 = MemoryInline::FlatRead16((r5 + 16));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead8((r5 + 18));
    r0 = MemoryInline::FlatRead8((r5 + 19));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8073D4C8;
    }
}

loc_8073D4B0:
{
    r0 = (r19 & 255);
}

loc_8073D4B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r28))) {
        goto loc_8073D4C8;
    }
}

loc_8073D4BC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r22_addr_2 = (r22 + r0);
    MemoryInline::FlatWrite32(r22_addr_2, r20);
    goto loc_8073D4EC;
}

loc_8073D4C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_8073D4D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8073D4E8;
    }
}

loc_8073D4D4:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r25 = 1;
    r22_addr_3 = (r22 + r0);
    MemoryInline::FlatWrite32(r22_addr_3, r21);
    r27 = (r27 + 1);
    goto loc_8073D4EC;
}

loc_8073D4E8:
{
    r26 = (r26 + 1);
}

loc_8073D4EC:
{
    r24 = (r24 + 1);
}

loc_8073D4F0:
{
    r0 = (r24 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r29));
}

loc_8073D4F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8073D46C;
    }
}

loc_8073D4FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8073D500:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073D528;
    }
}

loc_8073D504:
{
    r0 = MemoryInline::FlatRead8((r23 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073D50C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073D528;
    }
}

loc_8073D510:
{
    r3 = 0x809C0000u;
    r4 = r27;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 1;
    goto loc_8073D53C;
}

loc_8073D528:
{
    r3 = 0x809C0000u;
    r4 = r26;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0;
}

loc_8073D53C:
{
    r4 = (r1 + 32);
    r6 = 0;
    r7 = 0;
    ctr = r29;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8073D550:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073D580;
    }
}

loc_8073D554:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8073D55C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073D574;
    }
}

loc_8073D560:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r6));
}

loc_8073D564:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073D570;
    }
}

loc_8073D568:
{
    r3 = (r7 & 255);
    goto loc_8073D584;
}

loc_8073D570:
{
    r6 = (r6 + 1);
}

loc_8073D574:
{
    r4 = (r4 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8073D554;
    }
}

loc_8073D580:
{
    r3 = 0;
}

loc_8073D584:
{
    r11 = (r1 + 160);
    // inline leaf 0x800215CC (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -4));
    // end of inlined leaf 0x800215CC
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF800FB gpr_write=0xFFF80FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8073D3B4 func_8073D3B4 preserves=true fpr_mask=0x00000000
