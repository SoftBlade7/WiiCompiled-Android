#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A0D9C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801A0D9C;

loc_801A0D9C:
{
    r7 = r3;
    r6 = 0;
    goto loc_801A0DB8;
}

loc_801A0DA8:
{
}

loc_801A0DAC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r7))) {
        goto loc_801A0DC0;
    }
}

loc_801A0DB0:
{
    r6 = r7;
    r7 = MemoryInline::FlatRead32((r7 + 4));
}

loc_801A0DB8:
{
}

loc_801A0DBC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801A0DA8;
    }
}

loc_801A0DC0:
{
}

loc_801A0DC4:
{
    MemoryInline::FlatWrite32((r4 + 4), r7);
    MemoryInline::FlatWrite32(r4, r6);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801A0E04;
    }
}

loc_801A0DD0:
{
    MemoryInline::FlatWrite32(r7, r4);
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r4 + r5);
}

loc_801A0DE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_801A0E04;
    }
}

loc_801A0DE4:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r7 = MemoryInline::FlatRead32((r7 + 4));
}

loc_801A0DF8:
{
    MemoryInline::FlatWrite32((r4 + 4), r7);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801A0E04;
    }
}

loc_801A0E00:
{
    MemoryInline::FlatWrite32(r7, r4);
}

loc_801A0E04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801A0E08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A0E40;
    }
}

loc_801A0E0C:
{
    MemoryInline::FlatWrite32((r6 + 4), r4);
    r5 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r6 + r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801A0E1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801A0E20:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801A0E28:
{
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    MemoryInline::FlatWrite32((r6 + 4), r7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801A0E38:
{
    MemoryInline::FlatWrite32(r7, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801A0E40:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A0D9C func_801A0D9C preserves=true fpr_mask=0x00000000
