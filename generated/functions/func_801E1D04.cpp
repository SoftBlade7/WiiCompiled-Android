#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E1D04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E1D04;

loc_801E1D04:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r25 = r3;
    r31 = r4;
    r26 = r5;
    r27 = -1;
    r30 = 0;
    goto loc_801E1D7C;
}

loc_801E1D30:
{
    r29 = MemoryInline::FlatRead32(r31);
    r28 = r25;
}

loc_801E1D38:
{
    r3 = MemoryInline::FlatRead8(r28);
    // inline leaf 0x801DA19C (6 guest instruction(s))
}

loc_inl1_0x801DA19C:
{
}

loc_inl1_0x801DA1A0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(65))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801DA1A4:
{
}

loc_inl1_0x801DA1A8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(90))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801DA1AC:
{
    r3 = (r3 + 32);
    goto loc_inl1_cont_801DA19C;
}

loc_inl1_return:
{
}

loc_inl1_cont_801DA19C:
{
    // end of inlined leaf 0x801DA19C
    r0 = MemoryInline::FlatRead8(r29);
    r3 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801E1D4C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801E1D74;
    }
}

loc_801E1D50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E1D5C;
    }
}

loc_801E1D54:
{
    r3 = r27;
    goto loc_801E1D88;
}

loc_801E1D5C:
{
    r29 = (r29 + 1);
    r0 = MemoryInline::FlatRead8(r29);
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E1D38;
    }
}

loc_801E1D6C:
{
    r27 = r30;
    goto loc_801E1D38;
}

loc_801E1D74:
{
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_801E1D7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r26));
}

loc_801E1D80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E1D30;
    }
}

loc_801E1D84:
{
    r3 = r27;
}

loc_801E1D88:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFE00003B gpr_write=0xFE00080B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E1D04 func_801E1D04 preserves=true fpr_mask=0x00000000
