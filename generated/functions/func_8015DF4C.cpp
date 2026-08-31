#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015DF4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_10 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r10_addr_7 = 0;
    uint32_t r10_addr_8 = 0;
    uint32_t r10_addr_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8015DF4C;

loc_8015DF4C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r26 = r3;
    r31 = 0x80270000u;
    r29 = MemoryInline::FlatRead32((r13 + -26072));
    r28 = r26;
    r31 = (r31 + 4424);
    r30 = 0x80290000u;
}

loc_8015DF78:
{
    r0 = MemoryInline::FlatRead8(r26);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DF8C;
    }
}

loc_8015DF84:
{
    r3 = r29;
    goto loc_8015E23C;
}

loc_8015DF8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_8015DF90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DFA0;
    }
}

loc_8015DF94:
{
    r29 = 0;
    r26 = (r26 + 1);
    goto loc_8015DF78;
}

loc_8015DFA0:
{
}

loc_8015DFA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8015E01C;
    }
}

loc_8015DFA8:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8015DFB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8015DFFC;
    }
}

loc_8015DFB8:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_8015DFC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DFE0;
    }
}

loc_8015DFC8:
{
    r0 = (r29 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -26048));
    r26 = (r26 + 3);
    r3 = (r3 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8015DF78;
}

loc_8015DFE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015DFE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E01C;
    }
}

loc_8015DFE8:
{
    r0 = (r29 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -26048));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8015E23C;
}

loc_8015DFFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_8015E000:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E00C;
    }
}

loc_8015E004:
{
    r26 = (r26 + 2);
    goto loc_8015DF78;
}

loc_8015E00C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015E010:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E01C;
    }
}

loc_8015E014:
{
    r3 = r29;
    goto loc_8015E23C;
}

loc_8015E01C:
{
    r0 = MemoryInline::FlatRead32((r13 + -29512));
}

loc_8015E024:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015E0CC;
    }
}

loc_8015E028:
{
    r24 = r26;
    r5 = 0;
    r4 = 0;
    goto loc_8015E07C;
}

loc_8015E038:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8015E040:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8015E06C;
    }
}

loc_8015E044:
{
    r0 = (r24 - r26);
}

loc_8015E04C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(8))) {
        goto loc_8015E058;
    }
}

loc_8015E050:
{
}

loc_8015E054:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8015E060;
    }
}

loc_8015E058:
{
    r4 = 1;
    goto loc_8015E090;
}

loc_8015E060:
{
    r27 = (r24 + 1);
    r5 = 1;
    goto loc_8015E078;
}

loc_8015E06C:
{
}

loc_8015E070:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_8015E078;
    }
}

loc_8015E074:
{
    r4 = 1;
}

loc_8015E078:
{
    r24 = (r24 + 1);
}

loc_8015E07C:
{
    r3 = MemoryInline::FlatRead8(r24);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015E090;
    }
}

loc_8015E088:
{
}

loc_8015E08C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_8015E038;
    }
}

loc_8015E090:
{
}

loc_8015E094:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8015E0A8;
    }
}

loc_8015E098:
{
    r0 = (r24 - r27);
}

loc_8015E0A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_8015E0A8;
    }
}

loc_8015E0A4:
{
    r4 = 1;
}

loc_8015E0A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8015E0AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015E0EC;
    }
}

loc_8015E0B0:
{
    r6 = r28;
    r5 = (r30 + -32224);
    r3 = (r13 + -29504);
    r4 = 443;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8015E0C8u;
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A2660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015E0EC;
}

loc_8015E0CC:
{
    r24 = r26;
    goto loc_8015E0D8;
}

loc_8015E0D4:
{
    r24 = (r24 + 1);
}

loc_8015E0D8:
{
    r0 = MemoryInline::FlatRead8(r24);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015E0EC;
    }
}

loc_8015E0E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_8015E0E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E0D4;
    }
}

