#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BC8DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805BC8DC;

loc_805BC8DC:
{
    r4 = 0x809C0000u;
    r0 = 6;
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = 0;
    r4 = 12;
    r8 = 0;
    r7 = (r6 + 6144);
    r6 = MemoryInline::FlatRead32((r6 + 9072));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r6 = (r6_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 5996), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 5999), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 5998), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 5997), static_cast<uint8_t>(r4));
    ctr = r0;
}

loc_805BC914:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r5 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 24));
}

loc_805BC928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_805BC970;
    }
}

loc_805BC92C:
{
    r4 = MemoryInline::FlatRead8((r3 + 5999));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5999), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 24));
}

loc_805BC940:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805BC970;
    }
}

loc_805BC944:
{
    r0 = MemoryInline::FlatRead8((r3 + 5996));
    r4 = MemoryInline::FlatRead8((r3 + 5998));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BC950:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5998), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BC970;
    }
}

loc_805BC95C:
{
    r4 = MemoryInline::FlatRead8((r5 + 232));
    r0 = MemoryInline::FlatRead8((r3 + 5997));
}

loc_805BC968:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805BC970;
    }
}

loc_805BC96C:
{
    MemoryInline::FlatWrite8((r3 + 5997), static_cast<uint8_t>(r4));
}

loc_805BC970:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r5 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_805BC988:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BC9D0;
    }
}

loc_805BC98C:
{
    r4 = MemoryInline::FlatRead8((r3 + 5999));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5999), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BC9A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BC9D0;
    }
}

loc_805BC9A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 5996));
    r4 = MemoryInline::FlatRead8((r3 + 5998));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BC9B0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5998), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BC9D0;
    }
}

loc_805BC9BC:
{
    r4 = MemoryInline::FlatRead8((r5 + 232));
    r0 = MemoryInline::FlatRead8((r3 + 5997));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_805BC9C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BC9D0;
    }
}

loc_805BC9CC:
{
    MemoryInline::FlatWrite8((r3 + 5997), static_cast<uint8_t>(r4));
}

loc_805BC9D0:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805BC914;
    }
}

loc_805BC9D8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001B9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805BC8DC func_805BC8DC preserves=true fpr_mask=0x00000000
