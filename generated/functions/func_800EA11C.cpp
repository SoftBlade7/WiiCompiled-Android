#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EA11C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800EA11C;

loc_800EA11C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800EA124:
{
    r9 = -1;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EA250;
    }
}

loc_800EA134:
{
}

loc_800EA138:
{
    r7 = (r5 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_800EA220;
    }
}

loc_800EA140:
{
    r0 = (r7 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_800EA150:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_800EA220;
    }
}

loc_800EA154:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r8 = (r8_rot_2 & 16777215);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r6 = (r6 + 8);
    r7 = (r9 ^ r7);
    r11 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & 1020);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r3_addr_2 = (r3 + r7);
    r7 = MemoryInline::FlatRead32(r3_addr_2);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r31 = (r8 ^ r7);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r0 = (r31 ^ r0);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & 1020);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r3_addr_3 = (r3 + r12);
    r12 = MemoryInline::FlatRead32(r3_addr_3);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(24));
    r31 = (r31_rot_2 & 16777215);
    r4 = (r4 + 8);
    r12 = (r31 ^ r12);
    r11 = (r12 ^ r11);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r11 = (r11_rot_2 & 1020);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r12 = (r12_rot_3 & 16777215);
    r3_addr_4 = (r3 + r11);
    r11 = MemoryInline::FlatRead32(r3_addr_4);
    r11 = (r12 ^ r11);
    r10 = (r11 ^ r10);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r10 = (r10_rot_2 & 1020);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r11 = (r11_rot_3 & 16777215);
    r3_addr_5 = (r3 + r10);
    r10 = MemoryInline::FlatRead32(r3_addr_5);
    r10 = (r11 ^ r10);
    r9 = (r10 ^ r9);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & 1020);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r10 = (r10_rot_3 & 16777215);
    r3_addr_6 = (r3 + r9);
    r9 = MemoryInline::FlatRead32(r3_addr_6);
    r9 = (r10 ^ r9);
    r8 = (r9 ^ r8);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & 1020);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r9 = (r9_rot_3 & 16777215);
    r3_addr_7 = (r3 + r8);
    r8 = MemoryInline::FlatRead32(r3_addr_7);
    r8 = (r9 ^ r8);
    r7 = (r8 ^ r7);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & 1020);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r8 = (r8_rot_4 & 16777215);
    r3_addr_8 = (r3 + r7);
    r7 = MemoryInline::FlatRead32(r3_addr_8);
    r7 = (r8 ^ r7);
    r0 = (r7 ^ r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r7 = (r7_rot_4 & 16777215);
    r3_addr_9 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_9);
    r9 = (r7 ^ r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EA154;
    }
}

loc_800EA220:
{
    r0 = (r5 - r6);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_800EA22C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EA250;
    }
}

loc_800EA230:
{
    r0 = MemoryInline::FlatRead8(r4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & 16777215);
    r4 = (r4 + 1);
    r0 = (r9 ^ r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1020);
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_12);
    r9 = (r5 ^ r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EA230;
    }
}

loc_800EA250:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = ~(r9 | r9);
    r1 = (r1 + 16);
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EA11C func_800EA11C preserves=true fpr_mask=0x00000000
