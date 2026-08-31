#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80864874(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80864874;

loc_80864874:
{
    r4 = MemoryInline::FlatRead32((r3 + 1736));
    r0 = (r4 + -22);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80864880:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086488C;
    }
}

loc_80864884:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(25));
}

loc_80864888:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864894;
    }
}

loc_8086488C:
{
    r3 = 0;
    goto loc_808648F8;
}

loc_80864894:
{
    r4 = MemoryInline::FlatRead32((r3 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_8086489C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808648B0;
    }
}

loc_808648A0:
{
    r5 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808648AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808648BC;
    }
}

loc_808648B0:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r30 + 252), r31);
    MemoryInline::FlatWrite32((r30 + 256), r0);
}

loc_808648BC:
{
    r3 = 1;
}

loc_808648F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000037B gpr_write=0xE00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80864874 func_80864874 preserves=true fpr_mask=0x00000000
