#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80035340(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80035340;

loc_80035340:
{
    r6 = 0;
    MemoryInline::FlatWrite32((r3 + 84), r6);
    r7 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_800353A0;
}

loc_80035350:
{
}

loc_80035354:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80035364;
    }
}

loc_80035358:
{
    r0 = MemoryInline::FlatRead16((r7 + 226));
}

loc_80035360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80035394;
    }
}

loc_80035364:
{
    r5 = MemoryInline::FlatRead16((r7 + 226));
}

loc_8003536C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80035378;
    }
}

loc_80035370:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r7 + 226), static_cast<uint16_t>(r0));
}

loc_80035378:
{
    r0 = MemoryInline::FlatRead32((r7 + 12));
}

loc_80035380:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80035394;
    }
}

loc_80035384:
{
    r0 = MemoryInline::FlatRead32((r7 + 216));
}

loc_8003538C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80035394;
    }
}

loc_80035390:
{
    MemoryInline::FlatWrite32((r7 + 216), r6);
}

loc_80035394:
{
    r0 = MemoryInline::FlatRead16((r3 + 66));
    r5 = (r7 + r0);
    r7 = MemoryInline::FlatRead32((r5 + 4));
}

loc_800353A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800353A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80035350;
    }
}

loc_800353A8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80035340 func_80035340 preserves=true fpr_mask=0x00000000
