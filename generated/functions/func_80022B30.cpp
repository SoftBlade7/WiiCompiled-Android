#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80022B30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
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

    goto loc_80022B30;

loc_80022B30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead16((r30 + 4));
    r4 = 32;
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r10 = 0;
    r5 = (r5 + 1);
    r6 = MemoryInline::FlatRead32(r30);
    r7 = (r5 * r0);
    r0 = MemoryInline::FlatRead16((r30 + 14));
    r5 = 2;
    r6 = (r6 + r0);
    r0 = 129;
    r6 = (r7 + r6);
    goto loc_80022EA8;
}

loc_80022B88:
{
    r7 = MemoryInline::FlatRead16((r30 + 10));
    r7 = (r7 & 2);
}

loc_80022B90:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80022E9C;
    }
}

loc_80022B94:
{
    r8 = MemoryInline::FlatRead16((r30 + 12));
    r7 = MemoryInline::FlatRead16((r30 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r7));
}

loc_80022BA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80022EB4;
    }
}

loc_80022BA4:
{
    goto loc_80022E9C;
}

loc_80022BA8:
{
}

loc_80022BAC:
{
    r7 = 0;
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(10))) {
        goto loc_80022C5C;
    }
}

loc_80022BB4:
{
    r7 = MemoryInline::FlatRead16((r30 + 4));
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead16((r30 + 12));
    r7 = (r7 + 1);
    r8 = MemoryInline::FlatRead32(r30);
    r7 = (r7 * r6);
    r6 = MemoryInline::FlatRead16((r30 + 14));
    r6 = (r8 + r6);
    r7_addr_2 = (r7 + r6);
    MemoryInline::FlatWrite8(r7_addr_2, static_cast<uint8_t>(r10));
    r7 = MemoryInline::FlatRead16((r30 + 12));
    r6 = MemoryInline::FlatRead16((r30 + 6));
    r8 = (r7 + 1);
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r10));
    r7 = (r8 & 65535);
}

loc_80022BF0:
{
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r8));
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_80022C08;
    }
}

loc_80022BF8:
{
    r6 = MemoryInline::FlatRead16((r30 + 10));
    r6 = (r6 & 2);
}

loc_80022C00:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80022C08;
    }
}

loc_80022C04:
{
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r10));
}

loc_80022C08:
{
    r7 = MemoryInline::FlatRead16((r30 + 12));
    r6 = MemoryInline::FlatRead16((r30 + 16));
}

loc_80022C14:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_80022C40;
    }
}

loc_80022C18:
{
    r8 = (r6 + 1);
    r6 = MemoryInline::FlatRead16((r30 + 6));
    r7 = (r8 & 65535);
    r9 = MemoryInline::FlatRead32((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_80022C2C:
{
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r8));
    r6 = (r9 + 1);
    MemoryInline::FlatWrite32((r30 + 20), r6);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80022C40;
    }
}

loc_80022C3C:
{
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r10));
}

loc_80022C40:
{
    r7 = MemoryInline::FlatRead16((r30 + 4));
    r6 = MemoryInline::FlatRead16((r30 + 12));
    r7 = (r7 + 1);
    r8 = MemoryInline::FlatRead32(r30);
    r6 = (r7 * r6);
    r6 = (r8 + r6);
    goto loc_80022EA8;
}

loc_80022C5C:
{
}

loc_80022C60:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(9))) {
        goto loc_80022CA8;
    }
}

loc_80022C64:
{
    r8 = MemoryInline::FlatRead16((r30 + 10));
    r31 = (r31 + 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(30));
    r8 = (r8_rot_3 & 3);
    r8 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r9 = (r8 + -1);
}

loc_80022C78:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r4));
    r6 = (r6 + 1);
    r11 = MemoryInline::FlatRead16((r30 + 14));
    r8 = MemoryInline::FlatRead16((r30 + 4));
    r11 = (r11 + 1);
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r11));
    r11 = (r11 & 65535);
}

loc_80022C98:
{
    if ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r8))) {
        goto loc_80022D84;
    }
}

loc_80022C9C:
{
    r8 = (r11 & r9);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80022C78;
    }
}

loc_80022CA4:
{
    goto loc_80022D84;
}

loc_80022CA8:
{
    r8 = (r9 + -129);
    r11 = (r9 | ~r0);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r8 = (r8_rot_4 & 2147483647);
    r9 = MemoryInline::FlatRead16((r30 + 14));
    r11 = (r11 - r8);
    r8 = MemoryInline::FlatRead16((r30 + 4));
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & 1);
    r12 = r6;
    r29 = (r11 + 1);
    r9 = (r9 + r29);
    r11 = r31;
}

loc_80022CD8:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(r8))) {
        goto loc_80022CE4;
    }
}

loc_80022CDC:
{
    r29 = 0;
    goto loc_80022D6C;
}

loc_80022CE4:
{
}

loc_80022CE8:
{
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r9));
    r9 = r29;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80022D6C;
    }
}

loc_80022CF4:
{
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(29));
    r8 = (r8_rot_5 & 536870911);
}

loc_80022CF8:
{
    ctr = r8;
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80022D54;
    }
}

