#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EEE24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805EEE24;

loc_805EEE24:
{
    r4 = 0x808C0000u;
    r0 = 3;
    r4 = (r4 + -25984);
    r8 = r3;
    MemoryInline::FlatWrite32(r3, r4);
    r9 = 0;
    r7 = -1;
    r6 = 1;
    r5 = 0;
    ctr = r0;
}

loc_805EEE4C:
{
}

loc_805EEE50:
{
    MemoryInline::FlatWrite32((r8 + 4), r7);
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(2))) {
        goto loc_805EEE60;
    }
}

loc_805EEE58:
{
}

loc_805EEE5C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(8))) {
        goto loc_805EEE68;
    }
}

loc_805EEE60:
{
    r4 = (r3 + r9);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r6));
}

loc_805EEE68:
{
    r4 = (r3 + r9);
    r9 = (r9 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EEE78:
{
    MemoryInline::FlatWrite32((r8 + 8), r7);
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(2))) {
        goto loc_805EEE88;
    }
}

loc_805EEE80:
{
}

loc_805EEE84:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(8))) {
        goto loc_805EEE90;
    }
}

loc_805EEE88:
{
    r4 = (r3 + r9);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r6));
}

loc_805EEE90:
{
    r4 = (r3 + r9);
    r9 = (r9 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
}

loc_805EEEA0:
{
    MemoryInline::FlatWrite32((r8 + 12), r7);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EEEB0;
    }
}

loc_805EEEA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(8));
}

loc_805EEEAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EEEB8;
    }
}

loc_805EEEB0:
{
    r4 = (r3 + r9);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r6));
}

loc_805EEEB8:
{
    r4 = (r3 + r9);
    r9 = (r9 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
    r8 = (r8 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EEE4C;
    }
}

loc_805EEECC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F8 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EEE24 func_805EEE24 preserves=true fpr_mask=0x00000000
