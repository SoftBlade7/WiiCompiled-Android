#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EF9EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805EF9EC;

loc_805EF9EC:
{
    r0 = 3;
    r7 = r3;
    r8 = 0;
    r6 = -1;
    r5 = 1;
    ctr = r0;
}

loc_805EFA04:
{
}

loc_805EFA08:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(2))) {
        goto loc_805EFA14;
    }
}

loc_805EFA0C:
{
}

loc_805EFA10:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(8))) {
        goto loc_805EFA20;
    }
}

loc_805EFA14:
{
    MemoryInline::FlatWrite32((r7 + 4), r6);
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EFA20:
{
    r8 = (r8 + 1);
}

loc_805EFA28:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(2))) {
        goto loc_805EFA34;
    }
}

loc_805EFA2C:
{
}

loc_805EFA30:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(8))) {
        goto loc_805EFA40;
    }
}

loc_805EFA34:
{
    MemoryInline::FlatWrite32((r7 + 8), r6);
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EFA40:
{
    r8 = (r8 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
}

loc_805EFA48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EFA54;
    }
}

loc_805EFA4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(8));
}

loc_805EFA50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EFA60;
    }
}

loc_805EFA54:
{
    MemoryInline::FlatWrite32((r7 + 12), r6);
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EFA60:
{
    r7 = (r7 + 12);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EFA04;
    }
}

loc_805EFA6C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F8 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EF9EC func_805EF9EC preserves=true fpr_mask=0x00000000
