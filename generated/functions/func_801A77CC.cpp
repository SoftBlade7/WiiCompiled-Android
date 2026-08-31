#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A77CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_801A77CC;

loc_801A77CC:
{
    r7 = 0;
    r4 = 0;
    r4 = (r4 + 2);
    r3 = 0x80000000u;
    r3 = (r3 + 1023);
    r6 = 33554432;
    r6 = (r6 + 2);
    r5 = 0x82000000u;
    r5 = (r5 + 511);
    // isync @ 0x801A77F0 (no-op)
    // mtspr 536 (unknown SPR) @ 0x801A77F4
    PPC_WriteSpr(536, r7);
    // mtspr 537 (unknown SPR) @ 0x801A77F8
    PPC_WriteSpr(537, r4);
    // mtspr 536 (unknown SPR) @ 0x801A77FC
    PPC_WriteSpr(536, r3);
    // isync @ 0x801A7800 (no-op)
    // mtspr 528 (unknown SPR) @ 0x801A7804
    PPC_WriteSpr(528, r7);
    // mtspr 529 (unknown SPR) @ 0x801A7808
    PPC_WriteSpr(529, r4);
    // mtspr 528 (unknown SPR) @ 0x801A780C
    PPC_WriteSpr(528, r3);
    // isync @ 0x801A7810 (no-op)
    // mtspr 540 (unknown SPR) @ 0x801A7814
    PPC_WriteSpr(540, r7);
    // mtspr 541 (unknown SPR) @ 0x801A7818
    PPC_WriteSpr(541, r6);
    // mtspr 540 (unknown SPR) @ 0x801A781C
    PPC_WriteSpr(540, r5);
    // isync @ 0x801A7820 (no-op)
    // mtspr 532 (unknown SPR) @ 0x801A7824
    PPC_WriteSpr(532, r7);
    // mtspr 533 (unknown SPR) @ 0x801A7828
    PPC_WriteSpr(533, r6);
    // mtspr 532 (unknown SPR) @ 0x801A782C
    PPC_WriteSpr(532, r5);
    // isync @ 0x801A7830 (no-op)
    r3 = ctx->msr;
    r3 = (r3 | 48);
    ctx->srr1 = r3;
    r3 = ctx->lr;
    ctx->srr0 = r3;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000000F8 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A77CC func_801A77CC preserves=true fpr_mask=0x00000000
