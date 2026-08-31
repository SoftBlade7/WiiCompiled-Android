#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F39D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F39D0;

loc_801F39D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F39D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F39E0;
    }
}

loc_801F39D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F39DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F39E8;
    }
}

loc_801F39E0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801F39E8:
{
    r8 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F39F4:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(26))) {
        goto loc_801F3A00;
    }
}

loc_801F39F8:
{
}

loc_801F39FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1024))) {
        goto loc_801F3A08;
    }
}

loc_801F3A00:
{
    r3 = 1;
    goto loc_801F3A94;
}

loc_801F3A08:
{
    r5 = (r8 * 44);
    r6 = 0x80360000u;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_0 & 65535);
    r6 = (r6 + -23936);
    r5 = (r6 + r5);
    r0 = 13;
    r5 = (r5 + 1876);
    r3 = 0;
    ctr = r0;
}

loc_801F3A2C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 216));
}

loc_801F3A3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F3A4C;
    }
}

loc_801F3A40:
{
    r0 = MemoryInline::FlatRead32((r9 + 212));
}

loc_801F3A48:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F3A78;
    }
}

loc_801F3A4C:
{
    r3 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 216));
}

loc_801F3A60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F3A70;
    }
}

loc_801F3A64:
{
    r0 = MemoryInline::FlatRead32((r9 + 212));
}

loc_801F3A6C:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F3A78;
    }
}

loc_801F3A70:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F3A2C;
    }
}

loc_801F3A78:
{
    r5 = (r3 & 65535);
    r3 = 26;
    r0 = (r5 + -26);
    r3 = (r5 | ~r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
}

loc_801F3A94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F3A98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801F3A9C:
{
    r0 = (r8 * 44);
    r3 = 0x80360000u;
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 1876));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F3AB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F3AC4;
    }
}

loc_801F3AB8:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801F3ACC;
}

loc_801F3AC4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F3ACC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F39D0 func_801F39D0 preserves=true fpr_mask=0x00000000
