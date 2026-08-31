#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F8C00(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_805F8C00;

loc_805F8C00:
{
    MemoryInline::FlatWrite32(r3, r4);
    r5 = (r4 + 32);
    r6 = 0;
    goto loc_805F8C74;
}

loc_805F8C10:
{
    r4 = MemoryInline::FlatRead32(r5);
    r7 = (r5 + 8);
    r0 = (r4 + -1229848576);
}

loc_805F8C20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(17969))) {
        goto loc_805F8C4C;
    }
}

loc_805F8C24:
{
    r0 = (r4 + -1145110528);
}

loc_805F8C2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21553))) {
        goto loc_805F8C54;
    }
}

loc_805F8C30:
{
    r0 = (r4 + -1398013952);
}

loc_805F8C38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21041))) {
        goto loc_805F8C5C;
    }
}

loc_805F8C3C:
{
    r0 = (r4 + -1296629760);
}

loc_805F8C44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(17457))) {
        goto loc_805F8C64;
    }
}

loc_805F8C48:
{
    goto loc_805F8C68;
}

loc_805F8C4C:
{
    MemoryInline::FlatWrite32((r3 + 4), r7);
    goto loc_805F8C68;
}

loc_805F8C54:
{
    MemoryInline::FlatWrite32((r3 + 8), r7);
    goto loc_805F8C68;
}

loc_805F8C5C:
{
    MemoryInline::FlatWrite32((r3 + 12), r7);
    goto loc_805F8C68;
}

loc_805F8C64:
{
    MemoryInline::FlatWrite32((r3 + 16), r7);
}

loc_805F8C68:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r6 = (r6 + 1);
    r5 = (r5 + r0);
}

loc_805F8C74:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_805F8C80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F8C10;
    }
}

loc_805F8C84:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F8C00 func_805F8C00 preserves=true fpr_mask=0x00000000
