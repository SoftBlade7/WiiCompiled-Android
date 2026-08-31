#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086474C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8086474C;

loc_8086474C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8086475C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(27))) {
        goto loc_80864764;
    }
}

loc_80864760:
{
    r29 = 20;
}

loc_80864764:
{
    r0 = MemoryInline::FlatRead8((r3 + 1792));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086476C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086477C;
    }
}

loc_80864770:
{
    r0 = MemoryInline::FlatRead32((r3 + 1736));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_80864778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864780;
    }
}

loc_8086477C:
{
    r31 = 27;
}

loc_80864780:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x80864798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_808647A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808647B8;
    }
}

loc_808647A4:
{
    r3 = r30;
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

loc_808647B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808647C0;
    }
}

loc_808647B8:
{
    MemoryInline::FlatWrite32((r30 + 252), r31);
    MemoryInline::FlatWrite32((r30 + 256), r29);
}

loc_808647C0:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8086474C func_8086474C preserves=true fpr_mask=0x00000000
