#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EC088(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801EC088;

loc_801EC088:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r13 + -24272));
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801EC0B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC0D8;
    }
}

loc_801EC0B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EC0C4;
    }
}

loc_801EC0B8:
{
}

loc_801EC0BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801EC0D0;
    }
}

loc_801EC0C0:
{
    goto loc_801EC148;
}

loc_801EC0C4:
{
}

loc_801EC0C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_801EC148;
    }
}

loc_801EC0CC:
{
    goto loc_801EC144;
}

loc_801EC0D0:
{
    r31 = -7;
    goto loc_801EC148;
}

loc_801EC0D8:
{
    r5 = 0x80350000u;
    r5 = (r5 + 29216);
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_801EC0E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-2))) {
        goto loc_801EC0F4;
    }
}

loc_801EC0EC:
{
    r31 = -10;
    goto loc_801EC148;
}

loc_801EC0F4:
{
    r3 = MemoryInline::FlatRead32((r5 + 20));
}

loc_801EC0FC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_801EC108;
    }
}

loc_801EC100:
{
    r31 = -6;
    goto loc_801EC148;
}

loc_801EC108:
{
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -24272), static_cast<uint8_t>(r0));
}

loc_801EC118:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EC148;
    }
}

loc_801EC11C:
{
    r12 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801EC124:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC148;
    }
}

loc_801EC128:
{
    r0 = (r3 + -1);
    r3 = 11;
    MemoryInline::FlatWriteRam32((r5 + 20), r0);
    r5 = 1120;
    ctr = r12;
    ctx->lr = 0x801EC140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801EC148;
}

loc_801EC144:
{
    r31 = -26;
}

loc_801EC148:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EC150:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC15C;
    }
}

loc_801EC154:
{
    MemoryInline::FlatWrite32((r3 + 780), r31);
    goto loc_801EC160;
}

loc_801EC15C:
{
    MemoryInline::FlatWrite32((r13 + -24268), r31);
}

loc_801EC160:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EC088 func_801EC088 preserves=true fpr_mask=0x00000000
