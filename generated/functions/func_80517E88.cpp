#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517E88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_11 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80517E88;

loc_80517E88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r6 = 255;
    r5 = 0;
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r7 = (r4 + 1);
    r8 = 0;
    r10 = 6;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r11 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 14u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 17), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 16), static_cast<uint8_t>(r5));
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 4), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 7), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 8), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 12), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 13), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 14), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 15), static_cast<uint8_t>(r6));
    goto loc_80518194;
}

loc_80517EF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80517EF8:
{
    r12 = (r8 & 65535);
    r9 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80517F18;
    }
}

loc_80517F04:
{
    r6 = MemoryInline::FlatRead32((r30 + 20));
    r6 = MemoryInline::FlatRead16((r6 + 4));
}

loc_80517F10:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80517F18;
    }
}

loc_80517F14:
{
    r9 = 1;
}

loc_80517F18:
{
}

loc_80517F1C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80517F2C;
    }
}

loc_80517F20:
{
    r6 = MemoryInline::FlatRead32((r30 + 20));
    r6 = MemoryInline::FlatRead16((r6 + 4));
    goto loc_80517F30;
}

loc_80517F2C:
{
    r6 = 0;
}

loc_80517F30:
{
}

loc_80517F34:
{
    if ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(r6))) {
        goto loc_80517F64;
    }
}

loc_80517F38:
{
    r12 = MemoryInline::FlatRead32((r30 + 20));
    r9 = (r8 & 65535);
    r6 = MemoryInline::FlatRead16((r12 + 4));
}

loc_80517F48:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r6))) {
        goto loc_80517F5C;
    }
}

loc_80517F4C:
{
    r9 = MemoryInline::FlatRead32(r12);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 262140);
    r9_addr_2 = (r9 + r6);
    r6 = MemoryInline::FlatRead32(r9_addr_2);
    goto loc_80517F68;
}

loc_80517F5C:
{
    r6 = 0;
    goto loc_80517F68;
}

loc_80517F64:
{
    r6 = 0;
}

loc_80517F68:
{
    r9 = MemoryInline::FlatRead32(r6);
    r12 = MemoryInline::FlatRead8(r9);
}

loc_80517F74:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r12))) {
        goto loc_80517F98;
    }
}

loc_80517F78:
{
    r9 = MemoryInline::FlatRead8((r9 + 1));
    r9 = (r12 + r9);
    r9 = (r9 + -1);
    r9 = (r9 & 255);
}

loc_80517F8C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r9))) {
        goto loc_80517F98;
    }
}

loc_80517F90:
{
    r9 = 1;
    goto loc_80517F9C;
}

loc_80517F98:
{
    r9 = 0;
}

loc_80517F9C:
{
}

loc_80517FA0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80518190;
    }
}

loc_80517FA4:
{
}

loc_80517FA8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r12))) {
        goto loc_80518074;
    }
}

loc_80517FAC:
{
    r9 = 0;
    ctr = r11;
}

loc_80517FB4:
{
    r30 = MemoryInline::FlatRead32(r6);
    r12 = (r9 & 65535);
    r12 = (r30 + r12);
    r31 = MemoryInline::FlatRead8((r12 + 2));
}

loc_80517FC8:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(255))) {
        goto loc_80518068;
    }
}

loc_80517FCC:
{
    r29 = MemoryInline::FlatRead32((r5 + -10520));
    r30 = 0;
    r12 = MemoryInline::FlatRead32((r29 + 20));
}

loc_80517FDC:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80517FF0;
    }
}

loc_80517FE0:
{
    r12 = MemoryInline::FlatRead16((r12 + 4));
}

loc_80517FE8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80517FF0;
    }
}

loc_80517FEC:
{
    r30 = 1;
}

loc_80517FF0:
{
}

loc_80517FF4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80518004;
    }
}

loc_80517FF8:
{
    r12 = MemoryInline::FlatRead32((r29 + 20));
    r12 = MemoryInline::FlatRead16((r12 + 4));
    goto loc_80518008;
}

loc_80518004:
{
    r12 = 0;
}

loc_80518008:
{
}

loc_8051800C:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r12))) {
        goto loc_80518038;
    }
}

loc_80518010:
{
    r30 = MemoryInline::FlatRead32((r29 + 20));
    r12 = MemoryInline::FlatRead16((r30 + 4));
}

loc_8051801C:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r12))) {
        goto loc_80518030;
    }
}

loc_80518020:
{
    r30 = MemoryInline::FlatRead32(r30);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r12 = (r12_rot_3 & 1020);
    r30_addr_3 = (r30 + r12);
    r12 = MemoryInline::FlatRead32(r30_addr_3);
    goto loc_8051803C;
}

loc_80518030:
{
    r12 = 0;
    goto loc_8051803C;
}

loc_80518038:
{
    r12 = 0;
}

