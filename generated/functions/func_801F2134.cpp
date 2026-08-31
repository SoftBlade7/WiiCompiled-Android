#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F2134(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801F2134;

loc_801F2134:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2144;
    }
}

loc_801F213C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F2140:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F214C;
    }
}

loc_801F2144:
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

loc_801F214C:
{
    r8 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F2158:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(26))) {
        goto loc_801F2164;
    }
}

loc_801F215C:
{
}

loc_801F2160:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_801F216C;
    }
}

loc_801F2164:
{
    r3 = 1;
    goto loc_801F21F8;
}

loc_801F216C:
{
    r5 = (r8 * 56);
    r6 = 0x80360000u;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_0 & 65535);
    r6 = (r6 + -23936);
    r5 = (r6 + r5);
    r0 = 13;
    r5 = (r5 + 420);
    r3 = 0;
    ctr = r0;
}

loc_801F2190:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F21A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F21B0;
    }
}

loc_801F21A4:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F21AC:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F21DC;
    }
}

loc_801F21B0:
{
    r3 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F21C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F21D4;
    }
}

loc_801F21C8:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F21D0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F21DC;
    }
}

loc_801F21D4:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F2190;
    }
}

loc_801F21DC:
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

loc_801F21F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F21FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801F2200:
{
    r0 = (r8 * 56);
    r5 = 0x80360000u;
    r3 = 0;
    r5 = (r5 + -23936);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 452));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
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
// RECOMP_REGISTRATION base 0x801F2134 func_801F2134 preserves=true fpr_mask=0x00000000
