#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80172658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mdest_3 = 0;
    uint32_t r11_mdest_4 = 0;
    uint32_t r11_mdest_5 = 0;
    uint32_t r11_mdest_6 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_mrot_3 = 0;
    uint32_t r11_mrot_4 = 0;
    uint32_t r11_mrot_5 = 0;
    uint32_t r11_mrot_6 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mdest_3 = 0;
    uint32_t r8_mdest_4 = 0;
    uint32_t r8_mdest_5 = 0;
    uint32_t r8_mdest_6 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_mrot_3 = 0;
    uint32_t r8_mrot_4 = 0;
    uint32_t r8_mrot_5 = 0;
    uint32_t r8_mrot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mdest_6 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_mrot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80172658;

loc_80172658:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017265C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80172744;
    }
}

loc_80172660:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 20u, true, false);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r11 = 0;
    r10 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r5 + 2));
    r6 = -872349696;
    r11_mrot_1 = (r12 & 4095);
    r11_mdest_1 = (r11 & -4096);
    r11 = (r11_mdest_1 | r11_mrot_1);
    r0 = 97;
    r9 = r11;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r9_mrot_1 = (r9_rot_1 & 16773120);
    r9_mdest_1 = (r9 & -16773121);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r7 = 233;
    r8 = r9;
    r12 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r5 + 4));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_1 = (r8_rot_1 & -16777216);
    r8_mdest_1 = (r8 & 16777215);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r11 = 0;
    r11_mrot_2 = (r12 & 4095);
    r11_mdest_2 = (r11 & -4096);
    r11 = (r11_mdest_2 | r11_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r9 = r11;
    r10 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r5 + 6));
    r7 = 234;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r9_mrot_2 = (r9_rot_2 & 16773120);
    r9_mdest_2 = (r9 & -16773121);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r5 + 8));
    r8 = r9;
    r11 = 0;
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_2 = (r8_rot_2 & -16777216);
    r8_mdest_2 = (r8 & 16777215);
    r8 = (r8_mdest_2 | r8_mrot_2);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r5 + 10));
    r11_mrot_3 = (r12 & 4095);
    r11_mdest_3 = (r11 & -4096);
    r11 = (r11_mdest_3 | r11_mrot_3);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r9 = r11;
    r7 = 235;
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r9_mrot_3 = (r9_rot_3 & 16773120);
    r9_mdest_3 = (r9 & -16773121);
    r9 = (r9_mdest_3 | r9_mrot_3);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r8 = r9;
    r12 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r5 + 12));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_3 = (r8_rot_3 & -16777216);
    r8_mdest_3 = (r8 & 16777215);
    r8 = (r8_mdest_3 | r8_mrot_3);
    r11 = 0;
    r11_mrot_4 = (r12 & 4095);
    r11_mdest_4 = (r11 & -4096);
    r11 = (r11_mdest_4 | r11_mrot_4);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r9 = r11;
    r10 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r5 + 14));
    r7 = 236;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r9_mrot_4 = (r9_rot_4 & 16773120);
    r9_mdest_4 = (r9 & -16773121);
    r9 = (r9_mdest_4 | r9_mrot_4);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r5 + 16));
    r8 = r9;
    r11 = 0;
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_4 = (r8_rot_4 & -16777216);
    r8_mdest_4 = (r8 & 16777215);
    r8 = (r8_mdest_4 | r8_mrot_4);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r5 + 18));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r11_mrot_5 = (r12 & 4095);
    r11_mdest_5 = (r11 & -4096);
    r11 = (r11_mdest_5 | r11_mrot_5);
    r9 = r11;
    r7 = 237;
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r9_mrot_5 = (r9_rot_5 & 16773120);
    r9_mdest_5 = (r9 & -16773121);
    r9 = (r9_mdest_5 | r9_mrot_5);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r8 = r9;
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_5 = (r8_rot_5 & -16777216);
    r8_mdest_5 = (r8 & 16777215);
    r8 = (r8_mdest_5 | r8_mrot_5);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
}

loc_80172744:
{
    r0 = (r4 + 342);
    r6 = 0;
    r6_mrot_0 = (r0 & 1023);
    r6_mdest_0 = (r6 & -1024);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r4 = -872349696;
    r0 = 97;
    r5 = 232;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r6_mrot_1 = (r6_rot_0 & 1024);
    r6_mdest_1 = (r6 & -1025);
    r6 = (r6_mdest_1 | r6_mrot_1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_1 & -16777216);
    r6_mdest_2 = (r6 & 16777215);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFD gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80172658 func_80172658 preserves=true fpr_mask=0x00000000
