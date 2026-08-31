#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80051920;

loc_80051920:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = (r4 * 18);
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r3 + r0);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005193C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80051948;
    }
}

loc_80051940:
{
    r3 = 0;
    goto loc_80051AC0;
}

loc_80051948:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 5), 0, 13u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 6));
}

loc_80051950:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r31 + 15));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r11 = (r11_rot_1 & -65536);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 5));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r10 = (r10_rot_1 & -256);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r31 + 16));
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r12 = (r12_rot_1 & -65536);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r11_mrot_1 = (r11_rot_2 & -16777216);
    r11_mdest_1 = (r11 & 16777215);
    r11 = (r11_mdest_1 | r11_mrot_1);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r31 + 14));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 8));
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r12_mrot_1 = (r12_rot_2 & -16777216);
    r12_mdest_1 = (r12 & 16777215);
    r12 = (r12_mdest_1 | r12_mrot_1);
    r11 = (r11 | r10);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r31 + 17));
    r12 = (r12 | r3);
    r11 = (r11 | r9);
    r12 = (r12 | r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800519A0;
    }
}

loc_80051998:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
}

loc_800519A0:
{
}

loc_800519A4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800519B4;
    }
}

loc_800519A8:
{
    r3 = (r12 & 255);
    r0 = (r3 + 64);
    MemoryInline::FlatWrite32(r8, r0);
}

loc_800519B4:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(28));
    r3 = (r3_rot_2 & 7);
}

loc_800519B8:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(25));
    r4 = (r4_rot_1 & 31);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80051A48;
    }
}

loc_800519C0:
{
    r0 = (r4 + -5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(31));
    r3 = (r3_rot_3 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800519CC:
{
    r0 = (r3 ^ 1);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80051A18;
    }
}

loc_800519D4:
{
}

loc_800519D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800519F8;
    }
}

loc_800519DC:
{
}

loc_800519E0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_80051A00;
    }
}

loc_800519E4:
{
}

loc_800519E8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(3))) {
        goto loc_80051A08;
    }
}

loc_800519EC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
}

loc_800519F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051A10;
    }
}

loc_800519F4:
{
    goto loc_80051A20;
}

loc_800519F8:
{
    r3 = 0;
    goto loc_80051A28;
}

loc_80051A00:
{
    r3 = 1;
    goto loc_80051A28;
}

loc_80051A08:
{
    r3 = 2;
    goto loc_80051A28;
}

loc_80051A10:
{
    r3 = 3;
    goto loc_80051A28;
}

loc_80051A18:
{
    r3 = (r4 + -1);
    goto loc_80051A28;
}

loc_80051A20:
{
    r3 = 0;
    goto loc_80051AC0;
}

loc_80051A28:
{
}

loc_80051A2C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80051A34;
    }
}

loc_80051A30:
{
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80051A34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80051A38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051A40;
    }
}

loc_80051A3C:
{
    MemoryInline::FlatWrite32(r6, r3);
}

loc_80051A40:
{
    r3 = 1;
    goto loc_80051AC0;
}

loc_80051A48:
{
}

loc_80051A4C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_80051A84;
    }
}

loc_80051A50:
{
}

loc_80051A54:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80051A60;
    }
}

loc_80051A58:
{
    r0 = 10;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80051A60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80051A64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051A7C;
    }
}

loc_80051A68:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_80051A6C:
{
    r0 = 20;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80051A78;
    }
}

loc_80051A74:
{
    r0 = 19;
}

loc_80051A78:
{
    MemoryInline::FlatWrite32(r6, r0);
}

loc_80051A7C:
{
    r3 = 1;
    goto loc_80051AC0;
}

loc_80051A84:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80051A88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80051ABC;
    }
}

loc_80051A8C:
{
}

loc_80051A90:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80051AA0;
    }
}

loc_80051A94:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 131071);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80051AA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80051AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051AB4;
    }
}

loc_80051AA8:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(20));
    r3 = (r3_rot_6 & 7);
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_80051AB4:
{
    r3 = 1;
    goto loc_80051AC0;
}

loc_80051ABC:
{
    r3 = 0;
}

loc_80051AC0:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001E1B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80051920 func_80051920 preserves=true fpr_mask=0x00000000
