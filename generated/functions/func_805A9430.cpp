#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A9430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A9430;

loc_805A9430:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A9438:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805A943C:
{
    r4 = MemoryInline::FlatRead16((r3 + 42));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(600));
}

loc_805A9450:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_805A9454:
{
    r4 = MemoryInline::FlatRead16((r3 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r6 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 + 3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5_addr_0 = (r5 + r0);
    r4 = MemoryInline::FlatRead32(r5_addr_0);
    MemoryInline::FlatWrite8((r4 + 830), static_cast<uint8_t>(r6));
    r4 = MemoryInline::FlatRead16((r3 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r6));
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805A9488:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805A9490;
    }
}

loc_805A948C:
{
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r6));
}

loc_805A9490:
{
    r5 = MemoryInline::FlatRead16((r3 + 44));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r5 + 3);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r4_addr_0 = (r4 + r6);
    r5 = MemoryInline::FlatRead32(r4_addr_0);
    r4 = MemoryInline::FlatRead32((r5 + 140));
    r5 = MemoryInline::FlatRead32((r5 + 144));
    MemoryInline::FlatWrite32((r4 + 108), r5);
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r4_addr_1 = (r4 + r6);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite8((r4 + 830), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r4_addr_2 = (r4 + r6);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000059 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A9430 func_805A9430 preserves=true fpr_mask=0x00000000
