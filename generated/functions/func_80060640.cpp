#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80060640(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80060640;

loc_80060640:
{
    r5 = -872349696;
    r6 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r4 = -33488896;
    r0 = (r4 + -16384);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r4 = (r2 + -29560);
    r4_addr_0 = (r4 + r3);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_0 & -16384);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80060640 func_80060640 preserves=true fpr_mask=0x00000000
