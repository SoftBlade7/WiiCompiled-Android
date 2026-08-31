#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070B8F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070B8F0;

loc_8070B8F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8070B8F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070B910;
    }
}

loc_8070B8FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8070B900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070B918;
    }
}

loc_8070B904:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8070B908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070B920;
    }
}

loc_8070B90C:
{
    goto loc_8070B928;
}

loc_8070B910:
{
    r3 = 348;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070B918:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070B920:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070B928:
{
    r0 = MemoryInline::FlatRead16((r3 + 240));
    r4 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r4 + 6008));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
}

loc_8070B938:
{
    r6 = MemoryInline::FlatRead16((r3 + 242));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070BA38;
    }
}

loc_8070B940:
{
    r3 = 0x808D0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -30904);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8070BA04u:
        goto loc_8070BA04;
        break;
    case 0x8070B9F0u:
        goto loc_8070B9F0;
        break;
    case 0x8070B9DCu:
        goto loc_8070B9DC;
        break;
    case 0x8070B9C8u:
        goto loc_8070B9C8;
        break;
    case 0x8070B9B4u:
        goto loc_8070B9B4;
        break;
    case 0x8070B9A0u:
        goto loc_8070B9A0;
        break;
    case 0x8070BA38u:
        goto loc_8070BA38;
        break;
    case 0x8070B98Cu:
        goto loc_8070B98C;
        break;
    case 0x8070B978u:
        goto loc_8070B978;
        break;
    case 0x8070B96Cu:
        goto loc_8070B96C;
        break;
    case 0x8070B958u:
        goto loc_8070B958;
        break;
    case 0x8070BA14u:
        goto loc_8070BA14;
        break;
    case 0x8070BA28u:
        goto loc_8070BA28;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8070B958:
{
    r3 = 0x808A0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + 6272);
    r3_addr_2 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_8070BA38;
}

loc_8070B96C:
{
    r3 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 6248));
    goto loc_8070BA38;
}

loc_8070B978:
{
    r3 = 0x808A0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + 6240);
    r3_addr_3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_8070BA38;
}

loc_8070B98C:
{
    r3 = 0x808A0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + 6224);
    r3_addr_4 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_4);
    goto loc_8070BA38;
}

loc_8070B9A0:
{
    r3 = 0x808A0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + 6216);
    r3_addr_5 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_5);
    goto loc_8070BA38;
}

loc_8070B9B4:
{
    r3 = 0x808A0000u;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + 6184);
    r3_addr_6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_6);
    goto loc_8070BA38;
}

loc_8070B9C8:
{
    r3 = 0x808A0000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r3 + 6152);
    r3_addr_7 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_7);
    goto loc_8070BA38;
}

loc_8070B9DC:
{
    r3 = 0x808A0000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + 6120);
    r3_addr_8 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_8);
    goto loc_8070BA38;
}

loc_8070B9F0:
{
    r3 = 0x808A0000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + 6096);
    r3_addr_9 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_9);
    goto loc_8070BA38;
}

loc_8070BA04:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r4 + 6008);
    r3_addr_10 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_10);
    goto loc_8070BA38;
}

loc_8070BA14:
{
    r3 = 0x808A0000u;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r3 + 6040);
    r3_addr_11 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_11);
    goto loc_8070BA38;
}

loc_8070BA28:
{
    r3 = 0x808A0000u;
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r3 + 6072);
    r3_addr_12 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_12);
}

loc_8070BA38:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070B8F0 func_8070B8F0 preserves=true fpr_mask=0x00000000
