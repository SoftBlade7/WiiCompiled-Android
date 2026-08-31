#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EF830(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800EF830;

loc_800EF830:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r12 = MemoryInline::FlatRead32((r3 + 16));
}

loc_800EF854:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_800EF88C;
    }
}

loc_800EF858:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800EF85C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EF86C;
    }
}

loc_800EF860:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_800EF868:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EF874;
    }
}

loc_800EF86C:
{
    r3 = 0;
    goto loc_800EF884;
}

loc_800EF874:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_800EF884:
{
    ctr = r12;
    ctx->lr = 0x800EF88Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800EF88C:
{
    r4 = MemoryInline::FlatRead32(r31);
    r6 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r6));
}

loc_800EF898:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EF8FC;
    }
}

loc_800EF89C:
{
}

loc_800EF8A0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_800EF8AC;
    }
}

loc_800EF8A4:
{
}

loc_800EF8A8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r4))) {
        goto loc_800EF8B4;
    }
}

loc_800EF8AC:
{
    r3 = 0;
    goto loc_800EF8C4;
}

loc_800EF8B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r0 * r30);
    r3 = (r3 + r0);
}

loc_800EF8C4:
{
    r5 = (r30 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800EF8C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EF8D4;
    }
}

loc_800EF8CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r4));
}

loc_800EF8D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EF8DC;
    }
}

loc_800EF8D4:
{
    r4 = 0;
    goto loc_800EF8EC;
}

loc_800EF8DC:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r0 * r5);
    r4 = (r4 + r0);
}

loc_800EF8EC:
{
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r6 - r30);
    r5 = (r5 * r0);
    ctx->lr = 0x800EF8FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800EF8FC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r31, r0);
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
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800EF830 func_800EF830 preserves=true fpr_mask=0x00000000
