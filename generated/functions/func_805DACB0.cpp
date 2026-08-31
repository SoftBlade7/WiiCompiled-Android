#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DACB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805DACB0;

loc_805DACB0:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + -416), r1);
    r1 = (r1 + -416);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_0 & 255);
}

loc_805DACC0:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(1))) {
        goto loc_805DACE0;
    }
}

loc_805DACC4:
{
}

loc_805DACC8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(2))) {
        goto loc_805DAD20;
    }
}

loc_805DACCC:
{
}

loc_805DACD0:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(3))) {
        goto loc_805DAD3C;
    }
}

loc_805DACD4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
}

loc_805DACD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAD4C;
    }
}

loc_805DACDC:
{
    goto loc_805DAD98;
}

loc_805DACE0:
{
    r6 = 0x80890000u;
    r6 = (r6 + 18728);
    r5 = MemoryInline::FlatRead32(r6);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r7 = (r7_rot_1 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
}

loc_805DACF8:
{
    r3 = MemoryInline::FlatRead32((r6 + 8));
    r0 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805DAD98;
    }
}

loc_805DAD10:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r1 + 8);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_805DAD9C;
}

loc_805DAD20:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DAD24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAD98;
    }
}

loc_805DAD28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805DAD2C:
{
    r3 = 4151;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAD9C;
    }
}

loc_805DAD34:
{
    r3 = 4154;
    goto loc_805DAD9C;
}

loc_805DAD3C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DAD40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAD98;
    }
}

loc_805DAD44:
{
    r3 = 4499;
    goto loc_805DAD9C;
}

loc_805DAD4C:
{
    r4 = 0x80890000u;
    r0 = 48;
    r4 = (r4 + 18744);
    r6 = (r1 + 20);
    r5 = (r4 + -4);
    ctr = r0;
}

loc_805DAD64:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r5 + 8);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805DAD64;
    }
}

loc_805DAD78:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(96));
}

loc_805DAD84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805DAD98;
    }
}

loc_805DAD88:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r1 + 24);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_805DAD9C;
}

loc_805DAD98:
{
    r3 = 0;
}

loc_805DAD9C:
{
    r1 = (r1 + 416);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805DACB0 func_805DACB0 preserves=true fpr_mask=0x00000000
