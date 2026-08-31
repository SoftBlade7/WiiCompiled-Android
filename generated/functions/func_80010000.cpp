#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80010000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_stbu_ea_0 = 0;
    uint32_t r27_stbu_ea_1 = 0;
    uint32_t r27_stbu_ea_2 = 0;
    uint32_t r27_stbu_ea_3 = 0;
    uint32_t r27_stbu_ea_4 = 0;
    uint32_t r27_stbu_ea_5 = 0;
    uint32_t r27_stbu_ea_6 = 0;
    uint32_t r27_stbu_ea_7 = 0;
    uint32_t r27_stbu_ea_8 = 0;
    uint32_t r27_stbu_ea_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
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

    goto loc_80010000;

loc_80010000:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 12), r0);
    r0 = (r28 ^ 16);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80010030;
    }
}

loc_80010018:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_80010020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010030;
    }
}

loc_80010024:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r3 + -2);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_80010030:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r23 - r27);
    r0 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(509));
}

loc_80010040:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001004C;
    }
}

loc_80010044:
{
    r3 = 0;
    goto loc_800100D0;
}

loc_8001004C:
{
    r3 = 48;
    goto loc_8001005C;
}

loc_80010054:
{
    r27_stbu_ea_2 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_2, static_cast<uint8_t>(r3));
    r27 = r27_stbu_ea_2;
    r26 = (r26 + 1);
}

loc_8001005C:
{
    r0 = MemoryInline::FlatRead32((r24 + 12));
}

loc_80010064:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80010054;
    }
}

loc_80010068:
{
    r0 = (r28 ^ 16);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80010090;
    }
}

loc_80010074:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_8001007C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010090;
    }
}

loc_80010080:
{
    r3 = MemoryInline::FlatRead8((r24 + 5));
    r0 = 48;
    MemoryInline::FlatWrite8((r27 + -1), static_cast<uint8_t>(r3));
    r27_stbu_ea_3 = (r27 + -2);
    MemoryInline::FlatWrite8(r27_stbu_ea_3, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_3;
}

loc_80010090:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80010094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800100A4;
    }
}

loc_80010098:
{
    r0 = 45;
    r27_stbu_ea_5 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_5, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_5;
    goto loc_800100CC;
}

loc_800100A4:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800100AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800100BC;
    }
}

loc_800100B0:
{
    r0 = 43;
    r27_stbu_ea_6 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_6, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_6;
    goto loc_800100CC;
}

loc_800100BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800100C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800100CC;
    }
}

loc_800100C4:
{
    r0 = 32;
    r27_stbu_ea_7 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_7, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_7;
}

loc_800100CC:
{
    r3 = r27;
}

loc_800100D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x3F80000B gpr_write=0xFFC0000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80010000 func_80010000 preserves=true fpr_mask=0x00000000
