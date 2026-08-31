#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D23D8(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_805D23D8;

loc_805D23D8:
{
    r0 = 5;
    r8 = 0;
    ctr = r0;
}

loc_805D23E4:
{
    r6 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r3);
    r7 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r6 ^ r0);
    r5 = (r7 ^ r5);
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D240C;
    }
}

loc_805D2404:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805D240C:
{
    r0 = MemoryInline::FlatRead32((r3 + 472));
    r5 = MemoryInline::FlatRead32((r3 + 476));
    r0 = (r6 ^ r0);
    r5 = (r7 ^ r5);
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D242C;
    }
}

loc_805D2424:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805D242C:
{
    r0 = MemoryInline::FlatRead32((r3 + 944));
    r5 = MemoryInline::FlatRead32((r3 + 948));
    r0 = (r6 ^ r0);
    r5 = (r7 ^ r5);
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D244C;
    }
}

loc_805D2444:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805D244C:
{
    r0 = MemoryInline::FlatRead32((r3 + 1416));
    r5 = MemoryInline::FlatRead32((r3 + 1420));
    r0 = (r6 ^ r0);
    r5 = (r7 ^ r5);
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D246C;
    }
}

loc_805D2464:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805D246C:
{
    r0 = MemoryInline::FlatRead32((r3 + 1888));
    r5 = MemoryInline::FlatRead32((r3 + 1892));
    r0 = (r6 ^ r0);
    r5 = (r7 ^ r5);
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D248C;
    }
}

loc_805D2484:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805D248C:
{
    r0 = MemoryInline::FlatRead32((r3 + 2360));
    r5 = MemoryInline::FlatRead32((r3 + 2364));
    r0 = (r6 ^ r0);
    r5 = (r7 ^ r5);
    r0 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D24AC;
    }
}

loc_805D24A4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805D24AC:
{
    r3 = (r3 + 2832);
    r8 = (r8 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805D23E4;
    }
}

loc_805D24B8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805D23D8 func_805D23D8 preserves=true fpr_mask=0x00000000
