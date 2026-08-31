#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050A70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80050A70;

loc_80050A70:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
}

loc_80050A74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80050AE0;
    }
}

loc_80050A78:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(256));
}

loc_80050A7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80050AE0;
    }
}

loc_80050A80:
{
    r0 = (r4 * 52);
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80050A8C:
{
    r4 = 0;
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 170), static_cast<uint8_t>(r5));
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(31))) {
        goto loc_80050AA0;
    }
}

loc_80050A9C:
{
    r4 = 1;
}

loc_80050AA0:
{
}

loc_80050AA4:
{
    r0 = -1;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80050AB0;
    }
}

loc_80050AAC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80050AB0:
{
}

loc_80050AB4:
{
    MemoryInline::FlatWrite8((r3 + 168), static_cast<uint8_t>(r0));
    r0 = 0;
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(127))) {
        goto loc_80050AC4;
    }
}

loc_80050AC0:
{
    r0 = 1;
}

loc_80050AC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80050AC8:
{
    r0 = -1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80050AD4;
    }
}

loc_80050AD0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
}

loc_80050AD4:
{
    MemoryInline::FlatWrite8((r3 + 169), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80050AE0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80050A70 func_80050A70 preserves=true fpr_mask=0x00000000
