#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802339D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802339D4;

loc_802339D4:
{
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r5 = 127;
    r6 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -7);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_80233A4C;
}

loc_802339F8:
{
    r6 = MemoryInline::FlatRead32((r4 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80233A00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80233A10;
    }
}

loc_80233A04:
{
    r3 = 0x80000000u;
    r3 = (r3 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80233A10:
{
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 560));
    r0 = (r0 - r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r5 = (r5_rot_2 & 255);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead32((r4 + 28));
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r5 + -1);
    r3 = (r3 + 8);
    MemoryInline::FlatWrite32((r4 + 28), r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    MemoryInline::FlatWrite32((r4 + 20), r3);
    MemoryInline::FlatWrite32((r4 + 16), r0);
}

loc_80233A4C:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80233A54:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(24))) {
        goto loc_802339F8;
    }
}

loc_80233A58:
{
    r5 = 255;
    goto loc_80233A74;
}

loc_80233A60:
{
    r3 = MemoryInline::FlatRead32((r4 + 560));
    r3_addr_4 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
}

loc_80233A74:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r6 = (r0 - r3);
    r0 = (r6 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80233A84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80233A60;
    }
}

loc_80233A88:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802339D4 func_802339D4 preserves=true fpr_mask=0x00000000
