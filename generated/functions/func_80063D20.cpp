#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80063D20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80063D20;

loc_80063D20:
{
    r0 = (r3 + -5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(250));
}

loc_80063D28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80063D2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80063D30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063D5C;
    }
}

loc_80063D34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_80063D38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80063D40;
    }
}

loc_80063D3C:
{
    r5 = 0;
}

loc_80063D40:
{
    r6 = 0x802C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r6 = (r6 + -32128);
    r6_addr_0 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_0, r4);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80063D5C:
{
    r4 = 0x802C0000u;
    r5 = 0x80060000u;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & -8);
    r0 = 0;
    r4 = (r4 + -32128);
    r5 = (r5 + 6576);
    r4_addr_0 = (r4 + r3);
    MemoryInline::FlatWrite32(r4_addr_0, r5);
    r3 = (r4 + r3);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80063D20 func_80063D20 preserves=true fpr_mask=0x00000000
