#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80158E2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80158E2C;

loc_80158E2C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r21 = MemoryInline::FlatRead8(r3);
    r31 = 0x80280000u;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r4 = r21;
    r31 = (r31 + 30888);
    r28 = (r8 & 128);
    r27 = (r8 & 127);
    r5 = (r1 + 8);
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8015B77Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r22 = r3;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(29));
    r6 = (r6_rot_0 & 15);
    r4 = 12;
    r5 = (r0 & 4095);
}

loc_80158E8C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(4))) {
        goto loc_80158E98;
    }
}

loc_80158E94:
{
    r4 = (r5 + 8);
}

loc_80158E98:
{
    r4 = (r4 + 3);
    r0 = MemoryInline::FlatRead32((r23 + 4));
    r30 = (r4 & -4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80158EA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80158EB4;
    }
}

loc_80158EAC:
{
    r3 = 0;
    goto loc_801593AC;
}

loc_80158EB4:
{
    r29 = MemoryInline::FlatRead32((r23 + 104));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & 268431360);
}

loc_80158EC0:
{
    r4 = 0;
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r25));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r5 & 65535);
    r5 = (r5 | r0);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32(r29, r4);
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(8))) {
        goto loc_8015932C;
    }
}

loc_80158EE0:
{
    r5 = 0x80280000u;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r5 = (r5 + 31200);
    r5_addr_1 = (r5 + r4);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8015932Cu:
        goto loc_8015932C;
        break;
    case 0x80158EF8u:
        goto loc_80158EF8;
        break;
    case 0x80158FA8u:
        goto loc_80158FA8;
        break;
    case 0x80159064u:
        goto loc_80159064;
        break;
    case 0x801592ACu:
        goto loc_801592AC;
        break;
    case 0x801592DCu:
        goto loc_801592DC;
        break;
    case 0x801591F8u:
        goto loc_801591F8;
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
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80158EF8:
{
}

loc_80158EFC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80158FA8;
    }
}

loc_80158F00:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80158F08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80158FA8;
    }
}

loc_80158F0C:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
}

loc_80158F24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80158FA8;
    }
}

loc_80158F28:
{
    r5 = MemoryInline::FlatRead32((r23 + 104));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(5));
}

loc_80158F30:
{
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r30 = 0;
    r5 = (r5 + 12);
    r0 = (r4 + -12);
    MemoryInline::FlatWrite32((r23 + 104), r5);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r3 + r0);
    r21 = (r4 + 2);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80158F80;
    }
}

loc_80158F58:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80158F68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80158F78;
    }
}

loc_80158F6C:
{
    r4 = (r31 + 216);
    r3 = 655360;
    ctx->lr = 0x80158F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80158F78:
{
    r3 = r21;
    goto loc_801593AC;
}

loc_80158F80:
{
    r0 = (r27 + 1);
    r4 = r23;
    r5 = r24;
    r7 = r29;
    r8 = (r0 & 255);
    r6 = 4;
    r3 = (r3 + 2);
    ctx->lr = 0x80158FA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80158E2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = r3;
    goto loc_8015932C;
}

loc_80158FA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80158FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80159034;
    }
}

loc_80158FB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80158FC8;
    }
}

loc_80158FB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80158FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80158FD4;
    }
}

loc_80158FC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80158FE4;
    }
}

loc_80158FC4:
{
    goto loc_80159034;
}

loc_80158FC8:
{
}

loc_80158FCC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_80159034;
    }
}

loc_80158FD0:
{
    goto loc_80159000;
}

loc_80158FD4:
{
    r0 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    goto loc_8015932C;
}

loc_80158FE4:
{
    r4 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8015932C;
}

loc_80159000:
{
    r5 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & -16777216);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & -65536);
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (r6 + r5);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    goto loc_8015932C;
}

loc_80159034:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_80159054;
}

loc_80159040:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_80159054:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8015905C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80159040;
    }
}

loc_80159060:
{
    goto loc_8015932C;
}

loc_80159064:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_8015906C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801590A8;
    }
}

loc_80159070:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80159080;
    }
}

loc_80159074:
{
}

loc_80159078:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8015908C;
    }
}

loc_8015907C:
{
    goto loc_801591C8;
}

loc_80159080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(16));
}

