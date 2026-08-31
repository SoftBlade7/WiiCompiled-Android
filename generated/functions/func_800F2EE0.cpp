#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F2EE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F2EE0;

loc_800F2EE0:
{
    r7 = (r4 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800F2EE8:
{
    r5 = MemoryInline::FlatRead32((r13 + -31600));
    r4 = 0x80000000u;
    r0 = (r4 + -1);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r4 = (r4_rot_0 & 65535);
    r5 = (r5 & 65535);
    r6 = (r4 * 16807);
    r5 = (r5 * 16807);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r4 = (r4_rot_1 & 2147418112);
    r5 = (r5 + r4);
}

loc_800F2F10:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_800F2F1C;
    }
}

loc_800F2F14:
{
    r5 = (r5 & 2147483647);
    r5 = (r5 + 1);
}

loc_800F2F1C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r0 = (r0_rot_0 & 131071);
    r4 = 0x80000000u;
    r5 = (r5 + r0);
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800F2F30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F2F3C;
    }
}

loc_800F2F34:
{
    r5 = (r5 & 2147483647);
    r5 = (r5 + 1);
}

loc_800F2F3C:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    MemoryInline::FlatWrite32((r13 + -31600), r5);
    r0 = (r0 * r7);
    r0 = (r5 - r0);
    r3 = (r0 + r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020F8 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F2EE0 func_800F2EE0 preserves=true fpr_mask=0x00000000
