#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631588_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_80634FA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80634FA0;

loc_80634FA0:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80634FA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634FB4;
    }
}

loc_80634FAC:
{
    r3 = r0;
    if (MkwStateFreeAbiEnabled(0x80631588u) && KnownTranslatedCpuCall<0x80631588u>::kAvailable && !KnownTranslatedCpuCall<0x80631588u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631588u>()) {
        const auto state_free_result_80631588_3C2 = func_80631588_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631588_3C2[0]);
        cr = static_cast<uint32_t>(state_free_result_80631588_3C2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80631588u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634FB4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    if (MkwStateFreeAbiEnabled(0x80631588u) && KnownTranslatedCpuCall<0x80631588u>::kAvailable && !KnownTranslatedCpuCall<0x80631588u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631588u>()) {
        const auto state_free_result_80631588_715 = func_80631588_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631588_715[0]);
        cr = static_cast<uint32_t>(state_free_result_80631588_715[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80631588u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80634FA0_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80634FA0;

loc_80634FA0:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 8));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(-1));
}

loc_80634FA8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634FB4;
    }
}

loc_80634FAC:
{
    cached_r3 = cached_r0;
    
        const auto state_free_result_80631588_36C = func_80631588_statefree(cached_r3, cached_cr, cached_xer);
        cached_r3 = static_cast<uint32_t>(state_free_result_80631588_36C[0]);
        cached_cr = static_cast<uint32_t>(state_free_result_80631588_36C[1]);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634FB4:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
    
        const auto state_free_result_80631588_5FE = func_80631588_statefree(cached_r3, cached_cr, cached_xer);
        cached_r3 = static_cast<uint32_t>(state_free_result_80631588_5FE[0]);
        cached_cr = static_cast<uint32_t>(state_free_result_80631588_5FE[1]);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80634FA0 symbol=func_80634FA0_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=1

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80634FA0_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80634FA0;

loc_80634FA0:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 8));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(-1));
}

loc_80634FA8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634FB4;
    }
}

loc_80634FAC:
{
    cached_r3 = cached_r0;
    
        const auto state_free_result_80631588_36C = func_80631588_statefree(cached_r3, cached_cr, cached_xer);
        cached_r3 = static_cast<uint32_t>(state_free_result_80631588_36C[0]);
        cached_cr = static_cast<uint32_t>(state_free_result_80631588_36C[1]);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634FB4:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
    
        const auto state_free_result_80631588_5FE = func_80631588_statefree(cached_r3, cached_cr, cached_xer);
        cached_r3 = static_cast<uint32_t>(state_free_result_80631588_5FE[0]);
        cached_cr = static_cast<uint32_t>(state_free_result_80631588_5FE[1]);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80634FA0 symbol=func_80634FA0_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80634FA0 func_80634FA0 preserves=true fpr_mask=0x00000000

