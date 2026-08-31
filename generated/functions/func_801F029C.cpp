#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F029C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F029C;

loc_801F029C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F02A8:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F02C0;
    }
}

loc_801F02B8:
{
    r3 = 10;
    goto loc_801F0308;
}

loc_801F02C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 6260));
    r4 = (r1 + 8);
    ctx->lr = 0x801F02CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F3CDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F02D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F02DC;
    }
}

loc_801F02D4:
{
    r3 = -1;
    goto loc_801F0308;
}

loc_801F02DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F02E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F02F8;
    }
}

loc_801F02E8:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
    goto loc_801F0304;
}

loc_801F02F8:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_801F0304:
{
    r3 = 0;
}

loc_801F0308:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800003FB gpr_write=0x800003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F029C func_801F029C preserves=true fpr_mask=0x00000000
