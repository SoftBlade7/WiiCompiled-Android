#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_800727D0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800727D0_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80075760(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80075760;

loc_80075760:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_80075764:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80075770;
    }
}

loc_80075768:
{
    r3 = MemoryInline::FlatRead32((r3 + 312));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80075770:
{
    if (MkwStateFreeAbiEnabled(0x800727D0u) && KnownTranslatedCpuCall<0x800727D0u>::kAvailable && !KnownTranslatedCpuCall<0x800727D0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800727D0u>()) {
        const auto state_free_result_800727D0_471 = func_800727D0_statefree_v0(r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_800727D0_471[0]);
        cr = static_cast<uint32_t>(state_free_result_800727D0_471[1]);
    } else {
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x800727D0u>(ctx);
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
// RECOMP_REGISTRATION base 0x80075760 func_80075760 preserves=true fpr_mask=0x00000000
