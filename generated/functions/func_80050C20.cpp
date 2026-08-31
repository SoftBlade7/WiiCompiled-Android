#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050C20(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80050C20;

loc_80050C20:
{
    r7 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80050C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80050C2C:
{
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80050C34:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80050C38:
{
}

loc_80050C3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80050C4C;
    }
}

loc_80050C40:
{
    r3 = (r4 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80050C4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80050C50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80050C54:
{
    r3 = (r4 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 7));
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000089 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80050C20 func_80050C20 preserves=true fpr_mask=0x00000000