loc_8051803C:
{
    r30 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead8((r3 + 16));
    r31 = MemoryInline::FlatRead8((r30 + 1));
    r30 = MemoryInline::FlatRead8(r30);
    r12 = (r3 + r12);
    r30 = (r30 + r31);
    r30 = (r30 + -1);
    MemoryInline::FlatWrite8((r12 + 4), static_cast<uint8_t>(r30));
    r12 = MemoryInline::FlatRead8((r3 + 16));
    r12 = (r12 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r12));
}

loc_80518068:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80517FB4;
    }
}

loc_80518070:
{
    goto loc_80518094;
}

loc_80518074:
{
    r9 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8051807C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80518094;
    }
}

loc_80518080:
{
    r9 = (r3 + r9);
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead8((r3 + 16));
    r9 = (r9 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r9));
}

loc_80518094:
{
    r9 = MemoryInline::FlatRead32(r6);
    r12 = MemoryInline::FlatRead8((r9 + 1));
    r9 = MemoryInline::FlatRead8(r9);
    r9 = (r9 + r12);
    r9 = (r9 + -1);
    r9 = (r9 & 255);
}

loc_805180B0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r9))) {
        goto loc_80518170;
    }
}

loc_805180B4:
{
    r9 = 0;
    ctr = r10;
}

loc_805180BC:
{
    r30 = MemoryInline::FlatRead32(r6);
    r12 = (r9 & 65535);
    r12 = (r30 + r12);
    r30 = MemoryInline::FlatRead8((r12 + 8));
}

loc_805180D0:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(255))) {
        goto loc_80518164;
    }
}

loc_805180D4:
{
    r29 = MemoryInline::FlatRead32((r5 + -10520));
    r31 = 0;
    r12 = MemoryInline::FlatRead32((r29 + 20));
}

loc_805180E4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_805180F8;
    }
}

loc_805180E8:
{
    r12 = MemoryInline::FlatRead16((r12 + 4));
}

loc_805180F0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_805180F8;
    }
}

loc_805180F4:
{
    r31 = 1;
}

loc_805180F8:
{
}

loc_805180FC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8051810C;
    }
}

loc_80518100:
{
    r12 = MemoryInline::FlatRead32((r29 + 20));
    r12 = MemoryInline::FlatRead16((r12 + 4));
    goto loc_80518110;
}

loc_8051810C:
{
    r12 = 0;
}

loc_80518110:
{
}

loc_80518114:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r12))) {
        goto loc_80518140;
    }
}

loc_80518118:
{
    r31 = MemoryInline::FlatRead32((r29 + 20));
    r12 = MemoryInline::FlatRead16((r31 + 4));
}

loc_80518124:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r12))) {
        goto loc_80518138;
    }
}

loc_80518128:
{
    r31 = MemoryInline::FlatRead32(r31);
    r12_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r12 = (r12_rot_8 & 1020);
    r31_addr_3 = (r31 + r12);
    r12 = MemoryInline::FlatRead32(r31_addr_3);
    goto loc_80518144;
}

loc_80518138:
{
    r12 = 0;
    goto loc_80518144;
}

loc_80518140:
{
    r12 = 0;
}

loc_80518144:
{
    r31 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead8((r3 + 17));
    r31 = MemoryInline::FlatRead8(r31);
    r12 = (r3 + r12);
    MemoryInline::FlatWrite8((r12 + 10), static_cast<uint8_t>(r31));
    r12 = MemoryInline::FlatRead8((r3 + 17));
    r12 = (r12 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r12));
}

loc_80518164:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805180BC;
    }
}

loc_8051816C:
{
    goto loc_80518190;
}

loc_80518170:
{
    r6 = MemoryInline::FlatRead8((r3 + 17));
}

loc_80518178:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80518190;
    }
}

loc_8051817C:
{
    r6 = (r3 + r6);
    MemoryInline::FlatWrite8((r6 + 10), static_cast<uint8_t>(r7));
    r6 = MemoryInline::FlatRead8((r3 + 17));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r6));
}

loc_80518190:
{
    r8 = (r8 + 1);
}

loc_80518194:
{
    r30 = MemoryInline::FlatRead32((r5 + -10520));
    r9 = 0;
    r12 = MemoryInline::FlatRead32((r30 + 20));
}

loc_805181A4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_805181B8;
    }
}

loc_805181A8:
{
    r6 = MemoryInline::FlatRead16((r12 + 4));
}

loc_805181B0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805181B8;
    }
}

loc_805181B4:
{
    r9 = 1;
}

loc_805181B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_805181BC:
{
    r9 = (r8 & 65535);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805181D0;
    }
}

loc_805181C4:
{
    r6 = MemoryInline::FlatRead32((r30 + 20));
    r6 = MemoryInline::FlatRead16((r6 + 4));
    goto loc_805181D4;
}

loc_805181D0:
{
    r6 = 0;
}

loc_805181D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(r6));
}

loc_805181D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80517EF4;
    }
}

loc_805181DC:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517E88 func_80517E88 preserves=true fpr_mask=0x00000000
