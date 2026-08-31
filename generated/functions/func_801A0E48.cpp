#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A0E48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A0E48;

loc_801A0E48:
{
    r3 = (r3 * 12);
    r5 = MemoryInline::FlatRead32((r13 + -25420));
    r0 = (r4 + 63);
    r5 = (r5 + r3);
    r4 = (r0 & -32);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r6 = r3;
    goto loc_801A0E78;
}

loc_801A0E68:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
}

loc_801A0E70:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_801A0E80;
    }
}

loc_801A0E74:
{
    r6 = MemoryInline::FlatRead32((r6 + 4));
}

loc_801A0E78:
{
}

loc_801A0E7C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801A0E68;
    }
}

loc_801A0E80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801A0E84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0E90;
    }
}

loc_801A0E88:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_801A0E90:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r0 - r4);
}

loc_801A0E9C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(64))) {
        goto loc_801A0ED8;
    }
}

loc_801A0EA0:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
}

loc_801A0EA8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801A0EB4;
    }
}

loc_801A0EAC:
{
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801A0EB4:
{
    r4 = MemoryInline::FlatRead32(r6);
}

loc_801A0EBC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801A0EC8;
    }
}

loc_801A0EC0:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    goto loc_801A0ED0;
}

loc_801A0EC8:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_801A0ED0:
{
    MemoryInline::FlatWrite32((r5 + 4), r3);
    goto loc_801A0F18;
}

loc_801A0ED8:
{
    MemoryInline::FlatWrite32((r6 + 8), r4);
    r4 = (r6 + r4);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32(r4, r0);
    r3 = MemoryInline::FlatRead32((r6 + 4));
}

loc_801A0EF4:
{
    MemoryInline::FlatWrite32((r4 + 4), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A0F00;
    }
}

loc_801A0EFC:
{
    MemoryInline::FlatWrite32(r3, r4);
}

loc_801A0F00:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_801A0F08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A0F14;
    }
}

loc_801A0F0C:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    goto loc_801A0F18;
}

loc_801A0F14:
{
    MemoryInline::FlatWrite32((r5 + 4), r4);
}

loc_801A0F18:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r0 = 0;
    MemoryInline::FlatWrite32((r6 + 4), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A0F28:
{
    MemoryInline::FlatWrite32(r6, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A0F34;
    }
}

loc_801A0F30:
{
    MemoryInline::FlatWrite32(r3, r6);
}

loc_801A0F34:
{
    MemoryInline::FlatWrite32((r5 + 8), r6);
    r3 = (r6 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A0E48 func_801A0E48 preserves=true fpr_mask=0x00000000
