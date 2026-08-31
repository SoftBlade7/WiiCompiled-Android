#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80634B80_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_80635A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80635A3C;

loc_80635A3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80635A6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80635AA8;
    }
}

loc_80635A70:
{
    r3 = r0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80634B80u) && KnownTranslatedCpuCall<0x80634B80u>::kAvailable && !KnownTranslatedCpuCall<0x80634B80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80634B80u>()) {
        const auto state_free_result_80634B80_649 = func_80634B80_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80634B80_649[0]);
        cr = static_cast<uint32_t>(state_free_result_80634B80_649[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80634B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80634B80u) && KnownTranslatedCpuCall<0x80634B80u>::kAvailable && !KnownTranslatedCpuCall<0x80634B80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80634B80u>()) {
        const auto state_free_result_80634B80_A92 = func_80634B80_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80634B80_A92[0]);
        cr = static_cast<uint32_t>(state_free_result_80634B80_A92[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80634B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r31));
}

loc_80635A88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80635A98;
    }
}

loc_80635A8C:
{
    MemoryInline::FlatWrite32((r28 + 12), r29);
    MemoryInline::FlatWrite32((r28 + 24), r30);
    goto loc_80635AA8;
}

loc_80635A98:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80634B80u) && KnownTranslatedCpuCall<0x80634B80u>::kAvailable && !KnownTranslatedCpuCall<0x80634B80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80634B80u>()) {
        const auto state_free_result_80634B80_104A = func_80634B80_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80634B80_104A[0]);
        cr = static_cast<uint32_t>(state_free_result_80634B80_104A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80634B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80634B80u) && KnownTranslatedCpuCall<0x80634B80u>::kAvailable && !KnownTranslatedCpuCall<0x80634B80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80634B80u>()) {
        const auto state_free_result_80634B80_1487 = func_80634B80_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80634B80_1487[0]);
        cr = static_cast<uint32_t>(state_free_result_80634B80_1487[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80634B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80635AA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003B gpr_write=0xF000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80635A3C func_80635A3C preserves=true fpr_mask=0x00000000
