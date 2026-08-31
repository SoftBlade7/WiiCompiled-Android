#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80072770_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80072770_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80075740(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80075740;

loc_80075740:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_80075744:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80075750;
    }
}

loc_80075748:
{
    r3 = MemoryInline::FlatRead32((r3 + 312));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80075750:
{
    if (MkwStateFreeAbiEnabled(0x80072770u) && KnownTranslatedCpuCall<0x80072770u>::kAvailable && !KnownTranslatedCpuCall<0x80072770u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80072770u>()) {
        const auto state_free_result_80072770_471 = func_80072770_statefree_v0(r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80072770_471[0]);
        cr = static_cast<uint32_t>(state_free_result_80072770_471[1]);
    } else {
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80072770u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80075740 func_80075740 preserves=true fpr_mask=0x00000000
