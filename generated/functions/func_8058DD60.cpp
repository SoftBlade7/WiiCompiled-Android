#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8059144C_statefree(uint32_t);

extern "C" void func_8058DD60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8058DD60;

loc_8058DD60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058DD84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058DDA8;
    }
}

loc_8058DD88:
{
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = 0;
    // inline leaf 0x805813A4 (17 guest instruction(s))
}

loc_inl1_0x805813A4:
{
    r6 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & 786432);
}

loc_inl1_0x805813B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x805813C8;
    }
}

loc_inl1_0x805813B8:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 | 262144);
    MemoryInline::FlatWrite32((r5 + 12), r0);
}

loc_inl1_0x805813C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x805813CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x805813D0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_inl1_cont_805813A4;
}

loc_inl1_return:
{
}

loc_inl1_cont_805813A4:
{
    // end of inlined leaf 0x805813A4
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8059144Cu) && KnownTranslatedCpuCall<0x8059144Cu>::kAvailable && !KnownTranslatedCpuCall<0x8059144Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8059144Cu>()) {
        const auto state_free_result_8059144C_AC6 = func_8059144C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8059144C_AC6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8059144Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead16((r3 + 96));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r3 + 96), static_cast<uint16_t>(r0));
}

loc_8058DDA8:
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
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8058DD60 func_8058DD60 preserves=true fpr_mask=0x00000000
