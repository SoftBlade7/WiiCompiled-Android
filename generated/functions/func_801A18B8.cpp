#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A18B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_801A18B8;

loc_801A18B8:
{
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r6 = (r6_rot_0 & 31);
    r3 = (r3 & 536870911);
    r6 = (r6 | r3);
    // mtspr 922 (unknown SPR) @ 0x801A18C4
    PPC_WriteSpr(922, r6);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & 12);
    r6 = (r6 | r4);
    r6 = (r6 | 2);
    // mtspr 923 (unknown SPR) @ 0x801A18D4
    PPC_WriteSpr(923, r6);
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000048 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A18B8 func_801A18B8 preserves=true fpr_mask=0x00000000
