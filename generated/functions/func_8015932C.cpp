#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015932C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8015932C;

loc_8015932C:
{
    r3 = MemoryInline::FlatRead32((r23 + 104));
}

loc_80159334:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + r30);
    r0 = (r0 - r30);
    MemoryInline::FlatWrite32((r23 + 104), r3);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8015937C;
    }
}

loc_8015934C:
{
    r3 = MemoryInline::FlatRead32(r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80159354:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80159368;
    }
}

loc_80159358:
{
    MemoryInline::FlatWrite32(r24, r29);
    goto loc_801593A8;
}

loc_80159364:
{
    r3 = r0;
}

loc_80159368:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80159370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80159364;
    }
}

loc_80159374:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_801593A8;
}

loc_8015937C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80159384:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80159398;
    }
}

loc_80159388:
{
    MemoryInline::FlatWrite32((r26 + 8), r29);
    goto loc_801593A8;
}

loc_80159394:
{
    r3 = r0;
}

loc_80159398:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801593A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80159394;
    }
}

loc_801593A4:
{
    MemoryInline::FlatWrite32(r3, r29);
}

loc_801593A8:
{
    r3 = r22;
    r11 = (r1 + 64);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0x65C0000B gpr_write=0xFFE0080B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015932C func_8015932C preserves=true fpr_mask=0x00000000
