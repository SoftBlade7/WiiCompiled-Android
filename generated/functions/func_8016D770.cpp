#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8016D770;

loc_8016D770:
{
    r6 = MemoryInline::FlatRead32((r5 + 24));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r6_mrot_0 = (r6_rot_0 & 192);
    r6_mdest_0 = (r6 & -193);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWrite32((r5 + 24), r6);
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8016D7BCu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFDBF gpr_write=0x00000249 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8016D770 func_8016D770 preserves=true fpr_mask=0x00000000
