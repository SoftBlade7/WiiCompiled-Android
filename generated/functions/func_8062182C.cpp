#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8062182C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r9_stbu_ea_0 = 0;
    uint32_t r9_stbu_ea_1 = 0;
    uint32_t r9_stbu_ea_2 = 0;
    uint32_t r9_stbu_ea_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8062182C;

loc_8062182C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80621BC0;
    }
}

loc_80621844:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8062184C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80621BC0;
    }
}

loc_80621850:
{
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 251u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = 38;
    r9 = (r3 + 59);
    MemoryInline::WriteResolved32(guest_range_0, 23u, (r3 + 24), r4);
    r8 = (r7 + 23);
    MemoryInline::WriteResolved32(guest_range_0, 27u, (r3 + 28), r5);
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r3 + 32), static_cast<uint8_t>(r6));
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 216u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 0u, r7);
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 36), static_cast<uint8_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 2u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r7 + 2));
            r4 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r7 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 37u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 39u, (r3 + 40), r4);
        MemoryInline::WriteResolved16(guest_range_0, 37u, (r3 + 38), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 6u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r7 + 6));
            r4 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r7 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 41u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 43u, (r3 + 44), r4);
        MemoryInline::WriteResolved16(guest_range_0, 41u, (r3 + 42), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 10u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r7 + 10));
            r4 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r7 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 45u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 47u, (r3 + 48), r4);
        MemoryInline::WriteResolved16(guest_range_0, 45u, (r3 + 46), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 14u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r7 + 14));
            r4 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r7 + 16));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 49u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 51u, (r3 + 52), r4);
        MemoryInline::WriteResolved16(guest_range_0, 49u, (r3 + 50), r5);
    }
    r4 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r7 + 18));
    MemoryInline::WriteResolved16(guest_range_0, 53u, (r3 + 54), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r7 + 20));
    MemoryInline::WriteResolved16(guest_range_0, 55u, (r3 + 56), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r7 + 22));
    MemoryInline::WriteResolved16(guest_range_0, 57u, (r3 + 58), static_cast<uint16_t>(r4));
    ctr = r0;
}

loc_806218D4:
{
    r4 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r4));
    r9_stbu_ea_2 = (r9 + 2);
    MemoryInline::FlatWrite8(r9_stbu_ea_2, static_cast<uint8_t>(r0));
    r9 = r9_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806218D4;
    }
}

loc_806218E8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 100u, (r7 + 100));
    r5 = (r3 + 152);
    MemoryInline::WriteResolved8(guest_range_0, 135u, (r3 + 136), static_cast<uint8_t>(r0));
    r8 = (r3 + 200);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
}

loc_806218FC:
{
    r4 = (r7 + 116);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 108u, (r7 + 108));
    MemoryInline::WriteResolved16(guest_range_0, 143u, (r3 + 144), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 110u, (r7 + 110));
    MemoryInline::WriteResolved8(guest_range_0, 145u, (r3 + 146), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 112u, (r7 + 112));
    MemoryInline::WriteResolved16(guest_range_0, 147u, (r3 + 148), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 114u, (r7 + 114));
    MemoryInline::WriteResolved8(guest_range_0, 149u, (r3 + 150), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80621B38;
    }
}

loc_80621924:
{
    r10 = (r3 + 152);
    r6 = 715849728;
    r11 = (r8 - r10);
    r9 = (r3 + 104);
    r12 = (r11 + 11);
    r0 = (r6 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r12))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r31 = (r0 + r6);
    r30 = (r31 + 1);
}

loc_80621954:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_80621AEC;
    }
}

loc_80621958:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(r8));
}

loc_8062195C:
{
    r6 = 0;
    r8 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8062198C;
    }
}

loc_80621968:
{
    r0 = (r11 & -2147483648);
}

loc_8062196C:
{
    r10 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80621980;
    }
}

loc_80621974:
{
    r0 = (r12 & -2147483648);
}

loc_80621978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80621980;
    }
}

loc_8062197C:
{
    r10 = 0;
}

loc_80621980:
{
}

loc_80621984:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8062198C;
    }
}

loc_80621988:
{
    r8 = 1;
}

loc_8062198C:
{
}

loc_80621990:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_806219BC;
    }
}

loc_80621994:
{
    r10 = (r31 & -2147483648);
}

loc_80621998:
{
    r8 = 1;
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_806219B0;
    }
}

loc_806219A0:
{
    r0 = (r30 & -2147483648);
}

loc_806219A8:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(r0))) {
        goto loc_806219B0;
    }
}

loc_806219AC:
{
    r8 = 0;
}

loc_806219B0:
{
}

loc_806219B4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_806219BC;
    }
}

loc_806219B8:
{
    r6 = 1;
}

loc_806219BC:
{
}

loc_806219C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80621AEC;
    }
}

loc_806219C4:
{
    r6 = (r9 + 95);
    r0 = 96;
    r6 = (r6 - r5);
    r6 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    ctr = r6;
}

loc_806219DC:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r9))) {
        goto loc_80621AEC;
    }
}

