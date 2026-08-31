#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015B77C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015B77C;

loc_8015B77C:
{
    r0 = (r4 & 7);
    r8 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_8015B788:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8015B844;
    }
}

loc_8015B78C:
{
    r4 = 0x80280000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 32384);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8015B7A4u:
        goto loc_8015B7A4;
        break;
    case 0x8015B7B0u:
        goto loc_8015B7B0;
        break;
    case 0x8015B7BCu:
        goto loc_8015B7BC;
        break;
    case 0x8015B7C8u:
        goto loc_8015B7C8;
        break;
    case 0x8015B7D4u:
        goto loc_8015B7D4;
        break;
    case 0x8015B7E0u:
        goto loc_8015B7E0;
        break;
    case 0x8015B7F0u:
        goto loc_8015B7F0;
        break;
    case 0x8015B810u:
        goto loc_8015B810;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8015B7A4:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8015B844;
}

loc_8015B7B0:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8015B844;
}

loc_8015B7BC:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8015B844;
}

loc_8015B7C8:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8015B844;
}

loc_8015B7D4:
{
    r0 = 16;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8015B844;
}

loc_8015B7E0:
{
    r0 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8015B844;
}

loc_8015B7F0:
{
    r4 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8015B844;
}

loc_8015B810:
{
    r6 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r7 = (r7_rot_1 & -16777216);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & -65536);
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (r7 + r6);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_8015B844:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015B77C func_8015B77C preserves=true fpr_mask=0x00000000
