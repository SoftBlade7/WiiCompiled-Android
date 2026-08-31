#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_8021C2E0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80220A44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80220A44;

loc_80220A44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x80220A5Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8021C2E0u) && KnownTranslatedCpuCall<0x8021C2E0u>::kAvailable && !KnownTranslatedCpuCall<0x8021C2E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8021C2E0u>()) {
        const auto state_free_result_8021C2E0_42A = func_8021C2E0_statefree(r1, r3, r31, 0x80220A5Cu);
        r1 = static_cast<uint32_t>(state_free_result_8021C2E0_42A[0]);
        r31 = static_cast<uint32_t>(state_free_result_8021C2E0_42A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021C2E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x802A0000u;
    r0 = 0;
    r3 = (r3 + 11536);
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r4 = (r3 + 12);
    MemoryInline::FlatWrite32((r31 + 16), r4);
    r3 = 80;
    MemoryInline::FlatWrite32((r31 + 20), r0);
    ctx->lr = 0x80220A80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80220A84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80220A8C;
    }
}

loc_80220A88:
{
    ctx->lr = 0x80220A8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80236C18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
}

loc_80220A8C:
{
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80220A44 func_80220A44 preserves=true fpr_mask=0x00000000
