#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A1768(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_addr_dcbz_0 = 0;
    uint32_t r3_addr_dcbz_1 = 0;
    uint32_t r3_addr_dcbz_2 = 0;
    uint32_t r3_addr_dcbz_al_0 = 0;
    uint32_t r3_addr_dcbz_al_1 = 0;
    uint32_t r3_addr_dcbz_al_2 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_801A1768;

loc_801A1768:
{
    r5 = ctx->msr;
    r5 = (r5 | 4096);
    ctx->msr = r5;
    r3 = 0x80000000u;
    r4 = 1024;
    ctr = r4;
}

loc_801A1780:
{
    // dcbt @ 0x801A1780 (no-op)
    // dcbst @ 0x801A1784 (no-op)
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A1780;
    }
}

loc_801A1790:
{
    r4 = ctx->hid2;
    r4 = (r4 | 269418496);
    ctx->hid2 = r4;
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    r3 = -536870912;
    r3 = (r3 | 2);
    // mtspr 543 (unknown SPR) @ 0x801A17D4
    PPC_WriteSpr(543, r3);
    r3 = (r3 | 510);
    // mtspr 542 (unknown SPR) @ 0x801A17DC
    PPC_WriteSpr(542, r3);
    // isync @ 0x801A17E0 (no-op)
    r3 = -536870912;
    r6 = 512;
    ctr = r6;
    r6 = 0;
}

loc_801A17F4:
{
    r3_addr_dcbz_2 = (r6 + r3);
    r3_addr_dcbz_al_2 = (r3_addr_dcbz_2 & -32);
    memset_zero_32(r3_addr_dcbz_al_2);
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A17F4;
    }
}

loc_801A1800:
{
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000040 gpr_write=0x00000078 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A1768 func_801A1768 preserves=true fpr_mask=0x00000000
