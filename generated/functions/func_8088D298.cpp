#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088D298(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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

    goto loc_8088D298;

loc_8088D298:
{
    r6 = 0;
    r5 = 0;
    goto loc_8088D2B8;
}

loc_8088D2A4:
{
    r0 = (r6 & 255);
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 * 24);
    r6 = (r6 + 1);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r5));
}

loc_8088D2B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r4 = (r6 & 255);
}

loc_8088D2C4:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8088D2A4;
    }
}

loc_8088D2C8:
{
    r6 = 0;
    r5 = 0;
    goto loc_8088D2E4;
}

loc_8088D2D4:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r6 = (r6 + 1);
    r4_addr_4 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_4, r5);
}

loc_8088D2E4:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r4 = (r6 & 65535);
}

loc_8088D2F0:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8088D2D4;
    }
}

loc_8088D2F4:
{
    r6 = 0;
    r5 = 0;
    goto loc_8088D310;
}

loc_8088D300:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r6 & 65535);
    r6 = (r6 + 1);
    r4_addr_6 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_6, static_cast<uint8_t>(r5));
}

loc_8088D310:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r4 = (r6 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8088D31C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088D300;
    }
}

loc_8088D320:
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
// RECOMP_REGISTRATION base 0x8088D298 func_8088D298 preserves=true fpr_mask=0x00000000
