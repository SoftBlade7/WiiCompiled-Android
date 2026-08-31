#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_8079D8BC_statefree(uint32_t);

extern "C" void func_807A6928(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_807A6928;

loc_807A6928:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8079D8BCu) && KnownTranslatedCpuCall<0x8079D8BCu>::kAvailable && !KnownTranslatedCpuCall<0x8079D8BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8079D8BCu>()) {
        const auto state_free_result_8079D8BC_3FA = func_8079D8BC_statefree(r3);
        r5 = static_cast<uint32_t>(state_free_result_8079D8BC_3FA[0]);
        r6 = static_cast<uint32_t>(state_free_result_8079D8BC_3FA[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8079D8BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
    }
    r3 = 0x808A0000u;
    r4 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 22080));
    r4 = (r4 + 7248);
    MemoryInline::FlatWrite32(r31, r4);
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 396), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 400), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 404), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A6928 func_807A6928 preserves=true fpr_mask=0x00000000
