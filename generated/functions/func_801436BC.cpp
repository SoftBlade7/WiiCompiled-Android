#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801436BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801436BC;

loc_801436BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 2;
    r5 = (r5 + -30144);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r5 + 172);
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctr = r0;
}

loc_801436E8:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801436F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143704;
    }
}

loc_801436F4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_801436FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143704;
    }
}

loc_80143700:
{
    goto loc_80143774;
}

loc_80143704:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_80143710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143724;
    }
}

loc_80143714:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8014371C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143724;
    }
}

loc_80143720:
{
    goto loc_80143774;
}

loc_80143724:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_80143730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143744;
    }
}

loc_80143734:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8014373C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143744;
    }
}

loc_80143740:
{
    goto loc_80143774;
}

loc_80143744:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_80143750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143764;
    }
}

loc_80143754:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8014375C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143764;
    }
}

loc_80143760:
{
    goto loc_80143774;
}

loc_80143764:
{
    r5 = (r5 + 1);
    r31 = (r31 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801436E8;
    }
}

loc_80143770:
{
    r31 = 0;
}

loc_80143774:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80143778:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143880;
    }
}

loc_8014377C:
{
}

loc_80143780:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801437A4;
    }
}

loc_80143784:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014378C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801437A4;
    }
}

loc_80143790:
{
    r0 = 3;
    r4 = (r31 + 36);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    ctx->lr = 0x801437A0u;
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
    InvokeDirectCpu<0x8014A650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80143880;
}

loc_801437A4:
{
    r12 = MemoryInline::FlatRead32((r31 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801437AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801437C0;
    }
}

loc_801437B0:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r4 = 257;
    ctr = r12;
    ctx->lr = 0x801437C0u;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801437C0:
{
    r30 = MemoryInline::FlatRead16((r31 + 16));
    goto loc_801437D4;
}

loc_801437C8:
{
    r3 = (r31 + 20);
    ctx->lr = 0x801437D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012F4D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctx->lr = 0x801437D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_801437D4:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801437DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801437C8;
    }
}

loc_801437E0:
{
    r3 = 0x80340000u;
    r4 = 0;
    r3 = (r3 + -30144);
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r4));
    r4 = (r3 + 172);
    r3 = 0;
    ctr = r0;
}

loc_80143800:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80143808:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143818;
    }
}

loc_8014380C:
{
    r0 = MemoryInline::FlatRead16((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143814:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143880;
    }
}

loc_80143818:
{
    r0 = MemoryInline::FlatRead8((r4 + 96));
    r3 = (r3 + 1);
}

loc_80143824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143834;
    }
}

loc_80143828:
{
    r0 = MemoryInline::FlatRead16((r4 + 112));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143830:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143880;
    }
}

loc_80143834:
{
    r0 = MemoryInline::FlatRead8((r4 + 192));
    r3 = (r3 + 1);
}

loc_80143840:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143850;
    }
}

loc_80143844:
{
    r0 = MemoryInline::FlatRead16((r4 + 208));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_8014384C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143880;
    }
}

loc_80143850:
{
    r0 = MemoryInline::FlatRead8((r4 + 288));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014385C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014386C;
    }
}

loc_80143860:
{
    r0 = MemoryInline::FlatRead16((r4 + 304));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143868:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143880;
    }
}

loc_8014386C:
{
    r3 = (r3 + 1);
    r4 = (r4 + 384);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80143800;
    }
}

loc_80143878:
{
    r3 = r30;
    ctx->lr = 0x80143880u;
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
    InvokeDirectCpu<0x8014A1FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80143880:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801436BC func_801436BC preserves=true fpr_mask=0x00000000
