#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80516D74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_10 = 0;
    uint32_t r24_addr_11 = 0;
    uint32_t r24_addr_12 = 0;
    uint32_t r24_addr_13 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r24_addr_5 = 0;
    uint32_t r24_addr_6 = 0;
    uint32_t r24_addr_7 = 0;
    uint32_t r24_addr_8 = 0;
    uint32_t r24_addr_9 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_10 = 0;
    uint32_t r24_rot_11 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r24_rot_5 = 0;
    uint32_t r24_rot_6 = 0;
    uint32_t r24_rot_7 = 0;
    uint32_t r24_rot_8 = 0;
    uint32_t r24_rot_9 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_10 = 0;
    uint32_t r25_addr_11 = 0;
    uint32_t r25_addr_12 = 0;
    uint32_t r25_addr_13 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r25_addr_6 = 0;
    uint32_t r25_addr_7 = 0;
    uint32_t r25_addr_8 = 0;
    uint32_t r25_addr_9 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r26_addr_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_10 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r7_addr_8 = 0;
    uint32_t r7_addr_9 = 0;
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

    goto loc_80516D74;

loc_80516D74:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r23);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r30 = r3;
    r31 = r4;
    r29 = 1;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_80516DB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80516DC0;
    }
}

loc_80516DB4:
{
}

loc_80516DB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80516DC0;
    }
}

loc_80516DBC:
{
    r29 = 0;
}

loc_80516DC0:
{
    r6 = 0;
    r8 = 0x809C0000u;
    r0 = 2;
    goto loc_80517028;
}

loc_80516DD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80516DD4:
{
    r9 = (r6 & 65535);
    r7 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80516DF4;
    }
}

loc_80516DE0:
{
    r5 = MemoryInline::FlatRead32((r10 + 12));
    r5 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80516DEC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80516DF4;
    }
}

loc_80516DF0:
{
    r7 = 1;
}

loc_80516DF4:
{
}

loc_80516DF8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80516E08;
    }
}

loc_80516DFC:
{
    r5 = MemoryInline::FlatRead32((r10 + 12));
    r5 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_80516E0C;
}

loc_80516E08:
{
    r5 = 0;
}

loc_80516E0C:
{
}

loc_80516E10:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r5))) {
        goto loc_80516E40;
    }
}

loc_80516E14:
{
    r9 = MemoryInline::FlatRead32((r10 + 12));
    r7 = (r6 & 65535);
    r5 = MemoryInline::FlatRead16((r9 + 4));
}

loc_80516E24:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5))) {
        goto loc_80516E38;
    }
}

loc_80516E28:
{
    r7 = MemoryInline::FlatRead32(r9);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 262140);
    r7_addr_2 = (r7 + r5);
    r5 = MemoryInline::FlatRead32(r7_addr_2);
    goto loc_80516E44;
}

loc_80516E38:
{
    r5 = 0;
    goto loc_80516E44;
}

loc_80516E40:
{
    r5 = 0;
}

loc_80516E44:
{
    r7 = MemoryInline::FlatRead32(r5);
    r9 = MemoryInline::FlatRead8(r7);
}

loc_80516E50:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r9))) {
        goto loc_80516E74;
    }
}

loc_80516E54:
{
    r7 = MemoryInline::FlatRead8((r7 + 1));
    r7 = (r9 + r7);
    r7 = (r7 + -1);
    r7 = (r7 & 255);
}

loc_80516E68:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r7))) {
        goto loc_80516E74;
    }
}

loc_80516E6C:
{
    r7 = 1;
    goto loc_80516E78;
}

loc_80516E74:
{
    r7 = 0;
}

loc_80516E78:
{
}

loc_80516E7C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80517024;
    }
}

loc_80516E80:
{
}

loc_80516E84:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r9))) {
        goto loc_80516F34;
    }
}

loc_80516E88:
{
    r11 = 0;
    ctr = r0;
}

loc_80516E90:
{
    r10 = MemoryInline::FlatRead32(r5);
    r7 = (r11 & 65535);
    r9 = MemoryInline::FlatRead8((r10 + 1));
    r7 = (r10 + r7);
    r7 = MemoryInline::FlatRead8((r7 + 2));
}

loc_80516EA8:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(1))) {
        goto loc_80516EC0;
    }
}

loc_80516EAC:
{
}

loc_80516EB0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80516EC0;
    }
}