loc_8015E0EC:
{
    r3 = MemoryInline::FlatRead8(r24);
    r0 = (r29 * 12);
    r8 = MemoryInline::FlatRead32((r13 + -26048));
    r9 = (r24 - r26);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = MemoryInline::FlatRead32((r13 + -26052));
    r5 = (0 - r6);
    r3 = (r8 + r0);
    r12 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r5 | r6);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r3 = (r29 + 1);
    goto loc_8015E210;
}

loc_8015E124:
{
    r6 = (r3 * 12);
    r6_addr_3 = (r6 + r8);
    r10 = MemoryInline::FlatRead32(r6_addr_3);
    r6 = r6_addr_3;
    r7 = (r10 & -16777216);
}

loc_8015E130:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8015E13C;
    }
}

loc_8015E134:
{
}

loc_8015E138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8015E1FC;
    }
}

loc_8015E13C:
{
    r10 = (r10 & 16777215);
    r29 = r26;
    r25 = (r4 + r10);
    goto loc_8015E1C4;
}

loc_8015E14C:
{
    r11 = MemoryInline::FlatRead8(r25);
    r10 = 0;
    r25 = (r25 + 1);
    r24 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(0))) {
        goto loc_8015E168;
    }
}

loc_8015E160:
{
}

loc_8015E164:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(256))) {
        goto loc_8015E16C;
    }
}

loc_8015E168:
{
    r10 = 1;
}

loc_8015E16C:
{
}

loc_8015E170:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8015E178;
    }
}

loc_8015E174:
{
    goto loc_8015E180;
}

loc_8015E178:
{
    r10 = MemoryInline::FlatRead32((r12 + 16));
    r10_addr_4 = (r10 + r24);
    r24 = MemoryInline::FlatRead8(r10_addr_4);
}

loc_8015E180:
{
    r11 = MemoryInline::FlatRead8(r29);
    r10 = 0;
    r29 = (r29 + 1);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(0))) {
        goto loc_8015E19C;
    }
}

loc_8015E194:
{
}

loc_8015E198:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(256))) {
        goto loc_8015E1A0;
    }
}

loc_8015E19C:
{
    r10 = 1;
}

loc_8015E1A0:
{
}

loc_8015E1A4:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8015E1AC;
    }
}

loc_8015E1A8:
{
    goto loc_8015E1B4;
}

loc_8015E1AC:
{
    r10 = MemoryInline::FlatRead32((r12 + 16));
    r10_addr_6 = (r10 + r11);
    r11 = MemoryInline::FlatRead8(r10_addr_6);
}

loc_8015E1B4:
{
}

loc_8015E1B8:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(r24))) {
        goto loc_8015E1C4;
    }
}

loc_8015E1BC:
{
    r10 = 0;
    goto loc_8015E1F4;
}

loc_8015E1C4:
{
    r10 = MemoryInline::FlatRead8(r25);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8015E14C;
    }
}

loc_8015E1D0:
{
    r10 = MemoryInline::FlatRead8(r29);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_8015E1DC:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(47))) {
        goto loc_8015E1E8;
    }
}

loc_8015E1E0:
{
}

loc_8015E1E4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8015E1F0;
    }
}

loc_8015E1E8:
{
    r10 = 1;
    goto loc_8015E1F4;
}

loc_8015E1F0:
{
    r10 = 0;
}

loc_8015E1F4:
{
}

loc_8015E1F8:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(1))) {
        goto loc_8015E220;
    }
}

loc_8015E1FC:
{
}

loc_8015E200:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8015E20C;
    }
}

loc_8015E204:
{
    r3 = MemoryInline::FlatRead32((r6 + 8));
    goto loc_8015E210;
}

loc_8015E20C:
{
    r3 = (r3 + 1);
}

loc_8015E210:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
}

loc_8015E214:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015E124;
    }
}

loc_8015E218:
{
    r3 = -1;
    goto loc_8015E23C;
}

loc_8015E220:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015E224:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E22C;
    }
}

loc_8015E228:
{
    goto loc_8015E23C;
}

loc_8015E22C:
{
    r4 = (r9 + r26);
    r29 = r3;
    r26 = (r4 + 1);
    goto loc_8015DF78;
}

loc_8015E23C:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015DF4C func_8015DF4C preserves=true fpr_mask=0x00000000
