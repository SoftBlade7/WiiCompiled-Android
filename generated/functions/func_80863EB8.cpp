#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80863EB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r3_addc_left_0 = 0;
    uint32_t r3_addc_left_1 = 0;
    uint32_t r3_addc_left_2 = 0;
    uint32_t r3_addc_left_3 = 0;
    uint32_t r3_addc_left_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r18 = ctx->gpr[18];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80863EB8;

loc_80863EB8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r19);
    }
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
    r0 = MemoryInline::FlatRead8((r3 + 1791));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863ED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863FE4;
    }
}

loc_80863ED8:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(48));
}

loc_80863EE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80863FE4;
    }
}

loc_80863EE4:
{
    r30 = 0x808E0000u;
    r29 = 0x808E0000u;
    r26 = r23;
    r27 = (r3 + 336);
    r30 = (r30 + -17744);
    r29 = (r29 + -17936);
    r25 = 0;
    r28 = 0;
    r21 = 1;
    r31 = 0x809C0000u;
    r24 = 0;
    r20 = -1;
    r22 = 0;
}

loc_80863F18:
{
    r0 = MemoryInline::FlatRead8((r23 + 1786));
}

loc_80863F20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80863F38;
    }
}

loc_80863F24:
{
    r0 = MemoryInline::FlatRead16((r23 + 156));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead32(r29_addr_2);
    r3 = (r0 + r28);
    goto loc_80863F48;
}

loc_80863F38:
{
    r0 = MemoryInline::FlatRead16((r23 + 156));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_2);
    r3 = (r0 + r28);
}

loc_80863F48:
{
    r0 = MemoryInline::FlatRead8((r23 + 1787));
    r19 = MemoryInline::FlatRead16(r3);
}

loc_80863F54:
{
    r18 = MemoryInline::FlatRead16((r3 + 2));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80863F6C;
    }
}

loc_80863F5C:
{
    r0 = MemoryInline::FlatRead32((r23 + 284));
    r0 = (r0 * 118);
    r19 = (r19 + r0);
    r18 = (r18 + r0);
}

loc_80863F6C:
{
    r3 = r27;
    // inline leaf 0x80867540 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80867540
    r3 = r27;
    r4 = r19;
    r5 = r18;
    r7 = r23;
    r6 = 100;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80867788u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r0 = MemoryInline::FlatRead8((r23 + 1772));
    r3 = MemoryInline::FlatRead32((r31 + 18240));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 18216));
    r3 = (r0 + r25);
    r0 = (r20 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r20) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0_not_2 = ~(r24);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r24);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r24)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_3 = ~(r20);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r20);
    r0 = (r0 + r0_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r20)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (0 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80863FBC;
    }
}

loc_80863FB8:
{
    r3_addc_left_2 = r3;
    r3 = (r3_addc_left_2 + r21);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r21)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80863FBC:
{
    MemoryInline::FlatWrite32((r26 + 348), r3);
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(29));
}

loc_80863FC8:
{
    r28 = (r28 + 4);
    MemoryInline::FlatWrite32((r26 + 344), r22);
    r27 = (r27 + 48);
    MemoryInline::FlatWrite32((r26 + 356), r3);
    MemoryInline::FlatWrite32((r26 + 352), r22);
    r26 = (r26 + 48);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80863F18;
    }
}

loc_80863FE4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[18] = r18;
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC00FB gpr_write=0xFFFC01FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80863EB8 func_80863EB8 preserves=true fpr_mask=0x00000000
