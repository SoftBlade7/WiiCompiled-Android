#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631734_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_80635CDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80635CDC;

loc_80635CDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    if (MkwStateFreeAbiEnabled(0x80631734u) && KnownTranslatedCpuCall<0x80631734u>::kAvailable && !KnownTranslatedCpuCall<0x80631734u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631734u>()) {
        const auto state_free_result_80631734_2AF = func_80631734_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631734_2AF[0]);
        cr = static_cast<uint32_t>(state_free_result_80631734_2AF[1]);
    } else {
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80631734u>(ctx);
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80635CDC_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer, uint32_t native_lr)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    goto loc_80635CDC;

loc_80635CDC:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    
        const auto state_free_result_80631734_265 = func_80631734_statefree(cached_r3, cached_cr, cached_xer);
        cached_r3 = static_cast<uint32_t>(state_free_result_80631734_265[0]);
        cached_cr = static_cast<uint32_t>(state_free_result_80631734_265[1]);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80635CDC symbol=func_80635CDC_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80635CDC func_80635CDC preserves=true fpr_mask=0x00000000

