#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D9F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8016D9F0;

loc_8016D9F0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
}

loc_8016D9F4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8016DB98;
    }
}

loc_8016D9F8:
{
    r5 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + -24416);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8016DA10u:
        goto loc_8016DA10;
        break;
    case 0x8016DA20u:
        goto loc_8016DA20;
        break;
    case 0x8016DA30u:
        goto loc_8016DA30;
        break;
    case 0x8016DA40u:
        goto loc_8016DA40;
        break;
    case 0x8016DA50u:
        goto loc_8016DA50;
        break;
    case 0x8016DA60u:
        goto loc_8016DA60;
        break;
    case 0x8016DA70u:
        goto loc_8016DA70;
        break;
    case 0x8016DA80u:
        goto loc_8016DA80;
        break;
    case 0x8016DA90u:
        goto loc_8016DA90;
        break;
    case 0x8016DAA0u:
        goto loc_8016DAA0;
        break;
    case 0x8016DAB0u:
        goto loc_8016DAB0;
        break;
    case 0x8016DAF8u:
        goto loc_8016DAF8;
        break;
    case 0x8016DB08u:
        goto loc_8016DB08;
        break;
    case 0x8016DB18u:
        goto loc_8016DB18;
        break;
    case 0x8016DB28u:
        goto loc_8016DB28;
        break;
    case 0x8016DB38u:
        goto loc_8016DB38;
        break;
    case 0x8016DB48u:
        goto loc_8016DB48;
        break;
    case 0x8016DB58u:
        goto loc_8016DB58;
        break;
    case 0x8016DB68u:
        goto loc_8016DB68;
        break;
    case 0x8016DB78u:
        goto loc_8016DB78;
        break;
    case 0x8016DB88u:
        goto loc_8016DB88;
        break;
    case 0x8016DB98u:
        goto loc_8016DB98;
        break;
    case 0x8016DAD4u:
        goto loc_8016DAD4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8016DA10:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 1);
    goto loc_8016DB9C;
}

loc_8016DA20:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 1);
    goto loc_8016DB9C;
}

loc_8016DA30:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1);
    goto loc_8016DB9C;
}

loc_8016DA40:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 1);
    goto loc_8016DB9C;
}

loc_8016DA50:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 1);
    goto loc_8016DB9C;
}

loc_8016DA60:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 1);
    goto loc_8016DB9C;
}

loc_8016DA70:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_7 & 1);
    goto loc_8016DB9C;
}

loc_8016DA80:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_8 & 1);
    goto loc_8016DB9C;
}

loc_8016DA90:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_9 & 1);
    goto loc_8016DB9C;
}

loc_8016DAA0:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_10 & 3);
    goto loc_8016DB9C;
}

loc_8016DAB0:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead8((r3 + 1316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016DABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016DACC;
    }
}

loc_8016DAC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_11 & 3);
    goto loc_8016DB9C;
}

loc_8016DACC:
{
    r0 = 0;
    goto loc_8016DB9C;
}

loc_8016DAD4:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead8((r3 + 1317));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016DAE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016DAF0;
    }
}

loc_8016DAE4:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_12 & 3);
    goto loc_8016DB9C;
}

loc_8016DAF0:
{
    r0 = 0;
    goto loc_8016DB9C;
}

loc_8016DAF8:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r0 = (r0_rot_13 & 3);
    goto loc_8016DB9C;
}

loc_8016DB08:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_14 & 3);
    goto loc_8016DB9C;
}

loc_8016DB18:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 & 3);
    goto loc_8016DB9C;
}

loc_8016DB28:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_15 & 3);
    goto loc_8016DB9C;
}

loc_8016DB38:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_16 & 3);
    goto loc_8016DB9C;
}

loc_8016DB48:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_17 & 3);
    goto loc_8016DB9C;
}

loc_8016DB58:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_18 & 3);
    goto loc_8016DB9C;
}

loc_8016DB68:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_19 & 3);
    goto loc_8016DB9C;
}

loc_8016DB78:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_20 & 3);
    goto loc_8016DB9C;
}

loc_8016DB88:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r0 = (r0_rot_21 & 3);
    goto loc_8016DB9C;
}

loc_8016DB98:
{
    r0 = 0;
}

loc_8016DB9C:
{
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016D9F0 func_8016D9F0 preserves=true fpr_mask=0x00000000
