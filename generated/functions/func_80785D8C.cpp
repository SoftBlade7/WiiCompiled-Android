#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80785D8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80785D8C;

loc_80785D8C:
{
    r0 = MemoryInline::FlatRead32((r3 + 1064));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(256));
}

loc_80785D94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80785DA0;
    }
}

loc_80785D98:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80785DA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r5 = MemoryInline::FlatRead32(r4_addr_0);
    goto loc_80785DCC;
}

loc_80785DB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 1064));
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80785DC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80785DEC;
    }
}

loc_80785DCC:
{
    r4 = MemoryInline::FlatRead32((r3 + 1064));
    r0 = MemoryInline::FlatRead32((r3 + 1080));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1064), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80785DE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80785DB0;
    }
}

loc_80785DE4:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r3 + 1064), r0);
}

loc_80785DEC:
{
    r3 = MemoryInline::FlatRead32((r5 + 16));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80785D8C func_80785D8C preserves=true fpr_mask=0x00000000
