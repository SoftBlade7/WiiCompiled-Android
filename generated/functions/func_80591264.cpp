#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80591264(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_80591264;

loc_80591264:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 1;
    r6 = 1;
    r7 = 1;
    r10 = MemoryInline::FlatRead32((r4 + 4));
    r8 = 1;
    r9 = 1;
    r11 = MemoryInline::FlatRead32((r10 + 8));
    r0 = (r11 & 258);
}

loc_80591288:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805912A4;
    }
}

loc_8059128C:
{
    r4 = 34340864;
    r5 = MemoryInline::FlatRead32((r10 + 12));
    r0 = (r4 + 24576);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805912A4;
    }
}

loc_805912A0:
{
    r9 = 0;
}

loc_805912A4:
{
}

loc_805912A8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_805912BC;
    }
}

loc_805912AC:
{
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r0 = (r0 & 16);
}

loc_805912B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805912BC;
    }
}

loc_805912B8:
{
    r8 = 0;
}

loc_805912BC:
{
}

loc_805912C0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_805912D4;
    }
}

loc_805912C4:
{
    r0 = MemoryInline::FlatRead32((r10 + 20));
    r0 = (r0 & 128);
}

loc_805912CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805912D4;
    }
}

loc_805912D0:
{
    r7 = 0;
}

loc_805912D4:
{
}

loc_805912D8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805912F0;
    }
}

loc_805912DC:
{
    r4 = 0x80000000u;
    r0 = (r4 + 25);
    r0 = (r11 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805912F0;
    }
}

loc_805912EC:
{
    r6 = 0;
}

loc_805912F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805912F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805912F8:
{
    r4 = 167837696;
    r5 = MemoryInline::FlatRead32((r10 + 12));
    r0 = (r4 + -32768);
    r0 = (r5 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8059130C:
{
    r3 = 0;
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80591264 func_80591264 preserves=true fpr_mask=0x00000000
