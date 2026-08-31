#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80798E40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80798E40;

loc_80798E40:
{
}

loc_80798E44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80798E80;
    }
}

loc_80798E48:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
}

loc_80798E50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798E80;
    }
}

loc_80798E54:
{
    r4 = MemoryInline::FlatRead32((r3 + 116));
    r0 = 0;
}

loc_80798E60:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_80798E6C;
    }
}

loc_80798E64:
{
}

loc_80798E68:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80798E70;
    }
}

loc_80798E6C:
{
    r0 = 1;
}

loc_80798E70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80798E74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798E80;
    }
}

loc_80798E78:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80798E80:
{
    r4 = MemoryInline::FlatRead32((r3 + 140));
    r5 = 1;
    r6 = 0;
}

loc_80798E90:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(20))) {
        goto loc_80798EB8;
    }
}

loc_80798E94:
{
}

loc_80798E98:
{
    r0 = 0;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_80798EA8;
    }
}

loc_80798EA0:
{
}

loc_80798EA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80798EAC;
    }
}

loc_80798EA8:
{
    r0 = 1;
}

loc_80798EAC:
{
}

loc_80798EB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798EB8;
    }
}

loc_80798EB4:
{
    r6 = 1;
}

loc_80798EB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80798EBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798F04;
    }
}

loc_80798EC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 200));
    r4 = 0;
}

loc_80798ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80798EF8;
    }
}

loc_80798ED0:
{
    r3 = MemoryInline::FlatRead32((r3 + 204));
    r0 = 0;
}

loc_80798EDC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_80798EE8;
    }
}

loc_80798EE0:
{
}

loc_80798EE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80798EEC;
    }
}

loc_80798EE8:
{
    r0 = 1;
}

loc_80798EEC:
{
}

loc_80798EF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798EF8;
    }
}

loc_80798EF4:
{
    r4 = 1;
}

loc_80798EF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80798EFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798F04;
    }
}

loc_80798F00:
{
    r5 = 0;
}

loc_80798F04:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80798E40 func_80798E40 preserves=true fpr_mask=0x00000000
