#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014D01C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014D01C;

loc_8014D01C:
{
    r3 = 0x80340000u;
    r3 = (r3 + -27840);
    r6 = MemoryInline::FlatRead32((r3 + 1980));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8014D02C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014D03C;
    }
}

loc_8014D030:
{
    r4 = MemoryInline::FlatRead32((r6 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8014D038:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014D044;
    }
}

loc_8014D03C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8014D044:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 13));
    r0 = (r3 + -8);
    r5 = MemoryInline::FlatRead8((r5 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r3 = (r5 + r3);
    r3 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8014D06C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8014D078;
    }
}

loc_8014D070:
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

loc_8014D078:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r6 + 80), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000050 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8014D01C func_8014D01C preserves=true fpr_mask=0x00000000
