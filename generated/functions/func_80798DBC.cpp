#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80798DBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80798DBC;

loc_80798DBC:
{
}

loc_80798DC0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80798DE4;
    }
}

loc_80798DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
}

loc_80798DCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798DE4;
    }
}

loc_80798DD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_80798DD8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80798DE4;
    }
}

loc_80798DDC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80798DE4:
{
    r0 = MemoryInline::FlatRead32((r3 + 140));
    r4 = 1;
    r5 = 0;
}

loc_80798DF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80798E04;
    }
}

loc_80798DF8:
{
}

loc_80798DFC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(16))) {
        goto loc_80798E04;
    }
}

loc_80798E00:
{
    r5 = 1;
}

loc_80798E04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80798E08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798E38;
    }
}

loc_80798E0C:
{
    r0 = MemoryInline::FlatRead32((r3 + 200));
    r5 = 0;
}

loc_80798E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80798E2C;
    }
}

loc_80798E1C:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
}

loc_80798E24:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(16))) {
        goto loc_80798E2C;
    }
}

loc_80798E28:
{
    r5 = 1;
}

loc_80798E2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80798E30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798E38;
    }
}

loc_80798E34:
{
    r4 = 0;
}

loc_80798E38:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80798DBC func_80798DBC preserves=true fpr_mask=0x00000000
