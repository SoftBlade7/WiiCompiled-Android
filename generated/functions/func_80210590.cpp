#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80090FC0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80097570_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80210590(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80210590;

loc_80210590:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = (r6 + 10032);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    MemoryInline::FlatWrite32(r3, r6);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r3 + 8), r31);
    r3 = (r3 + 12);
    ctx->lr = 0x802105DCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80090FC0u) && KnownTranslatedCpuCall<0x80090FC0u>::kAvailable && !KnownTranslatedCpuCall<0x80090FC0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80090FC0u>()) {
        const auto state_free_result_80090FC0_6C4 = func_80090FC0_statefree(r1, r3, r31, 0x802105DCu);
        r1 = static_cast<uint32_t>(state_free_result_80090FC0_6C4[0]);
        r31 = static_cast<uint32_t>(state_free_result_80090FC0_6C4[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80090FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    }
    r3 = (r28 + 408);
    ctx->lr = 0x802105E4u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80097570u) && KnownTranslatedCpuCall<0x80097570u>::kAvailable && !KnownTranslatedCpuCall<0x80097570u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80097570u>()) {
        const auto state_free_result_80097570_B1F = func_80097570_statefree(r1, r3, r31, 0x802105E4u);
        r1 = static_cast<uint32_t>(state_free_result_80097570_B1F[0]);
        r31 = static_cast<uint32_t>(state_free_result_80097570_B1F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80097570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    }
    r3 = (r28 + 884);
    ctx->lr = 0x802105ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80095D80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 1220), r29);
    r3 = r28;
    MemoryInline::FlatWrite32((r28 + 1224), r30);
    MemoryInline::FlatWrite32((r28 + 1228), r31);
    MemoryInline::FlatWrite32((r28 + 1232), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003A gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80210590 func_80210590 preserves=true fpr_mask=0x00000000
