#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006DAC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8006DAC0;

loc_8006DAC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006DAC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006DAD0;
    }
}

loc_8006DAC8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8006DAD0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
}

loc_8006DAD4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8006DB80;
    }
}

loc_8006DAD8:
{
    r6 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r6 + 12464);
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8006DB80u:
        goto loc_8006DB80;
        break;
    case 0x8006DAF0u:
        goto loc_8006DAF0;
        break;
    case 0x8006DB00u:
        goto loc_8006DB00;
        break;
    case 0x8006DB10u:
        goto loc_8006DB10;
        break;
    case 0x8006DB20u:
        goto loc_8006DB20;
        break;
    case 0x8006DB30u:
        goto loc_8006DB30;
        break;
    case 0x8006DB40u:
        goto loc_8006DB40;
        break;
    case 0x8006DB50u:
        goto loc_8006DB50;
        break;
    case 0x8006DB60u:
        goto loc_8006DB60;
        break;
    case 0x8006DB70u:
        goto loc_8006DB70;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8006DAF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB00:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB10:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB20:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB30:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB50:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_7 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB60:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_8 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB70:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8006DB88;
}

loc_8006DB80:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8006DB88:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006DAC0 func_8006DAC0 preserves=true fpr_mask=0x00000000
