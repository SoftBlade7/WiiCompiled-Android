#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E2588(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E2588;

loc_805E2588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805E258C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_805E2590:
{
    r0 = MemoryInline::FlatRead32((r3 + 608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805E2598:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_805E259C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r4 = 0x809C0000u;
    r6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r5 = MemoryInline::FlatRead32(r6);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r5 + 196));
    MemoryInline::FlatWrite32((r3 + 964), r0);
    r6 = MemoryInline::FlatRead32((r6 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
}

loc_805E25C8:
{
    r0 = MemoryInline::FlatRead32((r5 + 184));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 968), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805E25E4;
    }
}

loc_805E25D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(4));
}

loc_805E25DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E25F4;
    }
}

loc_805E25E0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805E25E4:
{
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 972), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_805E25F4:
{
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 972), r0);
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

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E2588 func_805E2588 preserves=true fpr_mask=0x00000000
