#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80163594_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80163594_statefree_v0(uint32_t, uint32_t);

extern "C" void func_801A0D00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A0D00;

loc_801A0D00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A0D0C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A0D70;
    }
}

loc_801A0D1C:
{
    r31 = MemoryInline::FlatRead32((r13 + -25440));
}

loc_801A0D24:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801A0D30;
    }
}

loc_801A0D28:
{
    r30 = MemoryInline::FlatRead32((r31 + 20));
    goto loc_801A0D68;
}

loc_801A0D30:
{
    r30 = 0;
    goto loc_801A0D68;
}

loc_801A0D38:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80163594u) && KnownTranslatedCpuCall<0x80163594u>::kAvailable && !KnownTranslatedCpuCall<0x80163594u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80163594u>()) {
        const auto state_free_result_80163594_6FA = func_80163594_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80163594_6FA[0]);
        r4 = static_cast<uint32_t>(state_free_result_80163594_6FA[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80163594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A0D44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0D50;
    }
}

loc_801A0D48:
{
    r3 = r31;
    ctx->lr = 0x801A0D50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801A0D50:
{
}

loc_801A0D54:
{
    r31 = r30;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801A0D64;
    }
}

loc_801A0D5C:
{
    r30 = MemoryInline::FlatRead32((r30 + 20));
    goto loc_801A0D68;
}

loc_801A0D64:
{
    r30 = 0;
}

loc_801A0D68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801A0D6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0D38;
    }
}

loc_801A0D70:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 1;
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00021FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801A0D00 func_801A0D00 preserves=true fpr_mask=0x00000000
