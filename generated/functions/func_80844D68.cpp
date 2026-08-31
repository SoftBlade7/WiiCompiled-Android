#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80844D68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80844D68;

loc_80844D68:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r4 = 0;
    r5 = -1;
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 1776), r4);
    r4 = 0x809C0000u;
    r30 = 0x808B0000u;
    MemoryInline::FlatWrite32((r3 + 1732), r5);
    r31 = r3;
    r30 = (r30 + -10632);
    MemoryInline::FlatWrite32((r3 + 1772), r0);
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(74));
}

loc_80844DB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80844DC0;
    }
}

loc_80844DB8:
{
    r0 = 107;
    MemoryInline::FlatWrite32((r3 + 1004), r0);
}

loc_80844DC0:
{
    r28 = r31;
    r29 = (r30 + 0);
    r24 = 0;
}

loc_80844DCC:
{
    r27 = r29;
    r26 = r28;
    r23 = 0;
}

loc_80844DD8:
{
    r25 = r27;
    r22 = 0;
}

loc_80844DE0:
{
    r3 = MemoryInline::FlatRead32(r25);
    r4 = r23;
    ctx->lr = 0x80844DECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CFB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r26 + r22);
    r22 = (r22 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(6));
}

loc_80844DF8:
{
    MemoryInline::FlatWrite8((r4 + 1736), static_cast<uint8_t>(r3));
    r25 = (r25 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80844DE0;
    }
}

loc_80844E04:
{
    r23 = (r23 + 1);
    r26 = (r26 + 6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(2));
}

loc_80844E10:
{
    r27 = (r27 + 24);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80844DD8;
    }
}

loc_80844E18:
{
    r24 = (r24 + 1);
    r28 = (r28 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(3));
}

loc_80844E24:
{
    r29 = (r29 + 48);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80844DCC;
    }
}

loc_80844E2C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 1736), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r31 + 1736));
    r3 = 0;
}

loc_80844E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844E40;
    }
}

loc_80844E3C:
{
    r3 = 1;
}

loc_80844E40:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r31 + 1737));
}

loc_80844E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844E50;
    }
}

loc_80844E4C:
{
    r3 = (r3 + 1);
}

loc_80844E50:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 1738));
}

loc_80844E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844E60;
    }
}

loc_80844E5C:
{
    r3 = (r3 + 1);
}

loc_80844E60:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r31 + 1739));
}

loc_80844E68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844E70;
    }
}

loc_80844E6C:
{
    r3 = (r3 + 1);
}

loc_80844E70:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r31 + 1740));
}

loc_80844E78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844E80;
    }
}

loc_80844E7C:
{
    r3 = (r3 + 1);
}

loc_80844E80:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r31 + 1741));
}

loc_80844E88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844E90;
    }
}

loc_80844E8C:
{
    r3 = (r3 + 1);
}

loc_80844E90:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r31 + 1742));
    r5 = 0;
}

loc_80844E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844EA4;
    }
}

loc_80844EA0:
{
    r5 = 1;
}

loc_80844EA4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r31 + 1743));
}

loc_80844EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844EB4;
    }
}

loc_80844EB0:
{
    r5 = (r5 + 1);
}

loc_80844EB4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r31 + 1744));
}

loc_80844EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844EC4;
    }
}

loc_80844EC0:
{
    r5 = (r5 + 1);
}

loc_80844EC4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r31 + 1745));
}

loc_80844ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844ED4;
    }
}

loc_80844ED0:
{
    r5 = (r5 + 1);
}

loc_80844ED4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r31 + 1746));
}

loc_80844EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844EE4;
    }
}

loc_80844EE0:
{
    r5 = (r5 + 1);
}

loc_80844EE4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r31 + 1747));
}

loc_80844EEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844EF4;
    }
}

loc_80844EF0:
{
    r5 = (r5 + 1);
}

loc_80844EF4:
{
}

loc_80844EF8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_80844F00;
    }
}

loc_80844EFC:
{
    r5 = r3;
}

loc_80844F00:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r31 + 1748));
    r3 = 0;
}

loc_80844F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F14;
    }
}

loc_80844F10:
{
    r3 = 1;
}

loc_80844F14:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r31 + 1749));
}

loc_80844F1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F24;
    }
}

loc_80844F20:
{
    r3 = (r3 + 1);
}

loc_80844F24:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r31 + 1750));
}

loc_80844F2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F34;
    }
}

loc_80844F30:
{
    r3 = (r3 + 1);
}

loc_80844F34:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r31 + 1751));
}

loc_80844F3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F44;
    }
}

loc_80844F40:
{
    r3 = (r3 + 1);
}

loc_80844F44:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r31 + 1752));
}

loc_80844F4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F54;
    }
}

loc_80844F50:
{
    r3 = (r3 + 1);
}

loc_80844F54:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r31 + 1753));
}

loc_80844F5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F64;
    }
}

