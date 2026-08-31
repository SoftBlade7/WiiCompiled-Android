#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80726BE8_statefree(uint32_t);
extern "C" uint64_t func_80744C24_statefree(uint32_t);

extern "C" void func_8072A2A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8072A2A8;

loc_8072A2A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 60));
    ctx->lr = 0x8072A2C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8073BB50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r3 = MemoryInline::FlatRead32((r31 + 64));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80744C24u) && KnownTranslatedCpuCall<0x80744C24u>::kAvailable && !KnownTranslatedCpuCall<0x80744C24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80744C24u>()) {
        const auto state_free_result_80744C24_5AE = func_80744C24_statefree(r3);
        r5 = static_cast<uint32_t>(state_free_result_80744C24_5AE);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80744C24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
    }
    r3 = MemoryInline::FlatRead32((r31 + 72));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80726BE8u) && KnownTranslatedCpuCall<0x80726BE8u>::kAvailable && !KnownTranslatedCpuCall<0x80726BE8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80726BE8u>()) {
        const auto state_free_result_80726BE8_8F6 = func_80726BE8_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80726BE8_8F6[0]);
        r4 = static_cast<uint32_t>(state_free_result_80726BE8_8F6[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80726BE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072A2A8 func_8072A2A8 preserves=true fpr_mask=0x00000000
