#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003DF10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8003DF10;

loc_8003DF10:
{
    r4 = MemoryInline::FlatRead32((r3 + 60));
    goto loc_8003DF40;
}

loc_8003DF18:
{
    r5 = MemoryInline::FlatRead16((r3 + 66));
    r4_addr_2 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    goto loc_8003DF2C;
}

loc_8003DF28:
{
    r4_addr_4 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
}

loc_8003DF2C:
{
}

loc_8003DF30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8003DF40;
    }
}

loc_8003DF34:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8003DF3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8003DF28;
    }
}

loc_8003DF40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8003DF44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003DF54;
    }
}

loc_8003DF48:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8003DF50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DF18;
    }
}

loc_8003DF54:
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
// RECOMP_REGISTRATION base 0x8003DF10 func_8003DF10 preserves=true fpr_mask=0x00000000
