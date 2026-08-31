#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056CDC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056CDC4;

loc_8056CDC4:
{
    r7 = 0;
    goto loc_8056CDF0;
}

loc_8056CDCC:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r5 = (r5_rot_2 & 127);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r6 = (r5 * 24);
    r5 = MemoryInline::FlatRead32((r3 + 568));
    r7 = (r7 + 1);
    r5_addr_2 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_2);
    r6 = (r4 + r6);
    r0 = (r6 + 72);
    MemoryInline::FlatWrite32((r5 + 144), r0);
}

loc_8056CDF0:
{
    r0 = MemoryInline::FlatRead16((r3 + 572));
    r5 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8056CDFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8056CDCC;
    }
}

loc_8056CE00:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056CDC4 func_8056CDC4 preserves=true fpr_mask=0x00000000