loc_80844F60:
{
    r3 = (r3 + 1);
}

loc_80844F64:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r31 + 1754));
    r6 = 0;
}

loc_80844F70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F78;
    }
}

loc_80844F74:
{
    r6 = 1;
}

loc_80844F78:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r31 + 1755));
}

loc_80844F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F88;
    }
}

loc_80844F84:
{
    r6 = (r6 + 1);
}

loc_80844F88:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r31 + 1756));
}

loc_80844F90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844F98;
    }
}

loc_80844F94:
{
    r6 = (r6 + 1);
}

loc_80844F98:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r31 + 1757));
}

loc_80844FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844FA8;
    }
}

loc_80844FA4:
{
    r6 = (r6 + 1);
}

loc_80844FA8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r31 + 1758));
}

loc_80844FB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844FB8;
    }
}

loc_80844FB4:
{
    r6 = (r6 + 1);
}

loc_80844FB8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r31 + 1759));
}

loc_80844FC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844FC8;
    }
}

loc_80844FC4:
{
    r6 = (r6 + 1);
}

loc_80844FC8:
{
}

loc_80844FCC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r6))) {
        goto loc_80844FD4;
    }
}

loc_80844FD0:
{
    r6 = r3;
}

loc_80844FD4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r31 + 1760));
    r3 = 0;
}

loc_80844FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844FE8;
    }
}

loc_80844FE4:
{
    r3 = 1;
}

loc_80844FE8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r31 + 1761));
}

loc_80844FF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844FF8;
    }
}

loc_80844FF4:
{
    r3 = (r3 + 1);
}

loc_80844FF8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r31 + 1762));
}

loc_80845000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845008;
    }
}

loc_80845004:
{
    r3 = (r3 + 1);
}

loc_80845008:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r31 + 1763));
}

loc_80845010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845018;
    }
}

loc_80845014:
{
    r3 = (r3 + 1);
}

loc_80845018:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r31 + 1764));
}

loc_80845020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845028;
    }
}

loc_80845024:
{
    r3 = (r3 + 1);
}

loc_80845028:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r31 + 1765));
}

loc_80845030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845038;
    }
}

loc_80845034:
{
    r3 = (r3 + 1);
}

loc_80845038:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r31 + 1766));
    r4 = 0;
}

loc_80845044:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084504C;
    }
}

loc_80845048:
{
    r4 = 1;
}

loc_8084504C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 31u, (r31 + 1767));
}

loc_80845054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084505C;
    }
}

loc_80845058:
{
    r4 = (r4 + 1);
}

loc_8084505C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 32u, (r31 + 1768));
}

loc_80845064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084506C;
    }
}

loc_80845068:
{
    r4 = (r4 + 1);
}

loc_8084506C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 33u, (r31 + 1769));
}

loc_80845074:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084507C;
    }
}

loc_80845078:
{
    r4 = (r4 + 1);
}

loc_8084507C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 34u, (r31 + 1770));
}

loc_80845084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084508C;
    }
}

loc_80845088:
{
    r4 = (r4 + 1);
}

loc_8084508C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 35u, (r31 + 1771));
}

loc_80845094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084509C;
    }
}

loc_80845098:
{
    r4 = (r4 + 1);
}

loc_8084509C:
{
}

loc_808450A0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r4))) {
        goto loc_808450A8;
    }
}

loc_808450A4:
{
    r4 = r3;
}

loc_808450A8:
{
}

loc_808450AC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r6))) {
        goto loc_808450C0;
    }
}

loc_808450B0:
{
}

loc_808450B4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r4))) {
        goto loc_808450CC;
    }
}

loc_808450B8:
{
    r4 = r5;
    goto loc_808450CC;
}

loc_808450C0:
{
}

loc_808450C4:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r4))) {
        goto loc_808450CC;
    }
}

loc_808450C8:
{
    r4 = r6;
}

loc_808450CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_808450D4:
{
    MemoryInline::FlatWrite32((r31 + 2568), r4);
    MemoryInline::FlatWriteFloat32((r31 + 2560), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808450F4;
    }
}

loc_808450E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_808450E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845100;
    }
}

loc_808450E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_808450EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084510C;
    }
}

loc_808450F0:
{
    goto loc_80845118;
}

loc_808450F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 148));
    MemoryInline::FlatWriteFloat32((r31 + 2564), f0.d);
    goto loc_80845120;
}

loc_80845100:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 152));
    MemoryInline::FlatWriteFloat32((r31 + 2564), f0.d);
    goto loc_80845120;
}

loc_8084510C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 156));
    MemoryInline::FlatWriteFloat32((r31 + 2564), f0.d);
    goto loc_80845120;
}

loc_80845118:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 160));
    MemoryInline::FlatWriteFloat32((r31 + 2564), f0.d);
}

loc_80845120:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 988), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x80845130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80836B9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r11 = (r1 + 48);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80844D68 func_80844D68 preserves=true fpr_mask=0x00000000
