#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EF6DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801EF6DC;

loc_801EF6DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801EF6E0:
{
    r5 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801EF6E8:
{
    r6 = (r4 + 1);
    r7 = (r4 + -16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
}

loc_801EF6F8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_801EF7BC;
    }
}

loc_801EF6FC:
{
}

loc_801EF700:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(1))) {
        goto loc_801EF714;
    }
}

loc_801EF708:
{
}

loc_801EF70C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r6))) {
        goto loc_801EF714;
    }
}

loc_801EF710:
{
    r0 = 1;
}

loc_801EF714:
{
}

loc_801EF718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EF7BC;
    }
}

loc_801EF71C:
{
    r0 = (r7 + 15);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_2 & 268435455);
    ctr = r0;
}

loc_801EF72C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_801EF7BC;
    }
}

loc_801EF730:
{
    r7 = (r3 + r5);
    r3_addr_2 = (r3 + r5);
    r6 = MemoryInline::FlatRead8(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r7 + 1));
    r3_addr_3 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r0));
    r5 = (r5 + 16);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 2));
    r0 = MemoryInline::FlatRead8((r7 + 3));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 4));
    r0 = MemoryInline::FlatRead8((r7 + 5));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 6));
    r0 = MemoryInline::FlatRead8((r7 + 7));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 8));
    r0 = MemoryInline::FlatRead8((r7 + 9));
    MemoryInline::FlatWrite8((r7 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 9), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 10));
    r0 = MemoryInline::FlatRead8((r7 + 11));
    MemoryInline::FlatWrite8((r7 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 11), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 12));
    r0 = MemoryInline::FlatRead8((r7 + 13));
    MemoryInline::FlatWrite8((r7 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 13), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 14));
    r0 = MemoryInline::FlatRead8((r7 + 15));
    MemoryInline::FlatWrite8((r7 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 15), static_cast<uint8_t>(r6));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF730;
    }
}

loc_801EF7BC:
{
    r0 = (r4 + 1);
    r0 = (r0 - r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_801EF7D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_801EF7D4:
{
    r6 = (r3 + r5);
    r3_addr_6 = (r3 + r5);
    r4 = MemoryInline::FlatRead8(r3_addr_6);
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r3_addr_7 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r0));
    r5 = (r5 + 2);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801EF7D4;
    }
}

loc_801EF7F0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EF6DC func_801EF6DC preserves=true fpr_mask=0x00000000
