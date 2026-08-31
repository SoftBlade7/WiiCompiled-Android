#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A7AB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_801A7AB8;

loc_801A7AB8:
{
    r7 = 0;
    r4 = 268435456;
    r4 = (r4 + 2);
    r3 = 0x90000000u;
    r3 = (r3 + 2047);
    r6 = 268435456;
    r6 = (r6 + 42);
    r5 = -805306368;
    r5 = (r5 + 4095);
    // isync @ 0x801A7ADC (no-op)
    // mtspr 568 (unknown SPR) @ 0x801A7AE0
    PPC_WriteSpr(568, r7);
    // mtspr 569 (unknown SPR) @ 0x801A7AE4
    PPC_WriteSpr(569, r4);
    // mtspr 568 (unknown SPR) @ 0x801A7AE8
    PPC_WriteSpr(568, r3);
    // isync @ 0x801A7AEC (no-op)
    // mtspr 560 (unknown SPR) @ 0x801A7AF0
    PPC_WriteSpr(560, r7);
    // mtspr 561 (unknown SPR) @ 0x801A7AF4
    PPC_WriteSpr(561, r4);
    // mtspr 560 (unknown SPR) @ 0x801A7AF8
    PPC_WriteSpr(560, r3);
    // isync @ 0x801A7AFC (no-op)
    // mtspr 570 (unknown SPR) @ 0x801A7B00
    PPC_WriteSpr(570, r7);
    // mtspr 571 (unknown SPR) @ 0x801A7B04
    PPC_WriteSpr(571, r6);
    // mtspr 570 (unknown SPR) @ 0x801A7B08
    PPC_WriteSpr(570, r5);
    // isync @ 0x801A7B0C (no-op)
    // mtspr 562 (unknown SPR) @ 0x801A7B10
    PPC_WriteSpr(562, r7);
    // mtspr 563 (unknown SPR) @ 0x801A7B14
    PPC_WriteSpr(563, r7);
    // isync @ 0x801A7B18 (no-op)
    r4 = 335544320;
    r4 = (r4 + 2);
    r3 = -1811939328;
    r3 = (r3 + 1023);
    r6 = 369098752;
    r6 = (r6 + 2);
    r5 = -1778384896;
    r5 = (r5 + 511);
    // isync @ 0x801A7B3C (no-op)
    // mtspr 572 (unknown SPR) @ 0x801A7B40
    PPC_WriteSpr(572, r7);
    // mtspr 573 (unknown SPR) @ 0x801A7B44
    PPC_WriteSpr(573, r4);
    // mtspr 572 (unknown SPR) @ 0x801A7B48
    PPC_WriteSpr(572, r3);
    // isync @ 0x801A7B4C (no-op)
    // mtspr 564 (unknown SPR) @ 0x801A7B50
    PPC_WriteSpr(564, r7);
    // mtspr 565 (unknown SPR) @ 0x801A7B54
    PPC_WriteSpr(565, r4);
    // mtspr 564 (unknown SPR) @ 0x801A7B58
    PPC_WriteSpr(564, r3);
    // isync @ 0x801A7B5C (no-op)
    // mtspr 574 (unknown SPR) @ 0x801A7B60
    PPC_WriteSpr(574, r7);
    // mtspr 575 (unknown SPR) @ 0x801A7B64
    PPC_WriteSpr(575, r6);
    // mtspr 574 (unknown SPR) @ 0x801A7B68
    PPC_WriteSpr(574, r5);
    // isync @ 0x801A7B6C (no-op)
    // mtspr 566 (unknown SPR) @ 0x801A7B70
    PPC_WriteSpr(566, r7);
    // mtspr 567 (unknown SPR) @ 0x801A7B74
    PPC_WriteSpr(567, r6);
    // mtspr 566 (unknown SPR) @ 0x801A7B78
    PPC_WriteSpr(566, r5);
    // isync @ 0x801A7B7C (no-op)
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
// RECOMP_REGISTRATION base 0x801A7AB8 func_801A7AB8 preserves=true fpr_mask=0x00000000
