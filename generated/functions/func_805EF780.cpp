#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EF780(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_805EF780;

loc_805EF780:
{
    r4 = 0x808C0000u;
    r0 = 3;
    r4 = (r4 + -25984);
    r9 = r3;
    MemoryInline::FlatWrite32(r3, r4);
    r8 = 0;
    r7 = -1;
    r6 = 1;
    r5 = 0;
    ctr = r0;
}

loc_805EF7A8:
{
}

loc_805EF7AC:
{
    MemoryInline::FlatWrite32((r9 + 4), r7);
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(2))) {
        goto loc_805EF7BC;
    }
}

loc_805EF7B4:
{
}

loc_805EF7B8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(8))) {
        goto loc_805EF7C4;
    }
}

loc_805EF7BC:
{
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r6));
}

loc_805EF7C4:
{
    r4 = (r3 + r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EF7D4:
{
    MemoryInline::FlatWrite32((r9 + 8), r7);
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(2))) {
        goto loc_805EF7E4;
    }
}

loc_805EF7DC:
{
}

loc_805EF7E0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(8))) {
        goto loc_805EF7EC;
    }
}

loc_805EF7E4:
{
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r6));
}

loc_805EF7EC:
{
    r4 = (r3 + r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
}

loc_805EF7FC:
{
    MemoryInline::FlatWrite32((r9 + 12), r7);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EF80C;
    }
}

loc_805EF804:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(8));
}

loc_805EF808:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EF814;
    }
}

loc_805EF80C:
{
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r6));
}

loc_805EF814:
{
    r4 = (r3 + r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
    r9 = (r9 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EF7A8;
    }
}

loc_805EF828:
{
    r5 = 0x808C0000u;
    r4 = 0;
    r5 = (r5 + -26064);
    r0 = 0x80000000u;
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 52), r4);
    MemoryInline::FlatWrite32((r3 + 56), r0);
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
// RECOMP_REGISTRATION base 0x805EF780 func_805EF780 preserves=true fpr_mask=0x00000000
