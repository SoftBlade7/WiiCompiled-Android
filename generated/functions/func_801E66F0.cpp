#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E66F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E66F0;

loc_801E66F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r5 = MemoryInline::FlatRead8((r31 + 3));
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead16(r4);
    r4 = MemoryInline::FlatRead8((r4 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E6D68u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_801E6720:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E672C;
    }
}

loc_801E6724:
{
    r3 = -2;
    goto loc_801E6780;
}

loc_801E672C:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
    r4 = MemoryInline::FlatRead8((r31 + 6));
}

loc_801E6738:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(23))) {
        goto loc_801E6744;
    }
}

loc_801E673C:
{
}

loc_801E6740:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(59))) {
        goto loc_801E674C;
    }
}

loc_801E6744:
{
    r4 = -1;
    goto loc_801E6754;
}

loc_801E674C:
{
    r0 = (r0 * 60);
    r4 = (r4 + r0);
}

loc_801E6754:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_801E6758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E6768;
    }
}

loc_801E675C:
{
    r0 = MemoryInline::FlatRead8((r31 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(60));
}

loc_801E6764:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E6770;
    }
}

loc_801E6768:
{
    r3 = -2;
    goto loc_801E6780;
}

loc_801E6770:
{
    r0 = (r3 * 1440);
    r3 = 0;
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801E6780:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000DB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E66F0 func_801E66F0 preserves=true fpr_mask=0x00000000
