#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_8004EA50_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8004EA50_statefree_v0(uint32_t, uint32_t);

extern "C" void func_8055D03C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8055D03C;

loc_8055D03C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r3 = r29;
    // inline leaf 0x8004EB50 (13 guest instruction(s))
}

loc_inl0_0x8004EB50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl0_0x8004EB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EB68;
    }
}

loc_inl0_0x8004EB60:
{
    r3 = (r3 + r0);
    goto loc_inl0_0x8004EB6C;
}

loc_inl0_0x8004EB68:
{
    r3 = 0;
}

loc_inl0_0x8004EB6C:
{
}

loc_inl0_0x8004EB70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EB7C;
    }
}

loc_inl0_0x8004EB74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_8004EB50;
}

loc_inl0_0x8004EB7C:
{
    r3 = 0;
}

loc_inl0_cont_8004EB50:
{
    // end of inlined leaf 0x8004EB50
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8055D074:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8055D08C;
    }
}

loc_8055D078:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004EA50u) && KnownTranslatedCpuCall<0x8004EA50u>::kAvailable && !KnownTranslatedCpuCall<0x8004EA50u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004EA50u>()) {
        const auto state_free_result_8004EA50_9E6 = func_8004EA50_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8004EA50_9E6[0]);
        r3 = static_cast<uint32_t>(state_free_result_8004EA50_9E6[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004EA50u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8055D084:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8055D08C;
    }
}

loc_8055D088:
{
    r31 = 1;
}

loc_8055D08C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8055D090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D0D0;
    }
}

loc_8055D094:
{
    r3 = (r28 + 12);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E990u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    // inline leaf 0x800521C0 (8 guest instruction(s))
}

loc_inl1_0x800521C0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x800521CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x800521D8;
    }
}

loc_inl1_0x800521D0:
{
    r3 = (r3 + r0);
    goto loc_inl1_cont_800521C0;
}

loc_inl1_0x800521D8:
{
    r3 = 0;
}

loc_inl1_cont_800521C0:
{
    // end of inlined leaf 0x800521C0
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800501B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8055D0C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8055D0D0;
    }
}

loc_8055D0CC:
{
    r30 = 1;
}

loc_8055D0D0:
{
    r3 = r30;
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
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055D03C func_8055D03C preserves=true fpr_mask=0x00000000
