#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80158D8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80158D8C;

loc_80158D8C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
}

loc_80158DAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80158DB8;
    }
}

loc_80158DB0:
{
    r3 = 0;
    goto loc_80158E14;
}

loc_80158DB8:
{
    r31 = MemoryInline::FlatRead32((r3 + 104));
    r0 = (r5 + -20);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = 0;
    r6 = (r31 + 20);
    r5 = 6;
    MemoryInline::FlatWrite32((r3 + 104), r6);
    r3 = (r31 + 12);
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80158DEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80158E00;
    }
}

loc_80158DF0:
{
    MemoryInline::FlatWrite32((r30 + 8), r31);
    goto loc_80158E10;
}

loc_80158DFC:
{
    r3 = r0;
}

loc_80158E00:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80158E08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80158DFC;
    }
}

loc_80158E0C:
{
    MemoryInline::FlatWrite32((r3 + 4), r31);
}

loc_80158E10:
{
    r3 = r31;
}

loc_80158E14:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80158D8C func_80158D8C preserves=true fpr_mask=0x00000000