loc_80516EB4:
{
    r7 = MemoryInline::FlatRead8((r3 + 16));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r7));
}

loc_80516EC0:
{
    r10 = MemoryInline::FlatRead32(r5);
    r11 = (r11 + 1);
    r7 = (r11 & 65535);
    r9 = MemoryInline::FlatRead8((r10 + 1));
    r7 = (r10 + r7);
    r7 = MemoryInline::FlatRead8((r7 + 2));
}

loc_80516EDC:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(1))) {
        goto loc_80516EF4;
    }
}

loc_80516EE0:
{
}

loc_80516EE4:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80516EF4;
    }
}

loc_80516EE8:
{
    r7 = MemoryInline::FlatRead8((r3 + 16));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r7));
}

loc_80516EF4:
{
    r10 = MemoryInline::FlatRead32(r5);
    r11 = (r11 + 1);
    r7 = (r11 & 65535);
    r9 = MemoryInline::FlatRead8((r10 + 1));
    r7 = (r10 + r7);
    r7 = MemoryInline::FlatRead8((r7 + 2));
}

loc_80516F10:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(1))) {
        goto loc_80516F28;
    }
}

loc_80516F14:
{
}

loc_80516F18:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80516F28;
    }
}

loc_80516F1C:
{
    r7 = MemoryInline::FlatRead8((r3 + 16));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r7));
}

loc_80516F28:
{
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80516E90;
    }
}

loc_80516F30:
{
    goto loc_80516F48;
}

loc_80516F34:
{
    r7 = MemoryInline::FlatRead8((r3 + 16));
}

loc_80516F3C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80516F48;
    }
}

loc_80516F40:
{
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r7));
}

loc_80516F48:
{
    r10 = MemoryInline::FlatRead32(r5);
    r9 = MemoryInline::FlatRead8((r10 + 1));
    r7 = MemoryInline::FlatRead8(r10);
    r7 = (r7 + r9);
    r7 = (r7 + -1);
    r7 = (r7 & 255);
}

loc_80516F64:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r7))) {
        goto loc_80517010;
    }
}

loc_80516F68:
{
    r7 = MemoryInline::FlatRead8((r10 + 8));
}

loc_80516F70:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80516F80;
    }
}

loc_80516F74:
{
    r7 = MemoryInline::FlatRead8((r3 + 17));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r7));
}

loc_80516F80:
{
    r7 = MemoryInline::FlatRead32(r5);
    r7 = MemoryInline::FlatRead8((r7 + 9));
}

loc_80516F8C:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80516F9C;
    }
}

loc_80516F90:
{
    r7 = MemoryInline::FlatRead8((r3 + 17));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r7));
}

loc_80516F9C:
{
    r7 = MemoryInline::FlatRead32(r5);
    r7 = MemoryInline::FlatRead8((r7 + 10));
}

loc_80516FA8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80516FB8;
    }
}

loc_80516FAC:
{
    r7 = MemoryInline::FlatRead8((r3 + 17));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r7));
}

loc_80516FB8:
{
    r7 = MemoryInline::FlatRead32(r5);
    r7 = MemoryInline::FlatRead8((r7 + 11));
}

loc_80516FC4:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80516FD4;
    }
}

loc_80516FC8:
{
    r7 = MemoryInline::FlatRead8((r3 + 17));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r7));
}

loc_80516FD4:
{
    r7 = MemoryInline::FlatRead32(r5);
    r7 = MemoryInline::FlatRead8((r7 + 12));
}

loc_80516FE0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80516FF0;
    }
}

loc_80516FE4:
{
    r7 = MemoryInline::FlatRead8((r3 + 17));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r7));
}

loc_80516FF0:
{
    r7 = MemoryInline::FlatRead32(r5);
    r7 = MemoryInline::FlatRead8((r7 + 13));
}

loc_80516FFC:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_80517024;
    }
}

loc_80517000:
{
    r7 = MemoryInline::FlatRead8((r3 + 17));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r7));
    goto loc_80517024;
}

loc_80517010:
{
    r5 = MemoryInline::FlatRead8((r3 + 17));
}

loc_80517018:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80517024;
    }
}

loc_8051701C:
{
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r5));
}

loc_80517024:
{
    r6 = (r6 + 1);
}

loc_80517028:
{
    r10 = MemoryInline::FlatRead32((r8 + -10520));
    r7 = 0;
    r9 = MemoryInline::FlatRead32((r10 + 12));
}

