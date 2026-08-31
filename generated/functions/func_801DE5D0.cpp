#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DE5D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DE5D0;

loc_801DE5D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801DE5DC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DE604;
    }
}

loc_801DE5FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(14400));
}

loc_801DE600:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DE60C;
    }
}

loc_801DE604:
{
    r3 = -3;
    goto loc_801DE654;
}

loc_801DE60C:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801DE614u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E8698u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DE618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DE620;
    }
}

loc_801DE61C:
{
    goto loc_801DE654;
}

loc_801DE620:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r4 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE62C:
{
    r3 = (r3 + r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE63C;
    }
}

loc_801DE634:
{
    r0 = (r4 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE644;
    }
}

loc_801DE63C:
{
    r3 = -7;
    goto loc_801DE654;
}

loc_801DE644:
{
    r0 = (r4 | 16777216);
    MemoryInline::FlatWrite32((r30 + 44), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_801DE654:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DE5D0 func_801DE5D0 preserves=true fpr_mask=0x00000000
