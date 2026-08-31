#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D5914(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
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

    goto loc_801D5914;

loc_801D5914:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r7 = 0x80250000u;
    r7 = (r7 + 12232);
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 36u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, r7);
    r0 = 3;
    r5 = r3;
    r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r7 + 4));
    r28 = (r1 + 8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r7 + 8));
    r25 = 0;
    r12 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r7 + 12));
    r26 = 0;
    r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r7 + 16));
    r27 = 0;
    r10 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r7 + 20));
    r6 = 48;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r7 + 24));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r7 + 28));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r7 + 32));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r29);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r31);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r11);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r8);
    }
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r7);
    ctr = r0;
}

loc_801D5994:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_801D599C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_801D59C4;
    }
}

loc_801D59A0:
{
    r8 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r26 = 1;
    r25 = (r25 + 1);
    r7 = (r8 * r0);
    r0 = (r8 + 48);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r4 - r7);
    goto loc_801D59D8;
}

loc_801D59C4:
{
}

loc_801D59C8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801D59D8;
    }
}

loc_801D59CC:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r6));
    r25 = (r25 + 1);
    r5 = (r5 + 1);
}

loc_801D59D8:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
}

loc_801D59E0:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_801D5A08;
    }
}

loc_801D59E4:
{
    r8 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r26 = 1;
    r25 = (r25 + 1);
    r7 = (r8 * r0);
    r0 = (r8 + 48);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r4 - r7);
    goto loc_801D5A1C;
}

loc_801D5A08:
{
}

loc_801D5A0C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801D5A1C;
    }
}

loc_801D5A10:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r6));
    r25 = (r25 + 1);
    r5 = (r5 + 1);
}

loc_801D5A1C:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801D5A24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801D5A4C;
    }
}

loc_801D5A28:
{
    r8 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r26 = 1;
    r25 = (r25 + 1);
    r7 = (r8 * r0);
    r0 = (r8 + 48);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r4 - r7);
    goto loc_801D5A60;
}

loc_801D5A4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_801D5A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D5A60;
    }
}

loc_801D5A54:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r6));
    r25 = (r25 + 1);
    r5 = (r5 + 1);
}

loc_801D5A60:
{
    r28 = (r28 + 12);
    r27 = (r27 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D5994;
    }
}

loc_801D5A6C:
{
    r0 = (r4 + 48);
    r11 = (r1 + 80);
    r3_addr_0 = (r3 + r25);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r0));
    r3 = (r25 + 1);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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

// RECOMP_GUEST_ABI gpr_read=0xFE0001FB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D5914 func_801D5914 preserves=true fpr_mask=0x00000000