loc_80517038:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8051704C;
    }
}

loc_8051703C:
{
    r5 = MemoryInline::FlatRead16((r9 + 4));
}

loc_80517044:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8051704C;
    }
}

loc_80517048:
{
    r7 = 1;
}

loc_8051704C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80517050:
{
    r7 = (r6 & 65535);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80517064;
    }
}

loc_80517058:
{
    r5 = MemoryInline::FlatRead32((r10 + 12));
    r5 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_80517068;
}

loc_80517064:
{
    r5 = 0;
}

loc_80517068:
{
}

loc_8051706C:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r5))) {
        goto loc_80516DD0;
    }
}

loc_80517070:
{
}

loc_80517074:
{
    r28 = MemoryInline::FlatRead8((r3 + 16));
    r27 = MemoryInline::FlatRead8((r3 + 17));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80517090;
    }
}

loc_80517080:
{
    r4 = (r27 + r28);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
}

loc_80517090:
{
    r4 = MemoryInline::FlatRead8((r3 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8051709C:
{
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805170B4;
    }
}

loc_805170A8:
{
    r3 = r4;
    ctx->lr = 0x805170B0u;
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
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    MemoryInline::FlatWrite32((r30 + 8), r3);
}

loc_805170B4:
{
    r3 = MemoryInline::FlatRead8((r30 + 19));
    ctx->lr = 0x805170BCu;
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
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    MemoryInline::FlatWrite32((r30 + 12), r3);
    r5 = 0;
    r4 = 255;
    goto loc_805170D8;
}

loc_805170CC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r3_addr_2 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
}

loc_805170D8:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_805170E0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_805170CC;
    }
}

loc_805170E4:
{
    r5 = 0;
    r4 = 255;
    goto loc_805170FC;
}

loc_805170F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3_addr_4 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
}

loc_805170FC:
{
    r0 = MemoryInline::FlatRead8((r30 + 17));
}

loc_80517104:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_805170F0;
    }
}

loc_80517108:
{
    r5 = (r31 + -1);
    r6 = (r31 + 1);
    r8 = 0;
    r9 = 0;
    r10 = 0;
    r11 = 0;
    r3 = 0x809C0000u;
    r0 = 1;
    goto loc_80517534;
}

loc_8051712C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80517130:
{
    r12 = (r11 & 65535);
    r7 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80517150;
    }
}

loc_8051713C:
{
    r4 = MemoryInline::FlatRead32((r24 + 12));
    r4 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80517148:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80517150;
    }
}

loc_8051714C:
{
    r7 = 1;
}

loc_80517150:
{
}

loc_80517154:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80517164;
    }
}

loc_80517158:
{
    r4 = MemoryInline::FlatRead32((r24 + 12));
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80517168;
}

loc_80517164:
{
    r4 = 0;
}

loc_80517168:
{
}

loc_8051716C:
{
    if ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(r4))) {
        goto loc_8051719C;
    }
}

loc_80517170:
{
    r12 = MemoryInline::FlatRead32((r24 + 12));
    r7 = (r11 & 65535);
    r4 = MemoryInline::FlatRead16((r12 + 4));
}

loc_80517180:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4))) {
        goto loc_80517194;
    }
}

loc_80517184:
{
    r7 = MemoryInline::FlatRead32(r12);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & 262140);
    r7_addr_5 = (r7 + r4);
    r4 = MemoryInline::FlatRead32(r7_addr_5);
    goto loc_805171A0;
}

loc_80517194:
{
    r4 = 0;
    goto loc_805171A0;
}

loc_8051719C:
{
    r4 = 0;
}

loc_805171A0:
{
    r7 = MemoryInline::FlatRead32(r4);
    r12 = MemoryInline::FlatRead8(r7);
}

loc_805171AC:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r12))) {
        goto loc_805171D0;
    }
}

loc_805171B0:
{
    r7 = MemoryInline::FlatRead8((r7 + 1));
    r7 = (r12 + r7);
    r7 = (r7 + -1);
    r7 = (r7 & 255);
}

loc_805171C4:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(r7))) {
        goto loc_805171D0;
    }
}

loc_805171C8:
{
    r7 = 1;
    goto loc_805171D4;
}

loc_805171D0:
{
    r7 = 0;
}

loc_805171D4:
{
}

loc_805171D8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80517530;
    }
}

loc_805171DC:
{
}

loc_805171E0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80517310;
    }
}

