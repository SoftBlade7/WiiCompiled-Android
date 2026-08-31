#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80149C9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_80149EA0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r17 = ctx->gpr[17];
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

    goto loc_80149C9C;

loc_80149C9C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021578 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -4), r31);
    // end of inlined leaf 0x80021578
    r0 = (r3 * 52);
    r3 = 0x80340000u;
    r17 = r4;
    r3 = (r3 + -28872);
    r27 = (r3 + r0);
    r18 = r7;
    r0 = MemoryInline::FlatRead8((r27 + 17));
    r19 = r8;
    r21 = 0;
    r20 = 0;
    r0 = (r0 & 32);
}

loc_80149CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149CF8;
    }
}

loc_80149CE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80149CE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149CF0;
    }
}

loc_80149CE8:
{
    r3 = r19;
    ctx->lr = 0x80149CF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80149CF0:
{
    r3 = 8;
    goto loc_80149F20;
}

loc_80149CF8:
{
}

loc_80149CFC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_80149D0C;
    }
}

loc_80149D00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80149D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149D18;
    }
}

loc_80149D08:
{
    goto loc_80149D30;
}

loc_80149D0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(10));
}

loc_80149D10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149D24;
    }
}

loc_80149D14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80149D30;
    }
}

loc_80149D18:
{
    r23 = MemoryInline::FlatRead16((r27 + 20));
    r22 = 2;
    goto loc_80149D38;
}

loc_80149D24:
{
    r23 = MemoryInline::FlatRead16((r27 + 22));
    r22 = 2;
    goto loc_80149D38;
}

loc_80149D30:
{
    r3 = 5;
    goto loc_80149F20;
}

loc_80149D38:
{
}

loc_80149D3C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(9))) {
        goto loc_80149D48;
    }
}

loc_80149D40:
{
    r21 = 1;
    goto loc_80149D5C;
}

loc_80149D48:
{
}

loc_80149D4C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_80149D5C;
    }
}

loc_80149D50:
{
    r0 = (r5 & 8);
}

loc_80149D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149D5C;
    }
}

loc_80149D58:
{
    r21 = 2;
}

loc_80149D5C:
{
    r30 = (r5 & 15);
    r29 = (r6 & 255);
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r28 = (r28_rot_1 & 255);
    r31 = 9;
}

loc_80149D6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_80149D70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149D7C;
    }
}

loc_80149D74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_80149D78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149DB0;
    }
}

loc_80149D7C:
{
    r3 = r22;
    ctx->lr = 0x80149D84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012ED54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80149D88:
{
    r26 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80149D98;
    }
}

loc_80149D90:
{
    r3 = 3;
    goto loc_80149F20;
}

loc_80149D98:
{
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r31));
    r4 = 0;
    r24 = 0;
    r25 = 0;
    r20 = 0;
    goto loc_80149E14;
}

loc_80149DB0:
{
    r3 = MemoryInline::FlatRead16((r27 + 24));
    r24 = MemoryInline::FlatRead16((r19 + 2));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r0));
}

loc_80149DC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80149DFC;
    }
}

loc_80149DC4:
{
    r3 = r22;
    ctx->lr = 0x80149DCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012ED54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80149DD0:
{
    r26 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80149DE0;
    }
}

loc_80149DD8:
{
    r3 = 3;
    goto loc_80149F20;
}

loc_80149DE0:
{
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r31));
    r4 = 1;
    r3 = MemoryInline::FlatRead16((r27 + 24));
    r24 = MemoryInline::FlatRead16((r19 + 2));
    r0 = (r3 + -1);
    r25 = (r0 & 65535);
    goto loc_80149E14;
}

loc_80149DFC:
{
    r3 = MemoryInline::FlatRead16((r19 + 4));
    r26 = r19;
    r25 = r24;
    r4 = 0;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r19 + 4), static_cast<uint16_t>(r0));
}

loc_80149E14:
{
    r3 = MemoryInline::FlatRead16((r26 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 4080);
}

loc_80149E20:
{
    r3 = (r26 + r3);
    r0 = (r0 | r30);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r3 = (r3 + 9);
    if ((static_cast<uint32_t>(r17) != static_cast<uint32_t>(4))) {
        goto loc_80149E48;
    }
}

loc_80149E34:
{
}

loc_80149E38:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80149E48;
    }
}

loc_80149E3C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r18));
    r25 = 1;
    r24 = 1;
}

loc_80149E48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80149E4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149E80;
    }
}

loc_80149E50:
{
    r0 = MemoryInline::FlatRead16((r19 + 4));
    r5 = (r25 & 65535);
    r4 = (r19 + r0);
    r4 = (r4 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r19 + 4));
    r0 = MemoryInline::FlatRead16((r19 + 2));
    r3 = (r3 + r25);
    r0 = (r0 - r25);
    MemoryInline::FlatWrite16((r19 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r19 + 2), static_cast<uint16_t>(r0));
    goto loc_80149EA8;
}

loc_80149E80:
{
}

loc_80149E84:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(1))) {
        goto loc_80149E94;
    }
}

loc_80149E88:
{
    r0 = (r25 & 65535);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r29));
    goto loc_80149EA8;
}

loc_80149E94:
{
}

loc_80149E98:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(2))) {
        goto loc_80149EA8;
    }
}

loc_80149E9C:
{
    r0 = (r25 & 65535);
    addr_stbux_80149EA0_loc_0 = (r3 + r0);
    MemoryInline::FlatWrite8(addr_stbux_80149EA0_loc_0, static_cast<uint8_t>(r29));
    r3 = addr_stbux_80149EA0_loc_0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r28));
}

loc_80149EA8:
{
    r3 = (r25 + r21);
    r24 = (r24 - r25);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 17));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80149EC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80149ED8;
    }
}

loc_80149EC4:
{
    r3 = r23;
    r4 = r26;
    ctx->lr = 0x80149ED0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
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
    InvokeDirectCpu<0x8014A920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
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
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80149ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80149EE0;
    }
}

loc_80149ED8:
{
    r3 = 8;
    goto loc_80149F20;
}

loc_80149EE0:
{
    r0 = (r24 & 65535);
}

loc_80149EE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149EF0;
    }
}

loc_80149EE8:
{
    r17 = 11;
    goto loc_80149F0C;
}

loc_80149EF0:
{
    r3 = MemoryInline::FlatRead16((r27 + 24));
    r4 = (r25 & 65535);
    r0 = (r3 + -1);
}

loc_80149F00:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80149F0C;
    }
}

loc_80149F04:
{
    r17 = 11;
    r20 = 1;
}

loc_80149F0C:
{
    r0 = (r24 & 65535);
}

loc_80149F10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80149D6C;
    }
}

loc_80149F14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_80149F18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80149D6C;
    }
}

loc_80149F1C:
{
    r3 = 0;
}

loc_80149F20:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215C4 (16 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -4));
    // end of inlined leaf 0x800215C4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80149C9C func_80149C9C preserves=true fpr_mask=0x00000000
