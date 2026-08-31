#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80098C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80098C70;

loc_80098C70:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (r5 + -1381171200);
}

loc_80098C88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(17745))) {
        goto loc_80098C94;
    }
}

loc_80098C8C:
{
    r0 = 0;
    goto loc_80098CC0;
}

loc_80098C94:
{
    r6 = MemoryInline::FlatRead16((r4 + 6));
}

loc_80098C9C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(256))) {
        goto loc_80098CA8;
    }
}

loc_80098CA0:
{
    r0 = 0;
    goto loc_80098CC0;
}

loc_80098CA8:
{
    r0 = (256 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(256) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5 = 256;
    r5 = (r5 | ~r6);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r5 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80098CC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80098CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80098CC8:
{
    MemoryInline::FlatWrite32(r3, r4);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80098C70 func_80098C70 preserves=true fpr_mask=0x00000000