loc_80022D00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r11, 0, 8u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r11);
    guest_range_1 = MemoryInline::ResolveRangeHost(r12, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r12, static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r11 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r12 + 1), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r11 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r12 + 2), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r11 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r12 + 3), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r11 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r12 + 4), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r11 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r12 + 5), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r11 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r12 + 6), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r11 + 7));
    r11 = (r11 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r12 + 7), static_cast<uint8_t>(r8));
    r12 = (r12 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80022D00;
    }
}

loc_80022D4C:
{
    r9 = (r29 & 7);
}

loc_80022D50:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80022D6C;
    }
}

loc_80022D54:
{
    ctr = r9;
}

loc_80022D58:
{
    r8 = MemoryInline::FlatRead8(r11);
    r11 = (r11 + 1);
    MemoryInline::FlatWrite8(r12, static_cast<uint8_t>(r8));
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80022D58;
    }
}

loc_80022D6C:
{
}

loc_80022D70:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80022D80;
    }
}

loc_80022D74:
{
    r31 = (r31 + r29);
    r6 = (r6 + r29);
    goto loc_80022D84;
}

loc_80022D80:
{
    r7 = 1;
}

loc_80022D84:
{
    r8 = MemoryInline::FlatRead16((r30 + 4));
    r11 = MemoryInline::FlatRead16((r30 + 14));
}

loc_80022D90:
{
    if ((static_cast<uint32_t>(r11) < static_cast<uint32_t>(r8))) {
        goto loc_80022D98;
    }
}

loc_80022D94:
{
    r7 = 1;
}

loc_80022D98:
{
}

loc_80022D9C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80022E78;
    }
}

loc_80022DA0:
{
    r7 = MemoryInline::FlatRead16((r30 + 10));
    r7 = (r7 & 1);
}

loc_80022DA8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80022DCC;
    }
}

loc_80022DAC:
{
    goto loc_80022DB4;
}

loc_80022DB0:
{
    r31 = (r31 + 1);
}

loc_80022DB4:
{
    r7 = MemoryInline::FlatRead8(r31);
}

loc_80022DBC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(10))) {
        goto loc_80022EA8;
    }
}

loc_80022DC0:
{
}

loc_80022DC4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80022DB0;
    }
}

loc_80022DC8:
{
    goto loc_80022EA8;
}

loc_80022DCC:
{
    r6 = MemoryInline::FlatRead8(r31);
}

loc_80022DD4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(10))) {
        goto loc_80022DDC;
    }
}

loc_80022DD8:
{
    r31 = (r31 + 1);
}

loc_80022DDC:
{
    r6 = MemoryInline::FlatRead16((r30 + 12));
    r7 = (r8 + 1);
    r8 = MemoryInline::FlatRead32(r30);
    r7 = (r7 * r6);
    r6 = (r8 + r11);
    r7_addr_3 = (r7 + r6);
    MemoryInline::FlatWrite8(r7_addr_3, static_cast<uint8_t>(r10));
    r7 = MemoryInline::FlatRead16((r30 + 12));
    r6 = MemoryInline::FlatRead16((r30 + 6));
    r8 = (r7 + 1);
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r10));
    r7 = (r8 & 65535);
}

loc_80022E0C:
{
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r8));
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_80022E24;
    }
}

loc_80022E14:
{
    r6 = MemoryInline::FlatRead16((r30 + 10));
    r6 = (r6 & 2);
}

loc_80022E1C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80022E24;
    }
}

loc_80022E20:
{
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r10));
}

loc_80022E24:
{
    r7 = MemoryInline::FlatRead16((r30 + 12));
    r6 = MemoryInline::FlatRead16((r30 + 16));
}

loc_80022E30:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_80022E5C;
    }
}

loc_80022E34:
{
    r8 = (r6 + 1);
    r6 = MemoryInline::FlatRead16((r30 + 6));
    r7 = (r8 & 65535);
    r9 = MemoryInline::FlatRead32((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_80022E48:
{
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r8));
    r6 = (r9 + 1);
    MemoryInline::FlatWrite32((r30 + 20), r6);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80022E5C;
    }
}

loc_80022E58:
{
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r10));
}

loc_80022E5C:
{
    r7 = MemoryInline::FlatRead16((r30 + 4));
    r6 = MemoryInline::FlatRead16((r30 + 12));
    r7 = (r7 + 1);
    r8 = MemoryInline::FlatRead32(r30);
    r6 = (r7 * r6);
    r6 = (r8 + r6);
    goto loc_80022EA8;
}

loc_80022E78:
{
    r7 = MemoryInline::FlatRead8(r31);
}

loc_80022E80:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80022E9C;
    }
}

loc_80022E84:
{
    r7 = MemoryInline::FlatRead16((r30 + 12));
    r8 = (r8 + 1);
    r9 = MemoryInline::FlatRead32(r30);
    r8 = (r8 * r7);
    r7 = (r9 + r11);
    r8_addr_3 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_3, static_cast<uint8_t>(r10));
}

loc_80022E9C:
{
    r9 = MemoryInline::FlatRead8(r31);
}

loc_80022EA4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80022BA8;
    }
}

loc_80022EA8:
{
    r7 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80022EB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80022B88;
    }
}

loc_80022EB4:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80022B30 func_80022B30 preserves=true fpr_mask=0x00000000
