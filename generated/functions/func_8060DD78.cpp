#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80623054_statefree(uint32_t);

extern "C" void func_8060DD78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8060DD78;

loc_8060DD78:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    if (MkwStateFreeAbiEnabled(0x80623054u) && KnownTranslatedCpuCall<0x80623054u>::kAvailable && !KnownTranslatedCpuCall<0x80623054u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80623054u>()) {
        const auto state_free_result_80623054_2C2 = func_80623054_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_80623054_2C2[0]);
        r3 = static_cast<uint32_t>(state_free_result_80623054_2C2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80623054u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8060DD78 func_8060DD78 preserves=true fpr_mask=0x00000000
