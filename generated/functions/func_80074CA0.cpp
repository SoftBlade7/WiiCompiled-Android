#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r16 = ctx->gpr[16];
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

    goto loc_80074CA0;

loc_80074CA0:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80021574 (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021574
    r0 = MemoryInline::FlatRead32((r3 + 232));
    r16 = r3;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r3 = (r1 + 76);
    // inline leaf 0x8004EA50 (13 guest instruction(s))
}

loc_inl1_0x8004EA50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_inl1_0x8004EA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004EA68;
    }
}

loc_inl1_0x8004EA60:
{
    r3 = (r3 + r0);
    goto loc_inl1_0x8004EA6C;
}

loc_inl1_0x8004EA68:
{
    r3 = 0;
}

loc_inl1_0x8004EA6C:
{
}

loc_inl1_0x8004EA70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004EA7C;
    }
}

loc_inl1_0x8004EA74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl1_cont_8004EA50;
}

loc_inl1_0x8004EA7C:
{
    r3 = 0;
}

loc_inl1_cont_8004EA50:
{
    // end of inlined leaf 0x8004EA50
    r30 = r3;
    r3 = (r1 + 76);
    // inline leaf 0x8004E400 (13 guest instruction(s))
}

loc_inl2_0x8004E400:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl2_0x8004E40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8004E418;
    }
}

loc_inl2_0x8004E410:
{
    r3 = (r3 + r0);
    goto loc_inl2_0x8004E41C;
}

loc_inl2_0x8004E418:
{
    r3 = 0;
}

loc_inl2_0x8004E41C:
{
}

loc_inl2_0x8004E420:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8004E42C;
    }
}

loc_inl2_0x8004E424:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl2_cont_8004E400;
}

loc_inl2_0x8004E42C:
{
    r3 = 0;
}

loc_inl2_cont_8004E400:
{
    // end of inlined leaf 0x8004E400
    r0 = MemoryInline::FlatRead32((r16 + 328));
    r19 = r3;
}

loc_80074CE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074D48;
    }
}

loc_80074CE4:
{
}

loc_80074CE8:
{
    r20 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80074D48;
    }
}

loc_80074CF0:
{
    r17 = 0;
    r18 = 1;
    goto loc_80074D40;
}

loc_80074CFC:
{
    r4 = r20;
    r3 = (r1 + 76);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80074D0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80074D1C;
    }
}

loc_80074D10:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 1);
    goto loc_80074D20;
}

loc_80074D1C:
{
    r0 = 0;
}

loc_80074D20:
{
}

loc_80074D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074D34;
    }
}

loc_80074D28:
{
    r3 = MemoryInline::FlatRead32((r16 + 328));
    r3_addr_2 = (r3 + r20);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r18));
    goto loc_80074D3C;
}

loc_80074D34:
{
    r3 = MemoryInline::FlatRead32((r16 + 328));
    r3_addr_3 = (r3 + r20);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r17));
}

loc_80074D3C:
{
    r20 = (r20 + 1);
}

loc_80074D40:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(r19));
}

loc_80074D44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80074CFC;
    }
}

loc_80074D48:
{
    r17 = 0;
    r29 = 0;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r25 = 0;
    r24 = 0;
    r23 = 0;
    r22 = 0;
    r21 = 0;
    r20 = 0;
    r19 = 0;
    r18 = 0;
    r31 = 0;
    goto loc_8007501C;
}

loc_80074D84:
{
    r4 = r17;
    r3 = (r1 + 76);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E9F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 72), r3);
    r3 = MemoryInline::FlatRead32((r16 + 320));
    r3_addr_7 = (r3 + r29);
    MemoryInline::FlatWrite32(r3_addr_7, r31);
    r0 = MemoryInline::FlatRead32((r16 + 332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80074DA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074DC0;
    }
}

