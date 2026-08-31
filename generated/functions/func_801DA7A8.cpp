#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DA7A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_10 = 0;
    uint32_t r20_addr_11 = 0;
    uint32_t r20_addr_12 = 0;
    uint32_t r20_addr_13 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_addr_5 = 0;
    uint32_t r20_addr_6 = 0;
    uint32_t r20_addr_7 = 0;
    uint32_t r20_addr_8 = 0;
    uint32_t r20_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801DA7A8;

loc_801DA7A8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
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
    r16 = 0;
    r20 = r3;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r16));
    r21 = r4;
    r22 = r5;
    r31 = 0;
    r18 = 0x80000000u;
    r19 = 32;
    r17 = 0x802A0000u;
    goto loc_801DAC3C;
}

loc_801DA7E8:
{
    r20 = (r20 + 1);
}

loc_801DA7EC:
{
    r0 = MemoryInline::FlatRead8(r20);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA7E8;
    }
}

loc_801DA7F8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_801DA800:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(37))) {
        goto loc_801DAC04;
    }
}

loc_801DA804:
{
    r0 = MemoryInline::FlatRead8(r21);
    r21 = (r21 + 1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801DA814:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(37))) {
        goto loc_801DA854;
    }
}

loc_801DA818:
{
    r4 = r20;
    r6 = r20;
    r5 = 0;
    r20 = (r20 + 1);
    goto loc_801DA834;
}

loc_801DA82C:
{
    r6 = (r6 + 1);
    r5 = (r5 + 1);
}

loc_801DA834:
{
    r3 = MemoryInline::FlatRead8(r6);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801DA82C;
    }
}

loc_801DA840:
{
    r4_addr_2 = (r4 + r5);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r0));
    r0 = (r5 + 1);
    r31 = (r31 + 1);
    r4_addr_3 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r16));
    goto loc_801DAC3C;
}

loc_801DA854:
{
}

loc_801DA858:
{
    r26 = r0;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(45))) {
        goto loc_801DA868;
    }
}

loc_801DA860:
{
    r0 = MemoryInline::FlatRead8(r21);
    r21 = (r21 + 1);
}

loc_801DA868:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r25 = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(42));
}

loc_801DA874:
{
    r29 = 0;
    r28 = 10;
    r24 = 48;
    r30 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DA8A4;
    }
}

loc_801DA888:
{
    r3 = r22;
    r4 = 1;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8(r21);
    r21 = (r21 + 1);
    r27 = MemoryInline::FlatRead32(r3);
    goto loc_801DA8D8;
}

loc_801DA8A4:
{
    r27 = 0;
    goto loc_801DA8C4;
}

loc_801DA8AC:
{
    r4 = (r27 * 10);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8(r21);
    r21 = (r21 + 1);
    r3 = (r3 + r4);
    r27 = (r3 + -48);
}

loc_801DA8C4:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801DA8CC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(48))) {
        goto loc_801DA8D8;
    }
}

loc_801DA8D0:
{
}

loc_801DA8D4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(57))) {
        goto loc_801DA8AC;
    }
}

loc_801DA8D8:
{
    r3 = (r0 & 223);
}

loc_801DA8DC:
{
    r23 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801DA8E4:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(76))) {
        goto loc_801DA8F0;
    }
}

loc_801DA8E8:
{
    r0 = MemoryInline::FlatRead8(r21);
    r21 = (r21 + 1);
}

loc_801DA8F0:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -88);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(32));
}

loc_801DA8FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801DAB8C;
    }
}

