#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807396CC_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_8074AFE0_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807396CC_statefree_v0(uint32_t);

extern "C" void func_80732C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80732C70;

loc_80732C70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 344));
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80732CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 355));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80732CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80732D68;
    }
}

loc_80732CAC:
{
    r3 = MemoryInline::FlatRead32((r29 + 324));
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x80732CC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = 0;
    // inline leaf 0x80739684 (8 guest instruction(s))
}

loc_inl0_0x80739684:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl0_0x80739698:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8073969C:
{
    r3 = 1;
    goto loc_inl0_cont_80739684;
}

loc_inl0_return:
{
}

loc_inl0_cont_80739684:
{
    // end of inlined leaf 0x80739684
}

loc_80732CCC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80732CDC;
    }
}

loc_80732CD0:
{
    // inline leaf 0x807396EC (10 guest instruction(s))
}

loc_inl1_0x807396EC:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl1_0x80739700:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80739704:
{
}

loc_inl1_0x80739708:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8073970C:
{
    r3 = 1;
    goto loc_inl1_cont_807396EC;
}

loc_inl1_return:
{
}

loc_inl1_cont_807396EC:
{
    // end of inlined leaf 0x807396EC
}

loc_80732CD8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80732CE0;
    }
}

loc_80732CDC:
{
    r31 = 1;
}

loc_80732CE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80732CE4:
{
    r31 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80732D1C;
    }
}

loc_80732CEC:
{
    r3 = MemoryInline::FlatRead32((r29 + 320));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 64);
}

loc_80732D14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80732D1C;
    }
}

loc_80732D18:
{
    r31 = 1;
}

loc_80732D1C:
{
    r30 = 1;
    // inline leaf 0x80739714 (11 guest instruction(s))
}

loc_inl3_0x80739714:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2928));
    r0 = (r4 + -9);
}

loc_inl3_0x8073972C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl3_0x80739738;
    }
}

loc_inl3_0x80739730:
{
}

loc_inl3_0x80739734:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80739738:
{
    r3 = 1;
    goto loc_inl3_cont_80739714;
}

loc_inl3_return:
{
}

loc_inl3_cont_80739714:
{
    // end of inlined leaf 0x80739714
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80732D28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80732D3C;
    }
}

loc_80732D2C:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807396CCu) && KnownTranslatedCpuCall<0x807396CCu>::kAvailable && !KnownTranslatedCpuCall<0x807396CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807396CCu>()) {
        const auto state_free_result_807396CC_1AE3 = func_807396CC_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807396CC_1AE3[0]);
        r3 = static_cast<uint32_t>(state_free_result_807396CC_1AE3[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x807396CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80732D34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80732D3C;
    }
}

loc_80732D38:
{
    r30 = 0;
}

loc_80732D3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80732D40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80732D4C;
    }
}

loc_80732D44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80732D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80732D5C;
    }
}

loc_80732D4C:
{
    r3 = r29;
    r4 = (r29 + 276);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8074AFE0u) && KnownTranslatedCpuCall<0x8074AFE0u>::kAvailable && !KnownTranslatedCpuCall<0x8074AFE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8074AFE0u>()) {
        const auto state_free_result_8074AFE0_21B2 = func_8074AFE0_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8074AFE0_21B2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8074AFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80732D68;
}

loc_80732D5C:
{
    r3 = r29;
    r4 = (r29 + 232);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8074AFE0u) && KnownTranslatedCpuCall<0x8074AFE0u>::kAvailable && !KnownTranslatedCpuCall<0x8074AFE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8074AFE0u>()) {
        const auto state_free_result_8074AFE0_2616 = func_8074AFE0_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8074AFE0_2616);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8074AFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80732D68:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80732C70 func_80732C70 preserves=true fpr_mask=0x00000000
