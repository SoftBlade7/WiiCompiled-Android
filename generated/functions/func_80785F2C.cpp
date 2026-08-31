#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80785F2C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80785F2C;

loc_80785F2C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 1064), r0);
    goto loc_80785F54;
}

loc_80785F38:
{
    r0 = MemoryInline::FlatRead32((r3 + 1064));
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 1);
}

loc_80785F50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80785F74;
    }
}

loc_80785F54:
{
    r4 = MemoryInline::FlatRead32((r3 + 1064));
    r0 = MemoryInline::FlatRead32((r3 + 1080));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1064), r4);
}

loc_80785F68:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80785F38;
    }
}

loc_80785F6C:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r3 + 1064), r0);
}

loc_80785F74:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 1068), r0);
    goto loc_80785F9C;
}

loc_80785F80:
{
    r0 = MemoryInline::FlatRead32((r3 + 1068));
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 2);
}

loc_80785F98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80785FBC;
    }
}

loc_80785F9C:
{
    r4 = MemoryInline::FlatRead32((r3 + 1068));
    r0 = MemoryInline::FlatRead32((r3 + 1080));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1068), r4);
}

loc_80785FB0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80785F80;
    }
}

loc_80785FB4:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r3 + 1068), r0);
}

loc_80785FBC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 1072), r0);
    goto loc_80785FE4;
}

loc_80785FC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 1072));
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4_addr_8 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_8);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 12);
}

loc_80785FE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80786004;
    }
}

loc_80785FE4:
{
    r4 = MemoryInline::FlatRead32((r3 + 1072));
    r0 = MemoryInline::FlatRead32((r3 + 1080));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1072), r4);
}

loc_80785FF8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80785FC8;
    }
}

loc_80785FFC:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r3 + 1072), r0);
}

loc_80786004:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 1076), r0);
    goto loc_8078602C;
}

loc_80786010:
{
    r0 = MemoryInline::FlatRead32((r3 + 1076));
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4_addr_11 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_11);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80786028:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8078602C:
{
    r4 = MemoryInline::FlatRead32((r3 + 1076));
    r0 = MemoryInline::FlatRead32((r3 + 1080));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1076), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80786040:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786010;
    }
}

loc_80786044:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r3 + 1076), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80785F2C func_80785F2C preserves=true fpr_mask=0x00000000