loc_801DA900:
{
    r3 = (r17 + 6256);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801DA944u:
        goto loc_801DA944;
        break;
    case 0x801DAB8Cu:
        goto loc_801DAB8C;
        break;
    case 0x801DA954u:
        goto loc_801DA954;
        break;
    case 0x801DA914u:
        goto loc_801DA914;
        break;
    case 0x801DA920u:
        goto loc_801DA920;
        break;
    case 0x801DA9A4u:
        goto loc_801DA9A4;
        break;
    case 0x801DA92Cu:
        goto loc_801DA92C;
        break;
    case 0x801DA934u:
        goto loc_801DA934;
        break;
    default:
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
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_801DA914:
{
    r30 = 1;
    r29 = 1;
    goto loc_801DAB8C;
}

loc_801DA920:
{
    r30 = 1;
    r28 = 8;
    goto loc_801DAB8C;
}

loc_801DA92C:
{
    r30 = 1;
    goto loc_801DAB8C;
}

loc_801DA934:
{
    r30 = 1;
    r28 = 16;
    r24 = 87;
    goto loc_801DAB8C;
}

loc_801DA944:
{
    r30 = 1;
    r28 = 16;
    r24 = 55;
    goto loc_801DAB8C;
}

loc_801DA954:
{
    r3 = r22;
    r4 = 1;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32(r3);
    r3 = r20;
    r5 = r20;
    r4 = 0;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r20 = (r20 + 1);
    goto loc_801DA984;
}

loc_801DA97C:
{
    r5 = (r5 + 1);
    r4 = (r4 + 1);
}

loc_801DA984:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA97C;
    }
}

loc_801DA990:
{
    r3_addr_3 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r6));
    r0 = (r4 + 1);
    r31 = (r31 + 1);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r16));
    goto loc_801DAB8C;
}

loc_801DA9A4:
{
    r3 = r22;
    r4 = 1;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
}

loc_801DA9B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801DAA28;
    }
}

loc_801DA9BC:
{
    r4 = r3;
    r5 = 0;
    goto loc_801DA9D0;
}

loc_801DA9C8:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
}

loc_801DA9D0:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA9C8;
    }
}

loc_801DA9DC:
{
    r6 = r20;
    r4 = 0;
    goto loc_801DA9F0;
}

loc_801DA9E8:
{
    r6 = (r6 + 1);
    r4 = (r4 + 1);
}

loc_801DA9F0:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA9E8;
    }
}

loc_801DA9FC:
{
    r4 = (r20 + r4);
    goto loc_801DAA14;
}

loc_801DAA04:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_801DAA14:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DAA04;
    }
}

loc_801DAA20:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r16));
    goto loc_801DAA2C;
}

loc_801DAA28:
{
    r5 = 0;
}

loc_801DAA2C:
{
    r31 = (r31 + r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    goto loc_801DAB84;
}

loc_801DAA38:
{
}

loc_801DAA3C:
{
    r31 = (r31 + 1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(45))) {
        goto loc_801DAA74;
    }
}

loc_801DAA44:
{
    r6 = r20;
    r4 = 0;
    goto loc_801DAA58;
}

loc_801DAA50:
{
    r6 = (r6 + 1);
    r4 = (r4 + 1);
}

loc_801DAA58:
{
    r3 = MemoryInline::FlatRead8(r6);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801DAA50;
    }
}

loc_801DAA64:
{
    r20_addr_3 = (r20 + r4);
    MemoryInline::FlatWrite8(r20_addr_3, static_cast<uint8_t>(r19));
    r3 = (r4 + 1);
    r20_addr_4 = (r20 + r3);
    MemoryInline::FlatWrite8(r20_addr_4, static_cast<uint8_t>(r16));
    goto loc_801DAB80;
}

loc_801DAA74:
{
    r6 = r20;
    r3 = 0;
    goto loc_801DAA88;
}

loc_801DAA80:
{
    r6 = (r6 + 1);
    r3 = (r3 + 1);
}

loc_801DAA88:
{
    r4 = MemoryInline::FlatRead8(r6);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801DAA80;
    }
}

loc_801DAA94:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DAA98:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DAB7C;
    }
}

loc_801DAA9C:
{
    r4 = (r3 + 1);
}

loc_801DAAA4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_801DAB58;
    }
}

loc_801DAAA8:
{
    r6 = 0;
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DAAC4;
    }
}

loc_801DAAB4:
{
    r4 = (r18 + 1);
}

loc_801DAABC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r4))) {
        goto loc_801DAAC4;
    }
}

loc_801DAAC0:
{
    r7 = 1;
}

loc_801DAAC4:
{
}

loc_801DAAC8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801DAAF4;
    }
}

loc_801DAACC:
{
    r4 = (r3 & -2147483648);
}

loc_801DAAD0:
{
    r7 = 1;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801DAAE8;
    }
}

