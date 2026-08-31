#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80725A5C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80725A5C_statefree_v0(uint32_t, uint32_t);

extern "C" void func_807234A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807234A4;

loc_807234A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 500));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807234C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80723504;
    }
}

loc_807234C4:
{
    r3 = r0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x807234D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 500));
    // inline leaf 0x80725A5C (7 guest instruction(s))
}

loc_inl0_0x80725A5C:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_inl0_0x80725A64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80725A70;
    }
}

loc_inl0_0x80725A68:
{
    r3 = 0;
    goto loc_inl0_cont_80725A5C;
}

loc_inl0_0x80725A70:
{
    r3 = MemoryInline::FlatRead8((r3 + 5));
}

loc_inl0_cont_80725A5C:
{
    // end of inlined leaf 0x80725A5C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807234E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80723504;
    }
}

loc_807234E8:
{
    r5 = MemoryInline::FlatRead32((r31 + 500));
    r0 = 1;
    r3 = (r31 + 96);
    r4 = (r31 + 196);
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r0));
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80723584;
}

loc_80723504:
{
    r3 = MemoryInline::FlatRead32((r31 + 512));
}

loc_8072350C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80723528;
    }
}

loc_80723510:
{
    // inline leaf 0x80725A5C (7 guest instruction(s))
}

loc_inl2_0x80725A5C:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_inl2_0x80725A64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80725A70;
    }
}

loc_inl2_0x80725A68:
{
    r3 = 0;
    goto loc_inl2_cont_80725A5C;
}

loc_inl2_0x80725A70:
{
    r3 = MemoryInline::FlatRead8((r3 + 5));
}

loc_inl2_cont_80725A5C:
{
    // end of inlined leaf 0x80725A5C
}

loc_80723518:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80723528;
    }
}

loc_8072351C:
{
    r3 = (r31 + 96);
    r4 = (r31 + 328);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80723528:
{
    r3 = MemoryInline::FlatRead32((r31 + 504));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80723530:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80723560;
    }
}

loc_80723534:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80723544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 504));
    // inline leaf 0x80725A5C (7 guest instruction(s))
}

loc_inl4_0x80725A5C:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_inl4_0x80725A64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80725A70;
    }
}

loc_inl4_0x80725A68:
{
    r3 = 0;
    goto loc_inl4_cont_80725A5C;
}

loc_inl4_0x80725A70:
{
    r3 = MemoryInline::FlatRead8((r3 + 5));
}

loc_inl4_cont_80725A5C:
{
    // end of inlined leaf 0x80725A5C
}

loc_80723550:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80723560;
    }
}

loc_80723554:
{
    r3 = (r31 + 96);
    r4 = (r31 + 240);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80723560:
{
    r3 = MemoryInline::FlatRead32((r31 + 516));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80723568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80723584;
    }
}

loc_8072356C:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80725A5Cu) && KnownTranslatedCpuCall<0x80725A5Cu>::kAvailable && !KnownTranslatedCpuCall<0x80725A5Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80725A5Cu>()) {
        const auto state_free_result_80725A5C_1870 = func_80725A5C_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80725A5C_1870[0]);
        r3 = static_cast<uint32_t>(state_free_result_80725A5C_1870[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80725A5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80723574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80723584;
    }
}

loc_80723578:
{
    r3 = (r31 + 96);
    r4 = (r31 + 372);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80723584:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807234A4 func_807234A4 preserves=true fpr_mask=0x00000000
