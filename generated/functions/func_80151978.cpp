#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80151978(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80151978;

loc_80151978:
{
    r4 = (r5 ^ r4);
    r6 = 0;
    r0 = (r4 & 1);
}

loc_80151984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80151998;
    }
}

loc_80151988:
{
    r0 = (r5 & 1);
}

loc_8015198C:
{
    r6 = (r6 | 16);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80151998;
    }
}

loc_80151994:
{
    r6 = (r6 | 2048);
}

loc_80151998:
{
    r0 = (r4 & 2);
}

loc_8015199C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801519B0;
    }
}

loc_801519A0:
{
    r0 = (r5 & 2);
}

loc_801519A4:
{
    r6 = (r6 | 8);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801519B0;
    }
}

loc_801519AC:
{
    r6 = (r6 | 1024);
}

loc_801519B0:
{
    r0 = (r4 & 4);
}

loc_801519B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801519BC;
    }
}

loc_801519B8:
{
    r6 = (r6 | 256);
}

loc_801519BC:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801519C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801519D4;
    }
}

loc_801519C4:
{
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801519C8:
{
    r6 = (r6 | 32);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801519D4;
    }
}

loc_801519D0:
{
    r6 = (r6 | 4096);
}

loc_801519D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 136));
    r3 = (r0 & r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80151978 func_80151978 preserves=true fpr_mask=0x00000000
