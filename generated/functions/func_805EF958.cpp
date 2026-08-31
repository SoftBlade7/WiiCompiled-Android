#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EF958(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_805EF958;

loc_805EF958:
{
    r0 = 3;
    r8 = r3;
    r7 = 0;
    r6 = -1;
    r5 = 1;
    ctr = r0;
}

loc_805EF970:
{
}

loc_805EF974:
{
    MemoryInline::FlatWrite32((r8 + 4), r6);
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(2))) {
        goto loc_805EF984;
    }
}

loc_805EF97C:
{
}

loc_805EF980:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(8))) {
        goto loc_805EF98C;
    }
}

loc_805EF984:
{
    r4 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EF98C:
{
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32((r8 + 8), r6);
}

loc_805EF998:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(2))) {
        goto loc_805EF9A4;
    }
}

loc_805EF99C:
{
}

loc_805EF9A0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(8))) {
        goto loc_805EF9AC;
    }
}

loc_805EF9A4:
{
    r4 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EF9AC:
{
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32((r8 + 12), r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
}

loc_805EF9B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EF9C4;
    }
}

loc_805EF9BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(8));
}

loc_805EF9C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EF9CC;
    }
}

loc_805EF9C4:
{
    r4 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EF9CC:
{
    r8 = (r8 + 12);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EF970;
    }
}

loc_805EF9D8:
{
    r4 = 0;
    r0 = 0x80000000u;
    MemoryInline::FlatWrite32((r3 + 52), r4);
    MemoryInline::FlatWrite32((r3 + 56), r0);
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
// RECOMP_REGISTRATION base 0x805EF958 func_805EF958 preserves=true fpr_mask=0x00000000
