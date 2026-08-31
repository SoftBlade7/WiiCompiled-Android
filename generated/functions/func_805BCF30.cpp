#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BCF30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805BCF30;

loc_805BCF30:
{
    r5 = 0x809C0000u;
    r7 = r3;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_805BCF44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BCF54;
    }
}

loc_805BCF48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 88), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BCF54:
{
    r6 = 0x809C0000u;
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 11336));
    MemoryInline::FlatWrite32((r3 + 88), r0);
    r5 = MemoryInline::FlatRead32((r5 + 7736));
    r5 = MemoryInline::FlatRead32(r5);
    r5 = MemoryInline::FlatRead32(r5);
}

loc_805BCF74:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(55))) {
        goto loc_805BCF80;
    }
}

loc_805BCF78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(56));
}

loc_805BCF7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805BD030;
    }
}

loc_805BCF80:
{
}

loc_805BCF84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(53))) {
        goto loc_805BCF94;
    }
}

loc_805BCF88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(54));
}

loc_805BCF8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BD014;
    }
}

loc_805BCF90:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805BCF94:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 9064));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_805BCFA4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805BCFFC;
    }
}

loc_805BCFA8:
{
    r5 = 0x808B0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + 29960);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805BCFC0u:
        goto loc_805BCFC0;
        break;
    case 0x805BCFC8u:
        goto loc_805BCFC8;
        break;
    case 0x805BCFD0u:
        goto loc_805BCFD0;
        break;
    case 0x805BCFD8u:
        goto loc_805BCFD8;
        break;
    case 0x805BCFE0u:
        goto loc_805BCFE0;
        break;
    case 0x805BCFE8u:
        goto loc_805BCFE8;
        break;
    case 0x805BCFF0u:
        goto loc_805BCFF0;
        break;
    case 0x805BCFF8u:
        goto loc_805BCFF8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_805BCFC0:
{
    r4 = 0;
    goto loc_805BCFFC;
}

loc_805BCFC8:
{
    r4 = 1;
    goto loc_805BCFFC;
}

loc_805BCFD0:
{
    r4 = 2;
    goto loc_805BCFFC;
}

loc_805BCFD8:
{
    r4 = 3;
    goto loc_805BCFFC;
}

loc_805BCFE0:
{
    r4 = 4;
    goto loc_805BCFFC;
}

loc_805BCFE8:
{
    r4 = 5;
    goto loc_805BCFFC;
}

loc_805BCFF0:
{
    r4 = 6;
    goto loc_805BCFFC;
}

loc_805BCFF8:
{
    r4 = 7;
}

loc_805BCFFC:
{
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r5 = MemoryInline::FlatRead8((r7 + 5997));
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_805BD014:
{
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r4 = 8;
    r5 = MemoryInline::FlatRead8((r7 + 5997));
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_805BD030:
{
    r3 = r0;
    r4 = 8;
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r5 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x000010F9 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x805BCF30 func_805BCF30 preserves=true fpr_mask=0x00000000