loc_80159084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80159100;
    }
}

loc_80159088:
{
    goto loc_801591C8;
}

loc_8015908C:
{
    r4 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8015932C;
}

loc_801590A8:
{
    r7 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 4);
    r6 = MemoryInline::FlatRead8((r3 + 1));
    r4 = 65536;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8 = (r8_rot_1 & -16777216);
    r5 = MemoryInline::FlatRead8((r3 + 2));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & -65536);
    r6 = MemoryInline::FlatRead8((r3 + 3));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & -256);
    r5 = (r8 + r7);
    r3 = (r6 + r3);
    r3 = (r5 + r3);
}

loc_801590DC:
{
    MemoryInline::FlatWrite32((r29 + 8), r3);
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_8015932C;
    }
}

loc_801590E4:
{
    r3 = 2;
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8015932C;
}

loc_80159100:
{
    r3 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8015B84Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 255);
}

loc_8015910C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80159198;
    }
}

loc_80159110:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r22, 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r22);
}

loc_80159118:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80159154;
    }
}

loc_8015911C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r22 + 1));
}

loc_80159124:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80159154;
    }
}

loc_80159128:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 & -4096);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r22 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r22 + 3));
    r22 = (r22 + 16);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8015932C;
}

loc_80159154:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 & -4096);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 0u, r22);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r22 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r22 + 2));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & -16777216);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r22 + 3));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_4 & -65536);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r22 = (r22 + 16);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    goto loc_8015932C;
}

loc_80159198:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_801591B8;
}

loc_801591A4:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_801591B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801591C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_801591A4;
    }
}

loc_801591C4:
{
    goto loc_8015932C;
}

loc_801591C8:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801591D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801591EC;
    }
}

loc_801591DC:
{
    r3 = 655360;
    r4 = (r31 + 244);
    r3 = (r3 + 1);
    ctx->lr = 0x801591ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801591EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r22 + r0);
    goto loc_801593AC;
}

loc_801591F8:
{
    r5 = MemoryInline::FlatRead32((r23 + 104));
}

loc_80159200:
{
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r30 = 0;
    r5 = (r5 + 12);
    r0 = (r4 + -12);
    MemoryInline::FlatWrite32((r23 + 104), r5);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r21 = (r3 + r0);
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(5))) {
        goto loc_8015924C;
    }
}

loc_80159224:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80159234:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80159244;
    }
}

loc_80159238:
{
    r4 = (r31 + 216);
    r3 = 655360;
    ctx->lr = 0x80159244u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80159244:
{
    r3 = r21;
    goto loc_801593AC;
}

loc_8015924C:
{
}

loc_80159250:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8015925C;
    }
}

loc_80159254:
{
}

loc_80159258:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(13))) {
        goto loc_80159264;
    }
}

loc_8015925C:
{
    r0 = (r27 | 128);
    r27 = (r0 & 255);
}

loc_80159264:
{
    r3 = (r27 & 255);
    r25 = (r3 + 1);
    goto loc_801592A0;
}

loc_80159270:
{
    r3 = r22;
    r4 = r23;
    r5 = r24;
    r7 = r29;
    r8 = (r25 & 255);
    r6 = 0;
    ctx->lr = 0x8015928Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80158E2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80159290:
{
    r22 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801592A0;
    }
}

loc_80159298:
{
    r3 = 0;
    goto loc_801593AC;
}

loc_801592A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r21));
}

loc_801592A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80159270;
    }
}

loc_801592A8:
{
    goto loc_8015932C;
}

loc_801592AC:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_801592CC;
}

loc_801592B8:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_801592CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801592D4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_801592B8;
    }
}

loc_801592D8:
{
    goto loc_8015932C;
}

loc_801592DC:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801592E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_801592EC;
    }
}

loc_801592E8:
{
    goto loc_801592FC;
}

loc_801592EC:
{
    r0 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    goto loc_8015932C;
}

loc_801592FC:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8015930C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80159320;
    }
}

loc_80159310:
{
    r3 = 655360;
    r4 = (r31 + 276);
    r3 = (r3 + 1);
    ctx->lr = 0x80159320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80159320:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r22 + r0);
    goto loc_801593AC;
}

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
}

loc_801593AC:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80158E2C func_80158E2C preserves=true fpr_mask=0x00000000