loc_806219E0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 91u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r4 + 4));
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 91u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r5 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r5 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r4 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r5 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r5 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r5 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r5 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 18u, (r4 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 18u, (r5 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 24u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_3, 24u, (r5 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 26u, (r4 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 26u, (r5 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 28u, (r4 + 32));
    MemoryInline::WriteResolved16(guest_range_3, 28u, (r5 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 30u, (r4 + 34));
    MemoryInline::WriteResolved8(guest_range_3, 30u, (r5 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 36u, (r4 + 40));
    MemoryInline::WriteResolved16(guest_range_3, 36u, (r5 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 38u, (r4 + 42));
    MemoryInline::WriteResolved8(guest_range_3, 38u, (r5 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 40u, (r4 + 44));
    MemoryInline::WriteResolved16(guest_range_3, 40u, (r5 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 42u, (r4 + 46));
    MemoryInline::WriteResolved8(guest_range_3, 42u, (r5 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 48u, (r4 + 52));
    MemoryInline::WriteResolved16(guest_range_3, 48u, (r5 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 50u, (r4 + 54));
    MemoryInline::WriteResolved8(guest_range_3, 50u, (r5 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 52u, (r4 + 56));
    MemoryInline::WriteResolved16(guest_range_3, 52u, (r5 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 54u, (r4 + 58));
    MemoryInline::WriteResolved8(guest_range_3, 54u, (r5 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 60u, (r4 + 64));
    MemoryInline::WriteResolved16(guest_range_3, 60u, (r5 + 64), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 62u, (r4 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 62u, (r5 + 66), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 64u, (r4 + 68));
    MemoryInline::WriteResolved16(guest_range_3, 64u, (r5 + 68), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 66u, (r4 + 70));
    MemoryInline::WriteResolved8(guest_range_3, 66u, (r5 + 70), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 72u, (r4 + 76));
    MemoryInline::WriteResolved16(guest_range_3, 72u, (r5 + 76), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 74u, (r4 + 78));
    MemoryInline::WriteResolved8(guest_range_3, 74u, (r5 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 76u, (r4 + 80));
    MemoryInline::WriteResolved16(guest_range_3, 76u, (r5 + 80), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 78u, (r4 + 82));
    MemoryInline::WriteResolved8(guest_range_3, 78u, (r5 + 82), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 84u, (r4 + 88));
    MemoryInline::WriteResolved16(guest_range_3, 84u, (r5 + 88), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 86u, (r4 + 90));
    MemoryInline::WriteResolved8(guest_range_3, 86u, (r5 + 90), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 88u, (r4 + 92));
    MemoryInline::WriteResolved16(guest_range_3, 88u, (r5 + 92), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 90u, (r4 + 94));
    r4 = (r4 + 96);
    MemoryInline::WriteResolved8(guest_range_3, 90u, (r5 + 94), static_cast<uint8_t>(r0));
    r5 = (r5 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806219E0;
    }
}

loc_80621AEC:
{
    r8 = (r3 + 200);
    r0 = 12;
    r6 = (r8 + 11);
    r6 = (r6 - r5);
    r6 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    ctr = r6;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
}

loc_80621B08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80621B38;
    }
}

loc_80621B0C:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    r4 = (r4 + 12);
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
    r5 = (r5 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80621B0C;
    }
}

loc_80621B38:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 168u, (r7 + 168));
    MemoryInline::WriteResolved16(guest_range_0, 203u, (r3 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 170u, (r7 + 170));
    MemoryInline::WriteResolved8(guest_range_0, 205u, (r3 + 206), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 172u, (r7 + 172));
    MemoryInline::WriteResolved16(guest_range_0, 207u, (r3 + 208), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 174u, (r7 + 174));
    MemoryInline::WriteResolved8(guest_range_0, 209u, (r3 + 210), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 176u, (r7 + 176));
    MemoryInline::WriteResolved32(guest_range_0, 211u, (r3 + 212), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 180u, (r7 + 180));
    MemoryInline::WriteResolved32(guest_range_0, 215u, (r3 + 216), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 184u, (r7 + 184));
    MemoryInline::WriteResolved32(guest_range_0, 219u, (r3 + 220), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 188u, (r7 + 188));
    MemoryInline::WriteResolved32(guest_range_0, 223u, (r3 + 224), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 192u, (r7 + 192));
    MemoryInline::WriteResolved8(guest_range_0, 227u, (r3 + 228), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 193u, (r7 + 193));
    MemoryInline::WriteResolved8(guest_range_0, 228u, (r3 + 229), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 194u, (r7 + 194));
    MemoryInline::WriteResolved8(guest_range_0, 229u, (r3 + 230), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 195u, (r7 + 195));
    MemoryInline::WriteResolved8(guest_range_0, 230u, (r3 + 231), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 196u, (r7 + 196));
    MemoryInline::WriteResolved32(guest_range_0, 231u, (r3 + 232), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 200u, (r7 + 200));
    MemoryInline::WriteResolved8(guest_range_0, 235u, (r3 + 236), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 204u, (r7 + 204));
    MemoryInline::WriteResolved32(guest_range_0, 239u, (r3 + 240), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 208u, (r7 + 208));
    MemoryInline::WriteResolved32(guest_range_0, 243u, (r3 + 244), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 212u, (r7 + 212));
    MemoryInline::WriteResolved32(guest_range_0, 247u, (r3 + 248), r0);
}

loc_80621BC0:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001F73 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8062182C func_8062182C preserves=true fpr_mask=0x00000000
