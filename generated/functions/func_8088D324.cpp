#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088D324(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8088D324;

loc_8088D324:
{
    r6 = 0;
    r5 = 0;
    goto loc_8088D344;
}

loc_8088D330:
{
    r0 = (r6 & 65535);
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 * 24);
    r6 = (r6 + 1);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r5));
}

loc_8088D344:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r4 = (r6 & 65535);
}

loc_8088D350:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8088D330;
    }
}

loc_8088D354:
{
    r6 = 0;
    r5 = 0;
    goto loc_8088D370;
}

loc_8088D360:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r6 = (r6 + 1);
    r4_addr_4 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_4, r5);
}

loc_8088D370:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r4 = (r6 & 65535);
}

loc_8088D37C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8088D360;
    }
}

loc_8088D380:
{
    r6 = 0;
    r5 = 0;
    goto loc_8088D39C;
}

loc_8088D38C:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 131070);
    r6 = (r6 + 1);
    r4_addr_6 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_6, static_cast<uint16_t>(r5));
}

loc_8088D39C:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r4 = (r6 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8088D3A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088D38C;
    }
}

loc_8088D3AC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088D324 func_8088D324 preserves=true fpr_mask=0x00000000
