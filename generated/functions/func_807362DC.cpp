#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8059068C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_8074AFE0_statefree(uint32_t, uint32_t);

extern "C" void func_807362DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807362DC;

loc_807362DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9960));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteFloat32((r3 + 536), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 520));
    MemoryInline::FlatWriteFloat32((r3 + 532), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 528), f0.d);
    MemoryInline::FlatWrite32((r3 + 516), r0);
    MemoryInline::FlatWrite32((r3 + 508), r0);
    MemoryInline::FlatWrite8((r3 + 524), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80736588u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 496));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8059068Cu) && KnownTranslatedCpuCall<0x8059068Cu>::kAvailable && !KnownTranslatedCpuCall<0x8059068Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8059068Cu>()) {
        const auto state_free_result_8059068C_7B3 = func_8059068C_statefree(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8059068C_7B3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8059068Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80736330:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80736384;
    }
}

loc_80736334:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80736344:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80736358;
    }
}

loc_80736348:
{
    r3 = r31;
    r4 = (r31 + 452);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_807363AC;
}

loc_80736358:
{
    // inline leaf 0x807396A4 (10 guest instruction(s))
}

loc_inl1_0x807396A4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl1_0x807396B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_inl1_0x807396C4;
    }
}

loc_inl1_0x807396BC:
{
}

loc_inl1_0x807396C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x807396C4:
{
    r3 = 1;
    goto loc_inl1_cont_807396A4;
}

loc_inl1_return:
{
}

loc_inl1_cont_807396A4:
{
    // end of inlined leaf 0x807396A4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80736360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80736374;
    }
}

loc_80736364:
{
    r3 = r31;
    r4 = (r31 + 8);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_807363AC;
}

loc_80736374:
{
    r3 = r31;
    r4 = (r31 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_807363AC;
}

loc_80736384:
{
    // inline leaf 0x807396A4 (10 guest instruction(s))
}

loc_inl4_0x807396A4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl4_0x807396B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_inl4_0x807396C4;
    }
}

loc_inl4_0x807396BC:
{
}

loc_inl4_0x807396C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x807396C4:
{
    r3 = 1;
    goto loc_inl4_cont_807396A4;
}

loc_inl4_return:
{
}

loc_inl4_cont_807396A4:
{
    // end of inlined leaf 0x807396A4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073638C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807363A0;
    }
}

loc_80736390:
{
    r3 = r31;
    r4 = (r31 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8074AFE0u) && KnownTranslatedCpuCall<0x8074AFE0u>::kAvailable && !KnownTranslatedCpuCall<0x8074AFE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8074AFE0u>()) {
        const auto state_free_result_8074AFE0_16E9 = func_8074AFE0_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8074AFE0_16E9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8074AFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_807363AC;
}

loc_807363A0:
{
    r3 = r31;
    r4 = (r31 + 56);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8074AFE0u) && KnownTranslatedCpuCall<0x8074AFE0u>::kAvailable && !KnownTranslatedCpuCall<0x8074AFE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8074AFE0u>()) {
        const auto state_free_result_8074AFE0_1AA2 = func_8074AFE0_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8074AFE0_1AA2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8074AFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_807363AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000002B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807362DC func_807362DC preserves=true fpr_mask=0x00000000
