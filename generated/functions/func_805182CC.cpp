#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805182CC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805182CC;

loc_805182CC:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r4 = MemoryInline::FlatRead8(r4);
}

loc_805182D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805182E4;
    }
}

loc_805182DC:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_805182E8;
}

loc_805182E4:
{
    r0 = 0;
}

loc_805182E8:
{
}

loc_805182EC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80518314;
    }
}

loc_805182F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_805182F8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8051830C;
    }
}

loc_805182FC:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_80518318;
}

loc_8051830C:
{
    r0 = 0;
    goto loc_80518318;
}

loc_80518314:
{
    r0 = 0;
}

loc_80518318:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051831C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80518328;
    }
}

loc_80518320:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80518328:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
}

loc_8051832C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80518338;
    }
}

loc_80518330:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80518338:
{
    r3 = (r0 + r5);
    r3 = MemoryInline::FlatRead8((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805182CC func_805182CC preserves=true fpr_mask=0x00000000
