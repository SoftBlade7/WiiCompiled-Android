#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80518344(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80518344;

loc_80518344:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r4 = MemoryInline::FlatRead8(r4);
}

loc_80518350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051835C;
    }
}

loc_80518354:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80518360;
}

loc_8051835C:
{
    r0 = 0;
}

loc_80518360:
{
}

loc_80518364:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8051838C;
    }
}

loc_80518368:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80518370:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80518384;
    }
}

loc_80518374:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_80518390;
}

loc_80518384:
{
    r3 = 0;
    goto loc_80518390;
}

loc_8051838C:
{
    r3 = 0;
}

loc_80518390:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80518394:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805183A0;
    }
}

loc_80518398:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_805183A0:
{
    r3 = MemoryInline::FlatRead8((r3 + 16));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80518344 func_80518344 preserves=true fpr_mask=0x00000000