loc_80074DA8:
{
    r5 = MemoryInline::FlatRead32((r1 + 72));
    r4 = (r0 + r28);
    r3 = (r1 + 68);
    r0 = (r5 + 64);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    ctx->lr = 0x80074DC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80074DC0:
{
    r0 = MemoryInline::FlatRead32((r16 + 336));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80074DC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074DE4;
    }
}

loc_80074DCC:
{
    r5 = MemoryInline::FlatRead32((r1 + 72));
    r4 = (r0 + r27);
    r3 = (r1 + 64);
    r0 = (r5 + 324);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    ctx->lr = 0x80074DE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80074DE4:
{
    r0 = MemoryInline::FlatRead32((r16 + 340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80074DEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074E08;
    }
}

loc_80074DF0:
{
    r5 = MemoryInline::FlatRead32((r1 + 72));
    r4 = (r0 + r26);
    r3 = (r1 + 60);
    r0 = (r5 + 424);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    ctx->lr = 0x80074E08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800508C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80074E08:
{
    r0 = MemoryInline::FlatRead32((r16 + 344));
}

loc_80074E10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074E2C;
    }
}

loc_80074E14:
{
    r5 = MemoryInline::FlatRead32((r1 + 72));
    r4 = (r0 + r25);
    r3 = (r1 + 56);
    r0 = (r5 + 1008);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    // inline leaf 0x800517F0 (23 guest instruction(s))
    r6 = MemoryInline::FlatRead32(r3);
    r3 = r4;
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r6);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r6 + 4));
        }
    }
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r6 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r6 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r6 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r6 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r6 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r6 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r6 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r6 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r5);
    }
    // end of inlined leaf 0x800517F0
}

loc_80074E2C:
{
    r0 = MemoryInline::FlatRead32((r16 + 348));
}

loc_80074E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074E50;
    }
}

loc_80074E38:
{
    r5 = MemoryInline::FlatRead32((r1 + 72));
    r4 = (r0 + r24);
    r3 = (r1 + 52);
    r0 = (r5 + 20);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // inline leaf 0x80050B50 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r3 = r4;
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    // end of inlined leaf 0x80050B50
}

loc_80074E50:
{
    r0 = MemoryInline::FlatRead32((r16 + 352));
}

loc_80074E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074E74;
    }
}

loc_80074E5C:
{
    r5 = MemoryInline::FlatRead32((r1 + 72));
    r4 = (r0 + r23);
    r3 = (r1 + 48);
    r0 = (r5 + 28);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    // inline leaf 0x80050C70 (27 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r3 = r4;
    guest_range_3 = MemoryInline::ResolveRangeHost(r5, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, r5);
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r5 + 1));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r5 + 3));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r5 + 5));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r5 + 6));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r5 + 7));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r5 + 8));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r5 + 9));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r4 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 10u, (r5 + 10));
    MemoryInline::WriteResolved8(guest_range_4, 10u, (r4 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r5 + 11));
    MemoryInline::WriteResolved8(guest_range_4, 11u, (r4 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80050C70
}

loc_80074E74:
{
    r0 = MemoryInline::FlatRead32((r16 + 356));
}

loc_80074E7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074EC0;
    }
}

loc_80074E80:
{
    r3 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80074E8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074E98;
    }
}

loc_80074E90:
{
    r0 = (r3 + r0);
    goto loc_80074E9C;
}

loc_80074E98:
{
    r0 = 0;
}

loc_80074E9C:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = (r1 + 40);
    r0 = MemoryInline::FlatRead32((r16 + 356));
    r4 = (r0 + r22);
    ctx->lr = 0x80074EB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r1 + 44);
    r4 = 0;
    ctx->lr = 0x80074EC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[16] = r16;
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
    InvokeDirectCpu<0x80050450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
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
}

loc_80074EC0:
{
    r0 = MemoryInline::FlatRead32((r16 + 360));
}

loc_80074EC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074F10;
    }
}

loc_80074ECC:
{
    r3 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80074ED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074EE4;
    }
}

