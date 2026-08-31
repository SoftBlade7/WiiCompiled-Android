#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80170B6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_addr_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80170B6C;

loc_80170B6C:
{
    r0 = (r5 + -1);
    r6 = MemoryInline::FlatRead32(r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5 = (r13 + -29312);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r6_mrot_0 = (r6_rot_0 & 16);
    r6_mdest_0 = (r6 & -17);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWrite32(r3, r6);
    r5_addr_0 = (r5 + r4);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r6_mrot_1 = (r6_rot_1 & 224);
    r6_mdest_1 = (r6 & -225);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::FlatWrite32(r3, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80170B6C func_80170B6C preserves=true fpr_mask=0x00000000