loc_805171E4:
{
}

loc_805171E8:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r12))) {
        goto loc_805172F0;
    }
}

loc_805171EC:
{
    r12 = 0;
    goto loc_805172E0;
}

loc_805171F4:
{
    r7 = MemoryInline::FlatRead32(r4);
    r25 = (r12 & 65535);
    r24 = MemoryInline::FlatRead8((r7 + 1));
    r25 = (r7 + r25);
    r26 = MemoryInline::FlatRead8((r25 + 2));
}

loc_8051720C:
{
    if ((static_cast<uint32_t>(r24) <= static_cast<uint32_t>(1))) {
        goto loc_805172DC;
    }
}

loc_80517210:
{
}

loc_80517214:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(255))) {
        goto loc_805172DC;
    }
}

loc_80517218:
{
    r23 = MemoryInline::FlatRead32((r3 + -10520));
    r25 = 0;
    r24 = MemoryInline::FlatRead32((r23 + 12));
}

loc_80517228:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8051723C;
    }
}

loc_8051722C:
{
    r24 = MemoryInline::FlatRead16((r24 + 4));
}

loc_80517234:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8051723C;
    }
}

loc_80517238:
{
    r25 = 1;
}

loc_8051723C:
{
}

loc_80517240:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80517250;
    }
}

loc_80517244:
{
    r24 = MemoryInline::FlatRead32((r23 + 12));
    r24 = MemoryInline::FlatRead16((r24 + 4));
    goto loc_80517254;
}

loc_80517250:
{
    r24 = 0;
}

loc_80517254:
{
}

loc_80517258:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r24))) {
        goto loc_80517284;
    }
}

loc_8051725C:
{
    r25 = MemoryInline::FlatRead32((r23 + 12));
    r24 = MemoryInline::FlatRead16((r25 + 4));
}

loc_80517268:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r24))) {
        goto loc_8051727C;
    }
}

loc_8051726C:
{
    r25 = MemoryInline::FlatRead32(r25);
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r24 = (r24_rot_3 & 1020);
    r25_addr_3 = (r25 + r24);
    r26 = MemoryInline::FlatRead32(r25_addr_3);
    goto loc_80517288;
}

loc_8051727C:
{
    r26 = 0;
    goto loc_80517288;
}

loc_80517284:
{
    r26 = 0;
}

loc_80517288:
{
    r24 = (r8 & 255);
    r25 = MemoryInline::FlatRead16((r7 + 14));
    r7 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r24));
    r7 = (r25 & r7);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805172B4;
    }
}

loc_8051729C:
{
    r25 = MemoryInline::FlatRead32(r26);
    r7 = (r10 & 255);
    r24 = MemoryInline::FlatRead32((r30 + 12));
    r25 = MemoryInline::FlatRead8(r25);
    r24_addr_3 = (r24 + r7);
    MemoryInline::FlatWrite8(r24_addr_3, static_cast<uint8_t>(r25));
    goto loc_805172D4;
}

loc_805172B4:
{
    r25 = MemoryInline::FlatRead32(r26);
    r7 = (r10 & 255);
    r24 = MemoryInline::FlatRead32((r30 + 12));
    r26 = MemoryInline::FlatRead8((r25 + 1));
    r25 = MemoryInline::FlatRead8(r25);
    r25 = (r25 + r26);
    r25 = (r25 + -1);
    r24_addr_4 = (r24 + r7);
    MemoryInline::FlatWrite8(r24_addr_4, static_cast<uint8_t>(r25));
}

loc_805172D4:
{
    r8 = (r8 + 1);
    r10 = (r10 + 1);
}

loc_805172DC:
{
    r12 = (r12 + 1);
}

loc_805172E0:
{
    r7 = (r12 & 65535);
}

loc_805172E8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r28))) {
        goto loc_805171F4;
    }
}

loc_805172EC:
{
    goto loc_805173F8;
}

loc_805172F0:
{
    r7 = (r8 & 255);
}

loc_805172F4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805173F8;
    }
}

loc_805172F8:
{
    r12 = MemoryInline::FlatRead32((r30 + 12));
    r7 = (r10 & 255);
    r8 = (r8 + 1);
    r10 = (r10 + 1);
    r12_addr_2 = (r12 + r7);
    MemoryInline::FlatWrite8(r12_addr_2, static_cast<uint8_t>(r5));
    goto loc_805173F8;
}