loc_801DAAD8:
{
    r4 = (r3 + 1);
    r4 = (r4 & -2147483648);
}

loc_801DAAE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801DAAE8;
    }
}

loc_801DAAE4:
{
    r7 = 0;
}

loc_801DAAE8:
{
}

loc_801DAAEC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801DAAF4;
    }
}

loc_801DAAF0:
{
    r6 = 1;
}

loc_801DAAF4:
{
}

loc_801DAAF8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801DAB58;
    }
}

loc_801DAAFC:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r4 = (r4_rot_3 & 536870911);
    ctr = r4;
}

loc_801DAB08:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(8))) {
        goto loc_801DAB58;
    }
}

loc_801DAB0C:
{
    r20_addr_6 = (r20 + r3);
    r6 = MemoryInline::FlatRead8(r20_addr_6);
    r4 = (r20 + r3);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r4 + -1));
    r20_addr_7 = (r20 + r3);
    MemoryInline::FlatWrite8(r20_addr_7, static_cast<uint8_t>(r6));
    r3 = (r3 + -8);
    r6 = MemoryInline::FlatRead8((r4 + -2));
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r4 + -3));
    MemoryInline::FlatWrite8((r4 + -2), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r4 + -4));
    MemoryInline::FlatWrite8((r4 + -3), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r4 + -5));
    MemoryInline::FlatWrite8((r4 + -4), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r4 + -6));
    MemoryInline::FlatWrite8((r4 + -5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r4 + -7));
    MemoryInline::FlatWrite8((r4 + -6), static_cast<uint8_t>(r6));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DAB0C;
    }
}

loc_801DAB58:
{
    r4 = (r3 + 1);
    ctr = r4;
}

loc_801DAB64:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801DAB7C;
    }
}

loc_801DAB68:
{
    r20_addr_10 = (r20 + r3);
    r4 = MemoryInline::FlatRead8(r20_addr_10);
    r6 = (r20 + r3);
    r3 = (r3 + -1);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DAB68;
    }
}

loc_801DAB7C:
{
    MemoryInline::FlatWrite8(r20, static_cast<uint8_t>(r19));
}

loc_801DAB80:
{
    r5 = (r5 + 1);
}

loc_801DAB84:
{
}

loc_801DAB88:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r27))) {
        goto loc_801DAA38;
    }
}

loc_801DAB8C:
{
}

loc_801DAB90:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801DAC3C;
    }
}

loc_801DAB94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(76));
}

loc_801DAB98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DABB0;
    }
}

loc_801DAB9C:
{
    r3 = r22;
    r4 = 1;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r3);
    goto loc_801DABDC;
}

loc_801DABB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801DABB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DABCC;
    }
}

loc_801DABB8:
{
    r3 = r22;
    r4 = 1;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r3);
    goto loc_801DABDC;
}

loc_801DABCC:
{
    r3 = r22;
    r4 = 1;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r3);
}

loc_801DABDC:
{
    r3 = r20;
    r5 = r28;
    r6 = r24;
    r7 = r29;
    r8 = r27;
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    ctx->lr = 0x801DABFCu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DA1B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = (r31 + r3);
    goto loc_801DAC3C;
}

loc_801DAC04:
{
    r3 = r20;
    r5 = r20;
    r4 = 0;
    r20 = (r20 + 1);
    goto loc_801DAC20;
}

loc_801DAC18:
{
    r5 = (r5 + 1);
    r4 = (r4 + 1);
}

loc_801DAC20:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DAC18;
    }
}

loc_801DAC2C:
{
    r3_addr_6 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r6));
    r0 = (r4 + 1);
    r31 = (r31 + 1);
    r3_addr_7 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r16));
}

loc_801DAC3C:
{
    r6 = MemoryInline::FlatRead8(r21);
    r21 = (r21 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DA7EC;
    }
}

loc_801DAC4C:
{
    r11 = (r1 + 80);
    r3 = r31;
    // inline leaf 0x800215C0 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C0
    r0 = MemoryInline::FlatRead32((r1 + 84));
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFF1FFB gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DA7A8 func_801DA7A8 preserves=true fpr_mask=0x00000000
