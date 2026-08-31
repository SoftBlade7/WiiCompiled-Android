#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E38FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805E38FC;

loc_805E38FC:
{
    r6 = 0x80890000u;
    r12 = 0;
    r6 = (r6 + 21176);
    r11 = 0;
    r8 = 0;
    r9 = 0;
    r0 = 5;
    goto loc_805E3958;
}

loc_805E391C:
{
    r7 = r6;
    r10 = 0;
    ctr = r0;
}

loc_805E3928:
{
    r5 = MemoryInline::FlatRead32(r7);
}

loc_805E3930:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r5))) {
        goto loc_805E3944;
    }
}

loc_805E3934:
{
    r12 = r10;
    r11 = r9;
    r8 = 1;
    goto loc_805E3950;
}

loc_805E3944:
{
    r7 = (r7 + 4);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E3928;
    }
}

loc_805E3950:
{
    r6 = (r6 + 20);
    r9 = (r9 + 1);
}

loc_805E3958:
{
}

loc_805E395C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_805E3968;
    }
}

loc_805E3960:
{
}

loc_805E3964:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(2))) {
        goto loc_805E391C;
    }
}

loc_805E3968:
{
    r5 = 0x80890000u;
    r6 = 0;
    r5 = (r5 + 21176);
    goto loc_805E39CC;
}

loc_805E3978:
{
    r0 = (r11 * 20);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r0 = (r5 + r0);
    r4 = (r4 + r0);
    goto loc_805E39A4;
}

loc_805E398C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r12 = (r12 + 1);
    MemoryInline::FlatWrite32((r3 + 252), r0);
    r3 = (r3 + 4);
    r6 = (r6 + 1);
    r4 = (r4 + 4);
}

loc_805E39A4:
{
}

loc_805E39A8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(10))) {
        goto loc_805E39B4;
    }
}

loc_805E39AC:
{
}

loc_805E39B0:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(5))) {
        goto loc_805E398C;
    }
}

loc_805E39B4:
{
    r0 = (r11 + 1);
    r12 = 0;
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r4);
    r11 = (r0 - r4);
}

loc_805E39CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(10));
}

loc_805E39D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805E3978;
    }
}

loc_805E39D4:
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E38FC func_805E38FC preserves=true fpr_mask=0x00000000