loc_80517310:
{
}

loc_80517314:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r12))) {
        goto loc_805173E4;
    }
}

loc_80517318:
{
    r7 = 0;
    goto loc_805173D0;
}

loc_80517320:
{
    r24 = MemoryInline::FlatRead32(r4);
    r12 = (r7 & 65535);
    r12 = (r24 + r12);
    r25 = MemoryInline::FlatRead8((r12 + 2));
}

loc_80517334:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(255))) {
        goto loc_805173CC;
    }
}

loc_80517338:
{
    r23 = MemoryInline::FlatRead32((r3 + -10520));
    r24 = 0;
    r12 = MemoryInline::FlatRead32((r23 + 12));
}

loc_80517348:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8051735C;
    }
}

loc_8051734C:
{
    r12 = MemoryInline::FlatRead16((r12 + 4));
}

loc_80517354:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8051735C;
    }
}

loc_80517358:
{
    r24 = 1;
}

loc_8051735C:
{
}

loc_80517360:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80517370;
    }
}

loc_80517364:
{
    r12 = MemoryInline::FlatRead32((r23 + 12));
    r12 = MemoryInline::FlatRead16((r12 + 4));
    goto loc_80517374;
}

loc_80517370:
{
    r12 = 0;
}

loc_80517374:
{
}

loc_80517378:
{
    if ((static_cast<uint32_t>(r25) >= static_cast<uint32_t>(r12))) {
        goto loc_805173A4;
    }
}

loc_8051737C:
{
    r24 = MemoryInline::FlatRead32((r23 + 12));
    r12 = MemoryInline::FlatRead16((r24 + 4));
}

loc_80517388:
{
    if ((static_cast<uint32_t>(r25) >= static_cast<uint32_t>(r12))) {
        goto loc_8051739C;
    }
}

loc_8051738C:
{
    r24 = MemoryInline::FlatRead32(r24);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r12 = (r12_rot_3 & 1020);
    r24_addr_8 = (r24 + r12);
    r12 = MemoryInline::FlatRead32(r24_addr_8);
    goto loc_805173A8;
}

loc_8051739C:
{
    r12 = 0;
    goto loc_805173A8;
}

loc_805173A4:
{
    r12 = 0;
}

loc_805173A8:
{
    r25 = MemoryInline::FlatRead32(r12);
    r12 = (r8 & 255);
    r24 = MemoryInline::FlatRead32((r30 + 8));
    r8 = (r8 + 1);
    r26 = MemoryInline::FlatRead8((r25 + 1));
    r25 = MemoryInline::FlatRead8(r25);
    r25 = (r25 + r26);
    r25 = (r25 + -1);
    r24_addr_10 = (r24 + r12);
    MemoryInline::FlatWrite8(r24_addr_10, static_cast<uint8_t>(r25));
}

loc_805173CC:
{
    r7 = (r7 + 1);
}

loc_805173D0:
{
    r12 = MemoryInline::FlatRead8((r30 + 18));
    r24 = (r7 & 65535);
}

loc_805173DC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r12))) {
        goto loc_80517320;
    }
}

loc_805173E0:
{
    goto loc_805173F8;
}

loc_805173E4:
{
    r12 = (r8 & 255);
}

loc_805173E8:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_805173F8;
    }
}

loc_805173EC:
{
    r7 = MemoryInline::FlatRead32((r30 + 8));
    r8 = (r8 + 1);
    r7_addr_7 = (r7 + r12);
    MemoryInline::FlatWrite8(r7_addr_7, static_cast<uint8_t>(r5));
}

loc_805173F8:
{
    r7 = MemoryInline::FlatRead32(r4);
    r12 = MemoryInline::FlatRead8((r7 + 1));
    r7 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + r12);
    r7 = (r7 + -1);
    r7 = (r7 & 255);
}

loc_80517414:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r7))) {
        goto loc_80517514;
    }
}

loc_80517418:
{
    r12 = 0;
    goto loc_80517504;
}

loc_80517420:
{
    r7 = MemoryInline::FlatRead32(r4);
    r24 = (r12 & 65535);
    r24 = (r7 + r24);
    r26 = MemoryInline::FlatRead8((r24 + 8));
}

loc_80517434:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(255))) {
        goto loc_80517500;
    }
}

loc_80517438:
{
    r23 = MemoryInline::FlatRead32((r3 + -10520));
    r25 = 0;
    r24 = MemoryInline::FlatRead32((r23 + 12));
}

