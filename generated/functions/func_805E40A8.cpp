#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E40A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805E40A8;

loc_805E40A8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
}

loc_805E40B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805E40E8;
    }
}

loc_805E40BC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_805E40C4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(63))) {
        goto loc_805E40DC;
    }
}

loc_805E40C8:
{
}

loc_805E40CC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(67))) {
        goto loc_805E40DC;
    }
}

loc_805E40D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 296), r0);
    goto loc_805E40F0;
}

loc_805E40DC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 296), r0);
    goto loc_805E40F0;
}

loc_805E40E8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 296), r0);
}

loc_805E40F0:
{
    r0 = 2;
    r10 = r3;
    r11 = 0;
    r9 = -1;
    r8 = 0;
    r7 = 0x809C0000u;
    r6 = 65536;
    ctr = r0;
}

loc_805E4110:
{
    MemoryInline::FlatWrite32((r10 + 300), r9);
    MemoryInline::FlatWrite32((r10 + 316), r9);
    MemoryInline::FlatWrite32((r10 + 340), r8);
    r5 = MemoryInline::FlatRead32((r7 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805E4128:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805E4144;
    }
}

loc_805E412C:
{
    r4 = (r0 & 255);
    r0 = (r6 + -27664);
    r0 = (r0 * r4);
    r4 = (r5 + r0);
    r4 = (r4 + 56);
    goto loc_805E4148;
}

loc_805E4144:
{
    r4 = 0;
}

loc_805E4148:
{
}

loc_805E414C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805E415C;
    }
}

loc_805E4150:
{
    r4 = (r4 + 65536);
    r5 = MemoryInline::FlatRead32((r4 + -28380));
    goto loc_805E4160;
}

loc_805E415C:
{
    r5 = 2;
}

loc_805E4160:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r11 & 1);
    r0 = (r0 ^ r4);
    MemoryInline::FlatWrite32((r10 + 356), r5);
    r4 = (r0 - r4);
    r11 = (r11 + 1);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite32((r10 + 372), r0);
    MemoryInline::FlatWrite32((r10 + 304), r9);
    MemoryInline::FlatWrite32((r10 + 320), r9);
    MemoryInline::FlatWrite32((r10 + 344), r8);
    r5 = MemoryInline::FlatRead32((r7 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805E41A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805E41BC;
    }
}

loc_805E41A4:
{
    r4 = (r0 & 255);
    r0 = (r6 + -27664);
    r0 = (r0 * r4);
    r4 = (r5 + r0);
    r4 = (r4 + 56);
    goto loc_805E41C0;
}

loc_805E41BC:
{
    r4 = 0;
}

loc_805E41C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805E41C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E41D4;
    }
}

loc_805E41C8:
{
    r4 = (r4 + 65536);
    r5 = MemoryInline::FlatRead32((r4 + -28380));
    goto loc_805E41D8;
}

loc_805E41D4:
{
    r5 = 2;
}

loc_805E41D8:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (r11 & 1);
    r0 = (r0 ^ r4);
    MemoryInline::FlatWrite32((r10 + 360), r5);
    r4 = (r0 - r4);
    r11 = (r11 + 1);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    MemoryInline::FlatWrite32((r10 + 376), r0);
    r10 = (r10 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E4110;
    }
}

loc_805E4208:
{
    r5 = 0;
    r4 = 8;
    r0 = 33;
    MemoryInline::FlatWrite32((r3 + 300), r5);
    MemoryInline::FlatWrite32((r3 + 332), r4);
    MemoryInline::FlatWrite32((r3 + 336), r0);
    MemoryInline::FlatWrite32((r3 + 960), r5);
    MemoryInline::FlatWrite32((r3 + 956), r4);
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E40A8 func_805E40A8 preserves=true fpr_mask=0x00000000
