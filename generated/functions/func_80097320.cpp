#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80097320(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80097320;

loc_80097320:
{
    r4_addr_0 = (r4 + r3);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
    r6 = (r4 + r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(254));
}

loc_8009732C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80097340;
    }
}

loc_80097330:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r5, r0);
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80097340:
{
    r7 = MemoryInline::FlatRead8((r6 + 1));
    r3 = (r4 + 3);
    r0 = MemoryInline::FlatRead8((r6 + 2));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_0 & -256);
    r7 = (r7 | r0);
    MemoryInline::FlatWrite32(r5, r7);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80097320 func_80097320 preserves=true fpr_mask=0x00000000
