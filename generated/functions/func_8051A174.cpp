#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051A174(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051A174;

loc_8051A174:
{
    r0 = MemoryInline::FlatRead32((r3 + 1756));
    r6 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_8051A180:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051A19C;
    }
}

loc_8051A184:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8051A188:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051A198;
    }
}

loc_8051A18C:
{
    r0 = MemoryInline::FlatRead32((r3 + 1760));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8051A194:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051A19C;
    }
}

loc_8051A198:
{
    r6 = 1;
}

loc_8051A19C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051A174 func_8051A174 preserves=true fpr_mask=0x00000000
