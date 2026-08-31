#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061B3CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8061B3CC;

loc_8061B3CC:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r7 = (r7_rot_0 & -16);
    r5 = 0;
    r4 = (r3 + r7);
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8061B3E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8061B3F8;
    }
}

loc_8061B3E8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8061B3F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061B3F8;
    }
}

loc_8061B3F4:
{
    r6 = 1;
}

loc_8061B3F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8061B3FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B418;
    }
}

loc_8061B400:
{
    r4 = (r3 + r7);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8061B410:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061B418;
    }
}

loc_8061B414:
{
    r5 = 1;
}

loc_8061B418:
{
    r3 = r5;
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
// RECOMP_REGISTRATION base 0x8061B3CC func_8061B3CC preserves=true fpr_mask=0x00000000
