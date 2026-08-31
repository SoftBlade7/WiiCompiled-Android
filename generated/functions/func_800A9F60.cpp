#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A9F60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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

    goto loc_800A9F60;

loc_800A9F60:
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
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 156));
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A9F88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A9F94;
    }
}

loc_800A9F8C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800AA184;
}

loc_800A9F94:
{
    r0 = MemoryInline::FlatRead8((r30 + 162));
    r31 = 0;
    r0 = (r0 & 1);
}

loc_800A9FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A9FE0;
    }
}

loc_800A9FA4:
{
    r0 = MemoryInline::FlatRead8((r30 + 157));
}

loc_800A9FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A9FE0;
    }
}

loc_800A9FB0:
{
    r0 = MemoryInline::FlatRead8((r30 + 158));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A9FB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A9FE0;
    }
}

loc_800A9FBC:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x800A9FC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AB150u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 162));
    r31 = 1;
    MemoryInline::FlatWrite8((r30 + 158), static_cast<uint8_t>(r31));
    r0 = (r0 & 254);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite8((r30 + 162), static_cast<uint8_t>(r0));
}

loc_800A9FE0:
{
    r0 = MemoryInline::FlatRead8((r30 + 158));
}

loc_800A9FE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AA088;
    }
}

loc_800A9FEC:
{
    r0 = MemoryInline::FlatRead8((r30 + 162));
    r0 = (r0 & 2);
}

loc_800A9FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AA038;
    }
}

loc_800A9FF8:
{
    r0 = MemoryInline::FlatRead8((r30 + 157));
}

loc_800AA000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AA038;
    }
}

loc_800AA004:
{
    r0 = MemoryInline::FlatRead8((r30 + 159));
}

loc_800AA00C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AA020;
    }
}

loc_800AA010:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 160), static_cast<uint8_t>(r0));
    r31 = 2;
    goto loc_800AA02C;
}

loc_800AA020:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 160), static_cast<uint8_t>(r0));
    r31 = 1;
}

loc_800AA02C:
{
    r0 = MemoryInline::FlatRead8((r30 + 162));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite8((r30 + 162), static_cast<uint8_t>(r0));
}

loc_800AA038:
{
    r26 = r30;
    r27 = 0;
    goto loc_800AA07C;
}

loc_800AA044:
{
    r25 = r26;
    r28 = 0;
    goto loc_800AA068;
}

loc_800AA050:
{
    r3 = MemoryInline::FlatRead32((r25 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800AA058:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AA060;
    }
}

loc_800AA05C:
{
    ctx->lr = 0x800AA060u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008BE00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800AA060:
{
    r25 = (r25 + 4);
    r28 = (r28 + 1);
}

loc_800AA068:
{
    r0 = MemoryInline::FlatRead32((r30 + 144));
}

loc_800AA070:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_800AA050;
    }
}

loc_800AA074:
{
    r26 = (r26 + 16);
    r27 = (r27 + 1);
}

loc_800AA07C:
{
    r0 = MemoryInline::FlatRead32((r30 + 140));
}

loc_800AA084:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_800AA044;
    }
}

loc_800AA088:
{
}

loc_800AA08C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_800AA09C;
    }
}

loc_800AA090:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_800AA094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AA100;
    }
}

loc_800AA098:
{
    goto loc_800AA17C;
}

loc_800AA09C:
{
    r26 = r30;
    r28 = 0;
    goto loc_800AA0F0;
}

loc_800AA0A8:
{
    r31 = r26;
    r27 = 0;
    goto loc_800AA0DC;
}

loc_800AA0B4:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
}

loc_800AA0BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800AA0D4;
    }
}

loc_800AA0C0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800AA0C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AA0D4;
    }
}

loc_800AA0CC:
{
    r4 = 1;
    ctx->lr = 0x800AA0D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80127DB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_800AA0D4:
{
    r31 = (r31 + 4);
    r27 = (r27 + 1);
}

loc_800AA0DC:
{
    r0 = MemoryInline::FlatRead32((r30 + 144));
}

loc_800AA0E4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_800AA0B4;
    }
}

loc_800AA0E8:
{
    r26 = (r26 + 16);
    r28 = (r28 + 1);
}

loc_800AA0F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800AA0F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AA0A8;
    }
}

loc_800AA0FC:
{
    goto loc_800AA17C;
}

loc_800AA100:
{
    r31 = r30;
    r28 = 0;
    goto loc_800AA170;
}

loc_800AA10C:
{
    r26 = r31;
    r27 = 0;
    goto loc_800AA15C;
}

loc_800AA118:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
}

loc_800AA120:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800AA154;
    }
}

loc_800AA124:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0;
}

loc_800AA130:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800AA144;
    }
}

loc_800AA134:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
}

loc_800AA13C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800AA144;
    }
}

loc_800AA140:
{
    r4 = 1;
}

loc_800AA144:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800AA148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AA154;
    }
}

loc_800AA14C:
{
    r4 = 0;
    ctx->lr = 0x800AA154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80127DB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_800AA154:
{
    r26 = (r26 + 4);
    r27 = (r27 + 1);
}

loc_800AA15C:
{
    r0 = MemoryInline::FlatRead32((r30 + 144));
}

loc_800AA164:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_800AA118;
    }
}

loc_800AA168:
{
    r31 = (r31 + 16);
    r28 = (r28 + 1);
}

loc_800AA170:
{
    r0 = MemoryInline::FlatRead32((r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800AA178:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AA10C;
    }
}

loc_800AA17C:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800AA184:
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
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0xFE0001FF gpr_write=0xFE0009FB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A9F60 func_800A9F60 preserves=true fpr_mask=0x00000000
