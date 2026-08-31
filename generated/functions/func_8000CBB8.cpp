#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000CBB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000CBB8;

loc_8000CBB8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r6 = -858980352;
    r8 = MemoryInline::FlatRead8((r4 + 4));
    r9 = (r6 + -13107);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r0 = (r1 + 8);
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r11 = 0;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r12 = (r8 + r7);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r12 = (r12 + -1);
    r6 = (r0 + r12);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r11));
    r0 = r6;
    goto loc_8000CD28;
}

loc_8000CBFC:
{
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r31 = (r7 + -1);
    r7 = (r12 - r31);
    r30 = (r7 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8000CC0C:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_8000CC18;
    }
}

loc_8000CC10:
{
    r30 = 0;
    r31 = (r12 + -1);
}

loc_8000CC18:
{
    r7 = MemoryInline::FlatRead8((r4 + 4));
    r8 = (r5 + r31);
    r31 = (r31 + 1);
    r10 = (r4 + r30);
    r7 = (r7 - r30);
    r29 = (r8 + 5);
}

loc_8000CC34:
{
    r30 = (r10 + 5);
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r7))) {
        goto loc_8000CC40;
    }
}

loc_8000CC3C:
{
    r31 = r7;
}

loc_8000CC40:
{
}

loc_8000CC44:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_8000CD08;
    }
}

loc_8000CC48:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(29));
    r7 = (r7_rot_2 & 536870911);
}

loc_8000CC4C:
{
    ctr = r7;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8000CCE8;
    }
}

loc_8000CC54:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 0u, r30);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + -7), 0, 8u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 7u, r29);
    r7 = (r10 * r8);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 1));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r29 + -1));
    r11 = (r11 + r7);
    r7 = (r10 * r8);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 2));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r29 + -2));
    r11 = (r11 + r7);
    r7 = (r10 * r8);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 3));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r29 + -3));
    r11 = (r11 + r7);
    r7 = (r10 * r8);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 4));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + -4));
    r11 = (r11 + r7);
    r7 = (r10 * r8);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + -5));
    r11 = (r11 + r7);
    r7 = (r10 * r8);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 6));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + -6));
    r11 = (r11 + r7);
    r7 = (r10 * r8);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 7));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r29 + -7));
    r30 = (r30 + 8);
    r29 = (r29 + -8);
    r11 = (r11 + r7);
    r7 = (r10 * r8);
    r11 = (r11 + r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000CC54;
    }
}

loc_8000CCE0:
{
    r31 = (r31 & 7);
}

loc_8000CCE4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8000CD08;
    }
}

loc_8000CCE8:
{
    ctr = r31;
}

loc_8000CCEC:
{
    r10 = MemoryInline::FlatRead8(r30);
    r30 = (r30 + 1);
    r8 = MemoryInline::FlatRead8(r29);
    r29 = (r29 + -1);
    r7 = (r10 * r8);
    r11 = (r11 + r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000CCEC;
    }
}

loc_8000CD08:
{
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r11)) >> 32));
    r12 = (r12 + -1);
    r7 = r8;
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r8 = (r8_rot_2 & 536870911);
    r8 = (r8 * 10);
    r8 = (r11 - r8);
    r6_stbu_ea_2 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r8));
    r6 = r6_stbu_ea_2;
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r11 = (r11_rot_2 & 536870911);
}

loc_8000CD28:
{
}

loc_8000CD2C:
{
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(0))) {
        goto loc_8000CBFC;
    }
}

loc_8000CD30:
{
    r7 = MemoryInline::FlatRead16((r4 + 2));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_8000CD38:
{
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r7 + r4);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8000CD58;
    }
}

loc_8000CD48:
{
    r6_stbu_ea_3 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_3, static_cast<uint8_t>(r11));
    r6 = r6_stbu_ea_3;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
}

loc_8000CD58:
{
    r7 = 0;
    goto loc_8000CD74;
}

loc_8000CD60:
{
    r4 = (r3 + r7);
    r5 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r6 = (r6 + 1);
}

loc_8000CD74:
{
}

loc_8000CD78:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(36))) {
        goto loc_8000CD84;
    }
}

loc_8000CD7C:
{
}

loc_8000CD80:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_8000CD60;
    }
}

loc_8000CD84:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8000CD88:
{
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r7));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000CE2C;
    }
}

loc_8000CD90:
{
    r4 = MemoryInline::FlatRead8(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
}

loc_8000CD98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8000CE2C;
    }
}

loc_8000CD9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000CDD4;
    }
}

loc_8000CDA0:
{
    r5 = (r6 + 1);
    r4 = (r0 - r5);
    ctr = r4;
}

loc_8000CDB0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_8000CDC8;
    }
}

loc_8000CDB4:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8000CDBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000CDD4;
    }
}

loc_8000CDC0:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000CDB4;
    }
}

loc_8000CDC8:
{
    r0 = MemoryInline::FlatRead8((r6 + -1));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000CDD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000CE2C;
    }
}

loc_8000CDD4:
{
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r6 = (r3 + 5);
    r0 = 0;
    r5 = (r6 + r4);
    r5 = (r5 + -1);
}

loc_8000CDE8:
{
    r4 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
}

loc_8000CDF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000CE00;
    }
}

loc_8000CDF4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_8000CE2C;
}

loc_8000CE00:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_8000CE04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000CE20;
    }
}

loc_8000CE08:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_8000CE2C;
}

loc_8000CE20:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + -1);
    goto loc_8000CDE8;
}

loc_8000CE2C:
{
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000CBB8 func_8000CBB8 preserves=true fpr_mask=0x00000000
