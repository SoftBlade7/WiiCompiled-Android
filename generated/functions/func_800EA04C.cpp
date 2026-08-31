#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EA04C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800EA04C;

loc_800EA04C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800EA050:
{
    r7 = 0;
    r11 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EA114;
    }
}

loc_800EA05C:
{
}

loc_800EA060:
{
    r6 = (r5 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_800EA0EC;
    }
}

loc_800EA068:
{
    r0 = (r6 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_800EA078:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_800EA0EC;
    }
}

loc_800EA07C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r11 = (r11 + 8);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r7 = (r7 ^ r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r7 = (r7 & 255);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r3_addr_2 = (r3 + r7);
    r7 = MemoryInline::FlatRead8(r3_addr_2);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r6 = (r7 ^ r6);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r3_addr_3 = (r3 + r6);
    r10 = MemoryInline::FlatRead8(r3_addr_3);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r10 = (r10 ^ r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r3_addr_4 = (r3 + r10);
    r10 = MemoryInline::FlatRead8(r3_addr_4);
    r4 = (r4 + 8);
    r9 = (r10 ^ r9);
    r3_addr_5 = (r3 + r9);
    r9 = MemoryInline::FlatRead8(r3_addr_5);
    r8 = (r9 ^ r8);
    r3_addr_6 = (r3 + r8);
    r8 = MemoryInline::FlatRead8(r3_addr_6);
    r7 = (r8 ^ r7);
    r3_addr_7 = (r3 + r7);
    r7 = MemoryInline::FlatRead8(r3_addr_7);
    r6 = (r7 ^ r6);
    r3_addr_8 = (r3 + r6);
    r6 = MemoryInline::FlatRead8(r3_addr_8);
    r0 = (r6 ^ r0);
    r3_addr_9 = (r3 + r0);
    r7 = MemoryInline::FlatRead8(r3_addr_9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EA07C;
    }
}

loc_800EA0EC:
{
    r0 = (r5 - r11);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
}

loc_800EA0F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EA114;
    }
}

loc_800EA0FC:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r3_addr_12 = (r3 + r0);
    r7 = MemoryInline::FlatRead8(r3_addr_12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EA0FC;
    }
}

loc_800EA114:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EA04C func_800EA04C preserves=true fpr_mask=0x00000000