loc_80517448:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8051745C;
    }
}

loc_8051744C:
{
    r24 = MemoryInline::FlatRead16((r24 + 4));
}

loc_80517454:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8051745C;
    }
}

loc_80517458:
{
    r25 = 1;
}

loc_8051745C:
{
}

loc_80517460:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80517470;
    }
}

loc_80517464:
{
    r24 = MemoryInline::FlatRead32((r23 + 12));
    r24 = MemoryInline::FlatRead16((r24 + 4));
    goto loc_80517474;
}

loc_80517470:
{
    r24 = 0;
}

loc_80517474:
{
}

loc_80517478:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r24))) {
        goto loc_805174A4;
    }
}

loc_8051747C:
{
    r25 = MemoryInline::FlatRead32((r23 + 12));
    r24 = MemoryInline::FlatRead16((r25 + 4));
}

loc_80517488:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r24))) {
        goto loc_8051749C;
    }
}

loc_8051748C:
{
    r25 = MemoryInline::FlatRead32(r25);
    r24_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r24 = (r24_rot_8 & 1020);
    r25_addr_8 = (r25 + r24);
    r26 = MemoryInline::FlatRead32(r25_addr_8);
    goto loc_805174A8;
}

loc_8051749C:
{
    r26 = 0;
    goto loc_805174A8;
}

loc_805174A4:
{
    r26 = 0;
}

loc_805174A8:
{
    r24 = (r9 & 255);
    r25 = MemoryInline::FlatRead16((r7 + 14));
    r7 = (r24 + 6);
    r7 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r7 = (r25 & r7);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805174E4;
    }
}

loc_805174C0:
{
    r26 = MemoryInline::FlatRead32(r26);
    r7 = (r10 & 255);
    r25 = MemoryInline::FlatRead32((r30 + 12));
    r24 = MemoryInline::FlatRead8((r26 + 1));
    r26 = MemoryInline::FlatRead8(r26);
    r26 = (r26 + r24);
    r26 = (r26 + -1);
    r25_addr_10 = (r25 + r7);
    MemoryInline::FlatWrite8(r25_addr_10, static_cast<uint8_t>(r26));
    goto loc_805174F8;
}

loc_805174E4:
{
    r25 = MemoryInline::FlatRead32(r26);
    r7 = (r10 & 255);
    r26 = MemoryInline::FlatRead32((r30 + 12));
    r25 = MemoryInline::FlatRead8(r25);
    r26_addr_3 = (r26 + r7);
    MemoryInline::FlatWrite8(r26_addr_3, static_cast<uint8_t>(r25));
}

loc_805174F8:
{
    r9 = (r9 + 1);
    r10 = (r10 + 1);
}

loc_80517500:
{
    r12 = (r12 + 1);
}

loc_80517504:
{
    r7 = (r12 & 65535);
}

loc_8051750C:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r27))) {
        goto loc_80517420;
    }
}

loc_80517510:
{
    goto loc_80517530;
}

loc_80517514:
{
    r4 = (r9 & 255);
}

loc_80517518:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80517530;
    }
}

loc_8051751C:
{
    r7 = MemoryInline::FlatRead32((r30 + 12));
    r4 = (r10 & 255);
    r9 = (r9 + 1);
    r10 = (r10 + 1);
    r7_addr_9 = (r7 + r4);
    MemoryInline::FlatWrite8(r7_addr_9, static_cast<uint8_t>(r6));
}

loc_80517530:
{
    r11 = (r11 + 1);
}

loc_80517534:
{
    r24 = MemoryInline::FlatRead32((r3 + -10520));
    r7 = 0;
    r12 = MemoryInline::FlatRead32((r24 + 12));
}

loc_80517544:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80517558;
    }
}

loc_80517548:
{
    r4 = MemoryInline::FlatRead16((r12 + 4));
}

loc_80517550:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80517558;
    }
}

loc_80517554:
{
    r7 = 1;
}

loc_80517558:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8051755C:
{
    r7 = (r11 & 65535);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80517570;
    }
}

loc_80517564:
{
    r4 = MemoryInline::FlatRead32((r24 + 12));
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80517574;
}

loc_80517570:
{
    r4 = 0;
}

loc_80517574:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80517578:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8051712C;
    }
}

loc_8051757C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 52));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80516D74 func_80516D74 preserves=true fpr_mask=0x00000000
