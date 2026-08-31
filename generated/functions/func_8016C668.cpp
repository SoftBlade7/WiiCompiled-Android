#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016C668(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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

    goto loc_8016C668;

loc_8016C668:
{
    MemoryInline::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    MemoryInline::FlatWriteRam32((r1 + 732), r31);
    r31 = MemoryInline::FlatRead32((r2 + -26840));
    MemoryInline::FlatWriteRam32((r1 + 728), r30);
    r30 = r4;
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_0 & 1);
}

loc_8016C698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016C6E8;
    }
}

loc_8016C69C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016C6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016C6E8;
    }
}

loc_8016C6A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -25660));
    ctx->lr = 0x8016C6B0u;
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
    InvokeDirectCpu<0x801AA58Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    MemoryInline::FlatWrite32((r13 + -25664), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r0 | 4);
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
}

loc_8016C6E8:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1);
}

loc_8016C6F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016C750;
    }
}

loc_8016C6F4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016C6FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016C750;
    }
}

loc_8016C700:
{
    r3 = MemoryInline::FlatRead32((r13 + -25676));
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -25676), r3);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r3 & -5);
    r4 = (r4 | 8);
    MemoryInline::FlatWrite32((r31 + 8), r4);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r5 + 16));
    r3 = (r3 | 1);
    r4 = (r3 & -3);
    MemoryInline::FlatWrite32((r5 + 16), r4);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -25664), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25660));
    ctx->lr = 0x8016C750u;
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
    InvokeDirectCpu<0x801AA824u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
}

loc_8016C750:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016C758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016C7B0;
    }
}

loc_8016C75C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016C764:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016C7B0;
    }
}

loc_8016C768:
{
    r0 = (r3 & -33);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -25668));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016C780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016C7B0;
    }
}

loc_8016C784:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r12 = MemoryInline::FlatRead32((r13 + -25668));
    ctr = r12;
    ctx->lr = 0x8016C7A0u;
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
    r2 = ctx->gpr[2];
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
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A1E70u>(ctx);
}

loc_8016C7B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 740));
    r31 = MemoryInline::FlatRead32((r1 + 732));
    r30 = MemoryInline::FlatRead32((r1 + 728));
    ctx->lr = r0;
    r1 = (r1 + 736);
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
// RECOMP_REGISTRATION base 0x8016C668 func_8016C668 preserves=true fpr_mask=0x00000000
