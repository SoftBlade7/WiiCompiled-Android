#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80178378(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80178378;

loc_80178378:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    r9 = 0;
    r10 = 0;
    r11 = MemoryInline::FlatRead32((r4 + 8));
    r7 = 0;
    r6 = r11;
    goto loc_801783EC;
}

loc_80178398:
{
}

loc_8017839C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(34))) {
        goto loc_801783E4;
    }
}

loc_801783A0:
{
}

loc_801783A4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801783E0;
    }
}

loc_801783A8:
{
    r4 = (r9 * 24);
    r5 = (r8 + 1);
    r0 = (r7 + r3);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r9 = (r9 + 1);
    r10 = 1;
}

loc_801783C4:
{
    r5 = (r11 + r5);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 184), r5);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(7))) {
        goto loc_801783E4;
    }
}

loc_801783D4:
{
    r9 = 0;
    r7 = (r7 + 4);
    goto loc_801783E4;
}

loc_801783E0:
{
    r10 = 0;
}

loc_801783E4:
{
    r6 = (r6 + 2);
    r8 = (r8 + 1);
}

loc_801783EC:
{
    r0 = MemoryInline::FlatRead16(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801783F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80178398;
    }
}

loc_801783F8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80178378 func_80178378 preserves=true fpr_mask=0x00000000
