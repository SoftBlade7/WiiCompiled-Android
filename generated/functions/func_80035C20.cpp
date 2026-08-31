#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80035C20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80035C20;

loc_80035C20:
{
    r0 = MemoryInline::FlatRead32(r3);
    r9 = 0;
    r7 = (r3 + r0);
    r8 = (r7 + 8);
    goto loc_80035C9C;
}

loc_80035C34:
{
    r3 = MemoryInline::FlatRead8(r8);
    r9 = (r9 + 1);
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = (r3 + r0);
    r10 = r8;
    r8 = (r8 + r0);
    r4 = MemoryInline::FlatRead8((r8 + 2));
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r3 = MemoryInline::FlatRead8(r8);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r5 = (r5_rot_2 & -256);
    r6 = MemoryInline::FlatRead8((r8 + 3));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r4 = (r4_rot_2 & -16777216);
    r8 = (r8 + 8);
    r3 = (r6 + r5);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    r4 = (r7 + r0);
    r7_addr_2 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_2, r10);
    r3 = (r4 + 32);
    MemoryInline::FlatWrite32((r4 + 24), r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 28), r0);
}

loc_80035C9C:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r0));
}

loc_80035CA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80035C34;
    }
}

loc_80035CA8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F8 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80035C20 func_80035C20 preserves=true fpr_mask=0x00000000
