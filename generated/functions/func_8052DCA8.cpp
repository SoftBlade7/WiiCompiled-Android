#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052DCA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052DCA8;

loc_8052DCA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0x809C0000u;
    r0 = 0;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = (r1 + 8);
    r7 = MemoryInline::FlatRead32((r4 + -10456));
    goto loc_8052DCF0;
}

loc_8052DCC8:
{
    r0 = (r8 & 255);
    r8 = (r8 + 1);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r6 = MemoryInline::FlatRead32((r4 + 212));
    r0 = MemoryInline::FlatRead16((r4 + 224));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r5_addr_2 = (r5 + r6);
    r4 = MemoryInline::FlatRead16(r5_addr_2);
    r0 = (r4 + r0);
    r5_addr_3 = (r5 + r6);
    MemoryInline::FlatWrite16(r5_addr_3, static_cast<uint16_t>(r0));
}

loc_8052DCF0:
{
    r0 = MemoryInline::FlatRead8((r7 + 36));
    r4 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8052DCFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052DCC8;
    }
}

loc_8052DD00:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000016A gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052DCA8 func_8052DCA8 preserves=true fpr_mask=0x00000000
