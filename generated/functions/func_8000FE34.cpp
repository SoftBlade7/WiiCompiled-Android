#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000FE34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_stbu_ea_0 = 0;
    uint32_t r27_stbu_ea_1 = 0;
    uint32_t r27_stbu_ea_10 = 0;
    uint32_t r27_stbu_ea_11 = 0;
    uint32_t r27_stbu_ea_12 = 0;
    uint32_t r27_stbu_ea_13 = 0;
    uint32_t r27_stbu_ea_2 = 0;
    uint32_t r27_stbu_ea_3 = 0;
    uint32_t r27_stbu_ea_4 = 0;
    uint32_t r27_stbu_ea_5 = 0;
    uint32_t r27_stbu_ea_6 = 0;
    uint32_t r27_stbu_ea_7 = 0;
    uint32_t r27_stbu_ea_8 = 0;
    uint32_t r27_stbu_ea_9 = 0;
    uint32_t r31_ca_0 = 0;
    uint32_t r31_ca_1 = 0;
    uint32_t r31_ca_2 = 0;
    uint32_t r31_ca_3 = 0;
    uint32_t r31_ca_4 = 0;
    uint32_t r31_not_0 = 0;
    uint32_t r31_not_1 = 0;
    uint32_t r31_not_2 = 0;
    uint32_t r31_not_3 = 0;
    uint32_t r31_not_4 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_8000FE34;

loc_8000FE34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0 = (r4 | r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    }
    r25 = 0;
    r31 = r3;
    r30 = r4;
    r23 = r5;
    r24 = r6;
    r27 = (r5 + -1);
    r26 = 0;
    MemoryInline::FlatWrite8((r5 + -1), static_cast<uint8_t>(r25));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000FE98;
    }
}

loc_8000FE6C:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_8000FE74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000FE98;
    }
}

loc_8000FE78:
{
    r0 = MemoryInline::FlatRead8((r6 + 3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000FE80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FE90;
    }
}

loc_8000FE84:
{
    r0 = MemoryInline::FlatRead8((r6 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(111));
}

loc_8000FE8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FE98;
    }
}

loc_8000FE90:
{
    r3 = r27;
    goto loc_800100D0;
}

loc_8000FE98:
{
    r0 = MemoryInline::FlatRead8((r6 + 5));
}

loc_8000FEA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(100))) {
        goto loc_8000FED0;
    }
}

loc_8000FEA4:
{
}

loc_8000FEA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(105))) {
        goto loc_8000FED0;
    }
}

loc_8000FEAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(111));
}

loc_8000FEB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FF14;
    }
}

loc_8000FEB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(117));
}

loc_8000FEB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FF24;
    }
}

loc_8000FEBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(120));
}

loc_8000FEC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FF34;
    }
}

loc_8000FEC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(88));
}

loc_8000FEC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FF34;
    }
}

loc_8000FECC:
{
    goto loc_8000FF40;
}

loc_8000FED0:
{
    r29 = 0;
    r0 = (r3 ^ -2147483648);
    r6 = (r29 ^ -2147483648);
    r28 = 10;
    r5 = (r4 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r6_not_1 = ~(r6);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r0);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_2 = ~(r0);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r0);
    r6 = (r6 + r6_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6 = (0 - r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FF40;
    }
}

loc_8000FEF4:
{
    r0 = 0x80000000u;
    r0 = (r3 ^ r0);
    r0 = (r4 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FF0C;
    }
}

loc_8000FF04:
{
    r30 = (0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r31_not_1 = ~(r3);
    r31_ca_1 = (xer >> 29) & 1u;
    r31 = (r31_not_1 + r31_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r31_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r31_ca_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000FF0C:
{
    r25 = 1;
    goto loc_8000FF40;
}

loc_8000FF14:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 8;
    goto loc_8000FF40;
}

loc_8000FF24:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 10;
    goto loc_8000FF40;
}

loc_8000FF34:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 16;
}

loc_8000FF40:
{
    r3 = r31;
    r4 = r30;
    r5 = r29;
    r6 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021828u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r22 = r4;
    r3 = r31;
    r4 = r30;
    r5 = r29;
    r6 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021604u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000FF70:
{
    r30 = r4;
    r31 = r3;
    if ((static_cast<int32_t>(r22) >= static_cast<int32_t>(10))) {
        goto loc_8000FF84;
    }
}

loc_8000FF7C:
{
    r5 = (r22 + 48);
    goto loc_8000FF98;
}

loc_8000FF84:
{
    r0 = MemoryInline::FlatRead8((r24 + 5));
    r5 = (r22 + 55);
}

loc_8000FF90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(120))) {
        goto loc_8000FF98;
    }
}

loc_8000FF94:
{
    r5 = (r22 + 87);
}

loc_8000FF98:
{
    r0 = (r4 | r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r27_stbu_ea_2 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_2, static_cast<uint8_t>(r5));
    r27 = r27_stbu_ea_2;
    r26 = (r26 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FF40;
    }
}

loc_8000FFA8:
{
    r0 = (r28 ^ 8);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000FFD8;
    }
}

loc_8000FFB4:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_8000FFBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000FFD8;
    }
}

loc_8000FFC0:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_8000FFC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8000FFD8;
    }
}

loc_8000FFCC:
{
    r0 = 48;
    r27_stbu_ea_3 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_3, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_3;
    r26 = (r26 + 1);
}

loc_8000FFD8:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_8000FFE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80010030;
    }
}

loc_8000FFE4:
{
    r0 = MemoryInline::FlatRead32((r24 + 8));
}

loc_8000FFEC:
{
    MemoryInline::FlatWrite32((r24 + 12), r0);
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80010000;
    }
}

loc_8000FFF4:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_8000FFFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001000C;
    }
}

loc_80010000:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_8001000C:
{
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
    r27_stbu_ea_6 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_6, static_cast<uint8_t>(r3));
    r27 = r27_stbu_ea_6;
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
    r27_stbu_ea_7 = (r27 + -2);
    MemoryInline::FlatWrite8(r27_stbu_ea_7, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_7;
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
    r27_stbu_ea_9 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_9, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_9;
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
    r27_stbu_ea_10 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_10, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_10;
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
    r27_stbu_ea_11 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_11, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_11;
}

loc_800100CC:
{
    r3 = r27;
}

loc_800100D0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFC006FB gpr_write=0xFFC007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000FE34 func_8000FE34 preserves=true fpr_mask=0x00000000
