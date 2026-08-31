#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A7C44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r7 = ctx->gpr[7];

    goto loc_801A7C44;

loc_801A7C44:
{
    r7 = 0;
    r4 = 0;
    r4 = (r4 + 2);
    r3 = 0x80000000u;
    r3 = (r3 + 4095);
    // isync @ 0x801A7C58 (no-op)
    // mtspr 536 (unknown SPR) @ 0x801A7C5C
    PPC_WriteSpr(536, r7);
    // mtspr 537 (unknown SPR) @ 0x801A7C60
    PPC_WriteSpr(537, r4);
    // mtspr 536 (unknown SPR) @ 0x801A7C64
    PPC_WriteSpr(536, r3);
    // isync @ 0x801A7C68 (no-op)
    // mtspr 528 (unknown SPR) @ 0x801A7C6C
    PPC_WriteSpr(528, r7);
    // mtspr 529 (unknown SPR) @ 0x801A7C70
    PPC_WriteSpr(529, r4);
    // mtspr 528 (unknown SPR) @ 0x801A7C74
    PPC_WriteSpr(528, r3);
    // isync @ 0x801A7C78 (no-op)
    r3 = ctx->msr;
    r3 = (r3 | 48);
    ctx->srr1 = r3;
    r3 = ctx->lr;
    ctx->srr0 = r3;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000098 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A7C44 func_801A7C44 preserves=true fpr_mask=0x00000000