loc_80074EDC:
{
    r3 = (r3 + r0);
    goto loc_80074EE8;
}

loc_80074EE4:
{
    r3 = 0;
}

loc_80074EE8:
{
    r0 = (r3 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r16 + 360));
    r4 = (r0 + r21);
    ctx->lr = 0x80074F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050570u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 36);
    r4 = 0;
    ctx->lr = 0x80074F10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[16] = r16;
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
    InvokeDirectCpu<0x80050470u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
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
}

loc_80074F10:
{
    r0 = MemoryInline::FlatRead32((r16 + 364));
}

loc_80074F18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074F60;
    }
}

loc_80074F1C:
{
    r3 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80074F28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074F34;
    }
}

loc_80074F2C:
{
    r3 = (r3 + r0);
    goto loc_80074F38;
}

loc_80074F34:
{
    r3 = 0;
}

loc_80074F38:
{
    r0 = (r3 + 160);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = (r1 + 24);
    r0 = MemoryInline::FlatRead32((r16 + 364));
    r4 = (r0 + r20);
    ctx->lr = 0x80074F50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800505B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 28);
    r4 = 0;
    ctx->lr = 0x80074F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[16] = r16;
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
    InvokeDirectCpu<0x80050490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
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
}

loc_80074F60:
{
    r0 = MemoryInline::FlatRead32((r16 + 368));
}

loc_80074F68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074FB0;
    }
}

loc_80074F6C:
{
    r3 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80074F78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074F84;
    }
}

loc_80074F7C:
{
    r3 = (r3 + r0);
    goto loc_80074F88;
}

loc_80074F84:
{
    r3 = 0;
}

loc_80074F88:
{
    r0 = (r3 + 224);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 16);
    r0 = MemoryInline::FlatRead32((r16 + 368));
    r4 = (r0 + r19);
    ctx->lr = 0x80074FA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800505F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 20);
    r4 = 0;
    ctx->lr = 0x80074FB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[16] = r16;
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
    InvokeDirectCpu<0x800504B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
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
}

loc_80074FB0:
{
    r0 = MemoryInline::FlatRead32((r16 + 372));
}

loc_80074FB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074FE8;
    }
}

loc_80074FBC:
{
    r3 = (r1 + 72);
    // inline leaf 0x800521C0 (8 guest instruction(s))
}

loc_inl6_0x800521C0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x800521CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl6_0x800521D8;
    }
}

loc_inl6_0x800521D0:
{
    r3 = (r3 + r0);
    goto loc_inl6_cont_800521C0;
}

loc_inl6_0x800521D8:
{
    r3 = 0;
}

loc_inl6_cont_800521C0:
{
    // end of inlined leaf 0x800521C0
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r16 + 372));
    r4 = (r0 + r18);
    ctx->lr = 0x80074FD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800503A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x80074FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[16] = r16;
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
    InvokeDirectCpu<0x80050410u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
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
}

loc_80074FE8:
{
    r29 = (r29 + 4);
    r28 = (r28 + 260);
    r27 = (r27 + 100);
    r26 = (r26 + 584);
    r25 = (r25 + 40);
    r24 = (r24 + 8);
    r23 = (r23 + 12);
    r22 = (r22 + 32);
    r21 = (r21 + 128);
    r20 = (r20 + 64);
    r19 = (r19 + 160);
    r18 = (r18 + 512);
    r17 = (r17 + 1);
}

loc_8007501C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r17), static_cast<uint32_t>(r30));
}

loc_80075020:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80074D84;
    }
}

loc_80075024:
{
    r11 = (r1 + 144);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
        r16 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -64));
        r17 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -60));
        r18 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -56));
        r19 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -52));
        r20 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -48));
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 44u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 48u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 52u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 56u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 60u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[16] = r16;
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
// RECOMP_REGISTRATION base 0x80074CA0 func_80074CA0 preserves=true fpr_mask=0x00000000
