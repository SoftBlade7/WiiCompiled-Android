#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125078(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80125078;

loc_80125078:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r5 = 0x802F0000u;
    r4 = 0x802F0000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r5 = (r5 + 16576);
    r4 = (r4 + 16704);
    r5_addr_0 = (r5 + r6);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    r4_addr_0 = (r4 + r6);
    r7 = MemoryInline::FlatRead32(r4_addr_0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
}

loc_8012509C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801250B0;
    }
}

loc_801250A0:
{
    r0 = 0;
    r4_addr_1 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_1, r0);
    r5_addr_1 = (r5 + r6);
    MemoryInline::FlatWrite32(r5_addr_1, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801250B0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801250B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801250CC;
    }
}

loc_801250B8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r5_addr_2 = (r5 + r6);
    MemoryInline::FlatWrite32(r5_addr_2, r3);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801250CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
}

loc_801250D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801250E8;
    }
}

loc_801250D4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 0;
    r4_addr_2 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801250E8:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80125078 func_80125078 preserves=true fpr_mask=0x00000000
