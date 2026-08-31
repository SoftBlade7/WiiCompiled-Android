#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065AE70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8065AE70;

loc_8065AE70:
{
    r0 = 2;
    r7 = 0;
    r6 = 0x809C0000u;
    ctr = r0;
}

loc_8065AE80:
{
    r5 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_8065AE98:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_8065AEA0;
    }
}

loc_8065AE9C:
{
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_8065AEA0:
{
    r5 = MemoryInline::FlatRead32((r6 + 8408));
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_8065AEBC:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_8065AEC4;
    }
}

loc_8065AEC0:
{
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_8065AEC4:
{
    r5 = MemoryInline::FlatRead32((r6 + 8408));
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_8065AEE0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_8065AEE8;
    }
}

loc_8065AEE4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_8065AEE8:
{
    r5 = MemoryInline::FlatRead32((r6 + 8408));
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_8065AF04:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_8065AF0C;
    }
}

loc_8065AF08:
{
    MemoryInline::FlatWrite32((r3 + 20), r4);
}

loc_8065AF0C:
{
    r5 = MemoryInline::FlatRead32((r6 + 8408));
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_8065AF28:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_8065AF30;
    }
}

loc_8065AF2C:
{
    MemoryInline::FlatWrite32((r3 + 24), r4);
}

loc_8065AF30:
{
    r5 = MemoryInline::FlatRead32((r6 + 8408));
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_8065AF4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AF54;
    }
}

loc_8065AF50:
{
    MemoryInline::FlatWrite32((r3 + 28), r4);
}

loc_8065AF54:
{
    r3 = (r3 + 24);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065AE80;
    }
}

loc_8065AF60:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065AE70 func_8065AE70 preserves=true fpr_mask=0x00000000
